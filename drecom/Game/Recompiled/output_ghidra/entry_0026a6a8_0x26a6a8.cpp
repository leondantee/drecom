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

// Function: entry_0026a6a8
// Address: 0x26a6a8 - 0x26a804
void entry_0026a6a8_0x26a6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026a6a8_0x26a6a8");
#endif

    switch (ctx->pc) {
        case 0x26a710u: goto label_26a710;
        case 0x26a724u: goto label_26a724;
        case 0x26a738u: goto label_26a738;
        case 0x26a744u: goto label_26a744;
        case 0x26a754u: goto label_26a754;
        case 0x26a784u: goto label_26a784;
        case 0x26a7dcu: goto label_26a7dc;
        default: break;
    }

    ctx->pc = 0x26a6a8u;

    // 0x26a6a8: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x26a6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a6ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26a6acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26a6b0: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x26a6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x26a6b4: 0xe4400190  swc1        $f0, 0x190($v0)
    ctx->pc = 0x26a6b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 400), bits); }
    // 0x26a6b8: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x26a6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a6bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26a6bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26a6c0: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x26a6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x26a6c4: 0xe4400194  swc1        $f0, 0x194($v0)
    ctx->pc = 0x26a6c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 404), bits); }
    // 0x26a6c8: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x26a6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a6cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26a6ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26a6d0: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x26a6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x26a6d4: 0xe4400198  swc1        $f0, 0x198($v0)
    ctx->pc = 0x26a6d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 408), bits); }
    // 0x26a6d8: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x26a6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a6dc: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x26a6dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x26a6e0: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x26a6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a6e4: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x26a6e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x26a6e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26a6e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a6ec: 0x0  nop
    ctx->pc = 0x26a6ecu;
    // NOP
    // 0x26a6f0: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x26a6f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x26a6f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x26a6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x26a6f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a6f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a6fc: 0x0  nop
    ctx->pc = 0x26a6fcu;
    // NOP
    // 0x26a700: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x26a700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x26a704: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x26a704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26a708: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x26A708u;
    SET_GPR_U32(ctx, 31, 0x26A710u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x26A710u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26A710u) { return; }
    ctx->pc = 0x26A710u;
label_26a710:
    // 0x26a710: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x26a710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26a714: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x26a714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26a718: 0xc60c0014  lwc1        $f12, 0x14($s0)
    ctx->pc = 0x26a718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26a71c: 0xc040d0e  jal         func_103438
    ctx->pc = 0x26A71Cu;
    SET_GPR_U32(ctx, 31, 0x26A724u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x26A724u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26A724u) { return; }
    ctx->pc = 0x26A724u;
label_26a724:
    // 0x26a724: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x26a724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26a728: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x26a728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26a72c: 0xc60c0018  lwc1        $f12, 0x18($s0)
    ctx->pc = 0x26a72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26a730: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x26A730u;
    SET_GPR_U32(ctx, 31, 0x26A738u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x26A738u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26A738u) { return; }
    ctx->pc = 0x26A738u;
label_26a738:
    // 0x26a738: 0xc60c0018  lwc1        $f12, 0x18($s0)
    ctx->pc = 0x26a738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26a73c: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x26A73Cu;
    SET_GPR_U32(ctx, 31, 0x26A744u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x26A73Cu, 0x26A744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A744u;
label_26a744:
    // 0x26a744: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x26a744u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26a748: 0xc60c0014  lwc1        $f12, 0x14($s0)
    ctx->pc = 0x26a748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26a74c: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x26A74Cu;
    SET_GPR_U32(ctx, 31, 0x26A754u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x26A74Cu, 0x26A754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A754u;
label_26a754:
    // 0x26a754: 0x24030808  addiu       $v1, $zero, 0x808
    ctx->pc = 0x26a754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x26a758: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x26a758u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x26a75c: 0x3403ff00  ori         $v1, $zero, 0xFF00
    ctx->pc = 0x26a75cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x26a760: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x26a760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x26a764: 0x34630a0a  ori         $v1, $v1, 0xA0A
    ctx->pc = 0x26a764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2570);
    // 0x26a768: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x26a768u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x26a76c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x26a76cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x26a770: 0x24651470  addiu       $a1, $v1, 0x1470
    ctx->pc = 0x26a770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 5232));
    // 0x26a774: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x26a774u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x26a778: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x26a778u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26a77c: 0xc059b14  jal         func_166C50
    ctx->pc = 0x26A77Cu;
    SET_GPR_U32(ctx, 31, 0x26A784u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x26A77Cu, 0x26A784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A784u;
label_26a784:
    // 0x26a784: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x26a784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a788: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x26a788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a78c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26a78cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26a790: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26a790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26a794: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x26a794u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x26a798: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x26a798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x26a79c: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x26a79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a7a0: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x26a7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a7a4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26a7a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26a7a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26a7a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26a7ac: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x26a7acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x26a7b0: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x26a7b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
    // 0x26a7b4: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x26a7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a7b8: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x26a7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a7bc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26a7bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26a7c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26a7c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26a7c4: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x26a7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x26a7c8: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x26a7c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
    // 0x26a7cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26a7ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26a7d0: 0x8c240af0  lw          $a0, 0xAF0($at)
    ctx->pc = 0x26a7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x26a7d4: 0xc056518  jal         func_159460
    ctx->pc = 0x26A7D4u;
    SET_GPR_U32(ctx, 31, 0x26A7DCu);
    ctx->pc = 0x159460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159460u, 0x26A7D4u, 0x26A7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A7DCu;
label_26a7dc:
    // 0x26a7dc: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x26a7dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x26a7e0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x26a7e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x26a7e4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x26a7e4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x26a7e8: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26A7E8u;
    {
        const bool branch_taken_0x26a7e8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x26a7e8) {
            ctx->pc = 0x26A804u;
            return;
        }
    }
    ctx->pc = 0x26A7F0u;
    // 0x26a7f0: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x26a7f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x26a7f4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26a7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26a7f8: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x26a7f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x26a7fc: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x26A7FCu;
    {
        const bool branch_taken_0x26a7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a7fc) {
            ctx->pc = 0x26A8C4u;
            return;
        }
    }
    ctx->pc = 0x26A804u;
}
