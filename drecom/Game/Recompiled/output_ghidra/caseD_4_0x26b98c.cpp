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
// Address: 0x26b98c - 0x26bb44
void caseD_4_0x26b98c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x26b98c");
#endif

    switch (ctx->pc) {
        case 0x26b9acu: goto label_26b9ac;
        case 0x26b9bcu: goto label_26b9bc;
        case 0x26b9f4u: goto label_26b9f4;
        case 0x26ba2cu: goto label_26ba2c;
        case 0x26ba6cu: goto label_26ba6c;
        case 0x26baa4u: goto label_26baa4;
        case 0x26bad8u: goto label_26bad8;
        case 0x26bae4u: goto label_26bae4;
        case 0x26bb1cu: goto label_26bb1c;
        case 0x26bb28u: goto label_26bb28;
        default: break;
    }

    ctx->pc = 0x26b98cu;

    // 0x26b98c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26b98cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b990: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b994: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26b994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x26b998: 0x2406006b  addiu       $a2, $zero, 0x6B
    ctx->pc = 0x26b998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x26b99c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26b99cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26b9a0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26b9a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x26b9a4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x26B9A4u;
    SET_GPR_U32(ctx, 31, 0x26B9ACu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26B9A4u, 0x26B9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B9ACu;
label_26b9ac:
    // 0x26b9ac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26b9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b9b0: 0x24441b40  addiu       $a0, $v0, 0x1B40
    ctx->pc = 0x26b9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
    // 0x26b9b4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x26B9B4u;
    SET_GPR_U32(ctx, 31, 0x26B9BCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26B9B4u, 0x26B9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B9BCu;
label_26b9bc:
    // 0x26b9bc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26b9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b9c0: 0x8fb00038  lw          $s0, 0x38($sp)
    ctx->pc = 0x26b9c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b9c4: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x26b9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x26b9c8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x26b9c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26b9cc: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x26b9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x26b9d0: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x26b9d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x26b9d4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x26b9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b9d8: 0x94a30a02  lhu         $v1, 0xA02($a1)
    ctx->pc = 0x26b9d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2562)));
    // 0x26b9dc: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x26b9dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x26b9e0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x26b9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x26b9e4: 0x26061b40  addiu       $a2, $s0, 0x1B40
    ctx->pc = 0x26b9e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 6976));
    // 0x26b9e8: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x26b9e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x26b9ec: 0xc0bbfe4  jal         func_2EFF90
    ctx->pc = 0x26B9ECu;
    SET_GPR_U32(ctx, 31, 0x26B9F4u);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x26B9ECu, 0x26B9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B9F4u;
label_26b9f4:
    // 0x26b9f4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26b9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b9f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26b9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26b9fc: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x26b9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x26ba00: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26ba00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26ba04: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x26ba04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x26ba08: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26ba08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x26ba0c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26ba0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26ba10: 0x94420a02  lhu         $v0, 0xA02($v0)
    ctx->pc = 0x26ba10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2562)));
    // 0x26ba14: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x26ba14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x26ba18: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x26ba18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x26ba1c: 0x24661b40  addiu       $a2, $v1, 0x1B40
    ctx->pc = 0x26ba1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
    // 0x26ba20: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x26ba20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x26ba24: 0xc0bbfe4  jal         func_2EFF90
    ctx->pc = 0x26BA24u;
    SET_GPR_U32(ctx, 31, 0x26BA2Cu);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x26BA24u, 0x26BA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BA2Cu;
label_26ba2c:
    // 0x26ba2c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x26ba2cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26ba30: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x26ba30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x26ba34: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26ba34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x26ba38: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x26ba38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26ba3c: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x26ba3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26ba40: 0x3c074316  lui         $a3, 0x4316
    ctx->pc = 0x26ba40u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17174 << 16));
    // 0x26ba44: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x26ba44u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26ba48: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x26ba48u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26ba4c: 0x95020a02  lhu         $v0, 0xA02($t0)
    ctx->pc = 0x26ba4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2562)));
    // 0x26ba50: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x26ba50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x26ba54: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x26ba54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x26ba58: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x26ba58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x26ba5c: 0x24c61b40  addiu       $a2, $a2, 0x1B40
    ctx->pc = 0x26ba5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6976));
    // 0x26ba60: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x26ba60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x26ba64: 0xc0bbfe4  jal         func_2EFF90
    ctx->pc = 0x26BA64u;
    SET_GPR_U32(ctx, 31, 0x26BA6Cu);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x26BA64u, 0x26BA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BA6Cu;
