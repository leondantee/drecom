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

// Function: entry_00114c9c
// Address: 0x114c9c - 0x114ca4
void entry_00114c9c_0x114c9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114c9c_0x114c9c");
#endif

    ctx->pc = 0x114c9cu;

    // 0x114c9c: 0xdfa50008  ld          $a1, 0x8($sp)
    ctx->pc = 0x114c9cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x114ca0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x114ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x114ca4u;
}
