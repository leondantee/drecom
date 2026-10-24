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

// Function: entry_0010f764
// Address: 0x10f764 - 0x10f768
void entry_0010f764_0x10f764(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f764_0x10f764");
#endif

    ctx->pc = 0x10f764u;

    // 0x10f764: 0x26903e80  addiu       $s0, $s4, 0x3E80
    ctx->pc = 0x10f764u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 16000));
    ctx->pc = 0x10f768u;
}
