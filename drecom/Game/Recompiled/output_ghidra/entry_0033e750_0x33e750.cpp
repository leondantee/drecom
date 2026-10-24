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

// Function: entry_0033e750
// Address: 0x33e750 - 0x33e918
void entry_0033e750_0x33e750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033e750_0x33e750");
#endif

    switch (ctx->pc) {
        case 0x33e768u: goto label_33e768;
        case 0x33e770u: goto label_33e770;
        case 0x33e79cu: goto label_33e79c;
        case 0x33e7c4u: goto label_33e7c4;
        case 0x33e7d4u: goto label_33e7d4;
        case 0x33e7f0u: goto label_33e7f0;
        case 0x33e804u: goto label_33e804;
        case 0x33e818u: goto label_33e818;
        case 0x33e82cu: goto label_33e82c;
        case 0x33e870u: goto label_33e870;
        case 0x33e894u: goto label_33e894;
        default: break;
    }

    ctx->pc = 0x33e750u;

    // 0x33e750: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x33e750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x33e754: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x33e754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x33e758: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x33e758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x33e75c: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x33e75cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x33e760: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x33E760u;
    SET_GPR_U32(ctx, 31, 0x33E768u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x33E768u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33E768u) { return; }
    ctx->pc = 0x33E768u;
label_33e768:
    // 0x33e768: 0xc06765c  jal         func_19D970
    ctx->pc = 0x33E768u;
    SET_GPR_U32(ctx, 31, 0x33E770u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x33E768u, 0x33E770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E770u;
label_33e770:
    // 0x33e770: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x33e770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x33e774: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33e774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33e778: 0x0  nop
    ctx->pc = 0x33e778u;
    // NOP
    // 0x33e77c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x33e77cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33e780: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x33e780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x33e784: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33e784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33e788: 0x0  nop
    ctx->pc = 0x33e788u;
    // NOP
    // 0x33e78c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x33e78cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x33e790: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x33e790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x33e794: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x33E794u;
    SET_GPR_U32(ctx, 31, 0x33E79Cu);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x33E794u, 0x33E79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E79Cu;
label_33e79c:
    // 0x33e79c: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x33e79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x33e7a0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x33e7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x33e7a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33e7a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33e7a8: 0x0  nop
    ctx->pc = 0x33e7a8u;
    // NOP
    // 0x33e7ac: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x33e7acu;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33e7b0: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x33e7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x33e7b4: 0xc60c0034  lwc1        $f12, 0x34($s0)
    ctx->pc = 0x33e7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x33e7b8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x33e7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x33e7bc: 0xc05c848  jal         func_172120
    ctx->pc = 0x33E7BCu;
    SET_GPR_U32(ctx, 31, 0x33E7C4u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x33E7BCu, 0x33E7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E7C4u;
label_33e7c4:
    // 0x33e7c4: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x33e7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33e7c8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x33e7c8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x33e7cc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x33E7CCu;
    SET_GPR_U32(ctx, 31, 0x33E7D4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x33E7CCu, 0x33E7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E7D4u;
label_33e7d4:
    // 0x33e7d4: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x33e7d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x33e7d8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x33e7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x33e7dc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x33e7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33e7e0: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x33e7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33e7e4: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x33e7e4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x33e7e8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x33E7E8u;
    SET_GPR_U32(ctx, 31, 0x33E7F0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x33E7E8u, 0x33E7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E7F0u;
label_33e7f0:
    // 0x33e7f0: 0xe6200108  swc1        $f0, 0x108($s1)
    ctx->pc = 0x33e7f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 264), bits); }
    // 0x33e7f4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x33e7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x33e7f8: 0xc60c0034  lwc1        $f12, 0x34($s0)
    ctx->pc = 0x33e7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x33e7fc: 0xc067844  jal         func_19E110
    ctx->pc = 0x33E7FCu;
    SET_GPR_U32(ctx, 31, 0x33E804u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x33E7FCu, 0x33E804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E804u;
label_33e804:
    // 0x33e804: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x33e804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x33e808: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x33e808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x33e80c: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x33e80cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x33e810: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x33E810u;
    SET_GPR_U32(ctx, 31, 0x33E818u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x33E818u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33E818u) { return; }
    ctx->pc = 0x33E818u;
label_33e818:
    // 0x33e818: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x33e818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x33e81c: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x33e81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x33e820: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x33e820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x33e824: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x33E824u;
    SET_GPR_U32(ctx, 31, 0x33E82Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x33E824u, 0x33E82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E82Cu;
label_33e82c:
    // 0x33e82c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x33e82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x33e830: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x33e830u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x33e834: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33e834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33e838: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x33e838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x33e83c: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x33E83Cu;
    {
        const bool branch_taken_0x33e83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e83c) {
            ctx->pc = 0x33E9B8u;
            return;
        }
    }
    ctx->pc = 0x33E844u;
    // 0x33e844: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x33e844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x33e848: 0x8c431360  lw          $v1, 0x1360($v0)
    ctx->pc = 0x33e848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4960)));
    // 0x33e84c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33e84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33e850: 0x14620059  bne         $v1, $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x33E850u;
    {
        const bool branch_taken_0x33e850 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33e850) {
            ctx->pc = 0x33E9B8u;
            return;
        }
    }
    ctx->pc = 0x33E858u;
    // 0x33e858: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x33e858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x33e85c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x33e85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x33e860: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x33e860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x33e864: 0x8c461250  lw          $a2, 0x1250($v0)
    ctx->pc = 0x33e864u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4688)));
    // 0x33e868: 0xc040c80  jal         func_103200
    ctx->pc = 0x33E868u;
    SET_GPR_U32(ctx, 31, 0x33E870u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x33E870u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33E870u) { return; }
    ctx->pc = 0x33E870u;
