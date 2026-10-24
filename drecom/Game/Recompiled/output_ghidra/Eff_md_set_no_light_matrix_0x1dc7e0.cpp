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

// Function: Eff_md_set_no_light_matrix
// Address: 0x1dc7e0 - 0x1dcbc0
void Eff_md_set_no_light_matrix_0x1dc7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Eff_md_set_no_light_matrix_0x1dc7e0");
#endif

    switch (ctx->pc) {
        case 0x1dc858u: goto label_1dc858;
        case 0x1dc87cu: goto label_1dc87c;
        case 0x1dc964u: goto label_1dc964;
        case 0x1dc97cu: goto label_1dc97c;
        case 0x1dc9d4u: goto label_1dc9d4;
        case 0x1dca4cu: goto label_1dca4c;
        case 0x1dcae0u: goto label_1dcae0;
        case 0x1dcb74u: goto label_1dcb74;
        case 0x1dcb90u: goto label_1dcb90;
        default: break;
    }

    ctx->pc = 0x1dc7e0u;

    // 0x1dc7e0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1dc7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x1dc7e4: 0x7fbf0080  sq          $ra, 0x80($sp)
    ctx->pc = 0x1dc7e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 31));
    // 0x1dc7e8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1dc7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1dc7ec: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1dc7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1dc7f0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1dc7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1dc7f4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1dc7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1dc7f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1dc7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1dc7fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dc7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dc800: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dc800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dc804: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dc804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1dc808: 0xafa400f8  sw          $a0, 0xF8($sp)
    ctx->pc = 0x1dc808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 4));
    // 0x1dc80c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1dc80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1dc810: 0x8c56005c  lw          $s6, 0x5C($v0)
    ctx->pc = 0x1dc810u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1dc814: 0x26d40008  addiu       $s4, $s6, 0x8
    ctx->pc = 0x1dc814u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x1dc818: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x1dc818u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1dc81c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1dc81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dc820: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1dc820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dc824: 0x282a821  addu        $s5, $s4, $v0
    ctx->pc = 0x1dc824u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1dc828: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dc828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1dc82c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dc82cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc830: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1dc830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1dc834: 0xe440012c  swc1        $f0, 0x12C($v0)
    ctx->pc = 0x1dc834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 300), bits); }
    // 0x1dc838: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1dc838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1dc83c: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1dc83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1dc840: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1dc840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1dc844: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1dc844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1dc848: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x1dc848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x1dc84c: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x1dc84cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1dc850: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1DC850u;
    SET_GPR_U32(ctx, 31, 0x1DC858u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1DC858u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1DC858u) { return; }
    ctx->pc = 0x1DC858u;
label_1dc858:
    // 0x1dc858: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1dc858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1dc85c: 0x9442000c  lhu         $v0, 0xC($v0)
    ctx->pc = 0x1dc85cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1dc860: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1dc860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1dc864: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1dc864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1dc868: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DC868u;
    {
        const bool branch_taken_0x1dc868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc868) {
            ctx->pc = 0x1DC884u;
            goto label_1dc884;
        }
    }
    ctx->pc = 0x1DC870u;
    // 0x1dc870: 0xc7ac009c  lwc1        $f12, 0x9C($sp)
    ctx->pc = 0x1dc870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dc874: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x1DC874u;
    SET_GPR_U32(ctx, 31, 0x1DC87Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x1DC874u, 0x1DC87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC87Cu;
label_1dc87c:
    // 0x1dc87c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1dc87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1dc880: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x1dc880u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_1dc884:
    // 0x1dc884: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x1dc884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc888: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dc888u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc88c: 0x0  nop
    ctx->pc = 0x1dc88cu;
    // NOP
    // 0x1dc890: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dc890u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dc894: 0x0  nop
    ctx->pc = 0x1dc894u;
    // NOP
    // 0x1dc898: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1DC898u;
    {
        const bool branch_taken_0x1dc898 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dc898) {
            ctx->pc = 0x1DC8B4u;
            goto label_1dc8b4;
        }
    }
    ctx->pc = 0x1DC8A0u;
    // 0x1dc8a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dc8a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc8a4: 0x0  nop
    ctx->pc = 0x1dc8a4u;
    // NOP
    // 0x1dc8a8: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1dc8a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x1dc8ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DC8ACu;
    {
        const bool branch_taken_0x1dc8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc8ac) {
            ctx->pc = 0x1DC8BCu;
            goto label_1dc8bc;
        }
    }
    ctx->pc = 0x1DC8B4u;
