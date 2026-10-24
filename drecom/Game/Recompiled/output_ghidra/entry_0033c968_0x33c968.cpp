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

// Function: entry_0033c968
// Address: 0x33c968 - 0x33c970
void entry_0033c968_0x33c968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033c968_0x33c968");
#endif

    ctx->pc = 0x33c968u;

    // 0x33c968: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x33c968u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x33c96c: 0x0  nop
    ctx->pc = 0x33c96cu;
    // NOP
    ctx->pc = 0x33c970u;
}
