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

// Function: entry_0034889c
// Address: 0x34889c - 0x348938
void entry_0034889c_0x34889c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034889c_0x34889c");
#endif

    switch (ctx->pc) {
        case 0x3488ecu: goto label_3488ec;
        case 0x3488fcu: goto label_3488fc;
        case 0x348910u: goto label_348910;
        case 0x348920u: goto label_348920;
        default: break;
    }

    ctx->pc = 0x34889cu;

    // 0x34889c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x34889cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3488a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3488a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3488a4: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x3488a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x3488a8: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x3488a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x3488ac: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3488acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3488b0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3488b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3488b4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3488b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3488b8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3488b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3488bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3488bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3488c0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3488c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3488c4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3488c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3488c8: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x3488c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x3488cc: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x3488ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x3488d0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3488d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3488d4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x3488d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3488d8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3488d8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3488dc: 0x24470180  addiu       $a3, $v0, 0x180
    ctx->pc = 0x3488dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x3488e0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x3488e0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3488e4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x3488E4u;
    SET_GPR_U32(ctx, 31, 0x3488ECu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x3488E4u, 0x3488ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3488ECu;
label_3488ec:
    // 0x3488ec: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x3488ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x3488f0: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x3488f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x3488f4: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x3488F4u;
    SET_GPR_U32(ctx, 31, 0x3488FCu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x3488F4u, 0x3488FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3488FCu;
label_3488fc:
    // 0x3488fc: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x3488fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x348900: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x348900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x348904: 0x3445000c  ori         $a1, $v0, 0xC
    ctx->pc = 0x348904u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
    // 0x348908: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x348908u;
    SET_GPR_U32(ctx, 31, 0x348910u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x348908u, 0x348910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348910u;
label_348910:
    // 0x348910: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x348910u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x348914: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x348914u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x348918: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x348918u;
    SET_GPR_U32(ctx, 31, 0x348920u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x348918u, 0x348920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348920u;
label_348920:
    // 0x348920: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x348920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348924: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x348924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x348928: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x348928u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34892c: 0xc4800188  lwc1        $f0, 0x188($a0)
    ctx->pc = 0x34892cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x348930: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x348930u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x348934: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x348934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    ctx->pc = 0x348938u;
}
