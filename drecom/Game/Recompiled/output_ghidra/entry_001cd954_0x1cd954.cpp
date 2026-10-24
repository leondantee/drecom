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

// Function: entry_001cd954
// Address: 0x1cd954 - 0x1cd9c0
void entry_001cd954_0x1cd954(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd954_0x1cd954");
#endif

    ctx->pc = 0x1cd954u;

    // 0x1cd954: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1cd954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cd958: 0x3c034016  lui         $v1, 0x4016
    ctx->pc = 0x1cd958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16406 << 16));
    // 0x1cd95c: 0x3463cbe4  ori         $v1, $v1, 0xCBE4
    ctx->pc = 0x1cd95cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52196);
    // 0x1cd960: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cd960u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd964: 0x0  nop
    ctx->pc = 0x1cd964u;
    // NOP
    // 0x1cd968: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cd968u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cd96c: 0x0  nop
    ctx->pc = 0x1cd96cu;
    // NOP
    // 0x1cd970: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x1CD970u;
    {
        const bool branch_taken_0x1cd970 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cd970) {
            ctx->pc = 0x1CD9C0u;
            return;
        }
    }
    ctx->pc = 0x1CD978u;
    // 0x1cd978: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cd978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd97c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd980: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1cd980u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cd984: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1cd984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1cd988: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd98c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1cd98cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cd990: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd994: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1cd994u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cd998: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd99c: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x1cd99cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cd9a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd9a4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1cd9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1cd9a8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd9ac: 0xc48000d4  lwc1        $f0, 0xD4($a0)
    ctx->pc = 0x1cd9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd9b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd9b4: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x1cd9b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
    // 0x1cd9b8: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x1CD9B8u;
    {
        const bool branch_taken_0x1cd9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd9b8) {
            ctx->pc = 0x1CDB70u;
            return;
        }
    }
    ctx->pc = 0x1CD9C0u;
}
