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

// Function: entry_00189770
// Address: 0x189770 - 0x1897c8
void entry_00189770_0x189770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189770_0x189770");
#endif

    ctx->pc = 0x189770u;

    // 0x189770: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x189770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189774: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x189774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189778: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x189778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18977c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18977cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x189780: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x189780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x189784: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x189784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189788: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x189788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18978c: 0xc44000e4  lwc1        $f0, 0xE4($v0)
    ctx->pc = 0x18978cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189790: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x189790u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x189794: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x189794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x189798: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x189798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18979c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18979cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1897a0: 0x0  nop
    ctx->pc = 0x1897a0u;
    // NOP
    // 0x1897a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1897a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1897a8: 0x0  nop
    ctx->pc = 0x1897a8u;
    // NOP
    // 0x1897ac: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1897ACu;
    {
        const bool branch_taken_0x1897ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1897ac) {
            ctx->pc = 0x1897C8u;
            return;
        }
    }
    ctx->pc = 0x1897B4u;
    // 0x1897b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1897b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1897b8: 0x0  nop
    ctx->pc = 0x1897b8u;
    // NOP
    // 0x1897bc: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1897bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1897c0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1897C0u;
    {
        const bool branch_taken_0x1897c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1897c0) {
            ctx->pc = 0x189808u;
            return;
        }
    }
    ctx->pc = 0x1897C8u;
}
