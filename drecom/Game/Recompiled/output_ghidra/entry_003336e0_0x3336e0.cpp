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

// Function: entry_003336e0
// Address: 0x3336e0 - 0x333710
void entry_003336e0_0x3336e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003336e0_0x3336e0");
#endif

    ctx->pc = 0x3336e0u;

    // 0x3336e0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3336e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3336e4: 0x8c232798  lw          $v1, 0x2798($at)
    ctx->pc = 0x3336e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x892798u));
    // 0x3336e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3336e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3336ec: 0x14620034  bne         $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x3336ECu;
    {
        const bool branch_taken_0x3336ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3336ec) {
            ctx->pc = 0x3337C0u;
            return;
        }
    }
    ctx->pc = 0x3336F4u;
    // 0x3336f4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3336f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3336f8: 0x8c222720  lw          $v0, 0x2720($at)
    ctx->pc = 0x3336f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x892720u));
    // 0x3336fc: 0x24550001  addiu       $s5, $v0, 0x1
    ctx->pc = 0x3336fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x333700: 0x2aa10002  slti        $at, $s5, 0x2
    ctx->pc = 0x333700u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x333704: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x333704u;
    {
        const bool branch_taken_0x333704 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x333704) {
            ctx->pc = 0x333710u;
            return;
        }
    }
    ctx->pc = 0x33370Cu;
    // 0x33370c: 0x26b5fffe  addiu       $s5, $s5, -0x2
    ctx->pc = 0x33370cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967294));
    ctx->pc = 0x333710u;
}
