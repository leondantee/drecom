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

// Function: entry_002973bc
// Address: 0x2973bc - 0x2973c8
void entry_002973bc_0x2973bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002973bc_0x2973bc");
#endif

    ctx->pc = 0x2973bcu;

    // 0x2973bc: 0x26160058  addiu       $s6, $s0, 0x58
    ctx->pc = 0x2973bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x2973c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2973C0u;
    {
        const bool branch_taken_0x2973c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2973c0) {
            ctx->pc = 0x2973D0u;
            return;
        }
    }
    ctx->pc = 0x2973C8u;
}
