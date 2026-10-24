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

// Function: entry_001ccc48
// Address: 0x1ccc48 - 0x1cccb4
void entry_001ccc48_0x1ccc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ccc48_0x1ccc48");
#endif

    ctx->pc = 0x1ccc48u;

    // 0x1ccc48: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1ccc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ccc4c: 0x3c034016  lui         $v1, 0x4016
    ctx->pc = 0x1ccc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16406 << 16));
    // 0x1ccc50: 0x3463cbe4  ori         $v1, $v1, 0xCBE4
    ctx->pc = 0x1ccc50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52196);
    // 0x1ccc54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ccc54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ccc58: 0x0  nop
    ctx->pc = 0x1ccc58u;
    // NOP
    // 0x1ccc5c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ccc5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ccc60: 0x0  nop
    ctx->pc = 0x1ccc60u;
    // NOP
    // 0x1ccc64: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x1CCC64u;
    {
        const bool branch_taken_0x1ccc64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ccc64) {
            ctx->pc = 0x1CCCB4u;
            return;
        }
    }
    ctx->pc = 0x1CCC6Cu;
    // 0x1ccc6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ccc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccc70: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccc70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccc74: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1ccc74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ccc78: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1ccc78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1ccc7c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccc80: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1ccc80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ccc84: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ccc84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccc88: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1ccc88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ccc8c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccc90: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ccc90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ccc94: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccc94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccc98: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ccc98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1ccc9c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ccc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccca0: 0xc48000d4  lwc1        $f0, 0xD4($a0)
    ctx->pc = 0x1ccca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ccca4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccca8: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x1ccca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
    // 0x1cccac: 0x100003b0  b           . + 4 + (0x3B0 << 2)
    ctx->pc = 0x1CCCACu;
    {
        const bool branch_taken_0x1cccac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cccac) {
            ctx->pc = 0x1CDB70u;
            return;
        }
    }
    ctx->pc = 0x1CCCB4u;
}
