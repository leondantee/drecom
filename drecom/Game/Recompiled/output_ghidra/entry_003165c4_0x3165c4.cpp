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

// Function: entry_003165c4
// Address: 0x3165c4 - 0x3165f0
void entry_003165c4_0x3165c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003165c4_0x3165c4");
#endif

    ctx->pc = 0x3165c4u;

    // 0x3165c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3165c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3165c8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3165c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3165cc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3165ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3165d0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3165d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3165d4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3165d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3165d8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3165d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3165dc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3165dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3165e0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3165e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3165e4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3165e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3165e8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3165e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3165ec: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3165ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x3165f0u;
}
