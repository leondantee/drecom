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

// Function: entry_00320d48
// Address: 0x320d48 - 0x320da0
void entry_00320d48_0x320d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00320d48_0x320d48");
#endif

    ctx->pc = 0x320d48u;

    // 0x320d48: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320d4c: 0xc46102dc  lwc1        $f1, 0x2DC($v1)
    ctx->pc = 0x320d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x320d50: 0x3c044180  lui         $a0, 0x4180
    ctx->pc = 0x320d50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16768 << 16));
    // 0x320d54: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x320d54u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x320d58: 0x0  nop
    ctx->pc = 0x320d58u;
    // NOP
    // 0x320d5c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x320d5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x320d60: 0xe46002dc  swc1        $f0, 0x2DC($v1)
    ctx->pc = 0x320d60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 732), bits); }
    // 0x320d64: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320d68: 0xc46102dc  lwc1        $f1, 0x2DC($v1)
    ctx->pc = 0x320d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x320d6c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x320d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x320d70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x320d70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x320d74: 0x0  nop
    ctx->pc = 0x320d74u;
    // NOP
    // 0x320d78: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x320d78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x320d7c: 0x0  nop
    ctx->pc = 0x320d7cu;
    // NOP
    // 0x320d80: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x320D80u;
    {
        const bool branch_taken_0x320d80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x320d80) {
            ctx->pc = 0x320DA0u;
            return;
        }
    }
    ctx->pc = 0x320D88u;
    // 0x320d88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x320d88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x320d8c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x320d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320d90: 0xe4a002dc  swc1        $f0, 0x2DC($a1)
    ctx->pc = 0x320d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 732), bits); }
    // 0x320d94: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x320d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x320d98: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320d9c: 0xac640358  sw          $a0, 0x358($v1)
    ctx->pc = 0x320d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 856), GPR_U32(ctx, 4));
    ctx->pc = 0x320da0u;
}
