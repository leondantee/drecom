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

// Function: caseD_4
// Address: 0x12def4 - 0x12df28
void caseD_4_0x12def4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x12def4");
#endif

    switch (ctx->pc) {
        case 0x12df18u: goto label_12df18;
        default: break;
    }

    ctx->pc = 0x12def4u;

    // 0x12def4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x12def4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12def8: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12def8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12defc: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x12defcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x12df00: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x12df00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x12df04: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x12df04u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12df08: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12df08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12df0c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12df0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12df10: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12DF10u;
    SET_GPR_U32(ctx, 31, 0x12DF18u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12DF10u, 0x12DF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DF18u;
label_12df18:
    // 0x12df18: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12df18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12df1c: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x12df1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x12df20: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x12df20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12df24: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x12df24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x12df28u;
}
