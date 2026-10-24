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

// Function: entry_00361040
// Address: 0x361040 - 0x361094
void entry_00361040_0x361040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00361040_0x361040");
#endif

    ctx->pc = 0x361040u;

    // 0x361040: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x361040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x361044: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x361044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x361048: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x361048u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x36104c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x36104cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x361050: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x361050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x361054: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x361054u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x361058: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x361058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36105c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x36105cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x361060: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x361060u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x361064: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x361064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x361068: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x361068u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36106c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x36106cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x361070: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x361070u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x361074: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x361074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x361078: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x361078u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x36107c: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x36107cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x361080: 0x8c83133c  lw          $v1, 0x133C($a0)
    ctx->pc = 0x361080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4924)));
    // 0x361084: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x361084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x361088: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x361088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x36108c: 0xac82133c  sw          $v0, 0x133C($a0)
    ctx->pc = 0x36108cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4924), GPR_U32(ctx, 2));
    // 0x361090: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x361090u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x361094u;
}
