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

// Function: entry_00252820
// Address: 0x252820 - 0x252878
void entry_00252820_0x252820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00252820_0x252820");
#endif

    switch (ctx->pc) {
        case 0x252838u: goto label_252838;
        default: break;
    }

    ctx->pc = 0x252820u;

    // 0x252820: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x252820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x252824: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x252824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x252828: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x252828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x25282c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x25282cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x252830: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x252830u;
    SET_GPR_U32(ctx, 31, 0x252838u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x252838u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x252838u) { return; }
    ctx->pc = 0x252838u;
label_252838:
    // 0x252838: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x252838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25283c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x25283cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x252840: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x252840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x252844: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x252844u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x252848: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x252848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25284c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25284cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252850: 0x0  nop
    ctx->pc = 0x252850u;
    // NOP
    // 0x252854: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x252854u;
    {
        const bool branch_taken_0x252854 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x252854) {
            ctx->pc = 0x252878u;
            return;
        }
    }
    ctx->pc = 0x25285Cu;
    // 0x25285c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x25285cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x252860: 0xc421fd70  lwc1        $f1, -0x290($at)
    ctx->pc = 0x252860u;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252864: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x252864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252868: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x252868u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25286c: 0x0  nop
    ctx->pc = 0x25286cu;
    // NOP
    // 0x252870: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x252870u;
    {
        const bool branch_taken_0x252870 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x252870) {
            ctx->pc = 0x252880u;
            return;
        }
    }
    ctx->pc = 0x252878u;
}
