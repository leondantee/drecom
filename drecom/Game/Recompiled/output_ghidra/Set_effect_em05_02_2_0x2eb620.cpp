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

// Function: Set_effect_em05_02_2
// Address: 0x2eb620 - 0x2ebc64
void Set_effect_em05_02_2_0x2eb620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_em05_02_2_0x2eb620");
#endif

    switch (ctx->pc) {
        case 0x2eb688u: goto label_2eb688;
        case 0x2eb6c8u: goto label_2eb6c8;
        case 0x2eb6d4u: goto label_2eb6d4;
        case 0x2eb734u: goto label_2eb734;
        case 0x2eb758u: goto label_2eb758;
        case 0x2eb77cu: goto label_2eb77c;
        case 0x2eb7a0u: goto label_2eb7a0;
        case 0x2eb804u: goto label_2eb804;
        case 0x2eb834u: goto label_2eb834;
        case 0x2eb994u: goto label_2eb994;
        case 0x2eb9d4u: goto label_2eb9d4;
        case 0x2eb9e0u: goto label_2eb9e0;
        case 0x2eba54u: goto label_2eba54;
        case 0x2eba78u: goto label_2eba78;
        case 0x2eba9cu: goto label_2eba9c;
        case 0x2ebac0u: goto label_2ebac0;
        case 0x2ebae8u: goto label_2ebae8;
        case 0x2ebb18u: goto label_2ebb18;
        case 0x2ebbdcu: goto label_2ebbdc;
        case 0x2ebbfcu: goto label_2ebbfc;
        default: break;
    }

    ctx->pc = 0x2eb620u;

    // 0x2eb620: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2eb620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2eb624: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x2eb624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2eb628: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2eb628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2eb62c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2eb62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2eb630: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2eb630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2eb634: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x2eb634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
    // 0x2eb638: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2eb638u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb63c: 0x0  nop
    ctx->pc = 0x2eb63cu;
    // NOP
    // 0x2eb640: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2eb640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2eb644: 0x3c03c3fa  lui         $v1, 0xC3FA
    ctx->pc = 0x2eb644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50170 << 16));
    // 0x2eb648: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eb648u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb64c: 0x0  nop
    ctx->pc = 0x2eb64cu;
    // NOP
    // 0x2eb650: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2eb650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2eb654: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2eb654u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb658: 0x0  nop
    ctx->pc = 0x2eb658u;
    // NOP
    // 0x2eb65c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2eb65cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2eb660: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2eb660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2eb664: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eb664u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb668: 0x0  nop
    ctx->pc = 0x2eb668u;
    // NOP
    // 0x2eb66c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2eb66cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2eb670: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2eb670u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb674: 0x0  nop
    ctx->pc = 0x2eb674u;
    // NOP
    // 0x2eb678: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2eb678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2eb67c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2eb67cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2eb680: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x2EB680u;
    {
        const bool branch_taken_0x2eb680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb680) {
            ctx->pc = 0x2EB970u;
            goto label_2eb970;
        }
    }
    ctx->pc = 0x2EB688u;
