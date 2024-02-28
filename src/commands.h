#pragma once

#include <binaryninjaapi.h>


namespace BN = BinaryNinja;


/**
 * Plugin commands.
 */
class Commands {
    public:
        static void jump_end_of_block(BN::Ref<BN::BinaryView> bv);
        static void jump_start_of_block(BN::Ref<BN::BinaryView> bv);
        static void jump_next_left_block(BN::Ref<BN::BinaryView> bv);
        static void jump_next_right_block(BN::Ref<BN::BinaryView> bv);
        static void jump_left_block(BN::Ref<BN::BinaryView> bv);
        static void jump_right_block(BN::Ref<BN::BinaryView> bv);
        static void jump_up_block(BN::Ref<BN::BinaryView> bv);

        /**
        * Register plugin commands for all one-shot actions.
        */
        static void register_commands();
};
