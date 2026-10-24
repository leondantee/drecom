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

// Function: entry_002ef448
// Address: 0x2ef448 - 0x2ef45c
void entry_002ef448_0x2ef448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ef448_0x2ef448");
#endif

    ctx->pc = 0x2ef448u;

    // 0x2ef448: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2ef448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2ef44c: 0x2473a610  addiu       $s3, $v1, -0x59F0
    ctx->pc = 0x2ef44cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2ef450: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x2ef450u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ef454: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x2EF454u;
    {
        const bool branch_taken_0x2ef454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef454) {
            ctx->pc = 0x2EF594u;
            return;
        }
    }
    ctx->pc = 0x2EF45Cu;
}
