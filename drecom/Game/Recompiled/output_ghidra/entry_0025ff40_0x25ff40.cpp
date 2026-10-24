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

// Function: entry_0025ff40
// Address: 0x25ff40 - 0x25ff78
void entry_0025ff40_0x25ff40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025ff40_0x25ff40");
#endif

    ctx->pc = 0x25ff40u;

    // 0x25ff40: 0xc7a10258  lwc1        $f1, 0x258($sp)
    ctx->pc = 0x25ff40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25ff44: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x25ff44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x25ff48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25ff48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ff4c: 0x0  nop
    ctx->pc = 0x25ff4cu;
    // NOP
    // 0x25ff50: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x25ff50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25ff54: 0x0  nop
    ctx->pc = 0x25ff54u;
    // NOP
    // 0x25ff58: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x25FF58u;
    {
        const bool branch_taken_0x25ff58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25ff58) {
            ctx->pc = 0x25FF78u;
            return;
        }
    }
    ctx->pc = 0x25FF60u;
    // 0x25ff60: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x25ff60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x25ff64: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x25ff64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25ff68: 0x8c8202d4  lw          $v0, 0x2D4($a0)
    ctx->pc = 0x25ff68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 724)));
    // 0x25ff6c: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x25ff6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x25ff70: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x25ff70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ff74: 0xe7a00258  swc1        $f0, 0x258($sp)
    ctx->pc = 0x25ff74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
    ctx->pc = 0x25ff78u;
}
