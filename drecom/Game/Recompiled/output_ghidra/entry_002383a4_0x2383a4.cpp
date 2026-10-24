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

// Function: entry_002383a4
// Address: 0x2383a4 - 0x238428
void entry_002383a4_0x2383a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002383a4_0x2383a4");
#endif

    ctx->pc = 0x2383a4u;

    // 0x2383a4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2383a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2383a8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2383a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2383ac: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x2383acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2383b0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2383b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2383b4: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x2383b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2383b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2383b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2383bc: 0x0  nop
    ctx->pc = 0x2383bcu;
    // NOP
    // 0x2383c0: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x2383C0u;
    {
        const bool branch_taken_0x2383c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2383c0) {
            ctx->pc = 0x238428u;
            return;
        }
    }
    ctx->pc = 0x2383C8u;
    // 0x2383c8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2383c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2383cc: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2383ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2383d0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2383d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2383d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2383d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2383d8: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x2383d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2383dc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2383dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2383e0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2383e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2383e4: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x2383e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2383e8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2383e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2383ec: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2383ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2383f0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2383f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2383f4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2383f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2383f8: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x2383f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2383fc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2383fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x238400: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x238400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238404: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x238404u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x238408: 0x0  nop
    ctx->pc = 0x238408u;
    // NOP
    // 0x23840c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x23840Cu;
    {
        const bool branch_taken_0x23840c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23840c) {
            ctx->pc = 0x238428u;
            return;
        }
    }
    ctx->pc = 0x238414u;
    // 0x238414: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x238418: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23841c: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x23841cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238420: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x238424: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x238424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    ctx->pc = 0x238428u;
}
