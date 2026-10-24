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

// Function: Em1f_R1_atk
// Address: 0x2987b0 - 0x298a58
void Em1f_R1_atk_0x2987b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1f_R1_atk_0x2987b0");
#endif

    switch (ctx->pc) {
        case 0x2987c4u: goto label_2987c4;
        case 0x2988b0u: goto label_2988b0;
        default: break;
    }

    ctx->pc = 0x2987b0u;

    // 0x2987b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2987b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2987b4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2987b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2987b8: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x2987b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x2987bc: 0xc0a60cc  jal         func_298330
    ctx->pc = 0x2987BCu;
    SET_GPR_U32(ctx, 31, 0x2987C4u);
    ctx->pc = 0x298330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298330u, 0x2987BCu, 0x2987C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2987C4u;
label_2987c4:
    // 0x2987c4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2987c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2987c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2987c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2987cc: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x2987ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2987d0: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2987d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2987d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2987d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2987d8: 0x0  nop
    ctx->pc = 0x2987d8u;
    // NOP
    // 0x2987dc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2987DCu;
    {
        const bool branch_taken_0x2987dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2987dc) {
            ctx->pc = 0x2987FCu;
            goto label_2987fc;
        }
    }
    ctx->pc = 0x2987E4u;
    // 0x2987e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2987e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2987e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2987e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2987ec: 0x0  nop
    ctx->pc = 0x2987ecu;
    // NOP
    // 0x2987f0: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2987f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2987f4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2987F4u;
    {
        const bool branch_taken_0x2987f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2987f4) {
            ctx->pc = 0x29880Cu;
            goto label_29880c;
        }
    }
    ctx->pc = 0x2987FCu;
label_2987fc:
    // 0x2987fc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2987fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x298800: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x298800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298804: 0x0  nop
    ctx->pc = 0x298804u;
    // NOP
    // 0x298808: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x298808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_29880c:
    // 0x29880c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x29880cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298810: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x298810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298814: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x298814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298818: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x298818u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29881c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x29881cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x298820: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x298820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298824: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x298824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298828: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x298828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
    // 0x29882c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29882cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298830: 0x0  nop
    ctx->pc = 0x298830u;
    // NOP
    // 0x298834: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x298834u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x298838: 0x0  nop
    ctx->pc = 0x298838u;
    // NOP
    // 0x29883c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x29883Cu;
    {
        const bool branch_taken_0x29883c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29883c) {
            ctx->pc = 0x298854u;
            goto label_298854;
        }
    }
    ctx->pc = 0x298844u;
    // 0x298844: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x298844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
    // 0x298848: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x298848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29884c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x29884cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298850: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x298850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_298854:
    // 0x298854: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x298854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298858: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x298858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29885c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x29885cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x298860: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x298860u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298864: 0x0  nop
    ctx->pc = 0x298864u;
    // NOP
    // 0x298868: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x298868u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29886c: 0x0  nop
    ctx->pc = 0x29886cu;
    // NOP
    // 0x298870: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x298870u;
    {
        const bool branch_taken_0x298870 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x298870) {
            ctx->pc = 0x298888u;
            goto label_298888;
        }
    }
    ctx->pc = 0x298878u;
    // 0x298878: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x298878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x29887c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29887cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298880: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x298880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298884: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x298884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_298888:
    // 0x298888: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x298888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29888c: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x29888cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298890: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x298890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298894: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x298894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298898: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x298898u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29889c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x29889cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2988a0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2988a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2988a4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2988a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2988a8: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2988A8u;
    SET_GPR_U32(ctx, 31, 0x2988B0u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2988A8u, 0x2988B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2988B0u;
label_2988b0:
    // 0x2988b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2988b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2988b4: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2988b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2988b8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2988b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2988bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2988bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2988c0: 0x1083002a  beq         $a0, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x2988C0u;
    {
        const bool branch_taken_0x2988c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2988c0) {
            ctx->pc = 0x29896Cu;
            goto label_29896c;
        }
    }
    ctx->pc = 0x2988C8u;
    // 0x2988c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2988c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2988cc: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2988CCu;
    {
        const bool branch_taken_0x2988cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2988cc) {
            ctx->pc = 0x2988ECu;
            goto label_2988ec;
        }
    }
    ctx->pc = 0x2988D4u;
    // 0x2988d4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2988D4u;
    {
        const bool branch_taken_0x2988d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2988d4) {
            ctx->pc = 0x2988E4u;
            goto label_2988e4;
        }
    }
    ctx->pc = 0x2988DCu;
    // 0x2988dc: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2988DCu;
    {
        const bool branch_taken_0x2988dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2988dc) {
            ctx->pc = 0x298A48u;
            goto label_298a48;
        }
    }
    ctx->pc = 0x2988E4u;
