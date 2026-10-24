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

// Function: entry_00121700
// Address: 0x121700 - 0x121774
void entry_00121700_0x121700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121700_0x121700");
#endif

    ctx->pc = 0x121700u;

    // 0x121700: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121704: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x121704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x121708: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x121708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x12170c: 0xa32024  and         $a0, $a1, $v1
    ctx->pc = 0x12170cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x121710: 0x10800031  beqz        $a0, . + 4 + (0x31 << 2)
    ctx->pc = 0x121710u;
    {
        const bool branch_taken_0x121710 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x121710) {
            ctx->pc = 0x1217D8u;
            return;
        }
    }
    ctx->pc = 0x121718u;
    // 0x121718: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x121718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12171c: 0x3c043fc9  lui         $a0, 0x3FC9
    ctx->pc = 0x12171cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16329 << 16));
    // 0x121720: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x121720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x121724: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x121724u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121728: 0x0  nop
    ctx->pc = 0x121728u;
    // NOP
    // 0x12172c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12172cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x121730: 0x0  nop
    ctx->pc = 0x121730u;
    // NOP
    // 0x121734: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x121734u;
    {
        const bool branch_taken_0x121734 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x121734) {
            ctx->pc = 0x121774u;
            return;
        }
    }
    ctx->pc = 0x12173Cu;
    // 0x12173c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x12173cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x121740: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121744: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x121744u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x121748: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x121748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12174c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12174cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121750: 0xa0850001  sb          $a1, 0x1($a0)
    ctx->pc = 0x121750u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x121754: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121758: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x121758u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12175c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12175cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121760: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x121760u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x121764: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121768: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x121768u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x12176c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x12176Cu;
    {
        const bool branch_taken_0x12176c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12176c) {
            ctx->pc = 0x1217D0u;
            return;
        }
    }
    ctx->pc = 0x121774u;
}
