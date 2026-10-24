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

// Function: entry_00221740
// Address: 0x221740 - 0x22185c
void entry_00221740_0x221740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00221740_0x221740");
#endif

    switch (ctx->pc) {
        case 0x221764u: goto label_221764;
        case 0x2217ccu: goto label_2217cc;
        case 0x221850u: goto label_221850;
        default: break;
    }

    ctx->pc = 0x221740u;

    // 0x221740: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221744: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x221744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x221748: 0x3c033f86  lui         $v1, 0x3F86
    ctx->pc = 0x221748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16262 << 16));
    // 0x22174c: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x22174cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
    // 0x221750: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x221750u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x221754: 0x0  nop
    ctx->pc = 0x221754u;
    // NOP
    // 0x221758: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x221758u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22175c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x22175Cu;
    SET_GPR_U32(ctx, 31, 0x221764u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x22175Cu, 0x221764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221764u;
label_221764:
    // 0x221764: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221768: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x221768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x22176c: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x22176cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221770: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x221770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x221774: 0x24720120  addiu       $s2, $v1, 0x120
    ctx->pc = 0x221774u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x221778: 0x8e500034  lw          $s0, 0x34($s2)
    ctx->pc = 0x221778u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x22177c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x22177cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x221780: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x221780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x221784: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x221784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x221788: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x221788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x22178c: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x22178cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x221790: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x221790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x221794: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x221794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x221798: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x221798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x22179c: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x22179cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2217a0: 0x34860002  ori         $a2, $a0, 0x2
    ctx->pc = 0x2217a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x2217a4: 0xae060024  sw          $a2, 0x24($s0)
    ctx->pc = 0x2217a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 6));
    // 0x2217a8: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x2217a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x2217ac: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x2217acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x2217b0: 0x34664000  ori         $a2, $v1, 0x4000
    ctx->pc = 0x2217b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2217b4: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x2217b4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2217b8: 0x2404051f  addiu       $a0, $zero, 0x51F
    ctx->pc = 0x2217b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1311));
    // 0x2217bc: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x2217bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2217c0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2217c0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2217c4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x2217C4u;
    SET_GPR_U32(ctx, 31, 0x2217CCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x2217C4u, 0x2217CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2217CCu;
label_2217cc:
    // 0x2217cc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2217ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2217d0: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x2217d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x2217d4: 0xc4601200  lwc1        $f0, 0x1200($v1)
    ctx->pc = 0x2217d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2217d8: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x2217d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2217dc: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x2217dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x2217e0: 0xc4601204  lwc1        $f0, 0x1204($v1)
    ctx->pc = 0x2217e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2217e4: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x2217e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x2217e8: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x2217e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x2217ec: 0xc4601208  lwc1        $f0, 0x1208($v1)
    ctx->pc = 0x2217ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2217f0: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x2217f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2217f4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2217f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2217f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2217f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2217fc: 0x0  nop
    ctx->pc = 0x2217fcu;
    // NOP
    // 0x221800: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x221800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x221804: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221808: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x221808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x22180c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x22180cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x221810: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x221810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x221814: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x221814u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
    // 0x221818: 0x3486ffff  ori         $a2, $a0, 0xFFFF
    ctx->pc = 0x221818u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x22181c: 0x662024  and         $a0, $v1, $a2
    ctx->pc = 0x22181cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x221820: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x221820u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x221824: 0x34a20001  ori         $v0, $a1, 0x1
    ctx->pc = 0x221824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x221828: 0x8fa701a8  lw          $a3, 0x1A8($sp)
    ctx->pc = 0x221828u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x22182c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x22182cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x221830: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x221830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x221834: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x221834u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x221838: 0x24e300d0  addiu       $v1, $a3, 0xD0
    ctx->pc = 0x221838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 208));
    // 0x22183c: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x22183cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x221840: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x221840u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x221844: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x221844u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x221848: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x221848u;
    SET_GPR_U32(ctx, 31, 0x221850u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x221848u, 0x221850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221850u;
label_221850:
    // 0x221850: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x221850u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x221854: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x221854u;
    {
        const bool branch_taken_0x221854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x221854) {
            ctx->pc = 0x221944u;
            return;
        }
    }
    ctx->pc = 0x22185Cu;
}