label_2988e4:
    // 0x2988e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2988e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2988e8: 0xa4601278  sh          $zero, 0x1278($v1)
    ctx->pc = 0x2988e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 0));
label_2988ec:
    // 0x2988ec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2988ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2988f0: 0x24641334  addiu       $a0, $v1, 0x1334
    ctx->pc = 0x2988f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x2988f4: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2988f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2988f8: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x2988f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
    // 0x2988fc: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2988fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x298900: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x298900u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298904: 0x0  nop
    ctx->pc = 0x298904u;
    // NOP
    // 0x298908: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x298908u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29890c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x29890cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x298910: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298914: 0x24631334  addiu       $v1, $v1, 0x1334
    ctx->pc = 0x298914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x298918: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x298918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29891c: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x29891cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
    // 0x298920: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x298920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x298924: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x298924u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298928: 0x0  nop
    ctx->pc = 0x298928u;
    // NOP
    // 0x29892c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29892cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x298930: 0x0  nop
    ctx->pc = 0x298930u;
    // NOP
    // 0x298934: 0x45000044  bc1f        . + 4 + (0x44 << 2)
    ctx->pc = 0x298934u;
    {
        const bool branch_taken_0x298934 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x298934) {
            ctx->pc = 0x298A48u;
            goto label_298a48;
        }
    }
    ctx->pc = 0x29893Cu;
    // 0x29893c: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x29893cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
    // 0x298940: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x298940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x298944: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x298944u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298948: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29894c: 0x24631334  addiu       $v1, $v1, 0x1334
    ctx->pc = 0x29894cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x298950: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x298950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x298954: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x298954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298958: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x298958u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x29895c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x29895cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x298960: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x298960u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x298964: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x298964u;
    {
        const bool branch_taken_0x298964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x298964) {
            ctx->pc = 0x298A48u;
            goto label_298a48;
        }
    }
    ctx->pc = 0x29896Cu;
label_29896c:
    // 0x29896c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x29896cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298970: 0x24641334  addiu       $a0, $v1, 0x1334
    ctx->pc = 0x298970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x298974: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x298974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298978: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x298978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
    // 0x29897c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x29897cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x298980: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x298980u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298984: 0x0  nop
    ctx->pc = 0x298984u;
    // NOP
    // 0x298988: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x298988u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29898c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x29898cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x298990: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298994: 0x24631334  addiu       $v1, $v1, 0x1334
    ctx->pc = 0x298994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x298998: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x298998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29899c: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x29899cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x2989a0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2989a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2989a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2989a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2989a8: 0x0  nop
    ctx->pc = 0x2989a8u;
    // NOP
    // 0x2989ac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2989acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2989b0: 0x0  nop
    ctx->pc = 0x2989b0u;
    // NOP
    // 0x2989b4: 0x45010024  bc1t        . + 4 + (0x24 << 2)
    ctx->pc = 0x2989B4u;
    {
        const bool branch_taken_0x2989b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2989b4) {
            ctx->pc = 0x298A48u;
            goto label_298a48;
        }
    }
    ctx->pc = 0x2989BCu;
    // 0x2989bc: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x2989bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x2989c0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2989c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2989c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2989c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2989c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2989c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2989cc: 0x24631334  addiu       $v1, $v1, 0x1334
    ctx->pc = 0x2989ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x2989d0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2989d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2989d4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2989d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2989d8: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x2989d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x2989dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2989dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2989e0: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x2989e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2989e4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2989e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2989e8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2989e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2989ec: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2989ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2989f0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2989f0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2989f4: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x2989f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2989f8: 0x1420000f  bnez        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x2989F8u;
    {
        const bool branch_taken_0x2989f8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2989f8) {
            ctx->pc = 0x298A38u;
            goto label_298a38;
        }
    }
    ctx->pc = 0x298A00u;
    // 0x298a00: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x298a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298a04: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298a08: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x298a08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x298a0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x298a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298a10: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298a14: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x298a14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x298a18: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298a1c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x298a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x298a20: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298a24: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x298a24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x298a28: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298a2c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x298a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x298a30: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x298A30u;
    {
        const bool branch_taken_0x298a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x298a30) {
            ctx->pc = 0x298A48u;
            goto label_298a48;
        }
    }
    ctx->pc = 0x298A38u;
label_298a38:
    // 0x298a38: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x298a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298a3c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x298a3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x298a40: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x298a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x298a44: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x298a44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_298a48:
    // 0x298a48: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x298a48u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298a4c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x298a4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x298a50: 0x3e00008  jr          $ra
    ctx->pc = 0x298A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298A58u;
}
