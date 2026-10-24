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

// Function: caseD_44
// Address: 0x11b73c - 0x11b740
void caseD_44_0x11b73c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_44_0x11b73c");
#endif

    ctx->pc = 0x11b73cu;

    // 0x11b73c: 0x37de0010  ori         $fp, $fp, 0x10
    ctx->pc = 0x11b73cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)16);
    ctx->pc = 0x11b740u;
}
