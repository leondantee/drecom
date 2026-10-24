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

// Function: entry_0035b4d4
// Address: 0x35b4d4 - 0x35b524
void entry_0035b4d4_0x35b4d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035b4d4_0x35b4d4");
#endif

    ctx->pc = 0x35b4d4u;

    // 0x35b4d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x35b4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35b4d8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35b4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35b4dc: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x35b4dcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x35b4e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x35b4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35b4e4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35b4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35b4e8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x35b4e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x35b4ec: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35b4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35b4f0: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x35b4f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35b4f4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35b4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35b4f8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x35b4f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35b4fc: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35b4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35b500: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x35b500u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35b504: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x35b504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35b508: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x35b508u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x35b50c: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x35b50cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35b510: 0x8c83133c  lw          $v1, 0x133C($a0)
    ctx->pc = 0x35b510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4924)));
    // 0x35b514: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35b514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35b518: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x35b518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35b51c: 0xac82133c  sw          $v0, 0x133C($a0)
    ctx->pc = 0x35b51cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4924), GPR_U32(ctx, 2));
    // 0x35b520: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x35b520u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x35b524u;
}
