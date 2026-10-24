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

// Function: entry_0023c28c
// Address: 0x23c28c - 0x23c2d4
void entry_0023c28c_0x23c28c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023c28c_0x23c28c");
#endif

    ctx->pc = 0x23c28cu;

    // 0x23c28c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c290: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c294: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x23c294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c298: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x23c298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23c29c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23c29cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23c2a0: 0x0  nop
    ctx->pc = 0x23c2a0u;
    // NOP
    // 0x23c2a4: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x23C2A4u;
    {
        const bool branch_taken_0x23c2a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23c2a4) {
            ctx->pc = 0x23C2D4u;
            return;
        }
    }
    ctx->pc = 0x23C2ACu;
    // 0x23c2ac: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x23c2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x23c2b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23c2b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23c2b4: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x23c2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23c2b8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x23c2b8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x23c2bc: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x23c2bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x23c2c0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x23c2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x23c2c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23c2c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c2c8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c2cc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c2d0: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23c2d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    ctx->pc = 0x23c2d4u;
}
