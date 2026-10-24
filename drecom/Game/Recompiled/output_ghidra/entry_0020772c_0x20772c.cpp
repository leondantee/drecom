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

// Function: entry_0020772c
// Address: 0x20772c - 0x20776c
void entry_0020772c_0x20772c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020772c_0x20772c");
#endif

    ctx->pc = 0x20772cu;

    // 0x20772c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x20772cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207730: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x207730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x207734: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x207734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x207738: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x207738u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20773c: 0x0  nop
    ctx->pc = 0x20773cu;
    // NOP
    // 0x207740: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x207740u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x207744: 0x0  nop
    ctx->pc = 0x207744u;
    // NOP
    // 0x207748: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x207748u;
    {
        const bool branch_taken_0x207748 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x207748) {
            ctx->pc = 0x20776Cu;
            return;
        }
    }
    ctx->pc = 0x207750u;
    // 0x207750: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x207750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207754: 0xc4a10188  lwc1        $f1, 0x188($a1)
    ctx->pc = 0x207754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x207758: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x207758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x20775c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20775cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207760: 0x0  nop
    ctx->pc = 0x207760u;
    // NOP
    // 0x207764: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x207764u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x207768: 0xe4a00188  swc1        $f0, 0x188($a1)
    ctx->pc = 0x207768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 392), bits); }
    ctx->pc = 0x20776cu;
}
