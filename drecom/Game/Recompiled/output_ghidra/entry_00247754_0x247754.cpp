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

// Function: entry_00247754
// Address: 0x247754 - 0x2477a0
void entry_00247754_0x247754(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00247754_0x247754");
#endif

    ctx->pc = 0x247754u;

    // 0x247754: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247758: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x247758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24775c: 0x3c02c20c  lui         $v0, 0xC20C
    ctx->pc = 0x24775cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49676 << 16));
    // 0x247760: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247760u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247764: 0x0  nop
    ctx->pc = 0x247764u;
    // NOP
    // 0x247768: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x247768u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24776c: 0x0  nop
    ctx->pc = 0x24776cu;
    // NOP
    // 0x247770: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x247770u;
    {
        const bool branch_taken_0x247770 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x247770) {
            ctx->pc = 0x2477A0u;
            return;
        }
    }
    ctx->pc = 0x247778u;
    // 0x247778: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x247778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x24777c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24777cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247780: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247784: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x247784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x247788: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x247788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x24778c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x24778cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x247790: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247794: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247798: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x247798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x24779c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x24779cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    ctx->pc = 0x2477a0u;
}
