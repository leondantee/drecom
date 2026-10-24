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

// Function: entry_0036a058
// Address: 0x36a058 - 0x36a080
void entry_0036a058_0x36a058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036a058_0x36a058");
#endif

    ctx->pc = 0x36a058u;

    // 0x36a058: 0x24040081  addiu       $a0, $zero, 0x81
    ctx->pc = 0x36a058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x36a05c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36a05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36a060: 0xa0640010  sb          $a0, 0x10($v1)
    ctx->pc = 0x36a060u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16), (uint8_t)GPR_U32(ctx, 4));
    // 0x36a064: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x36a064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x36a068: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x36a068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36a06c: 0xa4640014  sh          $a0, 0x14($v1)
    ctx->pc = 0x36a06cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 4));
    // 0x36a070: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x36a070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36a074: 0x90830012  lbu         $v1, 0x12($a0)
    ctx->pc = 0x36a074u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x36a078: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x36a078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x36a07c: 0xa0830012  sb          $v1, 0x12($a0)
    ctx->pc = 0x36a07cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 18), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x36a080u;
}
