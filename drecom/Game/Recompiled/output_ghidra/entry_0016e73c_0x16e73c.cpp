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

// Function: entry_0016e73c
// Address: 0x16e73c - 0x16e790
void entry_0016e73c_0x16e73c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e73c_0x16e73c");
#endif

    ctx->pc = 0x16e73cu;

    // 0x16e73c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16e73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16e740: 0x16230015  bne         $s1, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x16E740u;
    {
        const bool branch_taken_0x16e740 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x16e740) {
            ctx->pc = 0x16E798u;
            return;
        }
    }
    ctx->pc = 0x16E748u;
    // 0x16e748: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x16e748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16e74c: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x16e74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e750: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x16e750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e754: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x16e754u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x16e758: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x16e758u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x16e75c: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x16e75cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x16e760: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16e760u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16e764: 0x0  nop
    ctx->pc = 0x16e764u;
    // NOP
    // 0x16e768: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x16e768u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x16e76c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x16e76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x16e770: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16e770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16e774: 0xc421ab18  lwc1        $f1, -0x54E8($at)
    ctx->pc = 0x16e774u;
    { uint32_t bits = FAST_READ32(0x47AB18u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e778: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x16e778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e77c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16e77cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e780: 0x0  nop
    ctx->pc = 0x16e780u;
    // NOP
    // 0x16e784: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x16E784u;
    {
        const bool branch_taken_0x16e784 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e784) {
            ctx->pc = 0x16E798u;
            return;
        }
    }
    ctx->pc = 0x16E78Cu;
    // 0x16e78c: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x16e78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x16e790u;
}
