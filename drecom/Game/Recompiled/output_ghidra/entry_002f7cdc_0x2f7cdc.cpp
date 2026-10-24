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

// Function: entry_002f7cdc
// Address: 0x2f7cdc - 0x2f7cf0
void entry_002f7cdc_0x2f7cdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f7cdc_0x2f7cdc");
#endif

    ctx->pc = 0x2f7cdcu;

    // 0x2f7cdc: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f7cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7ce0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2f7ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f7ce4: 0x38870010  xori        $a3, $a0, 0x10
    ctx->pc = 0x2f7ce4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)16);
    // 0x2f7ce8: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f7ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7cec: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x2f7cecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    ctx->pc = 0x2f7cf0u;
}