label_1dc8b4:
    // 0x1dc8b4: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x1dc8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc8b8: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1dc8b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_1dc8bc:
    // 0x1dc8bc: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x1dc8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc8c0: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1dc8c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1dc8c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dc8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1dc8c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dc8c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dc8cc: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x1dc8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc8d0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1dc8d0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1dc8d4: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x1dc8d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x1dc8d8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1dc8d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1dc8dc: 0xc420bd3c  lwc1        $f0, -0x42C4($at)
    ctx->pc = 0x1dc8dcu;
    { uint32_t bits = FAST_READ32(0x47BD3Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc8e0: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1dc8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1dc8e4: 0xc7a200e0  lwc1        $f2, 0xE0($sp)
    ctx->pc = 0x1dc8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc8e8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1dc8e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1dc8ec: 0xc421bd4c  lwc1        $f1, -0x42B4($at)
    ctx->pc = 0x1dc8ecu;
    { uint32_t bits = FAST_READ32(0x47BD4Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc8f0: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x1dc8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc8f4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1dc8f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1dc8f8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1dc8f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1dc8fc: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1dc8fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1dc900: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x1dc900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc904: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dc904u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc908: 0x0  nop
    ctx->pc = 0x1dc908u;
    // NOP
    // 0x1dc90c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dc90cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dc910: 0x0  nop
    ctx->pc = 0x1dc910u;
    // NOP
    // 0x1dc914: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1DC914u;
    {
        const bool branch_taken_0x1dc914 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dc914) {
            ctx->pc = 0x1DC928u;
            goto label_1dc928;
        }
    }
    ctx->pc = 0x1DC91Cu;
    // 0x1dc91c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dc91cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc920: 0x0  nop
    ctx->pc = 0x1dc920u;
    // NOP
    // 0x1dc924: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1dc924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1dc928:
    // 0x1dc928: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x1dc928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc92c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1dc92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x1dc930: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dc930u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc934: 0x0  nop
    ctx->pc = 0x1dc934u;
    // NOP
    // 0x1dc938: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1dc938u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dc93c: 0x0  nop
    ctx->pc = 0x1dc93cu;
    // NOP
    // 0x1dc940: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1DC940u;
    {
        const bool branch_taken_0x1dc940 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dc940) {
            ctx->pc = 0x1DC958u;
            goto label_1dc958;
        }
    }
    ctx->pc = 0x1DC948u;
    // 0x1dc948: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1dc948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x1dc94c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dc94cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc950: 0x0  nop
    ctx->pc = 0x1dc950u;
    // NOP
    // 0x1dc954: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1dc954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1dc958:
    // 0x1dc958: 0xc7ac00e0  lwc1        $f12, 0xE0($sp)
    ctx->pc = 0x1dc958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dc95c: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x1DC95Cu;
    SET_GPR_U32(ctx, 31, 0x1DC964u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x1DC95Cu, 0x1DC964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC964u;
label_1dc964:
    // 0x1dc964: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x1dc964u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1dc968: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x1dc968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1dc96c: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x1dc96cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1dc970: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1dc970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1dc974: 0x8c510058  lw          $s1, 0x58($v0)
    ctx->pc = 0x1dc974u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1dc978: 0x0  nop
    ctx->pc = 0x1dc978u;
    // NOP
label_1dc97c:
    // 0x1dc97c: 0x3262ffff  andi        $v0, $s3, 0xFFFF
    ctx->pc = 0x1dc97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x1dc980: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x1dc980u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
    // 0x1dc984: 0x26310090  addiu       $s1, $s1, 0x90
    ctx->pc = 0x1dc984u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x1dc988: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x1dc988u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x1dc98c: 0x295102b  sltu        $v0, $s4, $s5
    ctx->pc = 0x1dc98cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x1dc990: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DC990u;
    {
        const bool branch_taken_0x1dc990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc990) {
            ctx->pc = 0x1DC97Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dc97c;
        }
    }
    ctx->pc = 0x1DC998u;
    // 0x1dc998: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x1dc998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1dc99c: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x1dc99cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1dc9a0: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x1dc9a0u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x1dc9a4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1dc9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1dc9a8: 0x2442c930  addiu       $v0, $v0, -0x36D0
    ctx->pc = 0x1dc9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953264));
    // 0x1dc9ac: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1dc9acu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x47C930u));
    // 0x1dc9b0: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x1dc9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1dc9b4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1dc9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1dc9b8: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1dc9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1dc9bc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1dc9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1dc9c0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1dc9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1dc9c4: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x1dc9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1dc9c8: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1dc9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1dc9cc: 0xc040c80  jal         func_103200
    ctx->pc = 0x1DC9CCu;
    SET_GPR_U32(ctx, 31, 0x1DC9D4u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x1DC9D4u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1DC9D4u) { return; }
    ctx->pc = 0x1DC9D4u;
