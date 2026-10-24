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

// Function: entry_001eff24
// Address: 0x1eff24 - 0x1eff70
void entry_001eff24_0x1eff24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eff24_0x1eff24");
#endif

    ctx->pc = 0x1eff24u;

    // 0x1eff24: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1eff24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1eff28: 0xc4820124  lwc1        $f2, 0x124($a0)
    ctx->pc = 0x1eff28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1eff2c: 0x3c0644bb  lui         $a2, 0x44BB
    ctx->pc = 0x1eff2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17595 << 16));
    // 0x1eff30: 0x34c58000  ori         $a1, $a2, 0x8000
    ctx->pc = 0x1eff30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x1eff34: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1eff34u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eff38: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1eff38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1eff3c: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1eff3cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eff40: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1eff40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1eff44: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1eff44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eff48: 0x0  nop
    ctx->pc = 0x1eff48u;
    // NOP
    // 0x1eff4c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1EFF4Cu;
    {
        const bool branch_taken_0x1eff4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eff4c) {
            ctx->pc = 0x1EFF70u;
            return;
        }
    }
    ctx->pc = 0x1EFF54u;
    // 0x1eff54: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1eff54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1eff58: 0xc4e10124  lwc1        $f1, 0x124($a3)
    ctx->pc = 0x1eff58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eff5c: 0x3c084100  lui         $t0, 0x4100
    ctx->pc = 0x1eff5cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16640 << 16));
    // 0x1eff60: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1eff60u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eff64: 0x0  nop
    ctx->pc = 0x1eff64u;
    // NOP
    // 0x1eff68: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1eff68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1eff6c: 0xe4e00124  swc1        $f0, 0x124($a3)
    ctx->pc = 0x1eff6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 292), bits); }
    ctx->pc = 0x1eff70u;
}
