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

// Function: entry_001dcc78
// Address: 0x1dcc78 - 0x1dcca8
void entry_001dcc78_0x1dcc78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dcc78_0x1dcc78");
#endif

    ctx->pc = 0x1dcc78u;

    // 0x1dcc78: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x1dcc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dcc7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dcc7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dcc80: 0x0  nop
    ctx->pc = 0x1dcc80u;
    // NOP
    // 0x1dcc84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dcc84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dcc88: 0x0  nop
    ctx->pc = 0x1dcc88u;
    // NOP
    // 0x1dcc8c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1DCC8Cu;
    {
        const bool branch_taken_0x1dcc8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dcc8c) {
            ctx->pc = 0x1DCCA8u;
            return;
        }
    }
    ctx->pc = 0x1DCC94u;
    // 0x1dcc94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dcc94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dcc98: 0x0  nop
    ctx->pc = 0x1dcc98u;
    // NOP
    // 0x1dcc9c: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x1dcc9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x1dcca0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DCCA0u;
    {
        const bool branch_taken_0x1dcca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dcca0) {
            ctx->pc = 0x1DCCB0u;
            return;
        }
    }
    ctx->pc = 0x1DCCA8u;
}
