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

// Function: caseD_6
// Address: 0x22851c - 0x228558
void caseD_6_0x22851c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x22851c");
#endif

    switch (ctx->pc) {
        case 0x228548u: goto label_228548;
        default: break;
    }

    ctx->pc = 0x22851cu;

    // 0x22851c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x22851cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x228520: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x228520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x228524: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x228524u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x228528: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x228528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22852c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x22852cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x228530: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x228530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x228534: 0x24060423  addiu       $a2, $zero, 0x423
    ctx->pc = 0x228534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1059));
    // 0x228538: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x228538u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22853c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22853cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x228540: 0xc0965d0  jal         func_259740
    ctx->pc = 0x228540u;
    SET_GPR_U32(ctx, 31, 0x228548u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x228540u, 0x228548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228548u;
label_228548:
    // 0x228548: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x228548u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22854c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x22854cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x228550: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x228550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x228554: 0xa023dbc2  sb          $v1, -0x243E($at)
    ctx->pc = 0x228554u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EDBC2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EDBC2u, _value); } while (0);
    ctx->pc = 0x228558u;
}
