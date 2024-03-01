#include "commands.h"
#include <string.h>


using namespace BinaryNinja;
using namespace std;

namespace BN = BinaryNinja;


void Commands::jump_end_of_block(Ref<BN::BinaryView> bv){
    uint64_t addr = bv->GetCurrentOffset();
    string view_name = bv->GetCurrentView();
    Ref<BasicBlock> basic_block_ref =  bv->GetRecentBasicBlockForAddress(addr);

    if (basic_block_ref){
        BasicBlock &basic_block = *basic_block_ref;
        addr = basic_block->GetEnd();
        bv->Navigate(view_name, addr);
    }

}

void Commands::jump_start_of_block(Ref<BN::BinaryView> bv){
    uint64_t addr = bv->GetCurrentOffset();
    string view_name = bv->GetCurrentView();
    Ref<BasicBlock> basic_block_ref =  bv->GetRecentBasicBlockForAddress(addr);

    if (basic_block_ref){
        BasicBlock &basic_block = *basic_block_ref;
        addr = basic_block->GetStart();
        bv->Navigate(view_name, addr);
    }

}

void Commands::jump_next_left_block(Ref<BN::BinaryView> bv){
    uint64_t addr = bv->GetCurrentOffset();
    string view_name = bv->GetCurrentView();
    Ref<BasicBlock> basic_block_ref =  bv->GetRecentBasicBlockForAddress(addr);

    if (basic_block_ref){
        BasicBlock &basic_block = *basic_block_ref;
        bv->Navigate(view_name, addr);
    }

}

void Commands::jump_next_right_block(Ref<BN::BinaryView> bv){
    uint64_t addr = bv->GetCurrentOffset();
    string view_name = bv->GetCurrentView();
    Ref<BasicBlock> basic_block_ref =  bv->GetRecentBasicBlockForAddress(addr);

    if (basic_block_ref){
        BasicBlock &basic_block = *basic_block_ref;
        bv->Navigate(view_name, addr);
    }
}

void Commands::jump_left_block(Ref<BN::BinaryView> bv){
    uint64_t addr = bv->GetCurrentOffset();
    string view_name = bv->GetCurrentView();
    Ref<BasicBlock> basic_block_ref =  bv->GetRecentBasicBlockForAddress(addr);

    if (basic_block_ref){
        BasicBlock &basic_block = *basic_block_ref;
        bv->Navigate(view_name, addr);
    }
}

void Commands::jump_right_block(Ref<BN::BinaryView> bv){
    uint64_t addr = bv->GetCurrentOffset();
    string view_name = bv->GetCurrentView();
    Ref<BasicBlock> basic_block_ref =  bv->GetRecentBasicBlockForAddress(addr);

    if (basic_block_ref){
        BasicBlock &basic_block = *basic_block_ref;
        bv->Navigate(view_name, addr);
    }
}

void Commands::jump_up_block(Ref<BN::BinaryView> bv){
    uint64_t addr = bv->GetCurrentOffset();
    string view_name = bv->GetCurrentView();
    Ref<BasicBlock> basic_block_ref =  bv->GetRecentBasicBlockForAddress(addr);

    if (basic_block_ref){
        BasicBlock &basic_block = *basic_block_ref;
        bv->Navigate(view_name, addr);
    }
}


void Commands::register_commands(){

    BinaryNinja::PluginCommand::Register("Binja Jumpkeys\\Jump to the end of current block", "", Commands::jump_end_of_block);
    BinaryNinja::PluginCommand::Register("Binja Jumpkeys\\Jump to the start of current block", "", Commands::jump_start_of_block);
    BinaryNinja::PluginCommand::Register("Binja Jumpkeys\\Jump to the block down and left of current block", "", Commands::jump_next_left_block);
    BinaryNinja::PluginCommand::Register("Binja Jumpkeys\\Jump to the block down and right of the current block", "",  Commands::jump_next_right_block);
    BinaryNinja::PluginCommand::Register("Binja Jumpkeys\\Jump to the block left of the current block", "", Commands::jump_left_block);
    BinaryNinja::PluginCommand::Register("Binja Jumpkeys\\Jump to the block right of the current block", "", Commands::jump_right_block);

}
