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

// Function: entry_001ab130
// Address: 0x1ab130 - 0x1ab17c
void entry_001ab130_0x1ab130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab130_0x1ab130");
#endif

    ctx->pc = 0x1ab130u;

    // 0x1ab130: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x1ab130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ab134: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ab134u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ab138: 0x0  nop
    ctx->pc = 0x1ab138u;
    // NOP
    // 0x1ab13c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1ab13cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ab140: 0x0  nop
    ctx->pc = 0x1ab140u;
    // NOP
    // 0x1ab144: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1AB144u;
    {
        const bool branch_taken_0x1ab144 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ab144) {
            ctx->pc = 0x1AB17Cu;
            return;
        }
    }
    ctx->pc = 0x1AB14Cu;
    // 0x1ab14c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1ab14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1ab150: 0xc4610050  lwc1        $f1, 0x50($v1)
    ctx->pc = 0x1ab150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ab154: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1ab154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ab158: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ab158u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ab15c: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x1ab15cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x1ab160: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1ab160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1ab164: 0xc4610054  lwc1        $f1, 0x54($v1)
    ctx->pc = 0x1ab164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ab168: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1ab168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ab16c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ab16cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ab170: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x1ab170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x1ab174: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1AB174u;
    {
        const bool branch_taken_0x1ab174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab174) {
            ctx->pc = 0x1AB190u;
            return;
        }
    }
    ctx->pc = 0x1AB17Cu;
}
