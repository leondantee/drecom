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

// Function: entry_001ab044
// Address: 0x1ab044 - 0x1ab098
void entry_001ab044_0x1ab044(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab044_0x1ab044");
#endif

    ctx->pc = 0x1ab044u;

    // 0x1ab044: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x1ab044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ab048: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ab048u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ab04c: 0x0  nop
    ctx->pc = 0x1ab04cu;
    // NOP
    // 0x1ab050: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1ab050u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ab054: 0x0  nop
    ctx->pc = 0x1ab054u;
    // NOP
    // 0x1ab058: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1AB058u;
    {
        const bool branch_taken_0x1ab058 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ab058) {
            ctx->pc = 0x1AB098u;
            return;
        }
    }
    ctx->pc = 0x1AB060u;
    // 0x1ab060: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x1ab060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ab064: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ab064u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ab068: 0x0  nop
    ctx->pc = 0x1ab068u;
    // NOP
    // 0x1ab06c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1ab06cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ab070: 0x0  nop
    ctx->pc = 0x1ab070u;
    // NOP
    // 0x1ab074: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1AB074u;
    {
        const bool branch_taken_0x1ab074 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ab074) {
            ctx->pc = 0x1AB098u;
            return;
        }
    }
    ctx->pc = 0x1AB07Cu;
    // 0x1ab07c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1ab07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1ab080: 0xc4610050  lwc1        $f1, 0x50($v1)
    ctx->pc = 0x1ab080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ab084: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1ab084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ab088: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ab088u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ab08c: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x1ab08cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x1ab090: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1AB090u;
    {
        const bool branch_taken_0x1ab090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab090) {
            ctx->pc = 0x1AB190u;
            return;
        }
    }
    ctx->pc = 0x1AB098u;
}
