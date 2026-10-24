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

// Function: entry_00274148
// Address: 0x274148 - 0x274150
void entry_00274148_0x274148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00274148_0x274148");
#endif

    ctx->pc = 0x274148u;

    // 0x274148: 0x2417001e  addiu       $s7, $zero, 0x1E
    ctx->pc = 0x274148u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x27414c: 0x0  nop
    ctx->pc = 0x27414cu;
    // NOP
    ctx->pc = 0x274150u;
}
