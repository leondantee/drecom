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

// Function: entry_001c6e98
// Address: 0x1c6e98 - 0x1c6f08
void entry_001c6e98_0x1c6e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6e98_0x1c6e98");
#endif

    ctx->pc = 0x1c6e98u;

    // 0x1c6e98: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1c6e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6e9c: 0x3c064016  lui         $a2, 0x4016
    ctx->pc = 0x1c6e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16406 << 16));
    // 0x1c6ea0: 0x34c3cbe4  ori         $v1, $a2, 0xCBE4
    ctx->pc = 0x1c6ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52196);
    // 0x1c6ea4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c6ea4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6ea8: 0x0  nop
    ctx->pc = 0x1c6ea8u;
    // NOP
    // 0x1c6eac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c6eacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6eb0: 0x0  nop
    ctx->pc = 0x1c6eb0u;
    // NOP
    // 0x1c6eb4: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x1C6EB4u;
    {
        const bool branch_taken_0x1c6eb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c6eb4) {
            ctx->pc = 0x1C6F08u;
            return;
        }
    }
    ctx->pc = 0x1C6EBCu;
    // 0x1c6ebc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c6ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6ec0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c6ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6ec4: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x1c6ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c6ec8: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x1c6ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1c6ecc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6ed0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1c6ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c6ed4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c6ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6ed8: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1c6ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c6edc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6ee0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c6ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c6ee4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c6ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c6ee8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6eec: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x1c6eecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x1c6ef0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6ef4: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x1c6ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6ef8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c6ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6efc: 0xe4801290  swc1        $f0, 0x1290($a0)
    ctx->pc = 0x1c6efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4752), bits); }
    // 0x1c6f00: 0x10000518  b           . + 4 + (0x518 << 2)
    ctx->pc = 0x1C6F00u;
    {
        const bool branch_taken_0x1c6f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6f00) {
            ctx->pc = 0x1C8364u;
            return;
        }
    }
    ctx->pc = 0x1C6F08u;
}
