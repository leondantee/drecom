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

// Function: entry_0016c7dc
// Address: 0x16c7dc - 0x16c7e8
void entry_0016c7dc_0x16c7dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c7dc_0x16c7dc");
#endif

    ctx->pc = 0x16c7dcu;

    // 0x16c7dc: 0x8fb300b0  lw          $s3, 0xB0($sp)
    ctx->pc = 0x16c7dcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16c7e0: 0x8fb600a0  lw          $s6, 0xA0($sp)
    ctx->pc = 0x16c7e0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16c7e4: 0x0  nop
    ctx->pc = 0x16c7e4u;
    // NOP
    ctx->pc = 0x16c7e8u;
}
