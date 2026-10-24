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

// Function: entry_002f7058
// Address: 0x2f7058 - 0x2f706c
void entry_002f7058_0x2f7058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f7058_0x2f7058");
#endif

    ctx->pc = 0x2f7058u;

    // 0x2f7058: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f7058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f705c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2f705cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f7060: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x2f7060u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x2f7064: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f7064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7068: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2f7068u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x2f706cu;
}
