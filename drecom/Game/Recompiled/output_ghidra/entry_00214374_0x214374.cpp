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

// Function: entry_00214374
// Address: 0x214374 - 0x214388
void entry_00214374_0x214374(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214374_0x214374");
#endif

    ctx->pc = 0x214374u;

    // 0x214374: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x214374u;
    {
        const bool branch_taken_0x214374 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x214378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214374u;
        // 0x214378: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214374) {
            ctx->pc = 0x214388u;
            return;
        }
    }
    ctx->pc = 0x21437Cu;
    // 0x21437c: 0x4182f  dsubu       $v1, $zero, $a0
    ctx->pc = 0x21437cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 4));
    // 0x214380: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x214380u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x214384: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x214384u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    ctx->pc = 0x214388u;
}
