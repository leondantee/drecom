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

// Function: entry_001aaff0
// Address: 0x1aaff0 - 0x1ab044
void entry_001aaff0_0x1aaff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aaff0_0x1aaff0");
#endif

    ctx->pc = 0x1aaff0u;

    // 0x1aaff0: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x1aaff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aaff4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1aaff4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aaff8: 0x0  nop
    ctx->pc = 0x1aaff8u;
    // NOP
    // 0x1aaffc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1aaffcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ab000: 0x0  nop
    ctx->pc = 0x1ab000u;
    // NOP
    // 0x1ab004: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1AB004u;
    {
        const bool branch_taken_0x1ab004 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ab004) {
            ctx->pc = 0x1AB044u;
            return;
        }
    }
    ctx->pc = 0x1AB00Cu;
    // 0x1ab00c: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x1ab00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ab010: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ab010u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ab014: 0x0  nop
    ctx->pc = 0x1ab014u;
    // NOP
    // 0x1ab018: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1ab018u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ab01c: 0x0  nop
    ctx->pc = 0x1ab01cu;
    // NOP
    // 0x1ab020: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1AB020u;
    {
        const bool branch_taken_0x1ab020 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ab020) {
            ctx->pc = 0x1AB044u;
            return;
        }
    }
    ctx->pc = 0x1AB028u;
    // 0x1ab028: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1ab028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1ab02c: 0xc4610058  lwc1        $f1, 0x58($v1)
    ctx->pc = 0x1ab02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ab030: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1ab030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ab034: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ab034u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ab038: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x1ab038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x1ab03c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1AB03Cu;
    {
        const bool branch_taken_0x1ab03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab03c) {
            ctx->pc = 0x1AB190u;
            return;
        }
    }
    ctx->pc = 0x1AB044u;
}
