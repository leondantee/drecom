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

// Function: entry_0016ff78
// Address: 0x16ff78 - 0x16ff7c
void entry_0016ff78_0x16ff78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ff78_0x16ff78");
#endif

    ctx->pc = 0x16ff78u;

    // 0x16ff78: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x16ff78u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x16ff7cu;
}
