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

// Function: entry_001b0714
// Address: 0x1b0714 - 0x1b0748
void entry_001b0714_0x1b0714(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0714_0x1b0714");
#endif

    ctx->pc = 0x1b0714u;

    // 0x1b0714: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x1b0714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b0718: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b0718u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b071c: 0x0  nop
    ctx->pc = 0x1b071cu;
    // NOP
    // 0x1b0720: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b0720u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b0724: 0x0  nop
    ctx->pc = 0x1b0724u;
    // NOP
    // 0x1b0728: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x1B0728u;
    {
        const bool branch_taken_0x1b0728 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b0728) {
            ctx->pc = 0x1B07C4u;
            return;
        }
    }
    ctx->pc = 0x1B0730u;
    // 0x1b0730: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b0730u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0734: 0x0  nop
    ctx->pc = 0x1b0734u;
    // NOP
    // 0x1b0738: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1b0738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1b073c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1b073cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0740: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1B0740u;
    {
        const bool branch_taken_0x1b0740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0740) {
            ctx->pc = 0x1B07C4u;
            return;
        }
    }
    ctx->pc = 0x1B0748u;
}
