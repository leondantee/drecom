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

// Function: entry_003021a4
// Address: 0x3021a4 - 0x3021d4
void entry_003021a4_0x3021a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003021a4_0x3021a4");
#endif

    ctx->pc = 0x3021a4u;

    // 0x3021a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3021a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3021a8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3021a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3021ac: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3021acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3021b0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x3021b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3021b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3021b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3021b8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3021b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3021bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3021bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3021c0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3021c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3021c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3021c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3021c8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3021c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3021cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3021ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3021d0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3021d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x3021d4u;
}
