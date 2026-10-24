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

// Function: entry_001f59e0
// Address: 0x1f59e0 - 0x1f5a58
void entry_001f59e0_0x1f59e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f59e0_0x1f59e0");
#endif

    ctx->pc = 0x1f59e0u;

    // 0x1f59e0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f59e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f59e4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f59e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f59e8: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1f59e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f59ec: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f59ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f59f0: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f59f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f59f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f59f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f59f8: 0x0  nop
    ctx->pc = 0x1f59f8u;
    // NOP
    // 0x1f59fc: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x1F59FCu;
    {
        const bool branch_taken_0x1f59fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f59fc) {
            ctx->pc = 0x1F5A58u;
            return;
        }
    }
    ctx->pc = 0x1F5A04u;
    // 0x1f5a04: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5a08: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f5a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f5a0c: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x1f5a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5a10: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5a14: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f5a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5a18: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f5a18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f5a1c: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1f5a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x1f5a20: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5a24: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f5a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f5a28: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1f5a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5a2c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5a30: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f5a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5a34: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f5a34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f5a38: 0x0  nop
    ctx->pc = 0x1f5a38u;
    // NOP
    // 0x1f5a3c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1F5A3Cu;
    {
        const bool branch_taken_0x1f5a3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f5a3c) {
            ctx->pc = 0x1F5A58u;
            return;
        }
    }
    ctx->pc = 0x1F5A44u;
    // 0x1f5a44: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5a48: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f5a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f5a4c: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x1f5a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5a50: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1f5a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5a54: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1f5a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    ctx->pc = 0x1f5a58u;
}
