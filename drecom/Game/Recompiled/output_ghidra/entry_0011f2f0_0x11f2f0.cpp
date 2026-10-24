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

// Function: entry_0011f2f0
// Address: 0x11f2f0 - 0x11f304
void entry_0011f2f0_0x11f2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f2f0_0x11f2f0");
#endif

    ctx->pc = 0x11f2f0u;

    // 0x11f2f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F2F0u;
    {
        const bool branch_taken_0x11f2f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F2F0u;
        // 0x11f2f4: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f2f0) {
            ctx->pc = 0x11F308u;
            return;
        }
    }
    ctx->pc = 0x11F2F8u;
    // 0x11f2f8: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x11f2f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f2fc: 0x2483ffc4  addiu       $v1, $a0, -0x3C
    ctx->pc = 0x11f2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967236));
    // 0x11f300: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11F300u;
    {
        const bool branch_taken_0x11f300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f300) {
            ctx->pc = 0x11F314u;
            return;
        }
    }
    ctx->pc = 0x11F308u;
}