label_2eb688:
    // 0x2eb688: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2eb688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2eb68c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2eb68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2eb690: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2eb690u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2eb694: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x2eb694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2eb698: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2eb698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2eb69c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2eb69cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2eb6a0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2eb6a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2eb6a4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2eb6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2eb6a8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2eb6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2eb6ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2eb6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2eb6b0: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2eb6b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2eb6b4: 0x24041409  addiu       $a0, $zero, 0x1409
    ctx->pc = 0x2eb6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5129));
    // 0x2eb6b8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2eb6b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2eb6bc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2eb6bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2eb6c0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2EB6C0u;
    SET_GPR_U32(ctx, 31, 0x2EB6C8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2EB6C0u, 0x2EB6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB6C8u;
label_2eb6c8:
    // 0x2eb6c8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2eb6c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2eb6cc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2EB6CCu;
    SET_GPR_U32(ctx, 31, 0x2EB6D4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2EB6CCu, 0x2EB6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB6D4u;
label_2eb6d4:
    // 0x2eb6d4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2eb6d4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2eb6d8: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2eb6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2eb6dc: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2eb6dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2eb6e0: 0x12030099  beq         $s0, $v1, . + 4 + (0x99 << 2)
    ctx->pc = 0x2EB6E0u;
    {
        const bool branch_taken_0x2eb6e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eb6e0) {
            ctx->pc = 0x2EB948u;
            goto label_2eb948;
        }
    }
    ctx->pc = 0x2EB6E8u;
    // 0x2eb6e8: 0x3c02415e  lui         $v0, 0x415E
    ctx->pc = 0x2eb6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16734 << 16));
    // 0x2eb6ec: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2eb6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2eb6f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eb6f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb6f4: 0x0  nop
    ctx->pc = 0x2eb6f4u;
    // NOP
    // 0x2eb6f8: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2eb6f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2eb6fc: 0x3c024158  lui         $v0, 0x4158
    ctx->pc = 0x2eb6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16728 << 16));
    // 0x2eb700: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eb700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb704: 0x0  nop
    ctx->pc = 0x2eb704u;
    // NOP
    // 0x2eb708: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2eb708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2eb70c: 0x3c024150  lui         $v0, 0x4150
    ctx->pc = 0x2eb70cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16720 << 16));
    // 0x2eb710: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eb710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb714: 0x0  nop
    ctx->pc = 0x2eb714u;
    // NOP
    // 0x2eb718: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2eb718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2eb71c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2eb71cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2eb720: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eb720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb724: 0x0  nop
    ctx->pc = 0x2eb724u;
    // NOP
    // 0x2eb728: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2eb728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2eb72c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EB72Cu;
    SET_GPR_U32(ctx, 31, 0x2EB734u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EB72Cu, 0x2EB734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB734u;
label_2eb734:
    // 0x2eb734: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2eb734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2eb738: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eb738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eb73c: 0x0  nop
    ctx->pc = 0x2eb73cu;
    // NOP
    // 0x2eb740: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2eb740u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eb744: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x2eb744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eb748: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2eb748u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2eb74c: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2eb74cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2eb750: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EB750u;
    SET_GPR_U32(ctx, 31, 0x2EB758u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EB750u, 0x2EB758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB758u;
label_2eb758:
    // 0x2eb758: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2eb758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2eb75c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eb75cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eb760: 0x0  nop
    ctx->pc = 0x2eb760u;
    // NOP
    // 0x2eb764: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2eb764u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eb768: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x2eb768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eb76c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2eb76cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2eb770: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2eb770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2eb774: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EB774u;
    SET_GPR_U32(ctx, 31, 0x2EB77Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EB774u, 0x2EB77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB77Cu;
label_2eb77c:
    // 0x2eb77c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2eb77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2eb780: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eb780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eb784: 0x0  nop
    ctx->pc = 0x2eb784u;
    // NOP
    // 0x2eb788: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2eb788u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eb78c: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x2eb78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eb790: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2eb790u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2eb794: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2eb794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2eb798: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EB798u;
    SET_GPR_U32(ctx, 31, 0x2EB7A0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EB798u, 0x2EB7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB7A0u;
label_2eb7a0:
    // 0x2eb7a0: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2eb7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2eb7a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eb7a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eb7a8: 0x0  nop
    ctx->pc = 0x2eb7a8u;
    // NOP
    // 0x2eb7ac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2eb7acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eb7b0: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x2eb7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eb7b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2eb7b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2eb7b8: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2eb7b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2eb7bc: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x2eb7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x2eb7c0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2eb7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2eb7c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eb7c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb7c8: 0x0  nop
    ctx->pc = 0x2eb7c8u;
    // NOP
    // 0x2eb7cc: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x2eb7ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x2eb7d0: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x2eb7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x2eb7d4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2eb7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2eb7d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eb7d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb7dc: 0x0  nop
    ctx->pc = 0x2eb7dcu;
    // NOP
    // 0x2eb7e0: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x2eb7e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x2eb7e4: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x2eb7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x2eb7e8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2eb7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2eb7ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eb7ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb7f0: 0x0  nop
    ctx->pc = 0x2eb7f0u;
    // NOP
    // 0x2eb7f4: 0xe60000a8  swc1        $f0, 0xA8($s0)
    ctx->pc = 0x2eb7f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x2eb7f8: 0xc7ac0044  lwc1        $f12, 0x44($sp)
    ctx->pc = 0x2eb7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2eb7fc: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2EB7FCu;
    SET_GPR_U32(ctx, 31, 0x2EB804u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2EB7FCu, 0x2EB804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB804u;
label_2eb804:
    // 0x2eb804: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2eb804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2eb808: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eb808u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eb80c: 0x0  nop
    ctx->pc = 0x2eb80cu;
    // NOP
    // 0x2eb810: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2eb810u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eb814: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2eb814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2eb818: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2eb818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2eb81c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eb81cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb820: 0x0  nop
    ctx->pc = 0x2eb820u;
    // NOP
    // 0x2eb824: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2eb824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2eb828: 0xc7ac0044  lwc1        $f12, 0x44($sp)
    ctx->pc = 0x2eb828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2eb82c: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2EB82Cu;
    SET_GPR_U32(ctx, 31, 0x2EB834u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2EB82Cu, 0x2EB834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB834u;
label_2eb834:
    // 0x2eb834: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2eb834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2eb838: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2eb838u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eb83c: 0x0  nop
    ctx->pc = 0x2eb83cu;
    // NOP
    // 0x2eb840: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2eb840u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eb844: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2eb844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2eb848: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x2eb848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
    // 0x2eb84c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eb84cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb850: 0x0  nop
    ctx->pc = 0x2eb850u;
    // NOP
    // 0x2eb854: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2eb854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2eb858: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x2eb858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x2eb85c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eb85cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb860: 0x0  nop
    ctx->pc = 0x2eb860u;
    // NOP
    // 0x2eb864: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2eb864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2eb868: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x2eb868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
    // 0x2eb86c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eb86cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb870: 0x0  nop
    ctx->pc = 0x2eb870u;
    // NOP
    // 0x2eb874: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2eb874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2eb878: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x2eb878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x2eb87c: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x2eb87cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x2eb880: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eb880u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb884: 0x0  nop
    ctx->pc = 0x2eb884u;
    // NOP
    // 0x2eb888: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2eb888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2eb88c: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x2eb88cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x2eb890: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x2eb890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x2eb894: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eb894u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb898: 0x0  nop
    ctx->pc = 0x2eb898u;
    // NOP
    // 0x2eb89c: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2eb89cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2eb8a0: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x2eb8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x2eb8a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eb8a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb8a8: 0x0  nop
    ctx->pc = 0x2eb8a8u;
    // NOP
    // 0x2eb8ac: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x2eb8acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x2eb8b0: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x2eb8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x2eb8b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eb8b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb8b8: 0x0  nop
    ctx->pc = 0x2eb8b8u;
    // NOP
    // 0x2eb8bc: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2eb8bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2eb8c0: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x2eb8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2eb8c4: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x2eb8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
    // 0x2eb8c8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2eb8c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2eb8cc: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2eb8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2eb8d0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2eb8d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2eb8d4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2eb8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2eb8d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2eb8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2eb8dc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2eb8dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2eb8e0: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2eb8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2eb8e4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2eb8e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2eb8e8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2eb8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2eb8ec: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2eb8ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2eb8f0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2eb8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2eb8f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2eb8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2eb8f8: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2eb8f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2eb8fc: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2eb8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2eb900: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2eb900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2eb904: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2eb904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2eb908: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2eb908u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2eb90c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2eb90cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2eb910: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x2eb910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2eb914: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2eb914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2eb918: 0xa2030138  sb          $v1, 0x138($s0)
    ctx->pc = 0x2eb918u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 3));
    // 0x2eb91c: 0x3c03bdcc  lui         $v1, 0xBDCC
    ctx->pc = 0x2eb91cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48588 << 16));
    // 0x2eb920: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2eb920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2eb924: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eb924u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb928: 0x0  nop
    ctx->pc = 0x2eb928u;
    // NOP
    // 0x2eb92c: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2eb92cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2eb930: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x2eb930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
    // 0x2eb934: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2eb934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2eb938: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eb938u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb93c: 0x0  nop
    ctx->pc = 0x2eb93cu;
    // NOP
    // 0x2eb940: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x2eb940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x2eb944: 0x0  nop
    ctx->pc = 0x2eb944u;
    // NOP
label_2eb948:
    // 0x2eb948: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2eb948u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2eb94c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2eb94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2eb950: 0x3c033ed6  lui         $v1, 0x3ED6
    ctx->pc = 0x2eb950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16086 << 16));
    // 0x2eb954: 0x346375b1  ori         $v1, $v1, 0x75B1
    ctx->pc = 0x2eb954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)30129);
    // 0x2eb958: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eb958u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb95c: 0x0  nop
    ctx->pc = 0x2eb95cu;
    // NOP
    // 0x2eb960: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2eb960u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2eb964: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2eb964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2eb968: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2eb968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2eb96c: 0x0  nop
    ctx->pc = 0x2eb96cu;
    // NOP
