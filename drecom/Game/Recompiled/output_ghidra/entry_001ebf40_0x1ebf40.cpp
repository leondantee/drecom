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

// Function: entry_001ebf40
// Address: 0x1ebf40 - 0x1ebf84
void entry_001ebf40_0x1ebf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ebf40_0x1ebf40");
#endif

    ctx->pc = 0x1ebf40u;

    // 0x1ebf40: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ebf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ebf44: 0x24461330  addiu       $a2, $v0, 0x1330
    ctx->pc = 0x1ebf44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ebf48: 0xc4c10010  lwc1        $f1, 0x10($a2)
    ctx->pc = 0x1ebf48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ebf4c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1ebf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x1ebf50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ebf50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebf54: 0x0  nop
    ctx->pc = 0x1ebf54u;
    // NOP
    // 0x1ebf58: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1ebf58u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ebf5c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ebf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ebf60: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1ebf60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebf64: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ebf64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ebf68: 0x0  nop
    ctx->pc = 0x1ebf68u;
    // NOP
    // 0x1ebf6c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1EBF6Cu;
    {
        const bool branch_taken_0x1ebf6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ebf6c) {
            ctx->pc = 0x1EBF84u;
            return;
        }
    }
    ctx->pc = 0x1EBF74u;
    // 0x1ebf74: 0x3c074000  lui         $a3, 0x4000
    ctx->pc = 0x1ebf74u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
    // 0x1ebf78: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1ebf78u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebf7c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ebf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ebf80: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x1ebf80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    ctx->pc = 0x1ebf84u;
}
