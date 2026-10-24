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

// Function: entry_001d8588
// Address: 0x1d8588 - 0x1d85d0
void entry_001d8588_0x1d8588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8588_0x1d8588");
#endif

    ctx->pc = 0x1d8588u;

    // 0x1d8588: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x1d8588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d858c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d858cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8590: 0x0  nop
    ctx->pc = 0x1d8590u;
    // NOP
    // 0x1d8594: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1d8594u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8598: 0x0  nop
    ctx->pc = 0x1d8598u;
    // NOP
    // 0x1d859c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1D859Cu;
    {
        const bool branch_taken_0x1d859c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d859c) {
            ctx->pc = 0x1D85D0u;
            return;
        }
    }
    ctx->pc = 0x1D85A4u;
    // 0x1d85a4: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1d85a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d85a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d85a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d85ac: 0x0  nop
    ctx->pc = 0x1d85acu;
    // NOP
    // 0x1d85b0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1d85b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d85b4: 0x0  nop
    ctx->pc = 0x1d85b4u;
    // NOP
    // 0x1d85b8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1D85B8u;
    {
        const bool branch_taken_0x1d85b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d85b8) {
            ctx->pc = 0x1D85D0u;
            return;
        }
    }
    ctx->pc = 0x1D85C0u;
    // 0x1d85c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d85c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d85c4: 0x0  nop
    ctx->pc = 0x1d85c4u;
    // NOP
    // 0x1d85c8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1d85c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1d85cc: 0x0  nop
    ctx->pc = 0x1d85ccu;
    // NOP
    ctx->pc = 0x1d85d0u;
}
