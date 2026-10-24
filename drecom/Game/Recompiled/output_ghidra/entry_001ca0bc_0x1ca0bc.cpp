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

// Function: entry_001ca0bc
// Address: 0x1ca0bc - 0x1ca118
void entry_001ca0bc_0x1ca0bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca0bc_0x1ca0bc");
#endif

    ctx->pc = 0x1ca0bcu;

    // 0x1ca0bc: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x1ca0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ca0c0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca0c4: 0xa0441576  sb          $a0, 0x1576($v0)
    ctx->pc = 0x1ca0c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5494), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ca0c8: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x1ca0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1ca0cc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca0d0: 0xa0431577  sb          $v1, 0x1577($v0)
    ctx->pc = 0x1ca0d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5495), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ca0d4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1ca0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ca0d8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1ca0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca0dc: 0xa4851278  sh          $a1, 0x1278($a0)
    ctx->pc = 0x1ca0dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 5));
    // 0x1ca0e0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1ca0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ca0e4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca0e8: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x1ca0e8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ca0ec: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca0f0: 0xac401b6c  sw          $zero, 0x1B6C($v0)
    ctx->pc = 0x1ca0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7020), GPR_U32(ctx, 0));
    // 0x1ca0f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ca0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca0f8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca0fc: 0xac641b60  sw          $a0, 0x1B60($v1)
    ctx->pc = 0x1ca0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 4));
    // 0x1ca100: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca104: 0xa04013b4  sb          $zero, 0x13B4($v0)
    ctx->pc = 0x1ca104u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5044), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ca108: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca10c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1ca10cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1ca110: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ca110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ca114: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1ca114u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1ca118u;
}
