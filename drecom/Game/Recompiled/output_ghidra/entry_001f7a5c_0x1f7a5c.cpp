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

// Function: entry_001f7a5c
// Address: 0x1f7a5c - 0x1f7a9c
void entry_001f7a5c_0x1f7a5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7a5c_0x1f7a5c");
#endif

    ctx->pc = 0x1f7a5cu;

    // 0x1f7a5c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7a60: 0x84851278  lh          $a1, 0x1278($a0)
    ctx->pc = 0x1f7a60u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x1f7a64: 0x14a0000d  bnez        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x1F7A64u;
    {
        const bool branch_taken_0x1f7a64 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7a64) {
            ctx->pc = 0x1F7A9Cu;
            return;
        }
    }
    ctx->pc = 0x1F7A6Cu;
    // 0x1f7a6c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7a70: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x1f7a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f7a74: 0x3c034244  lui         $v1, 0x4244
    ctx->pc = 0x1f7a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16964 << 16));
    // 0x1f7a78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f7a78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7a7c: 0x0  nop
    ctx->pc = 0x1f7a7cu;
    // NOP
    // 0x1f7a80: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f7a80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f7a84: 0x0  nop
    ctx->pc = 0x1f7a84u;
    // NOP
    // 0x1f7a88: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7A88u;
    {
        const bool branch_taken_0x1f7a88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f7a88) {
            ctx->pc = 0x1F7A9Cu;
            return;
        }
    }
    ctx->pc = 0x1F7A90u;
    // 0x1f7a90: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1f7a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f7a94: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7a98: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1f7a98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1f7a9cu;
}
