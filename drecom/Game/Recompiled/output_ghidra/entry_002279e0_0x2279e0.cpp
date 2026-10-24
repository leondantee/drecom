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

// Function: entry_002279e0
// Address: 0x2279e0 - 0x227a3c
void entry_002279e0_0x2279e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002279e0_0x2279e0");
#endif

    ctx->pc = 0x2279e0u;

    // 0x2279e0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2279e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2279e4: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x2279e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x2279e8: 0xc4a10098  lwc1        $f1, 0x98($a1)
    ctx->pc = 0x2279e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2279ec: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2279ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2279f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2279f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2279f4: 0x0  nop
    ctx->pc = 0x2279f4u;
    // NOP
    // 0x2279f8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2279f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2279fc: 0xe4a00098  swc1        $f0, 0x98($a1)
    ctx->pc = 0x2279fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 152), bits); }
    // 0x227a00: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x227a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227a04: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x227a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x227a08: 0xc4810098  lwc1        $f1, 0x98($a0)
    ctx->pc = 0x227a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227a0c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x227a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x227a10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x227a10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227a14: 0x0  nop
    ctx->pc = 0x227a14u;
    // NOP
    // 0x227a18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x227a18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227a1c: 0x0  nop
    ctx->pc = 0x227a1cu;
    // NOP
    // 0x227a20: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x227A20u;
    {
        const bool branch_taken_0x227a20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x227a20) {
            ctx->pc = 0x227A3Cu;
            return;
        }
    }
    ctx->pc = 0x227A28u;
    // 0x227a28: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x227a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x227a2c: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x227a2cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227a30: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x227a30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x227a34: 0x24a31330  addiu       $v1, $a1, 0x1330
    ctx->pc = 0x227a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x227a38: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x227a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    ctx->pc = 0x227a3cu;
}
