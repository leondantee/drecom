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

// Function: entry_00208758
// Address: 0x208758 - 0x2087a0
void entry_00208758_0x208758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208758_0x208758");
#endif

    ctx->pc = 0x208758u;

    // 0x208758: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x208758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x20875c: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x20875cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x208760: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x208760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x208764: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x208764u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x208768: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x208768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x20876c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x20876cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208770: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x208770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x208774: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x208774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x208778: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20877c: 0x0  nop
    ctx->pc = 0x20877cu;
    // NOP
    // 0x208780: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x208780u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x208784: 0x0  nop
    ctx->pc = 0x208784u;
    // NOP
    // 0x208788: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x208788u;
    {
        const bool branch_taken_0x208788 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x208788) {
            ctx->pc = 0x2087A0u;
            return;
        }
    }
    ctx->pc = 0x208790u;
    // 0x208790: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x208790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x208794: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208798: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x208798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x20879c: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x20879cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    ctx->pc = 0x2087a0u;
}
