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

// Function: entry_001d91e4
// Address: 0x1d91e4 - 0x1d9200
void entry_001d91e4_0x1d91e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d91e4_0x1d91e4");
#endif

    ctx->pc = 0x1d91e4u;

    // 0x1d91e4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d91e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d91e8: 0x8c23c400  lw          $v1, -0x3C00($at)
    ctx->pc = 0x1d91e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5FC400u));
    // 0x1d91ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d91ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d91f0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D91F0u;
    {
        const bool branch_taken_0x1d91f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d91f0) {
            ctx->pc = 0x1D9204u;
            return;
        }
    }
    ctx->pc = 0x1D91F8u;
    // 0x1d91f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d91f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d91fc: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d91fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    ctx->pc = 0x1d9200u;
}
