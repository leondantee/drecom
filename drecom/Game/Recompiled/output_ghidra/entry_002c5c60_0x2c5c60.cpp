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

// Function: entry_002c5c60
// Address: 0x2c5c60 - 0x2c5cc4
void entry_002c5c60_0x2c5c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c5c60_0x2c5c60");
#endif

    ctx->pc = 0x2c5c60u;

    // 0x2c5c60: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5c64: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c5c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c5c68: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x2c5c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5c6c: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x2c5c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x2c5c70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c5c70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5c74: 0x0  nop
    ctx->pc = 0x2c5c74u;
    // NOP
    // 0x2c5c78: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2c5c78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c5c7c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5c80: 0xc440128c  lwc1        $f0, 0x128C($v0)
    ctx->pc = 0x2c5c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5c84: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c5c84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c5c88: 0x0  nop
    ctx->pc = 0x2c5c88u;
    // NOP
    // 0x2c5c8c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2C5C8Cu;
    {
        const bool branch_taken_0x2c5c8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c5c8c) {
            ctx->pc = 0x2C5CC4u;
            return;
        }
    }
    ctx->pc = 0x2C5C94u;
    // 0x2c5c94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c5c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5c98: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5c9c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2c5c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c5ca0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2c5ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c5ca4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5ca8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2c5ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c5cac: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5cb0: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2c5cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c5cb4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5cb8: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2c5cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c5cbc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5cc0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2c5cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2c5cc4u;
}
