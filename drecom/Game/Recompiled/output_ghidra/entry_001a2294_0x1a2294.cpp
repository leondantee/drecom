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

// Function: entry_001a2294
// Address: 0x1a2294 - 0x1a22ec
void entry_001a2294_0x1a2294(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2294_0x1a2294");
#endif

    ctx->pc = 0x1a2294u;

    // 0x1a2294: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a2294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a2298: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x1a2298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1a229c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a229cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a22a0: 0xac640024  sw          $a0, 0x24($v1)
    ctx->pc = 0x1a22a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 4));
    // 0x1a22a4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1a22a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a22a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a22a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a22ac: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1a22acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a22b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a22b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a22b4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1a22b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a22b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a22b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a22bc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1a22bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a22c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a22c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a22c4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1a22c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a22c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a22c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a22cc: 0xa0600009  sb          $zero, 0x9($v1)
    ctx->pc = 0x1a22ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a22d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a22d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a22d4: 0xa060000a  sb          $zero, 0xA($v1)
    ctx->pc = 0x1a22d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a22d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a22d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a22dc: 0x8c241a3c  lw          $a0, 0x1A3C($at)
    ctx->pc = 0x1a22dcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x1a22e0: 0x3c03fffd  lui         $v1, 0xFFFD
    ctx->pc = 0x1a22e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65533 << 16));
    // 0x1a22e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a22e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a22e8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1a22e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    ctx->pc = 0x1a22ecu;
}
