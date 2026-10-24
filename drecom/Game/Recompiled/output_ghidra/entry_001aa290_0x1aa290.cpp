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

// Function: entry_001aa290
// Address: 0x1aa290 - 0x1aa2ec
void entry_001aa290_0x1aa290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa290_0x1aa290");
#endif

    switch (ctx->pc) {
        case 0x1aa2c4u: goto label_1aa2c4;
        default: break;
    }

    ctx->pc = 0x1aa290u;

    // 0x1aa290: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1aa290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1aa294: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1aa294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa298: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1aa298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa29c: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x1aa29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa2a0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1aa2a0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1aa2a4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1aa2a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1aa2a8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1aa2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa2ac: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1aa2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa2b0: 0x24640090  addiu       $a0, $v1, 0x90
    ctx->pc = 0x1aa2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x1aa2b4: 0x244500e0  addiu       $a1, $v0, 0xE0
    ctx->pc = 0x1aa2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x1aa2b8: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x1aa2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1aa2bc: 0xc040c8c  jal         func_103230
    ctx->pc = 0x1AA2BCu;
    SET_GPR_U32(ctx, 31, 0x1AA2C4u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x1AA2C4u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AA2C4u) { return; }
    ctx->pc = 0x1AA2C4u;
label_1aa2c4:
    // 0x1aa2c4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1aa2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa2c8: 0xc4610090  lwc1        $f1, 0x90($v1)
    ctx->pc = 0x1aa2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa2cc: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1aa2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa2d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1aa2d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa2d4: 0x0  nop
    ctx->pc = 0x1aa2d4u;
    // NOP
    // 0x1aa2d8: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1AA2D8u;
    {
        const bool branch_taken_0x1aa2d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aa2d8) {
            ctx->pc = 0x1AA2ECu;
            return;
        }
    }
    ctx->pc = 0x1AA2E0u;
    // 0x1aa2e0: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1aa2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa2e4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1aa2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa2e8: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x1aa2e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    ctx->pc = 0x1aa2ecu;
}
