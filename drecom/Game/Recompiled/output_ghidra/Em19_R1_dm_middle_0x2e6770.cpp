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

// Function: Em19_R1_dm_middle
// Address: 0x2e6770 - 0x2e6b28
void Em19_R1_dm_middle_0x2e6770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em19_R1_dm_middle_0x2e6770");
#endif

    switch (ctx->pc) {
        case 0x2e67c4u: goto label_2e67c4;
        case 0x2e67dcu: goto label_2e67dc;
        case 0x2e6944u: goto label_2e6944;
        case 0x2e6968u: goto label_2e6968;
        case 0x2e6980u: goto label_2e6980;
        case 0x2e6994u: goto label_2e6994;
        case 0x2e69a4u: goto label_2e69a4;
        case 0x2e69bcu: goto label_2e69bc;
        case 0x2e6ad0u: goto label_2e6ad0;
        default: break;
    }

    ctx->pc = 0x2e6770u;

    // 0x2e6770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e6770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e6774: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2e6774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2e6778: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x2e6778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x2e677c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e677cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6780: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2e6780u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e6784: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2e6784u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e6788: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e6788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e678c: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x2E678Cu;
    {
        const bool branch_taken_0x2e678c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e678c) {
            ctx->pc = 0x2E682Cu;
            goto label_2e682c;
        }
    }
    ctx->pc = 0x2E6794u;
    // 0x2e6794: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6794u;
    {
        const bool branch_taken_0x2e6794 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6794) {
            ctx->pc = 0x2E67A4u;
            goto label_2e67a4;
        }
    }
    ctx->pc = 0x2E679Cu;
    // 0x2e679c: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x2E679Cu;
    {
        const bool branch_taken_0x2e679c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e679c) {
            ctx->pc = 0x2E6B18u;
            goto label_2e6b18;
        }
    }
    ctx->pc = 0x2E67A4u;
label_2e67a4:
    // 0x2e67a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e67a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e67a8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e67a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e67ac: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2e67acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2e67b0: 0x2406050b  addiu       $a2, $zero, 0x50B
    ctx->pc = 0x2e67b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1291));
    // 0x2e67b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e67b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e67b8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2e67b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2e67bc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2E67BCu;
    SET_GPR_U32(ctx, 31, 0x2E67C4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2E67BCu, 0x2E67C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E67C4u;
label_2e67c4:
    // 0x2e67c4: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x2e67c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x2e67c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e67c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e67cc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e67ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e67d0: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2e67d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2e67d4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E67D4u;
    SET_GPR_U32(ctx, 31, 0x2E67DCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E67D4u, 0x2E67DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E67DCu;
label_2e67dc:
    // 0x2e67dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e67dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e67e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e67e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e67e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E67E4u;
    {
        const bool branch_taken_0x2e67e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e67e4) {
            ctx->pc = 0x2E6808u;
            goto label_2e6808;
        }
    }
    ctx->pc = 0x2E67ECu;
    // 0x2e67ec: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x2e67ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x2e67f0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2e67f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2e67f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e67f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e67f8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e67f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e67fc: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x2e67fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x2e6800: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E6800u;
    {
        const bool branch_taken_0x2e6800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6800) {
            ctx->pc = 0x2E681Cu;
            goto label_2e681c;
        }
    }
    ctx->pc = 0x2E6808u;
label_2e6808:
    // 0x2e6808: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x2e6808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x2e680c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2e680cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2e6810: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e6810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6814: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e6814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6818: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x2e6818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
label_2e681c:
    // 0x2e681c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e681cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6820: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2e6820u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e6824: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e6824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e6828: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2e6828u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2e682c:
    // 0x2e682c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e682cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6830: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x2e6830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6834: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x2e6834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
    // 0x2e6838: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e6838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e683c: 0x0  nop
    ctx->pc = 0x2e683cu;
    // NOP
    // 0x2e6840: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e6840u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e6844: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x2e6844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x2e6848: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e6848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e684c: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2e684cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2e6850: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e6850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e6854: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2e6854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2e6858: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E6858u;
    {
        const bool branch_taken_0x2e6858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6858) {
            ctx->pc = 0x2E687Cu;
            goto label_2e687c;
        }
    }
    ctx->pc = 0x2E6860u;
    // 0x2e6860: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e6860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6864: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x2e6864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6868: 0x3c0241d2  lui         $v0, 0x41D2
    ctx->pc = 0x2e6868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16850 << 16));
    // 0x2e686c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e686cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6870: 0x0  nop
    ctx->pc = 0x2e6870u;
    // NOP
    // 0x2e6874: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e6874u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e6878: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x2e6878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
