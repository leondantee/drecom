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

// Function: entry_0010dd7c
// Address: 0x10dd7c - 0x10dd80
void entry_0010dd7c_0x10dd7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010dd7c_0x10dd7c");
#endif

    ctx->pc = 0x10dd7cu;

    // 0x10dd7c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10dd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x10dd80u;
}
