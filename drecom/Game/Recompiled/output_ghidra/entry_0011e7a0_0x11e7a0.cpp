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

// Function: entry_0011e7a0
// Address: 0x11e7a0 - 0x11e7bc
void entry_0011e7a0_0x11e7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e7a0_0x11e7a0");
#endif

    ctx->pc = 0x11e7a0u;

    // 0x11e7a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11e7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11e7a4: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x11e7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x11e7a8: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x11e7a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x11e7ac: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x11E7ACu;
    {
        const bool branch_taken_0x11e7ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e7ac) {
            ctx->pc = 0x11E7B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E7ACu;
            // 0x11e7b0: 0x52a3a  dsrl        $a1, $a1, 8 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E7C0u;
            return;
        }
    }
    ctx->pc = 0x11E7B4u;
    // 0x11e7b4: 0x5287a  dsrl        $a1, $a1, 1
    ctx->pc = 0x11e7b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 1);
    // 0x11e7b8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x11e7b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    ctx->pc = 0x11e7bcu;
}