label_2e687c:
    // 0x2e687c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e687cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6880: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2e6880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2e6884: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2e6884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2e6888: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e6888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e688c: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x2e688cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6890: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e6890u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e6894: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x2e6894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x2e6898: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e6898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e689c: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x2e689cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e68a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e68a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e68a4: 0x0  nop
    ctx->pc = 0x2e68a4u;
    // NOP
    // 0x2e68a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e68a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e68ac: 0x0  nop
    ctx->pc = 0x2e68acu;
    // NOP
    // 0x2e68b0: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x2E68B0u;
    {
        const bool branch_taken_0x2e68b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e68b0) {
            ctx->pc = 0x2E68F0u;
            goto label_2e68f0;
        }
    }
    ctx->pc = 0x2E68B8u;
    // 0x2e68b8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e68b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e68bc: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x2e68bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e68c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e68c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e68c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e68c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e68c8: 0x0  nop
    ctx->pc = 0x2e68c8u;
    // NOP
    // 0x2e68cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e68ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e68d0: 0x0  nop
    ctx->pc = 0x2e68d0u;
    // NOP
    // 0x2e68d4: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x2E68D4u;
    {
        const bool branch_taken_0x2e68d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e68d4) {
            ctx->pc = 0x2E6920u;
            goto label_2e6920;
        }
    }
    ctx->pc = 0x2E68DCu;
    // 0x2e68dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e68dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e68e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e68e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e68e4: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2e68e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2e68e8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2E68E8u;
    {
        const bool branch_taken_0x2e68e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e68e8) {
            ctx->pc = 0x2E6920u;
            goto label_2e6920;
        }
    }
    ctx->pc = 0x2E68F0u;
label_2e68f0:
    // 0x2e68f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e68f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e68f4: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x2e68f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e68f8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2e68f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2e68fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e68fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6900: 0x0  nop
    ctx->pc = 0x2e6900u;
    // NOP
    // 0x2e6904: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e6904u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e6908: 0x0  nop
    ctx->pc = 0x2e6908u;
    // NOP
    // 0x2e690c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2E690Cu;
    {
        const bool branch_taken_0x2e690c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e690c) {
            ctx->pc = 0x2E6920u;
            goto label_2e6920;
        }
    }
    ctx->pc = 0x2E6914u;
    // 0x2e6914: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e6914u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6918: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e6918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e691c: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2e691cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_2e6920:
    // 0x2e6920: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x2e6920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x2e6924: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2e6924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2e6928: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2e6928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2e692c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e692cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6930: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e6930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6934: 0xc46c11f8  lwc1        $f12, 0x11F8($v1)
    ctx->pc = 0x2e6934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e6938: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x2e6938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e693c: 0xc058f50  jal         func_163D40
    ctx->pc = 0x2E693Cu;
    SET_GPR_U32(ctx, 31, 0x2E6944u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x2E693Cu, 0x2E6944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6944u;
label_2e6944:
    // 0x2e6944: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e6944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6948: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2e6948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2e694c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e694cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6950: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2e6950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6954: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e6954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6958: 0xc4401290  lwc1        $f0, 0x1290($v0)
    ctx->pc = 0x2e6958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e695c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2e695cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e6960: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2E6960u;
    SET_GPR_U32(ctx, 31, 0x2E6968u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2E6960u, 0x2E6968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6968u;
label_2e6968:
    // 0x2e6968: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e6968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e696c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2e696cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2e6970: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e6970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6974: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2e6974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e6978: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2E6978u;
    SET_GPR_U32(ctx, 31, 0x2E6980u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2E6978u, 0x2E6980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6980u;
label_2e6980:
    // 0x2e6980: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e6980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6984: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e6984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6988: 0xc44c11f8  lwc1        $f12, 0x11F8($v0)
    ctx->pc = 0x2e6988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e698c: 0xc05cd58  jal         func_173560
    ctx->pc = 0x2E698Cu;
    SET_GPR_U32(ctx, 31, 0x2E6994u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x2E698Cu, 0x2E6994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6994u;
label_2e6994:
    // 0x2e6994: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e6994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6998: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2e6998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e699c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2E699Cu;
    SET_GPR_U32(ctx, 31, 0x2E69A4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2E699Cu, 0x2E69A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E69A4u;
label_2e69a4:
    // 0x2e69a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e69a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e69a8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e69a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e69ac: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2e69acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2e69b0: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x2e69b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x2e69b4: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x2E69B4u;
    SET_GPR_U32(ctx, 31, 0x2E69BCu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x2E69B4u, 0x2E69BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E69BCu;
label_2e69bc:
    // 0x2e69bc: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2e69bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2e69c0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e69c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e69c4: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x2e69c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e69c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e69c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e69cc: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2e69ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e69d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e69d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e69d4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2e69d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2e69d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e69d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e69dc: 0xc4420124  lwc1        $f2, 0x124($v0)
    ctx->pc = 0x2e69dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e69e0: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2e69e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x2e69e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e69e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e69e8: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x2e69e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e69ec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e69ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e69f0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2e69f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e69f4: 0x0  nop
    ctx->pc = 0x2e69f4u;
    // NOP
    // 0x2e69f8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2E69F8u;
    {
        const bool branch_taken_0x2e69f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e69f8) {
            ctx->pc = 0x2E6A18u;
            goto label_2e6a18;
        }
    }
    ctx->pc = 0x2E6A00u;
    // 0x2e6a00: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2e6a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x2e6a04: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e6a04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e6a08: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x2e6a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6a0c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e6a0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e6a10: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e6a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6a14: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2e6a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_2e6a18:
    // 0x2e6a18: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e6a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6a1c: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2e6a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2e6a20: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2e6a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2e6a24: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e6a24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e6a28: 0xc4601290  lwc1        $f0, 0x1290($v1)
    ctx->pc = 0x2e6a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6a2c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e6a2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e6a30: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x2e6a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
    // 0x2e6a34: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e6a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6a38: 0xc4411290  lwc1        $f1, 0x1290($v0)
    ctx->pc = 0x2e6a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6a3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e6a3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6a40: 0x0  nop
    ctx->pc = 0x2e6a40u;
    // NOP
    // 0x2e6a44: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e6a44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e6a48: 0x0  nop
    ctx->pc = 0x2e6a48u;
    // NOP
    // 0x2e6a4c: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x2E6A4Cu;
    {
        const bool branch_taken_0x2e6a4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e6a4c) {
            ctx->pc = 0x2E6A90u;
            goto label_2e6a90;
        }
    }
    ctx->pc = 0x2E6A54u;
    // 0x2e6a54: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e6a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6a58: 0xc4411290  lwc1        $f1, 0x1290($v0)
    ctx->pc = 0x2e6a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6a5c: 0x3c023bc9  lui         $v0, 0x3BC9
    ctx->pc = 0x2e6a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15305 << 16));
    // 0x2e6a60: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2e6a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2e6a64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e6a64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6a68: 0x0  nop
    ctx->pc = 0x2e6a68u;
    // NOP
    // 0x2e6a6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e6a6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e6a70: 0x0  nop
    ctx->pc = 0x2e6a70u;
    // NOP
    // 0x2e6a74: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x2E6A74u;
    {
        const bool branch_taken_0x2e6a74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e6a74) {
            ctx->pc = 0x2E6AC4u;
            goto label_2e6ac4;
        }
    }
    ctx->pc = 0x2E6A7Cu;
    // 0x2e6a7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e6a7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6a80: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e6a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6a84: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x2e6a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x2e6a88: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2E6A88u;
    {
        const bool branch_taken_0x2e6a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6a88) {
            ctx->pc = 0x2E6AC4u;
            goto label_2e6ac4;
        }
    }
    ctx->pc = 0x2E6A90u;
