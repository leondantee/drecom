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

// Function: entry_0019d5c4
// Address: 0x19d5c4 - 0x19d5cc
void entry_0019d5c4_0x19d5c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d5c4_0x19d5c4");
#endif

    ctx->pc = 0x19d5c4u;

    // 0x19d5c4: 0xc084a88  jal         func_212A20
    ctx->pc = 0x19D5C4u;
    SET_GPR_U32(ctx, 31, 0x19D5CCu);
    ctx->pc = 0x212A20u;
    {
        ctx->pc = 0x19D5CCu;
        ps2_syscalls::CreateSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19D5CCu) { return; }
    ctx->pc = 0x19D5CCu;
}
