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

// Function: entry_001ab098
// Address: 0x1ab098 - 0x1ab0e4
void entry_001ab098_0x1ab098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab098_0x1ab098");
#endif

    ctx->pc = 0x1ab098u;

    // 0x1ab098: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x1ab098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ab09c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ab09cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ab0a0: 0x0  nop
    ctx->pc = 0x1ab0a0u;
    // NOP
    // 0x1ab0a4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1ab0a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ab0a8: 0x0  nop
    ctx->pc = 0x1ab0a8u;
    // NOP
    // 0x1ab0ac: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1AB0ACu;
    {
        const bool branch_taken_0x1ab0ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ab0ac) {
            ctx->pc = 0x1AB0E4u;
            return;
        }
    }
    ctx->pc = 0x1AB0B4u;
    // 0x1ab0b4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1ab0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1ab0b8: 0xc4610050  lwc1        $f1, 0x50($v1)
    ctx->pc = 0x1ab0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ab0bc: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1ab0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ab0c0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ab0c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ab0c4: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x1ab0c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x1ab0c8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1ab0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1ab0cc: 0xc4610058  lwc1        $f1, 0x58($v1)
    ctx->pc = 0x1ab0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ab0d0: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1ab0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ab0d4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ab0d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ab0d8: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x1ab0d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x1ab0dc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1AB0DCu;
    {
        const bool branch_taken_0x1ab0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab0dc) {
            ctx->pc = 0x1AB190u;
            return;
        }
    }
    ctx->pc = 0x1AB0E4u;
}