label_1dc9d4:
    // 0x1dc9d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dc9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1dc9d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dc9d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc9dc: 0x0  nop
    ctx->pc = 0x1dc9dcu;
    // NOP
    // 0x1dc9e0: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1dc9e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1dc9e4: 0x121c3c  dsll32      $v1, $s2, 16
    ctx->pc = 0x1dc9e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 16));
    // 0x1dc9e8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1dc9e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1dc9ec: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1dc9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1dc9f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dc9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc9f4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1dc9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dc9f8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1dc9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1dc9fc: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1dc9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1dca00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dca00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dca04: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1dca04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1dca08: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1dca08u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dca0c: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x1dca0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1dca10: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1dca10u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1dca14: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dca14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1dca18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dca18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dca1c: 0x0  nop
    ctx->pc = 0x1dca1cu;
    // NOP
    // 0x1dca20: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x1dca20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x1dca24: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x1dca24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1dca28: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x1dca28u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1dca2c: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x1dca2cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x1dca30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dca30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dca34: 0x0  nop
    ctx->pc = 0x1dca34u;
    // NOP
    // 0x1dca38: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x1dca38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x1dca3c: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x1dca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1dca40: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x1dca40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1dca44: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1DCA44u;
    {
        const bool branch_taken_0x1dca44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dca44) {
            ctx->pc = 0x1DCB20u;
            goto label_1dcb20;
        }
    }
    ctx->pc = 0x1DCA4Cu;
label_1dca4c:
    // 0x1dca4c: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x1dca4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1dca50: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1dca50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1dca54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dca54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dca58: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1dca58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dca5c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1dca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1dca60: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1dca60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1dca64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dca64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dca68: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1dca68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1dca6c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1dca6cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dca70: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x1dca70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1dca74: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1dca74u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1dca78: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x1dca78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1dca7c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1dca7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1dca80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dca80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dca84: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1dca84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dca88: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1dca88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1dca8c: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1dca8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1dca90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dca90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dca94: 0xc440008c  lwc1        $f0, 0x8C($v0)
    ctx->pc = 0x1dca94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dca98: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1dca98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1dca9c: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x1dca9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1dcaa0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1dcaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1dcaa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dcaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dcaa8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1dcaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dcaac: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1dcaacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1dcab0: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1dcab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1dcab4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dcab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dcab8: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x1dcab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1dcabc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dcabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1dcac0: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DCAC0u;
    {
        const bool branch_taken_0x1dcac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dcac0) {
            ctx->pc = 0x1DCB18u;
            goto label_1dcb18;
        }
    }
    ctx->pc = 0x1DCAC8u;
    // 0x1dcac8: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1dcac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1dcacc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1dcaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1dcad0: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x1dcad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1dcad4: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1dcad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1dcad8: 0xc05da44  jal         func_176910
    ctx->pc = 0x1DCAD8u;
    SET_GPR_U32(ctx, 31, 0x1DCAE0u);
    ctx->pc = 0x176910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176910u, 0x1DCAD8u, 0x1DCAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCAE0u;
