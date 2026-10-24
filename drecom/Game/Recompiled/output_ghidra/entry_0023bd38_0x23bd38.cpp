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

// Function: entry_0023bd38
// Address: 0x23bd38 - 0x23bdcc
void entry_0023bd38_0x23bd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023bd38_0x23bd38");
#endif

    switch (ctx->pc) {
        case 0x23bd88u: goto label_23bd88;
        case 0x23bd98u: goto label_23bd98;
        case 0x23bda8u: goto label_23bda8;
        default: break;
    }

    ctx->pc = 0x23bd38u;

    // 0x23bd38: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x23bd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23bd3c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x23bd3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23bd40: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x23bd40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x23bd44: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23bd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bd48: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x23bd48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23bd4c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x23bd4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x23bd50: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x23bd50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x23bd54: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23bd54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x23bd58: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23bd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x23bd5c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x23bd5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23bd60: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23bd60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23bd64: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x23bd64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x23bd68: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23bd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bd6c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x23bd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x23bd70: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x23bd70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x23bd74: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23bd74u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23bd78: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x23bd78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x23bd7c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x23bd7cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23bd80: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x23BD80u;
    SET_GPR_U32(ctx, 31, 0x23BD88u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x23BD80u, 0x23BD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BD88u;
label_23bd88:
    // 0x23bd88: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x23bd88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x23bd8c: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x23bd8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x23bd90: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x23BD90u;
    SET_GPR_U32(ctx, 31, 0x23BD98u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x23BD90u, 0x23BD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BD98u;
label_23bd98:
    // 0x23bd98: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x23bd98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x23bd9c: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x23bd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x23bda0: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x23BDA0u;
    SET_GPR_U32(ctx, 31, 0x23BDA8u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x23BDA0u, 0x23BDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BDA8u;
label_23bda8:
    // 0x23bda8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23bda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bdac: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x23bdacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x23bdb0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x23bdb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x23bdb4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23bdb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23bdb8: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x23bdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x23bdbc: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x23bdbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x23bdc0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23bdc0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23bdc4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23BDC4u;
    SET_GPR_U32(ctx, 31, 0x23BDCCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23BDC4u, 0x23BDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BDCCu;
}
