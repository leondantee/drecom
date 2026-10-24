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

// Function: entry_003167a4
// Address: 0x3167a4 - 0x3168fc
void entry_003167a4_0x3167a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003167a4_0x3167a4");
#endif

    switch (ctx->pc) {
        case 0x316894u: goto label_316894;
        case 0x3168a0u: goto label_3168a0;
        case 0x3168e0u: goto label_3168e0;
        case 0x3168ecu: goto label_3168ec;
        default: break;
    }

    ctx->pc = 0x3167a4u;

    // 0x3167a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3167a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3167a8: 0x8c421298  lw          $v0, 0x1298($v0)
    ctx->pc = 0x3167a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4760)));
    // 0x3167ac: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x3167acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3167b0: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x3167b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x3167b4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3167b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3167b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3167b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3167bc: 0xac4300c0  sw          $v1, 0xC0($v0)
    ctx->pc = 0x3167bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 3));
    // 0x3167c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3167c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3167c4: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x3167c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3167c8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3167c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3167cc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3167ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3167d0: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x3167d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3167d4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x3167d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3167d8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3167d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3167dc: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x3167dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3167e0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x3167e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x3167e4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3167e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3167e8: 0xc440012c  lwc1        $f0, 0x12C($v0)
    ctx->pc = 0x3167e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3167ec: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x3167ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x3167f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3167f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3167f4: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x3167f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x3167f8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3167f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3167fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3167fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316800: 0x24420170  addiu       $v0, $v0, 0x170
    ctx->pc = 0x316800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x316804: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x316804u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x316808: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x316808u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31680c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x31680cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316810: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x316810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x316814: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x316814u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316818: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x316818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31681c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x31681cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x316820: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x316820u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316824: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x316824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316828: 0xe44000d8  swc1        $f0, 0xD8($v0)
    ctx->pc = 0x316828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 216), bits); }
    // 0x31682c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x31682cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x316830: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x316830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316834: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x316834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316838: 0xe44000dc  swc1        $f0, 0xDC($v0)
    ctx->pc = 0x316838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 220), bits); }
    // 0x31683c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31683cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316840: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x316840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x316844: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x316844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x316848: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x316848u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x31684c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x31684cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316850: 0xac40128c  sw          $zero, 0x128C($v0)
    ctx->pc = 0x316850u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4748), GPR_U32(ctx, 0));
    // 0x316854: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x316854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x316858: 0x8c421298  lw          $v0, 0x1298($v0)
    ctx->pc = 0x316858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4760)));
    // 0x31685c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x31685cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x316860: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x316860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x316864: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x316864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x316868: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x316868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31686c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31686cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x316870: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x316870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x316874: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x316874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x316878: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x316878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31687c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31687cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x316880: 0x24045704  addiu       $a0, $zero, 0x5704
    ctx->pc = 0x316880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22276));
    // 0x316884: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x316884u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x316888: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x316888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31688c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31688Cu;
    SET_GPR_U32(ctx, 31, 0x316894u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31688Cu, 0x316894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316894u;
label_316894:
    // 0x316894: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x316894u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x316898: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x316898u;
    SET_GPR_U32(ctx, 31, 0x3168A0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x316898u, 0x3168A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3168A0u;
label_3168a0:
    // 0x3168a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3168a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3168a4: 0x8c421298  lw          $v0, 0x1298($v0)
    ctx->pc = 0x3168a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4760)));
    // 0x3168a8: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x3168a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3168ac: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x3168acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x3168b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3168b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3168b4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3168b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3168b8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3168b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3168bc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3168bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3168c0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3168c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3168c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3168c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3168c8: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x3168c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3168cc: 0x24044501  addiu       $a0, $zero, 0x4501
    ctx->pc = 0x3168ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17665));
    // 0x3168d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3168d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3168d4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3168d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3168d8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x3168D8u;
    SET_GPR_U32(ctx, 31, 0x3168E0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3168D8u, 0x3168E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3168E0u;
label_3168e0:
    // 0x3168e0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3168e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3168e4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3168E4u;
    SET_GPR_U32(ctx, 31, 0x3168ECu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3168E4u, 0x3168ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3168ECu;
label_3168ec:
    // 0x3168ec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3168ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3168f0: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x3168f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3168f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3168f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3168f8: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x3168f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x3168fcu;
}
