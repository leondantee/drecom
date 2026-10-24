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

// Function: entry_001efe00
// Address: 0x1efe00 - 0x1efe3c
void entry_001efe00_0x1efe00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001efe00_0x1efe00");
#endif

    ctx->pc = 0x1efe00u;

    // 0x1efe00: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1efe00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efe04: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1efe04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1efe08: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1efe08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1efe0c: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1efe0cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1efe10: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1efe10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1efe14: 0x0  nop
    ctx->pc = 0x1efe14u;
    // NOP
    // 0x1efe18: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1EFE18u;
    {
        const bool branch_taken_0x1efe18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1efe18) {
            ctx->pc = 0x1EFE3Cu;
            return;
        }
    }
    ctx->pc = 0x1EFE20u;
    // 0x1efe20: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1efe20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efe24: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x1efe24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1efe28: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x1efe28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x1efe2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1efe2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efe30: 0x0  nop
    ctx->pc = 0x1efe30u;
    // NOP
    // 0x1efe34: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1efe34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1efe38: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1efe38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    ctx->pc = 0x1efe3cu;
}
