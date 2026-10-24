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

// Function: entry_001a2b68
// Address: 0x1a2b68 - 0x1a2bd0
void entry_001a2b68_0x1a2b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2b68_0x1a2b68");
#endif

    switch (ctx->pc) {
        case 0x1a2b80u: goto label_1a2b80;
        case 0x1a2b98u: goto label_1a2b98;
        case 0x1a2bc0u: goto label_1a2bc0;
        default: break;
    }

    ctx->pc = 0x1a2b68u;

    // 0x1a2b68: 0x24040500  addiu       $a0, $zero, 0x500
    ctx->pc = 0x1a2b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x1a2b6c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1a2b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a2b70: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1a2b70u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2b74: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1a2b74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a2b78: 0xc067c24  jal         func_19F090
    ctx->pc = 0x1A2B78u;
    SET_GPR_U32(ctx, 31, 0x1A2B80u);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x1A2B78u, 0x1A2B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2B80u;
label_1a2b80:
    // 0x1a2b80: 0x24040501  addiu       $a0, $zero, 0x501
    ctx->pc = 0x1a2b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1281));
    // 0x1a2b84: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1a2b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a2b88: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x1a2b88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1a2b8c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1a2b8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a2b90: 0xc067c24  jal         func_19F090
    ctx->pc = 0x1A2B90u;
    SET_GPR_U32(ctx, 31, 0x1A2B98u);
    ctx->pc = 0x19F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F090u, 0x1A2B90u, 0x1A2B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2B98u;
label_1a2b98:
    // 0x1a2b98: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a2b98u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2b9c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a2b9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2ba0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a2ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a2ba4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1a2ba4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2ba8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1a2ba8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2bac: 0x3c028002  lui         $v0, 0x8002
    ctx->pc = 0x1a2bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32770 << 16));
    // 0x1a2bb0: 0x34490184  ori         $t1, $v0, 0x184
    ctx->pc = 0x1a2bb0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)388);
    // 0x1a2bb4: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1a2bb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a2bb8: 0xc059190  jal         func_164640
    ctx->pc = 0x1A2BB8u;
    SET_GPR_U32(ctx, 31, 0x1A2BC0u);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x1A2BB8u, 0x1A2BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2BC0u;
label_1a2bc0:
    // 0x1a2bc0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1a2bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a2bc4: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x1a2bc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1a2bc8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a2bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a2bcc: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x1a2bccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1a2bd0u;
}