label_1dcae0:
    // 0x1dcae0: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x1dcae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x1dcae4: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x1dcae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dcae8: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x1dcae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcaec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dcaecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dcaf0: 0x0  nop
    ctx->pc = 0x1dcaf0u;
    // NOP
    // 0x1dcaf4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1DCAF4u;
    {
        const bool branch_taken_0x1dcaf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dcaf4) {
            ctx->pc = 0x1DCB18u;
            goto label_1dcb18;
        }
    }
    ctx->pc = 0x1DCAFCu;
    // 0x1dcafc: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x1dcafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcb00: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x1dcb00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x1dcb04: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1dcb04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1dcb08: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1dcb08u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1dcb0c: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x1dcb0cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1dcb10: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x1dcb10u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x1dcb14: 0x0  nop
    ctx->pc = 0x1dcb14u;
    // NOP
label_1dcb18:
    // 0x1dcb18: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1dcb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1dcb1c: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x1dcb1cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1dcb20:
    // 0x1dcb20: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x1dcb20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1dcb24: 0x2842003a  slti        $v0, $v0, 0x3A
    ctx->pc = 0x1dcb24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x1dcb28: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x1DCB28u;
    {
        const bool branch_taken_0x1dcb28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dcb28) {
            ctx->pc = 0x1DCA4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dca4c;
        }
    }
    ctx->pc = 0x1DCB30u;
    // 0x1dcb30: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x1dcb30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1dcb34: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1dcb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1dcb38: 0xa0430013  sb          $v1, 0x13($v0)
    ctx->pc = 0x1dcb38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 19), (uint8_t)GPR_U32(ctx, 3));
    // 0x1dcb3c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1dcb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1dcb40: 0x8c510058  lw          $s1, 0x58($v0)
    ctx->pc = 0x1dcb40u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1dcb44: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dcb44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dcb48: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1dcb48u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dcb4c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1dcb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dcb50: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1dcb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1dcb54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dcb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dcb58: 0x8c570064  lw          $s7, 0x64($v0)
    ctx->pc = 0x1dcb58u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1dcb5c: 0x26e40070  addiu       $a0, $s7, 0x70
    ctx->pc = 0x1dcb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 112));
    // 0x1dcb60: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1dcb60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1dcb64: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1dcb64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1dcb68: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x1dcb68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1dcb6c: 0xc040dac  jal         func_1036B0
    ctx->pc = 0x1DCB6Cu;
    SET_GPR_U32(ctx, 31, 0x1DCB74u);
    ctx->pc = 0x1036B0u;
    {
        ctx->pc = 0x1DCB74u;
        ps2_stubs::sceVu0NormalLightMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1DCB74u) { return; }
    ctx->pc = 0x1DCB74u;
label_1dcb74:
    // 0x1dcb74: 0x26280070  addiu       $t0, $s1, 0x70
    ctx->pc = 0x1dcb74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x1dcb78: 0x26e40030  addiu       $a0, $s7, 0x30
    ctx->pc = 0x1dcb78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 48));
    // 0x1dcb7c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1dcb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1dcb80: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1dcb80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1dcb84: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x1dcb84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1dcb88: 0xc040ddc  jal         func_103770
    ctx->pc = 0x1DCB88u;
    SET_GPR_U32(ctx, 31, 0x1DCB90u);
    ctx->pc = 0x103770u;
    {
        ctx->pc = 0x1DCB90u;
        ps2_stubs::sceVu0LightColorMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1DCB90u) { return; }
    ctx->pc = 0x1DCB90u;
label_1dcb90:
    // 0x1dcb90: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x1dcb90u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1dcb94: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1dcb94u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1dcb98: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1dcb98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1dcb9c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1dcb9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dcba0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1dcba0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dcba4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1dcba4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dcba8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dcba8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dcbac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dcbacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dcbb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dcbb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dcbb4: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x1dcbb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1dcbb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCBB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCBB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCBC0u;
}
