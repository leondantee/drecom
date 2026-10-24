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

// Function: entry_0018cde4
// Address: 0x18cde4 - 0x18cde8
void entry_0018cde4_0x18cde4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018cde4_0x18cde4");
#endif

    ctx->pc = 0x18cde4u;

    // 0x18cde4: 0x26100b30  addiu       $s0, $s0, 0xB30
    ctx->pc = 0x18cde4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2864));
    ctx->pc = 0x18cde8u;
}
