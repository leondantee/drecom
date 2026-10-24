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

// Function: entry_00338924
// Address: 0x338924 - 0x33892c
void entry_00338924_0x338924(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00338924_0x338924");
#endif

    ctx->pc = 0x338924u;

    // 0x338924: 0xc084a50  jal         func_212940
    ctx->pc = 0x338924u;
    SET_GPR_U32(ctx, 31, 0x33892Cu);
    ctx->pc = 0x212940u;
    {
        ctx->pc = 0x33892Cu;
        ps2_syscalls::SleepThread(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33892Cu) { return; }
    ctx->pc = 0x33892Cu;
}
