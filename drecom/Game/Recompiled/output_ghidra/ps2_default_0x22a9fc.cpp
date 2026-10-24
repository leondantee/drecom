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

// Function: default
// Address: 0x22a9fc - 0x22aa44
void ps2_default_0x22a9fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x22a9fc");
#endif

    ctx->pc = 0x22a9fcu;

    // 0x22a9fc: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x22a9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x22aa00: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22aa00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22aa04: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22aa04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22aa08: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x22aa08u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22aa0c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x22aa0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22aa10: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22aa10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22aa14: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x22aa14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22aa18: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22aa18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22aa1c: 0x0  nop
    ctx->pc = 0x22aa1cu;
    // NOP
    // 0x22aa20: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x22AA20u;
    {
        const bool branch_taken_0x22aa20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22aa20) {
            ctx->pc = 0x22AA44u;
            return;
        }
    }
    ctx->pc = 0x22AA28u;
    // 0x22aa28: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22aa28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22aa2c: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x22aa2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22aa30: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x22aa30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x22aa34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22aa34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22aa38: 0x0  nop
    ctx->pc = 0x22aa38u;
    // NOP
    // 0x22aa3c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22aa3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22aa40: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x22aa40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    ctx->pc = 0x22aa44u;
}
