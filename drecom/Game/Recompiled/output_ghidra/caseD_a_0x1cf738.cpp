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

// Function: caseD_a
// Address: 0x1cf738 - 0x1cf770
void caseD_a_0x1cf738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x1cf738");
#endif

    switch (ctx->pc) {
        case 0x1cf75cu: goto label_1cf75c;
        default: break;
    }

    ctx->pc = 0x1cf738u;

    // 0x1cf738: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1cf738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf73c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf740: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1cf740u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cf744: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1cf744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1cf748: 0x24061e41  addiu       $a2, $zero, 0x1E41
    ctx->pc = 0x1cf748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7745));
    // 0x1cf74c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1cf74cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cf750: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1cf750u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1cf754: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1CF754u;
    SET_GPR_U32(ctx, 31, 0x1CF75Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CF754u, 0x1CF75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF75Cu;
label_1cf75c:
    // 0x1cf75c: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x1cf75cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cf760: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1cf760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf764: 0x90500002  lbu         $s0, 0x2($v0)
    ctx->pc = 0x1cf764u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1cf768: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1cf768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1cf76c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1cf76cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1cf770u;
}
