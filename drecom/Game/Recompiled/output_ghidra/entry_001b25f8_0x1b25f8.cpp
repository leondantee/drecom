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

// Function: entry_001b25f8
// Address: 0x1b25f8 - 0x1b277c
void entry_001b25f8_0x1b25f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b25f8_0x1b25f8");
#endif

    switch (ctx->pc) {
        case 0x1b2650u: goto label_1b2650;
        case 0x1b2664u: goto label_1b2664;
        case 0x1b268cu: goto label_1b268c;
        default: break;
    }

    ctx->pc = 0x1b25f8u;

    // 0x1b25f8: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1b25f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1b25fc: 0x12c00070  beqz        $s6, . + 4 + (0x70 << 2)
    ctx->pc = 0x1B25FCu;
    {
        const bool branch_taken_0x1b25fc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b25fc) {
            ctx->pc = 0x1B27C0u;
            return;
        }
    }
    ctx->pc = 0x1B2604u;
    // 0x1b2604: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x1b2604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x1b2608: 0x2821006  srlv        $v0, $v0, $s4
    ctx->pc = 0x1b2608u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x1b260c: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x1b260cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
    // 0x1b2610: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x1B2610u;
    {
        const bool branch_taken_0x1b2610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2610) {
            ctx->pc = 0x1B27A0u;
            return;
        }
    }
    ctx->pc = 0x1B2618u;
    // 0x1b2618: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x1b2618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x1b261c: 0x401027  not         $v0, $v0
    ctx->pc = 0x1b261cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    // 0x1b2620: 0x2c2b024  and         $s6, $s6, $v0
    ctx->pc = 0x1b2620u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
    // 0x1b2624: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1b2624u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b2628: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b2628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b262c: 0xafa2011c  sw          $v0, 0x11C($sp)
    ctx->pc = 0x1b262cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
    // 0x1b2630: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x1b2630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x1b2634: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1b2634u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1b2638: 0x8e420130  lw          $v0, 0x130($s2)
    ctx->pc = 0x1b2638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x1b263c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1b263cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b2640: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1b2640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1b2644: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x1b2644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1b2648: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1B2648u;
    SET_GPR_U32(ctx, 31, 0x1B2650u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1B2650u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B2650u) { return; }
    ctx->pc = 0x1B2650u;
label_1b2650:
    // 0x1b2650: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1b2650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1b2654: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1b2654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b2658: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1b2658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1b265c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1B265Cu;
    SET_GPR_U32(ctx, 31, 0x1B2664u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1B2664u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B2664u) { return; }
    ctx->pc = 0x1B2664u;
label_1b2664:
    // 0x1b2664: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x1b2664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2668: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b2668u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b266c: 0x0  nop
    ctx->pc = 0x1b266cu;
    // NOP
    // 0x1b2670: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b2670u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2674: 0x0  nop
    ctx->pc = 0x1b2674u;
    // NOP
    // 0x1b2678: 0x45010049  bc1t        . + 4 + (0x49 << 2)
    ctx->pc = 0x1B2678u;
    {
        const bool branch_taken_0x1b2678 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2678) {
            ctx->pc = 0x1B27A0u;
            return;
        }
    }
    ctx->pc = 0x1B2680u;
    // 0x1b2680: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1b2680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1b2684: 0xc067588  jal         func_19D620
    ctx->pc = 0x1B2684u;
    SET_GPR_U32(ctx, 31, 0x1B268Cu);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x1B2684u, 0x1B268Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B268Cu;
label_1b268c:
    // 0x1b268c: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x1b268cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2690: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b2690u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b2694: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x1b2694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x1b2698: 0xc7a10110  lwc1        $f1, 0x110($sp)
    ctx->pc = 0x1b2698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b269c: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x1b269cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b26a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b26a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b26a4: 0x0  nop
    ctx->pc = 0x1b26a4u;
    // NOP
    // 0x1b26a8: 0x4500003d  bc1f        . + 4 + (0x3D << 2)
    ctx->pc = 0x1B26A8u;
    {
        const bool branch_taken_0x1b26a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b26a8) {
            ctx->pc = 0x1B27A0u;
            return;
        }
    }
    ctx->pc = 0x1B26B0u;
    // 0x1b26b0: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b26b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b26b4: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1b26b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b26b8: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b26b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b26bc: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x1b26bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b26c0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1b26c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b26c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b26c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b26c8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1b26c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1b26cc: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x1b26ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x1b26d0: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x1b26d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b26d4: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x1b26d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b26d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b26d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b26dc: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1b26dcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x1b26e0: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x1b26e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b26e4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b26e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b26e8: 0x0  nop
    ctx->pc = 0x1b26e8u;
    // NOP
    // 0x1b26ec: 0x4501002c  bc1t        . + 4 + (0x2C << 2)
    ctx->pc = 0x1B26ECu;
    {
        const bool branch_taken_0x1b26ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b26ec) {
            ctx->pc = 0x1B27A0u;
            return;
        }
    }
    ctx->pc = 0x1B26F4u;
    // 0x1b26f4: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x1b26f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b26f8: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x1b26f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b26fc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b26fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b2700: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x1b2700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2704: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b2704u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2708: 0x0  nop
    ctx->pc = 0x1b2708u;
    // NOP
    // 0x1b270c: 0x45000024  bc1f        . + 4 + (0x24 << 2)
    ctx->pc = 0x1B270Cu;
    {
        const bool branch_taken_0x1b270c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b270c) {
            ctx->pc = 0x1B27A0u;
            return;
        }
    }
    ctx->pc = 0x1B2714u;
    // 0x1b2714: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1b2714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2718: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x1b2718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b271c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b271cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b2720: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x1b2720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2724: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b2724u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2728: 0x0  nop
    ctx->pc = 0x1b2728u;
    // NOP
    // 0x1b272c: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x1B272Cu;
    {
        const bool branch_taken_0x1b272c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b272c) {
            ctx->pc = 0x1B27A0u;
            return;
        }
    }
    ctx->pc = 0x1B2734u;
    // 0x1b2734: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1b2734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2738: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x1b2738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b273c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1b273cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b2740: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x1b2740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2744: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b2744u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2748: 0x0  nop
    ctx->pc = 0x1b2748u;
    // NOP
    // 0x1b274c: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x1B274Cu;
    {
        const bool branch_taken_0x1b274c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b274c) {
            ctx->pc = 0x1B27A0u;
            return;
        }
    }
    ctx->pc = 0x1B2754u;
    // 0x1b2754: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x1b2754u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x1b2758: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b2758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b275c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1b275cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1b2760: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B2760u;
    {
        const bool branch_taken_0x1b2760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2760) {
            ctx->pc = 0x1B277Cu;
            return;
        }
    }
    ctx->pc = 0x1B2768u;
    // 0x1b2768: 0x7280f628  paddub      $fp, $s4, $zero
    ctx->pc = 0x1b2768u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1b276c: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x1b276cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2770: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x1b2770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x1b2774: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1B2774u;
    {
        const bool branch_taken_0x1b2774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2774) {
            ctx->pc = 0x1B27C0u;
            return;
        }
    }
    ctx->pc = 0x1B277Cu;
}
