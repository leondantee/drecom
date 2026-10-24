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

// Function: entry_0016706c
// Address: 0x16706c - 0x167078
void entry_0016706c_0x16706c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016706c_0x16706c");
#endif

    ctx->pc = 0x16706cu;

    // 0x16706c: 0x8c25fdf4  lw          $a1, -0x20C($at)
    ctx->pc = 0x16706cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966772)));
    // 0x167070: 0x2404002b  addiu       $a0, $zero, 0x2B
    ctx->pc = 0x167070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x167074: 0x24060081  addiu       $a2, $zero, 0x81
    ctx->pc = 0x167074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    ctx->pc = 0x167078u;
}
