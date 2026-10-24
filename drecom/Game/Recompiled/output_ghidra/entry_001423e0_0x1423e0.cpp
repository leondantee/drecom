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

// Function: entry_001423e0
// Address: 0x1423e0 - 0x1423f8
void entry_001423e0_0x1423e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001423e0_0x1423e0");
#endif

    ctx->pc = 0x1423e0u;

    // 0x1423e0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1423e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1423e4: 0x8c32bb40  lw          $s2, -0x44C0($at)
    ctx->pc = 0x1423e4u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x47BB40u));
    // 0x1423e8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1423e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1423ec: 0x2471bb48  addiu       $s1, $v1, -0x44B8
    ctx->pc = 0x1423ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949704));
    // 0x1423f0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1423F0u;
    {
        const bool branch_taken_0x1423f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1423f0) {
            ctx->pc = 0x142428u;
            return;
        }
    }
    ctx->pc = 0x1423F8u;
}
