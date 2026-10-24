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

// Function: entry_0035bd70
// Address: 0x35bd70 - 0x35bdc4
void entry_0035bd70_0x35bd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035bd70_0x35bd70");
#endif

    ctx->pc = 0x35bd70u;

    // 0x35bd70: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x35bd70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35bd74: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35bd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35bd78: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x35bd78u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x35bd7c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x35bd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35bd80: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35bd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35bd84: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x35bd84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x35bd88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35bd88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35bd8c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35bd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35bd90: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x35bd90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x35bd94: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35bd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35bd98: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x35bd98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35bd9c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35bd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35bda0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x35bda0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35bda4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35bda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35bda8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x35bda8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x35bdac: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x35bdacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35bdb0: 0x8c83133c  lw          $v1, 0x133C($a0)
    ctx->pc = 0x35bdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4924)));
    // 0x35bdb4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35bdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35bdb8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x35bdb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35bdbc: 0xac82133c  sw          $v0, 0x133C($a0)
    ctx->pc = 0x35bdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4924), GPR_U32(ctx, 2));
    // 0x35bdc0: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x35bdc0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x35bdc4u;
}
