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

// Function: entry_002ce6c8
// Address: 0x2ce6c8 - 0x2ce838
void entry_002ce6c8_0x2ce6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ce6c8_0x2ce6c8");
#endif

    switch (ctx->pc) {
        case 0x2ce6d4u: goto label_2ce6d4;
        case 0x2ce6f8u: goto label_2ce6f8;
        case 0x2ce724u: goto label_2ce724;
        case 0x2ce744u: goto label_2ce744;
        case 0x2ce75cu: goto label_2ce75c;
        case 0x2ce7e4u: goto label_2ce7e4;
        default: break;
    }

    ctx->pc = 0x2ce6c8u;

    // 0x2ce6c8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2ce6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ce6cc: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x2CE6CCu;
    SET_GPR_U32(ctx, 31, 0x2CE6D4u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x2CE6D4u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2CE6D4u) { return; }
    ctx->pc = 0x2CE6D4u;
label_2ce6d4:
    // 0x2ce6d4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ce6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ce6d8: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x2ce6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce6dc: 0x3c023e8e  lui         $v0, 0x3E8E
    ctx->pc = 0x2ce6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16014 << 16));
    // 0x2ce6e0: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2ce6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2ce6e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ce6e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ce6e8: 0x0  nop
    ctx->pc = 0x2ce6e8u;
    // NOP
    // 0x2ce6ec: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2ce6ecu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ce6f0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2CE6F0u;
    SET_GPR_U32(ctx, 31, 0x2CE6F8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2CE6F0u, 0x2CE6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE6F8u;
label_2ce6f8:
    // 0x2ce6f8: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ce6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ce6fc: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x2ce6fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x2ce700: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ce700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ce704: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x2ce704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce708: 0x3c023e0e  lui         $v0, 0x3E0E
    ctx->pc = 0x2ce708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15886 << 16));
    // 0x2ce70c: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2ce70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2ce710: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ce710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ce714: 0x0  nop
    ctx->pc = 0x2ce714u;
    // NOP
    // 0x2ce718: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2ce718u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ce71c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2CE71Cu;
    SET_GPR_U32(ctx, 31, 0x2CE724u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2CE71Cu, 0x2CE724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE724u;
label_2ce724:
    // 0x2ce724: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ce724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ce728: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x2ce728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x2ce72c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ce72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ce730: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2ce730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ce734: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2ce734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ce738: 0xc44c0018  lwc1        $f12, 0x18($v0)
    ctx->pc = 0x2ce738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ce73c: 0xc040d0e  jal         func_103438
    ctx->pc = 0x2CE73Cu;
    SET_GPR_U32(ctx, 31, 0x2CE744u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x2CE744u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2CE744u) { return; }
    ctx->pc = 0x2CE744u;
label_2ce744:
    // 0x2ce744: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ce744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ce748: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2ce748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ce74c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2ce74cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ce750: 0xc44c001c  lwc1        $f12, 0x1C($v0)
    ctx->pc = 0x2ce750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ce754: 0xc040ce4  jal         func_103390
    ctx->pc = 0x2CE754u;
    SET_GPR_U32(ctx, 31, 0x2CE75Cu);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x2CE75Cu;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2CE75Cu) { return; }
    ctx->pc = 0x2CE75Cu;
label_2ce75c:
    // 0x2ce75c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ce75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ce760: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2ce760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce764: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x2ce764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce768: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ce768u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ce76c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2ce76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2ce770: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ce770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ce774: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2ce774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce778: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x2ce778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce77c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ce77cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ce780: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x2ce780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x2ce784: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ce784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ce788: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x2ce788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce78c: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x2ce78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce790: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ce790u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ce794: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2ce794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2ce798: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2ce798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ce79c: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2ce79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2ce7a0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2ce7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2ce7a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ce7a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ce7a8: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2ce7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce7ac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ce7acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ce7b0: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2ce7b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2ce7b4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2ce7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ce7b8: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2ce7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2ce7bc: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2ce7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2ce7c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ce7c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ce7c4: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x2ce7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce7c8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ce7c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ce7cc: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x2ce7ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x2ce7d0: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x2ce7d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x2ce7d4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x2ce7d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2ce7d8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2ce7d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ce7dc: 0xc040c00  jal         func_103000
    ctx->pc = 0x2CE7DCu;
    SET_GPR_U32(ctx, 31, 0x2CE7E4u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x2CE7E4u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2CE7E4u) { return; }
    ctx->pc = 0x2CE7E4u;
label_2ce7e4:
    // 0x2ce7e4: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2ce7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ce7e8: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x2ce7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce7ec: 0x3c034039  lui         $v1, 0x4039
    ctx->pc = 0x2ce7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16441 << 16));
    // 0x2ce7f0: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2ce7f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2ce7f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ce7f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ce7f8: 0x0  nop
    ctx->pc = 0x2ce7f8u;
    // NOP
    // 0x2ce7fc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2ce7fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2ce800: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2ce800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2ce804: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x2ce804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce808: 0x3c03c743  lui         $v1, 0xC743
    ctx->pc = 0x2ce808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51011 << 16));
    // 0x2ce80c: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x2ce80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x2ce810: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ce810u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ce814: 0x0  nop
    ctx->pc = 0x2ce814u;
    // NOP
    // 0x2ce818: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ce818u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ce81c: 0x0  nop
    ctx->pc = 0x2ce81cu;
    // NOP
    // 0x2ce820: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2CE820u;
    {
        const bool branch_taken_0x2ce820 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ce820) {
            ctx->pc = 0x2CE838u;
            return;
        }
    }
    ctx->pc = 0x2CE828u;
    // 0x2ce828: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2ce828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ce82c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2ce82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ce830: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2ce830u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ce834: 0x0  nop
    ctx->pc = 0x2ce834u;
    // NOP
    ctx->pc = 0x2ce838u;
}
