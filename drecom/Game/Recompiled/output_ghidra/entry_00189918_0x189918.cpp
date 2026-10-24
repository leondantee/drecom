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

// Function: entry_00189918
// Address: 0x189918 - 0x189a1c
void entry_00189918_0x189918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189918_0x189918");
#endif

    ctx->pc = 0x189918u;

    // 0x189918: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x189918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x18991c: 0x8c4200e8  lw          $v0, 0xE8($v0)
    ctx->pc = 0x18991cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x189920: 0x144000a5  bnez        $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x189920u;
    {
        const bool branch_taken_0x189920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x189920) {
            ctx->pc = 0x189BB8u;
            return;
        }
    }
    ctx->pc = 0x189928u;
    // 0x189928: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x189928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x18992c: 0xc44100e4  lwc1        $f1, 0xE4($v0)
    ctx->pc = 0x18992cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189930: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x189930u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189934: 0x0  nop
    ctx->pc = 0x189934u;
    // NOP
    // 0x189938: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x189938u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18993c: 0x0  nop
    ctx->pc = 0x18993cu;
    // NOP
    // 0x189940: 0x4501008a  bc1t        . + 4 + (0x8A << 2)
    ctx->pc = 0x189940u;
    {
        const bool branch_taken_0x189940 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x189940) {
            ctx->pc = 0x189B6Cu;
            return;
        }
    }
    ctx->pc = 0x189948u;
    // 0x189948: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x189948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x18994c: 0xc44000e4  lwc1        $f0, 0xE4($v0)
    ctx->pc = 0x18994cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189950: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x189950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x189954: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x189954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189958: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x189958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18995c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x18995cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189960: 0xc44000d8  lwc1        $f0, 0xD8($v0)
    ctx->pc = 0x189960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189964: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x189964u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x189968: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x189968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x18996c: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x18996cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189970: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x189970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x189974: 0xc44000d8  lwc1        $f0, 0xD8($v0)
    ctx->pc = 0x189974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189978: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x189978u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18997c: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x18997cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x189980: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x189980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189984: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x189984u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x189988: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x189988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x18998c: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x18998cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189990: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x189990u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189994: 0x0  nop
    ctx->pc = 0x189994u;
    // NOP
    // 0x189998: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x189998u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18999c: 0x0  nop
    ctx->pc = 0x18999cu;
    // NOP
    // 0x1899a0: 0x45000048  bc1f        . + 4 + (0x48 << 2)
    ctx->pc = 0x1899A0u;
    {
        const bool branch_taken_0x1899a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1899a0) {
            ctx->pc = 0x189AC4u;
            return;
        }
    }
    ctx->pc = 0x1899A8u;
    // 0x1899a8: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1899a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1899ac: 0xc44000e4  lwc1        $f0, 0xE4($v0)
    ctx->pc = 0x1899acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1899b0: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1899b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1899b4: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1899b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1899b8: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x1899b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1899bc: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1899bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1899c0: 0xc44000d8  lwc1        $f0, 0xD8($v0)
    ctx->pc = 0x1899c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1899c4: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x1899c4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1899c8: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1899c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1899cc: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x1899ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1899d0: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1899d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1899d4: 0xc44000d8  lwc1        $f0, 0xD8($v0)
    ctx->pc = 0x1899d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1899d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1899d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1899dc: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x1899dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1899e0: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x1899e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1899e4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1899e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1899e8: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1899e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1899ec: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x1899ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1899f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1899f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1899f4: 0x0  nop
    ctx->pc = 0x1899f4u;
    // NOP
    // 0x1899f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1899f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1899fc: 0x0  nop
    ctx->pc = 0x1899fcu;
    // NOP
    // 0x189a00: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x189A00u;
    {
        const bool branch_taken_0x189a00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x189a00) {
            ctx->pc = 0x189A1Cu;
            return;
        }
    }
    ctx->pc = 0x189A08u;
    // 0x189a08: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x189a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x189a0c: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x189a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189a10: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x189a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x189a14: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x189A14u;
    {
        const bool branch_taken_0x189a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189a14) {
            ctx->pc = 0x189BC4u;
            return;
        }
    }
    ctx->pc = 0x189A1Cu;
}
