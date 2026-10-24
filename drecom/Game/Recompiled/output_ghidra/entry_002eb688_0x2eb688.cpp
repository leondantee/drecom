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

// Function: entry_002eb688
// Address: 0x2eb688 - 0x2eb948
void entry_002eb688_0x2eb688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002eb688_0x2eb688");
#endif

    switch (ctx->pc) {
        case 0x2eb6c8u: goto label_2eb6c8;
        case 0x2eb6d4u: goto label_2eb6d4;
        case 0x2eb734u: goto label_2eb734;
        case 0x2eb758u: goto label_2eb758;
        case 0x2eb77cu: goto label_2eb77c;
        case 0x2eb7a0u: goto label_2eb7a0;
        case 0x2eb804u: goto label_2eb804;
        case 0x2eb834u: goto label_2eb834;
        default: break;
    }

    ctx->pc = 0x2eb688u;

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
            return;
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
    ctx->pc = 0x2eb948u;
}
