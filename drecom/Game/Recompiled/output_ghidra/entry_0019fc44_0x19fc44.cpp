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

// Function: entry_0019fc44
// Address: 0x19fc44 - 0x19fc4c
void entry_0019fc44_0x19fc44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fc44_0x19fc44");
#endif

    ctx->pc = 0x19fc44u;

    // 0x19fc44: 0xc046760  jal         func_119D80
    ctx->pc = 0x19FC44u;
    SET_GPR_U32(ctx, 31, 0x19FC4Cu);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x19FC4Cu;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19FC4Cu) { return; }
    ctx->pc = 0x19FC4Cu;
}