label_26ba6c:
    // 0x26ba6c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26ba6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26ba70: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26ba70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26ba74: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x26ba74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x26ba78: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26ba78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26ba7c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x26ba7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x26ba80: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x26ba80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x26ba84: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26ba84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26ba88: 0x94420a02  lhu         $v0, 0xA02($v0)
    ctx->pc = 0x26ba88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2562)));
    // 0x26ba8c: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x26ba8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x26ba90: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x26ba90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x26ba94: 0x24661b40  addiu       $a2, $v1, 0x1B40
    ctx->pc = 0x26ba94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
    // 0x26ba98: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x26ba98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x26ba9c: 0xc0bbfe4  jal         func_2EFF90
    ctx->pc = 0x26BA9Cu;
    SET_GPR_U32(ctx, 31, 0x26BAA4u);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x26BA9Cu, 0x26BAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BAA4u;
label_26baa4:
    // 0x26baa4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26baa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26baa8: 0x8c640130  lw          $a0, 0x130($v1)
    ctx->pc = 0x26baa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x26baac: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x26baacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x26bab0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x26bab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x26bab4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x26bab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x26bab8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x26bab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x26babc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26babcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26bac0: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x26bac0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26bac4: 0x24041702  addiu       $a0, $zero, 0x1702
    ctx->pc = 0x26bac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5890));
    // 0x26bac8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26bac8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26bacc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x26baccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26bad0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x26BAD0u;
    SET_GPR_U32(ctx, 31, 0x26BAD8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x26BAD0u, 0x26BAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BAD8u;
label_26bad8:
    // 0x26bad8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x26bad8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26badc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x26BADCu;
    SET_GPR_U32(ctx, 31, 0x26BAE4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x26BADCu, 0x26BAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BAE4u;
label_26bae4:
    // 0x26bae4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26bae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26bae8: 0x8c860130  lw          $a2, 0x130($a0)
    ctx->pc = 0x26bae8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x26baec: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x26baecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x26baf0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x26baf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x26baf4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x26baf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x26baf8: 0x22c38  dsll        $a1, $v0, 16
    ctx->pc = 0x26baf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 16);
    // 0x26bafc: 0x34a6ffff  ori         $a2, $a1, 0xFFFF
    ctx->pc = 0x26bafcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x26bb00: 0x663824  and         $a3, $v1, $a2
    ctx->pc = 0x26bb00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x26bb04: 0x24082d00  addiu       $t0, $zero, 0x2D00
    ctx->pc = 0x26bb04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 11520));
    // 0x26bb08: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x26bb08u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x26bb0c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26bb0cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26bb10: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x26bb10u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26bb14: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x26BB14u;
    SET_GPR_U32(ctx, 31, 0x26BB1Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x26BB14u, 0x26BB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BB1Cu;
label_26bb1c:
    // 0x26bb1c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x26bb1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26bb20: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x26BB20u;
    SET_GPR_U32(ctx, 31, 0x26BB28u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x26BB20u, 0x26BB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BB28u;
label_26bb28:
    // 0x26bb28: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x26bb28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x26bb2c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26bb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26bb30: 0xac441b6c  sw          $a0, 0x1B6C($v0)
    ctx->pc = 0x26bb30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7020), GPR_U32(ctx, 4));
    // 0x26bb34: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26bb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26bb38: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x26bb38u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x26bb3c: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x26bb3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x26bb40: 0xa0460002  sb          $a2, 0x2($v0)
    ctx->pc = 0x26bb40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 6));
    ctx->pc = 0x26bb44u;
}