label_33e870:
    // 0x33e870: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x33e870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33e874: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x33e874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33e878: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x33e878u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33e87c: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x33e87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33e880: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x33e880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33e884: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x33e884u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33e888: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x33e888u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x33e88c: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x33E88Cu;
    SET_GPR_U32(ctx, 31, 0x33E894u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x33E88Cu, 0x33E894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E894u;
label_33e894:
    // 0x33e894: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x33e894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x33e898: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x33e898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x33e89c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33e89cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33e8a0: 0x0  nop
    ctx->pc = 0x33e8a0u;
    // NOP
    // 0x33e8a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x33e8a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33e8a8: 0x0  nop
    ctx->pc = 0x33e8a8u;
    // NOP
    // 0x33e8ac: 0x45000042  bc1f        . + 4 + (0x42 << 2)
    ctx->pc = 0x33E8ACu;
    {
        const bool branch_taken_0x33e8ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x33e8ac) {
            ctx->pc = 0x33E9B8u;
            return;
        }
    }
    ctx->pc = 0x33E8B4u;
    // 0x33e8b4: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x33e8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x33e8b8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x33e8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x33e8bc: 0x621006  srlv        $v0, $v0, $v1
    ctx->pc = 0x33e8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x33e8c0: 0x402027  not         $a0, $v0
    ctx->pc = 0x33e8c0u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    // 0x33e8c4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x33e8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x33e8c8: 0x8c62121c  lw          $v0, 0x121C($v1)
    ctx->pc = 0x33e8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4636)));
    // 0x33e8cc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x33e8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x33e8d0: 0xac62121c  sw          $v0, 0x121C($v1)
    ctx->pc = 0x33e8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4636), GPR_U32(ctx, 2));
    // 0x33e8d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33e8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33e8d8: 0x2422004  sllv        $a0, $v0, $s2
    ctx->pc = 0x33e8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x33e8dc: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x33e8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x33e8e0: 0x8c621348  lw          $v0, 0x1348($v1)
    ctx->pc = 0x33e8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4936)));
    // 0x33e8e4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x33e8e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x33e8e8: 0xac621348  sw          $v0, 0x1348($v1)
    ctx->pc = 0x33e8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4936), GPR_U32(ctx, 2));
    // 0x33e8ec: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x33e8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x33e8f0: 0x8c42121c  lw          $v0, 0x121C($v0)
    ctx->pc = 0x33e8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4636)));
    // 0x33e8f4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x33E8F4u;
    {
        const bool branch_taken_0x33e8f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e8f4) {
            ctx->pc = 0x33E958u;
            return;
        }
    }
    ctx->pc = 0x33E8FCu;
    // 0x33e8fc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x33e8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x33e900: 0x904210a9  lbu         $v0, 0x10A9($v0)
    ctx->pc = 0x33e900u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4265)));
    // 0x33e904: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33e904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33e908: 0x14520013  bne         $v0, $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x33E908u;
    {
        const bool branch_taken_0x33e908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x33e908) {
            ctx->pc = 0x33E958u;
            return;
        }
    }
    ctx->pc = 0x33E910u;
    // 0x33e910: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x33E910u;
    {
        const bool branch_taken_0x33e910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e910) {
            ctx->pc = 0x33E928u;
            return;
        }
    }
    ctx->pc = 0x33E918u;
}
