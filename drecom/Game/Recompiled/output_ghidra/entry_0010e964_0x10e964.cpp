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

// Function: entry_0010e964
// Address: 0x10e964 - 0x10e968
void entry_0010e964_0x10e964(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e964_0x10e964");
#endif

    ctx->pc = 0x10e964u;

    // 0x10e964: 0xc085766  jal         func_215D98
    ctx->pc = 0x10E964u;
    SET_GPR_U32(ctx, 31, 0x10E96Cu);
    ctx->pc = 0x215D98u;
    {
        ctx->pc = 0x10E96Cu;
        ps2_stubs::sceSifCheckStatRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10E96Cu) { return; }
    ctx->pc = 0x10E96Cu;
}
