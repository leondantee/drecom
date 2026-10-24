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

// Function: entry_0023a368
// Address: 0x23a368 - 0x23a3b0
void entry_0023a368_0x23a368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023a368_0x23a368");
#endif

    ctx->pc = 0x23a368u;

    // 0x23a368: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a36c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23a36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23a370: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x23a370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a374: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x23a374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a378: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23a378u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a37c: 0x0  nop
    ctx->pc = 0x23a37cu;
    // NOP
    // 0x23a380: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x23A380u;
    {
        const bool branch_taken_0x23a380 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a380) {
            ctx->pc = 0x23A3B0u;
            return;
        }
    }
    ctx->pc = 0x23A388u;
    // 0x23a388: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x23a388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x23a38c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23a38cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23a390: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x23a390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a394: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x23a394u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x23a398: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x23a398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x23a39c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x23a39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x23a3a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a3a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a3a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23a3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a3a8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23a3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23a3ac: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23a3acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    ctx->pc = 0x23a3b0u;
}
