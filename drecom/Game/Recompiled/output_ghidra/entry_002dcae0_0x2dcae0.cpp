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

// Function: entry_002dcae0
// Address: 0x2dcae0 - 0x2dcb20
void entry_002dcae0_0x2dcae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dcae0_0x2dcae0");
#endif

    ctx->pc = 0x2dcae0u;

    // 0x2dcae0: 0xc6010094  lwc1        $f1, 0x94($s0)
    ctx->pc = 0x2dcae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dcae4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2dcae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2dcae8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dcae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dcaec: 0x0  nop
    ctx->pc = 0x2dcaecu;
    // NOP
    // 0x2dcaf0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2dcaf0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2dcaf4: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2dcaf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2dcaf8: 0xc6010094  lwc1        $f1, 0x94($s0)
    ctx->pc = 0x2dcaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dcafc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dcafcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dcb00: 0x0  nop
    ctx->pc = 0x2dcb00u;
    // NOP
    // 0x2dcb04: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2dcb04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dcb08: 0x0  nop
    ctx->pc = 0x2dcb08u;
    // NOP
    // 0x2dcb0c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2DCB0Cu;
    {
        const bool branch_taken_0x2dcb0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dcb0c) {
            ctx->pc = 0x2DCB20u;
            return;
        }
    }
    ctx->pc = 0x2DCB14u;
    // 0x2dcb14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dcb14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dcb18: 0x0  nop
    ctx->pc = 0x2dcb18u;
    // NOP
    // 0x2dcb1c: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2dcb1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    ctx->pc = 0x2dcb20u;
}
