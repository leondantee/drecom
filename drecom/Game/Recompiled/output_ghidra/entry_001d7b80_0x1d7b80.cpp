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

// Function: entry_001d7b80
// Address: 0x1d7b80 - 0x1d7bd0
void entry_001d7b80_0x1d7b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7b80_0x1d7b80");
#endif

    ctx->pc = 0x1d7b80u;

    // 0x1d7b80: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d7b80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d7b84: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1d7b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7b88: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1d7b88u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d7b8c: 0x0  nop
    ctx->pc = 0x1d7b8cu;
    // NOP
    // 0x1d7b90: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1D7B90u;
    {
        const bool branch_taken_0x1d7b90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d7b90) {
            ctx->pc = 0x1D7BD0u;
            return;
        }
    }
    ctx->pc = 0x1D7B98u;
    // 0x1d7b98: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1d7b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7b9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d7b9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7ba0: 0x0  nop
    ctx->pc = 0x1d7ba0u;
    // NOP
    // 0x1d7ba4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1d7ba4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d7ba8: 0x0  nop
    ctx->pc = 0x1d7ba8u;
    // NOP
    // 0x1d7bac: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1D7BACu;
    {
        const bool branch_taken_0x1d7bac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d7bac) {
            ctx->pc = 0x1D7BD0u;
            return;
        }
    }
    ctx->pc = 0x1D7BB4u;
    // 0x1d7bb4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1d7bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7bb8: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1d7bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1d7bbc: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1d7bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7bc0: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1d7bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1d7bc4: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1d7bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7bc8: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1d7bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1d7bcc: 0x0  nop
    ctx->pc = 0x1d7bccu;
    // NOP
    ctx->pc = 0x1d7bd0u;
}
