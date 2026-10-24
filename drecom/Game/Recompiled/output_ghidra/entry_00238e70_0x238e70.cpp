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

// Function: entry_00238e70
// Address: 0x238e70 - 0x238ed0
void entry_00238e70_0x238e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00238e70_0x238e70");
#endif

    ctx->pc = 0x238e70u;

    // 0x238e70: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238e74: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x238e74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x238e78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x238e78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238e7c: 0x0  nop
    ctx->pc = 0x238e7cu;
    // NOP
    // 0x238e80: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x238e80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x238e84: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x238e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x238e88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x238e88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238e8c: 0x0  nop
    ctx->pc = 0x238e8cu;
    // NOP
    // 0x238e90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x238e90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x238e94: 0x0  nop
    ctx->pc = 0x238e94u;
    // NOP
    // 0x238e98: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x238E98u;
    {
        const bool branch_taken_0x238e98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x238e98) {
            ctx->pc = 0x238ED0u;
            return;
        }
    }
    ctx->pc = 0x238EA0u;
    // 0x238ea0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x238ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238ea4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238ea8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x238ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x238eac: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x238eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x238eb0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238eb4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x238eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x238eb8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238ebc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x238ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x238ec0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238ec4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x238ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x238ec8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238ecc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x238eccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x238ed0u;
}
