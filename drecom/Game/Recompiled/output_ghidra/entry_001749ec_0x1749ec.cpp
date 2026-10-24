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

// Function: entry_001749ec
// Address: 0x1749ec - 0x174a1c
void entry_001749ec_0x1749ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001749ec_0x1749ec");
#endif

    switch (ctx->pc) {
        case 0x174a10u: goto label_174a10;
        default: break;
    }

    ctx->pc = 0x1749ecu;

    // 0x1749ec: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x1749ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x1749f0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1749f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1749f4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1749f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1749f8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1749f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1749fc: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x1749fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x174a00: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x174a00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x174a04: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x174a04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x174a08: 0xc059e1c  jal         func_167870
    ctx->pc = 0x174A08u;
    SET_GPR_U32(ctx, 31, 0x174A10u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x174A08u, 0x174A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174A10u;
label_174a10:
    // 0x174a10: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x174a10u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x174a14: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x174A14u;
    {
        const bool branch_taken_0x174a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174a14) {
            ctx->pc = 0x174A48u;
            return;
        }
    }
    ctx->pc = 0x174A1Cu;
}
