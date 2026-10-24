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

// Function: entry_0010de1c
// Address: 0x10de1c - 0x10de20
void entry_0010de1c_0x10de1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010de1c_0x10de1c");
#endif

    ctx->pc = 0x10de1cu;

    // 0x10de1c: 0x24120918  addiu       $s2, $zero, 0x918
    ctx->pc = 0x10de1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2328));
    ctx->pc = 0x10de20u;
}
