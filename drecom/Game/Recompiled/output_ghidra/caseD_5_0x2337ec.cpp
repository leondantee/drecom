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

// Function: caseD_5
// Address: 0x2337ec - 0x23381c
void caseD_5_0x2337ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x2337ec");
#endif

    switch (ctx->pc) {
        case 0x233810u: goto label_233810;
        default: break;
    }

    ctx->pc = 0x2337ecu;

    // 0x2337ec: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x2337ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2337f0: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2337f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2337f4: 0x8e020360  lw          $v0, 0x360($s0)
    ctx->pc = 0x2337f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x2337f8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2337f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2337fc: 0x24060503  addiu       $a2, $zero, 0x503
    ctx->pc = 0x2337fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x233800: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x233800u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x233804: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x233804u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x233808: 0xc0965d0  jal         func_259740
    ctx->pc = 0x233808u;
    SET_GPR_U32(ctx, 31, 0x233810u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x233808u, 0x233810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233810u;
label_233810:
    // 0x233810: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x233810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x233814: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x233814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x233818: 0xa0440002  sb          $a0, 0x2($v0)
    ctx->pc = 0x233818u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x23381cu;
}
