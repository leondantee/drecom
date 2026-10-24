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

// Function: entry_00189e84
// Address: 0x189e84 - 0x189ec4
void entry_00189e84_0x189e84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189e84_0x189e84");
#endif

    ctx->pc = 0x189e84u;

    // 0x189e84: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x189e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189e88: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x189e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189e8c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x189e8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x189e90: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x189e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x189e94: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x189e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189e98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x189e98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189e9c: 0x0  nop
    ctx->pc = 0x189e9cu;
    // NOP
    // 0x189ea0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x189ea0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189ea4: 0x0  nop
    ctx->pc = 0x189ea4u;
    // NOP
    // 0x189ea8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x189EA8u;
    {
        const bool branch_taken_0x189ea8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x189ea8) {
            ctx->pc = 0x189EC4u;
            return;
        }
    }
    ctx->pc = 0x189EB0u;
    // 0x189eb0: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x189eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189eb4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x189eb4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x189eb8: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x189eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x189ebc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x189EBCu;
    {
        const bool branch_taken_0x189ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189ebc) {
            ctx->pc = 0x189ECCu;
            return;
        }
    }
    ctx->pc = 0x189EC4u;
}
