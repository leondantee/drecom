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

// Function: entry_002a17bc
// Address: 0x2a17bc - 0x2a17ec
void entry_002a17bc_0x2a17bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a17bc_0x2a17bc");
#endif

    ctx->pc = 0x2a17bcu;

    // 0x2a17bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a17bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a17c0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2a17c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a17c4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a17c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a17c8: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2a17c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a17cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2a17ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a17d0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2a17d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a17d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2a17d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a17d8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2a17d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a17dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2a17dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a17e0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2a17e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a17e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2a17e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a17e8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2a17e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2a17ecu;
}