label_2eb970:
    // 0x2eb970: 0x2a23000f  slti        $v1, $s1, 0xF
    ctx->pc = 0x2eb970u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x2eb974: 0x1460ff44  bnez        $v1, . + 4 + (-0xBC << 2)
    ctx->pc = 0x2EB974u;
    {
        const bool branch_taken_0x2eb974 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eb974) {
            ctx->pc = 0x2EB688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eb688;
        }
    }
    ctx->pc = 0x2EB97Cu;
    // 0x2eb97c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2eb97cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb980: 0x0  nop
    ctx->pc = 0x2eb980u;
    // NOP
    // 0x2eb984: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2eb984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2eb988: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2eb988u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2eb98c: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x2EB98Cu;
    {
        const bool branch_taken_0x2eb98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb98c) {
            ctx->pc = 0x2EBC40u;
            goto label_2ebc40;
        }
    }
    ctx->pc = 0x2EB994u;
label_2eb994:
    // 0x2eb994: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2eb994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2eb998: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2eb998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2eb99c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2eb99cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2eb9a0: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x2eb9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2eb9a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2eb9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2eb9a8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2eb9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2eb9ac: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2eb9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2eb9b0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2eb9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2eb9b4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2eb9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2eb9b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2eb9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2eb9bc: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2eb9bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2eb9c0: 0x24041409  addiu       $a0, $zero, 0x1409
    ctx->pc = 0x2eb9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5129));
    // 0x2eb9c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2eb9c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2eb9c8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2eb9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2eb9cc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2EB9CCu;
    SET_GPR_U32(ctx, 31, 0x2EB9D4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2EB9CCu, 0x2EB9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB9D4u;
label_2eb9d4:
    // 0x2eb9d4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2eb9d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2eb9d8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2EB9D8u;
    SET_GPR_U32(ctx, 31, 0x2EB9E0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2EB9D8u, 0x2EB9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB9E0u;
label_2eb9e0:
    // 0x2eb9e0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2eb9e0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2eb9e4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2eb9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2eb9e8: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2eb9e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2eb9ec: 0x1203008a  beq         $s0, $v1, . + 4 + (0x8A << 2)
    ctx->pc = 0x2EB9ECu;
    {
        const bool branch_taken_0x2eb9ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eb9ec) {
            ctx->pc = 0x2EBC18u;
            goto label_2ebc18;
        }
    }
    ctx->pc = 0x2EB9F4u;
    // 0x2eb9f4: 0x3c0241cf  lui         $v0, 0x41CF
    ctx->pc = 0x2eb9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16847 << 16));
    // 0x2eb9f8: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2eb9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2eb9fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eb9fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eba00: 0x0  nop
    ctx->pc = 0x2eba00u;
    // NOP
    // 0x2eba04: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2eba04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2eba08: 0x3c0241cc  lui         $v0, 0x41CC
    ctx->pc = 0x2eba08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16844 << 16));
    // 0x2eba0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eba0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eba10: 0x0  nop
    ctx->pc = 0x2eba10u;
    // NOP
    // 0x2eba14: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2eba14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2eba18: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2eba18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2eba1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eba1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eba20: 0x0  nop
    ctx->pc = 0x2eba20u;
    // NOP
    // 0x2eba24: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2eba24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2eba28: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2eba28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2eba2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eba2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eba30: 0x0  nop
    ctx->pc = 0x2eba30u;
    // NOP
    // 0x2eba34: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2eba34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2eba38: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x2eba38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x2eba3c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2eba3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2eba40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eba40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eba44: 0x0  nop
    ctx->pc = 0x2eba44u;
    // NOP
    // 0x2eba48: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x2eba48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x2eba4c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EBA4Cu;
    SET_GPR_U32(ctx, 31, 0x2EBA54u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EBA4Cu, 0x2EBA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBA54u;
label_2eba54:
    // 0x2eba54: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2eba54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2eba58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eba58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eba5c: 0x0  nop
    ctx->pc = 0x2eba5cu;
    // NOP
    // 0x2eba60: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2eba60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eba64: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x2eba64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eba68: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2eba68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2eba6c: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2eba6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2eba70: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EBA70u;
    SET_GPR_U32(ctx, 31, 0x2EBA78u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EBA70u, 0x2EBA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBA78u;
label_2eba78:
    // 0x2eba78: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2eba78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2eba7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eba7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eba80: 0x0  nop
    ctx->pc = 0x2eba80u;
    // NOP
    // 0x2eba84: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2eba84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eba88: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x2eba88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eba8c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2eba8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2eba90: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2eba90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2eba94: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EBA94u;
    SET_GPR_U32(ctx, 31, 0x2EBA9Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EBA94u, 0x2EBA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBA9Cu;
label_2eba9c:
    // 0x2eba9c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2eba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2ebaa0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ebaa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ebaa4: 0x0  nop
    ctx->pc = 0x2ebaa4u;
    // NOP
    // 0x2ebaa8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ebaa8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ebaac: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x2ebaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ebab0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ebab0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ebab4: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2ebab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2ebab8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EBAB8u;
    SET_GPR_U32(ctx, 31, 0x2EBAC0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EBAB8u, 0x2EBAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBAC0u;
label_2ebac0:
    // 0x2ebac0: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2ebac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2ebac4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ebac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ebac8: 0x0  nop
    ctx->pc = 0x2ebac8u;
    // NOP
    // 0x2ebacc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ebaccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ebad0: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x2ebad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ebad4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ebad4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ebad8: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2ebad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2ebadc: 0xc7ac0044  lwc1        $f12, 0x44($sp)
    ctx->pc = 0x2ebadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ebae0: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2EBAE0u;
    SET_GPR_U32(ctx, 31, 0x2EBAE8u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2EBAE0u, 0x2EBAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBAE8u;
label_2ebae8:
    // 0x2ebae8: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2ebae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2ebaec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ebaecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ebaf0: 0x0  nop
    ctx->pc = 0x2ebaf0u;
    // NOP
    // 0x2ebaf4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ebaf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ebaf8: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2ebaf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2ebafc: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2ebafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2ebb00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ebb00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ebb04: 0x0  nop
    ctx->pc = 0x2ebb04u;
    // NOP
    // 0x2ebb08: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2ebb08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2ebb0c: 0xc7ac0044  lwc1        $f12, 0x44($sp)
    ctx->pc = 0x2ebb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ebb10: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2EBB10u;
    SET_GPR_U32(ctx, 31, 0x2EBB18u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2EBB10u, 0x2EBB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBB18u;
label_2ebb18:
    // 0x2ebb18: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2ebb18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2ebb1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ebb1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ebb20: 0x0  nop
    ctx->pc = 0x2ebb20u;
    // NOP
    // 0x2ebb24: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ebb24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ebb28: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2ebb28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2ebb2c: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x2ebb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x2ebb30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ebb30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ebb34: 0x0  nop
    ctx->pc = 0x2ebb34u;
    // NOP
    // 0x2ebb38: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2ebb38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2ebb3c: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2ebb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2ebb40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ebb40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ebb44: 0x0  nop
    ctx->pc = 0x2ebb44u;
    // NOP
    // 0x2ebb48: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2ebb48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2ebb4c: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x2ebb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x2ebb50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ebb50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ebb54: 0x0  nop
    ctx->pc = 0x2ebb54u;
    // NOP
    // 0x2ebb58: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2ebb58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2ebb5c: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2ebb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2ebb60: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2ebb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2ebb64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ebb64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ebb68: 0x0  nop
    ctx->pc = 0x2ebb68u;
    // NOP
    // 0x2ebb6c: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2ebb6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2ebb70: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2ebb70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2ebb74: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2ebb74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2ebb78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ebb78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ebb7c: 0x0  nop
    ctx->pc = 0x2ebb7cu;
    // NOP
    // 0x2ebb80: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2ebb80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2ebb84: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x2ebb84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x2ebb88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ebb88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ebb8c: 0x0  nop
    ctx->pc = 0x2ebb8cu;
    // NOP
    // 0x2ebb90: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x2ebb90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x2ebb94: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2ebb94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2ebb98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ebb98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ebb9c: 0x0  nop
    ctx->pc = 0x2ebb9cu;
    // NOP
    // 0x2ebba0: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2ebba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2ebba4: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2ebba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2ebba8: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x2ebba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x2ebbac: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x2ebbacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x2ebbb0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2ebbb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2ebbb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ebbb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ebbb8: 0x0  nop
    ctx->pc = 0x2ebbb8u;
    // NOP
    // 0x2ebbbc: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2ebbbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2ebbc0: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2ebbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2ebbc4: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2ebbc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2ebbc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ebbc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ebbcc: 0x0  nop
    ctx->pc = 0x2ebbccu;
    // NOP
    // 0x2ebbd0: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x2ebbd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x2ebbd4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EBBD4u;
    SET_GPR_U32(ctx, 31, 0x2EBBDCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EBBD4u, 0x2EBBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBBDCu;
label_2ebbdc:
    // 0x2ebbdc: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2ebbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2ebbe0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2ebbe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2ebbe4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ebbe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ebbe8: 0x0  nop
    ctx->pc = 0x2ebbe8u;
    // NOP
    // 0x2ebbec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ebbecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ebbf0: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2ebbf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2ebbf4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EBBF4u;
    SET_GPR_U32(ctx, 31, 0x2EBBFCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EBBF4u, 0x2EBBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBBFCu;
label_2ebbfc:
    // 0x2ebbfc: 0x3c033f8c  lui         $v1, 0x3F8C
    ctx->pc = 0x2ebbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16268 << 16));
    // 0x2ebc00: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2ebc00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2ebc04: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ebc04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ebc08: 0x0  nop
    ctx->pc = 0x2ebc08u;
    // NOP
    // 0x2ebc0c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ebc0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ebc10: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2ebc10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2ebc14: 0x0  nop
    ctx->pc = 0x2ebc14u;
    // NOP
label_2ebc18:
    // 0x2ebc18: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2ebc18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2ebc1c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2ebc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ebc20: 0x3c033e56  lui         $v1, 0x3E56
    ctx->pc = 0x2ebc20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15958 << 16));
    // 0x2ebc24: 0x346375b1  ori         $v1, $v1, 0x75B1
    ctx->pc = 0x2ebc24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)30129);
    // 0x2ebc28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ebc28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ebc2c: 0x0  nop
    ctx->pc = 0x2ebc2cu;
    // NOP
    // 0x2ebc30: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ebc30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ebc34: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2ebc34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2ebc38: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2ebc38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2ebc3c: 0x0  nop
    ctx->pc = 0x2ebc3cu;
    // NOP
label_2ebc40:
    // 0x2ebc40: 0x2a23001e  slti        $v1, $s1, 0x1E
    ctx->pc = 0x2ebc40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x2ebc44: 0x1460ff53  bnez        $v1, . + 4 + (-0xAD << 2)
    ctx->pc = 0x2EBC44u;
    {
        const bool branch_taken_0x2ebc44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ebc44) {
            ctx->pc = 0x2EB994u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eb994;
        }
    }
    ctx->pc = 0x2EBC4Cu;
    // 0x2ebc4c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x2ebc4cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ebc50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ebc50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ebc54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ebc54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ebc58: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2ebc58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ebc5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBC5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBC64u;
}
