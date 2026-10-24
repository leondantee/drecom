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

// Function: entry_00142588
// Address: 0x142588 - 0x1425e8
void entry_00142588_0x142588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142588_0x142588");
#endif

    switch (ctx->pc) {
        case 0x1425b0u: goto label_1425b0;
        case 0x1425bcu: goto label_1425bc;
        case 0x1425d4u: goto label_1425d4;
        default: break;
    }

    ctx->pc = 0x142588u;

    // 0x142588: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x142588u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14258c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14258cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x142590: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x142590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x142594: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x142594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x142598: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x142598u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x14259c: 0x3c0280ff  lui         $v0, 0x80FF
    ctx->pc = 0x14259cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33023 << 16));
    // 0x1425a0: 0x3449ffff  ori         $t1, $v0, 0xFFFF
    ctx->pc = 0x1425a0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1425a4: 0x240a0078  addiu       $t2, $zero, 0x78
    ctx->pc = 0x1425a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1425a8: 0xc059190  jal         func_164640
    ctx->pc = 0x1425A8u;
    SET_GPR_U32(ctx, 31, 0x1425B0u);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x1425A8u, 0x1425B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1425B0u;
label_1425b0:
    // 0x1425b0: 0x24040190  addiu       $a0, $zero, 0x190
    ctx->pc = 0x1425b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x1425b4: 0xc067e5c  jal         func_19F970
    ctx->pc = 0x1425B4u;
    SET_GPR_U32(ctx, 31, 0x1425BCu);
    ctx->pc = 0x19F970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F970u, 0x1425B4u, 0x1425BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1425BCu;
label_1425bc:
    // 0x1425bc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1425bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1425c0: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x1425c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1425c4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1425c4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1425c8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1425c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1425cc: 0xc067cfc  jal         func_19F3F0
    ctx->pc = 0x1425CCu;
    SET_GPR_U32(ctx, 31, 0x1425D4u);
    ctx->pc = 0x19F3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F3F0u, 0x1425CCu, 0x1425D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1425D4u;
label_1425d4:
    // 0x1425d4: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x1425d4u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1425d8: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x1425d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1425dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1425dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1425e0: 0xa2420008  sb          $v0, 0x8($s2)
    ctx->pc = 0x1425e0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x1425e4: 0x0  nop
    ctx->pc = 0x1425e4u;
    // NOP
    ctx->pc = 0x1425e8u;
}
