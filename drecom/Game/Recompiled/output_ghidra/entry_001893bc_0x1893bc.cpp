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

// Function: entry_001893bc
// Address: 0x1893bc - 0x1893c4
void entry_001893bc_0x1893bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001893bc_0x1893bc");
#endif

    ctx->pc = 0x1893bcu;

    // 0x1893bc: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x1893BCu;
    SET_GPR_U32(ctx, 31, 0x1893C4u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x1893C4u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1893C4u) { return; }
    ctx->pc = 0x1893C4u;
}