label_2e6a90:
    // 0x2e6a90: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e6a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6a94: 0xc4411290  lwc1        $f1, 0x1290($v0)
    ctx->pc = 0x2e6a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6a98: 0x3c02bbc9  lui         $v0, 0xBBC9
    ctx->pc = 0x2e6a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48073 << 16));
    // 0x2e6a9c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2e6a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2e6aa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e6aa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6aa4: 0x0  nop
    ctx->pc = 0x2e6aa4u;
    // NOP
    // 0x2e6aa8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e6aa8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e6aac: 0x0  nop
    ctx->pc = 0x2e6aacu;
    // NOP
    // 0x2e6ab0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2E6AB0u;
    {
        const bool branch_taken_0x2e6ab0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e6ab0) {
            ctx->pc = 0x2E6AC4u;
            goto label_2e6ac4;
        }
    }
    ctx->pc = 0x2E6AB8u;
    // 0x2e6ab8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e6ab8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6abc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e6abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6ac0: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x2e6ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
label_2e6ac4:
    // 0x2e6ac4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e6ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6ac8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2E6AC8u;
    SET_GPR_U32(ctx, 31, 0x2E6AD0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2E6AC8u, 0x2E6AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6AD0u;
label_2e6ad0:
    // 0x2e6ad0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e6ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6ad4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2e6ad4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2e6ad8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2E6AD8u;
    {
        const bool branch_taken_0x2e6ad8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6ad8) {
            ctx->pc = 0x2E6B18u;
            goto label_2e6b18;
        }
    }
    ctx->pc = 0x2E6AE0u;
    // 0x2e6ae0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e6ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6ae4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e6ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6ae8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e6ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e6aec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e6aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6af0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e6af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6af4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2e6af4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e6af8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e6af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6afc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e6afcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e6b00: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e6b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6b04: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e6b04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e6b08: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e6b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6b0c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e6b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e6b10: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2E6B10u;
    {
        const bool branch_taken_0x2e6b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6b10) {
            ctx->pc = 0x2E6B18u;
            goto label_2e6b18;
        }
    }
    ctx->pc = 0x2E6B18u;
label_2e6b18:
    // 0x2e6b18: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2e6b18u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e6b1c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2e6b1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e6b20: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E6B28u;
}
