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

// Function: entry_00194834
// Address: 0x194834 - 0x194944
void entry_00194834_0x194834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194834_0x194834");
#endif

    switch (ctx->pc) {
        case 0x194878u: goto label_194878;
        default: break;
    }

    ctx->pc = 0x194834u;

    // 0x194834: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x194834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194838: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x194838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19483c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x19483cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x194840: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x194840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x194844: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x194844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194848: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x194848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19484c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x19484cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x194850: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x194850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x194854: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x194854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194858: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x194858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19485c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x19485cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x194860: 0xc7a1010c  lwc1        $f1, 0x10C($sp)
    ctx->pc = 0x194860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194864: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x194864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194868: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x194868u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19486c: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x19486cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x194870: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x194870u;
    SET_GPR_U32(ctx, 31, 0x194878u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x194870u, 0x194878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194878u;
label_194878:
    // 0x194878: 0x92c20345  lbu         $v0, 0x345($s6)
    ctx->pc = 0x194878u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 837)));
    // 0x19487c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19487cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x194880: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x194880u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x194884: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x194884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x194888: 0xc7a2010c  lwc1        $f2, 0x10C($sp)
    ctx->pc = 0x194888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19488c: 0xc4410ac8  lwc1        $f1, 0xAC8($v0)
    ctx->pc = 0x19488cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194890: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x194890u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x194894: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x194894u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x194898: 0xc6e101b4  lwc1        $f1, 0x1B4($s7)
    ctx->pc = 0x194898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19489c: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x19489cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1948a0: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x1948a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1948a4: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x1948a4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1948a8: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1948a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x1948ac: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1948acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1948b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1948b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1948b4: 0x0  nop
    ctx->pc = 0x1948b4u;
    // NOP
    // 0x1948b8: 0x46020d02  mul.s       $f20, $f1, $f2
    ctx->pc = 0x1948b8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1948bc: 0x92c20345  lbu         $v0, 0x345($s6)
    ctx->pc = 0x1948bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 837)));
    // 0x1948c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1948c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1948c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1948c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1948c8: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1948c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1948cc: 0xc7a20108  lwc1        $f2, 0x108($sp)
    ctx->pc = 0x1948ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1948d0: 0xc4410ac8  lwc1        $f1, 0xAC8($v0)
    ctx->pc = 0x1948d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1948d4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1948d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1948d8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1948d8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1948dc: 0xc6e001b4  lwc1        $f0, 0x1B4($s7)
    ctx->pc = 0x1948dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1948e0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1948e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1948e4: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1948e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1948e8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1948e8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1948ec: 0x3c023eee  lui         $v0, 0x3EEE
    ctx->pc = 0x1948ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16110 << 16));
    // 0x1948f0: 0x3442eeef  ori         $v0, $v0, 0xEEEF
    ctx->pc = 0x1948f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61167);
    // 0x1948f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1948f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1948f8: 0x0  nop
    ctx->pc = 0x1948f8u;
    // NOP
    // 0x1948fc: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x1948fcu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x194900: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x194900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194904: 0x3c0244c7  lui         $v0, 0x44C7
    ctx->pc = 0x194904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17607 << 16));
    // 0x194908: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x194908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19490c: 0x0  nop
    ctx->pc = 0x19490cu;
    // NOP
    // 0x194910: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x194910u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x194914: 0x0  nop
    ctx->pc = 0x194914u;
    // NOP
    // 0x194918: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x194918u;
    {
        const bool branch_taken_0x194918 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x194918) {
            ctx->pc = 0x194944u;
            return;
        }
    }
    ctx->pc = 0x194920u;
    // 0x194920: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x194920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194924: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x194924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x194928: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x194928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x19492c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19492cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194930: 0x0  nop
    ctx->pc = 0x194930u;
    // NOP
    // 0x194934: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x194934u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x194938: 0x0  nop
    ctx->pc = 0x194938u;
    // NOP
    // 0x19493c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x19493Cu;
    {
        const bool branch_taken_0x19493c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19493c) {
            ctx->pc = 0x19494Cu;
            return;
        }
    }
    ctx->pc = 0x194944u;
}
