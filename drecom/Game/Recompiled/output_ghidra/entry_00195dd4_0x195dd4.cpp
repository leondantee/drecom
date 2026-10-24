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

// Function: entry_00195dd4
// Address: 0x195dd4 - 0x195e3c
void entry_00195dd4_0x195dd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195dd4_0x195dd4");
#endif

    ctx->pc = 0x195dd4u;

    // 0x195dd4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x195dd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x195dd8: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x195dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195ddc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x195ddcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x195de0: 0x0  nop
    ctx->pc = 0x195de0u;
    // NOP
    // 0x195de4: 0x4500004d  bc1f        . + 4 + (0x4D << 2)
    ctx->pc = 0x195DE4u;
    {
        const bool branch_taken_0x195de4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x195de4) {
            ctx->pc = 0x195F1Cu;
            return;
        }
    }
    ctx->pc = 0x195DECu;
    // 0x195dec: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x195decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x195df0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x195df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195df4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x195df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x195df8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x195df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195dfc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x195dfcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x195e00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x195e00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x195e04: 0x0  nop
    ctx->pc = 0x195e04u;
    // NOP
    // 0x195e08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x195e08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x195e0c: 0x0  nop
    ctx->pc = 0x195e0cu;
    // NOP
    // 0x195e10: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x195E10u;
    {
        const bool branch_taken_0x195e10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x195e10) {
            ctx->pc = 0x195E3Cu;
            return;
        }
    }
    ctx->pc = 0x195E18u;
    // 0x195e18: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x195e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x195e1c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x195e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195e20: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x195e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x195e24: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x195e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195e28: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x195e28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x195e2c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x195e2cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x195e30: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x195e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x195e34: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x195E34u;
    {
        const bool branch_taken_0x195e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195e34) {
            ctx->pc = 0x195E54u;
            return;
        }
    }
    ctx->pc = 0x195E3Cu;
}
