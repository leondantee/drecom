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

// Function: entry_001ab0e4
// Address: 0x1ab0e4 - 0x1ab130
void entry_001ab0e4_0x1ab0e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab0e4_0x1ab0e4");
#endif

    ctx->pc = 0x1ab0e4u;

    // 0x1ab0e4: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x1ab0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ab0e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ab0e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ab0ec: 0x0  nop
    ctx->pc = 0x1ab0ecu;
    // NOP
    // 0x1ab0f0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1ab0f0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ab0f4: 0x0  nop
    ctx->pc = 0x1ab0f4u;
    // NOP
    // 0x1ab0f8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1AB0F8u;
    {
        const bool branch_taken_0x1ab0f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ab0f8) {
            ctx->pc = 0x1AB130u;
            return;
        }
    }
    ctx->pc = 0x1AB100u;
    // 0x1ab100: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1ab100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1ab104: 0xc4610054  lwc1        $f1, 0x54($v1)
    ctx->pc = 0x1ab104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ab108: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1ab108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ab10c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ab10cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ab110: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x1ab110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x1ab114: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1ab114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1ab118: 0xc4610058  lwc1        $f1, 0x58($v1)
    ctx->pc = 0x1ab118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ab11c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1ab11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ab120: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ab120u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ab124: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x1ab124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x1ab128: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1AB128u;
    {
        const bool branch_taken_0x1ab128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab128) {
            ctx->pc = 0x1AB190u;
            return;
        }
    }
    ctx->pc = 0x1AB130u;
}
