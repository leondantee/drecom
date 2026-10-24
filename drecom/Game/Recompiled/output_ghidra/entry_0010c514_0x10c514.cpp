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

// Function: entry_0010c514
// Address: 0x10c514 - 0x10c520
void entry_0010c514_0x10c514(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c514_0x10c514");
#endif

    ctx->pc = 0x10c514u;

    // 0x10c514: 0x24424568  addiu       $v0, $v0, 0x4568
    ctx->pc = 0x10c514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17768));
    // 0x10c518: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10c518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c51c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10c51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x10c520u;
}
