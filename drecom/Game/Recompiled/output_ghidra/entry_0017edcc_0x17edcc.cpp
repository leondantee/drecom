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

// Function: entry_0017edcc
// Address: 0x17edcc - 0x17edd0
void entry_0017edcc_0x17edcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017edcc_0x17edcc");
#endif

    ctx->pc = 0x17edccu;

    // 0x17edcc: 0x8c240af0  lw          $a0, 0xAF0($at)
    ctx->pc = 0x17edccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2800)));
    ctx->pc = 0x17edd0u;
}
