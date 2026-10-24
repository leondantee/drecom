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

// Function: entry_0015e7a8
// Address: 0x15e7a8 - 0x15e7e0
void entry_0015e7a8_0x15e7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e7a8_0x15e7a8");
#endif

    ctx->pc = 0x15e7a8u;

    // 0x15e7a8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x15e7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15e7ac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e7b0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x15e7b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x15e7b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e7b8: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x15e7b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x15e7bc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x15e7bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15e7c0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e7c4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x15e7c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x15e7c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e7cc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x15e7ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x15e7d0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e7d4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x15e7d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x15e7d8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e7dc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x15e7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x15e7e0u;
}
