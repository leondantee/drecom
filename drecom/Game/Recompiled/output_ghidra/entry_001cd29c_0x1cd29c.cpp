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

// Function: entry_001cd29c
// Address: 0x1cd29c - 0x1cd314
void entry_001cd29c_0x1cd29c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd29c_0x1cd29c");
#endif

    ctx->pc = 0x1cd29cu;

    // 0x1cd29c: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1cd29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cd2a0: 0x3c034016  lui         $v1, 0x4016
    ctx->pc = 0x1cd2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16406 << 16));
    // 0x1cd2a4: 0x3463cbe4  ori         $v1, $v1, 0xCBE4
    ctx->pc = 0x1cd2a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52196);
    // 0x1cd2a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cd2a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd2ac: 0x0  nop
    ctx->pc = 0x1cd2acu;
    // NOP
    // 0x1cd2b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cd2b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cd2b4: 0x0  nop
    ctx->pc = 0x1cd2b4u;
    // NOP
    // 0x1cd2b8: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x1CD2B8u;
    {
        const bool branch_taken_0x1cd2b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cd2b8) {
            ctx->pc = 0x1CD314u;
            return;
        }
    }
    ctx->pc = 0x1CD2C0u;
    // 0x1cd2c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cd2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd2c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd2c8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1cd2c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cd2cc: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1cd2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1cd2d0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd2d4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1cd2d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cd2d8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd2dc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1cd2dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cd2e0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd2e4: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x1cd2e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cd2e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd2ec: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1cd2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1cd2f0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1cd2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cd2f4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd2f8: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1cd2f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cd2fc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd300: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x1cd300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd304: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd308: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x1cd308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
    // 0x1cd30c: 0x10000218  b           . + 4 + (0x218 << 2)
    ctx->pc = 0x1CD30Cu;
    {
        const bool branch_taken_0x1cd30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd30c) {
            ctx->pc = 0x1CDB70u;
            return;
        }
    }
    ctx->pc = 0x1CD314u;
}
