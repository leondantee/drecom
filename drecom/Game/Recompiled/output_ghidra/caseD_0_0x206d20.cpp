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

// Function: caseD_0
// Address: 0x206d20 - 0x206d64
void caseD_0_0x206d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x206d20");
#endif

    switch (ctx->pc) {
        case 0x206d40u: goto label_206d40;
        default: break;
    }

    ctx->pc = 0x206d20u;

    // 0x206d20: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x206d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x206d24: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x206d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x206d28: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x206d28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x206d2c: 0x3406c808  ori         $a2, $zero, 0xC808
    ctx->pc = 0x206d2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)51208);
    // 0x206d30: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x206d30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206d34: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x206d34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x206d38: 0xc0965d0  jal         func_259740
    ctx->pc = 0x206D38u;
    SET_GPR_U32(ctx, 31, 0x206D40u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x206D38u, 0x206D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206D40u;
label_206d40:
    // 0x206d40: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x206d40u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x206d44: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x206d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x206d48: 0xa4601278  sh          $zero, 0x1278($v1)
    ctx->pc = 0x206d48u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x206d4c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x206d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x206d50: 0xa460127a  sh          $zero, 0x127A($v1)
    ctx->pc = 0x206d50u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x206d54: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x206d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x206d58: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x206d58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x206d5c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x206d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x206d60: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x206d60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x206d64u;
}
