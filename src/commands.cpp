#include "commands.h"

// Jump to the end of current basic block
void Commands::jump_end_of_block(BinrayViewRef bv){
    uint64_t addr = bv::GetCurrentOffset();
    Ref< BasicBlock > basic_block =  bv::GetRecentBasicBlockForAddress(addr);
    bv::Navigate();
}

void Commands::jump_start_of_block(BinaryViewRef bv){
    uint64_t addr = bv::GetCurrentOffset();
    Ref< BasicBlock > basic_block =  bv::GetRecentBasicBlockForAddress(addr);
    bv::Navigate();

}

void Commands::jump_next_left_block(BinaryViewRef bv){
    uint64_t addr = bv::GetCurrentOffset();
    Ref< BasicBlock > basic_block =  bv::GetRecentBasicBlockForAddress(addr);
    bv::Navigate();

}

void Commands::jump_next_right_block(BinaryViewRef bv){
    uint64_t addr = bv::GetCurrentOffset();
    Ref< BasicBlock > basic_block =  bv::GetRecentBasicBlockForAddress(addr);
    bv::Navigate();

}

void Commands::jump_left_block(BinaryViewRef bv){
    uint64_t addr = bv::GetCurrentOffset();
    Ref< BasicBlock > basic_block =  bv::GetRecentBasicBlockForAddress(addr);
    bv::Navigate();

}

void Commands::jump_right_block(BinaryViewRef bv){
    uint64_t addr = bv::GetCurrentOffset();
    Ref< BasicBlock > basic_block =  bv::GetRecentBasicBlockForAddress(addr);
    bv::Navigate();

}

void Commands::jump_up_block(BinaryViewRef bv){
    uint64_t addr = bv::GetCurrentOffset();
    Ref< BasicBlock > basic_block =  bv::GetRecentBasicBlockForAddress(addr);
    bv::Navigate();

}


void Commands::register_commands(){

    BinaryNinja::PluginCommand::register_for_address("Binja Jumpkeys\\Jump to the end of current block", "", Commands::jump_end_of_block);
    BinaryNinja::PluginCommand::register_for_address("Binja Jumpkeys\\Jump to the start of current block", "", Commands::jump_start_of_block);
    BinaryNinja::PluginCommand::register_for_address("Binja Jumpkeys\\Jump to the block down and left of current block", "", Commands::jump_next_left_block);
    BinaryNinja::PluginCommand::register_for_address("Binja Jumpkeys\\Jump to the block down and right of the current block", "",  Commands::jump_next_right_block);
    BinaryNinja::PluginCommand::register_for_address("Binja Jumpkeys\\Jump to the block left of the current block", "", Commands::jump_left_block);
    BinaryNinja::PluginCommand::register_for_address("Binja Jumpkeys\\Jump to the block right of the current block", "", Commands::jump_right_block);

}
