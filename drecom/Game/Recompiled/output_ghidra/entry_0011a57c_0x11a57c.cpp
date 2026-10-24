#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0011a57c
// Address: 0x11a57c - 0x11a590
void entry_0011a57c_0x11a57c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a57c_0x11a57c");
#endif

    ctx->pc = 0x11a57cu;

    // 0x11a57c: 0x12a0000e  beqz        $s5, . + 4 + (0xE << 2)
    ctx->pc = 0x11A57Cu;
    {
        const bool branch_taken_0x11a57c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A57Cu;
        // 0x11a580: 0xdfa30030  ld          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a57c) {
            ctx->pc = 0x11A5B8u;
            return;
        }
    }
    ctx->pc = 0x11A584u;
    // 0x11a584: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a588: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11a588u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a58c: 0x3283e  dsrl32      $a1, $v1, 0
    ctx->pc = 0x11a58cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) >> (32 + 0));
    ctx->pc = 0x11a590u;
}
