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

// Function: entry_0010be14
// Address: 0x10be14 - 0x10be18
void entry_0010be14_0x10be14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010be14_0x10be14");
#endif

    ctx->pc = 0x10be14u;

    // 0x10be14: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x10be14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->pc = 0x10be18u;
}
