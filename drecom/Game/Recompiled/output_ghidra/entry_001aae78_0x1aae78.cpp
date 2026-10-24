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

// Function: entry_001aae78
// Address: 0x1aae78 - 0x1aae88
void entry_001aae78_0x1aae78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aae78_0x1aae78");
#endif

    ctx->pc = 0x1aae78u;

    // 0x1aae78: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1aae78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1aae7c: 0x8c83020c  lw          $v1, 0x20C($a0)
    ctx->pc = 0x1aae7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x1aae80: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x1aae80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x1aae84: 0xac83020c  sw          $v1, 0x20C($a0)
    ctx->pc = 0x1aae84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 524), GPR_U32(ctx, 3));
    ctx->pc = 0x1aae88u;
}
