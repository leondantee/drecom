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

// Function: entry_00214a98
// Address: 0x214a98 - 0x214aa8
void entry_00214a98_0x214a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214a98_0x214a98");
#endif

    ctx->pc = 0x214a98u;

    // 0x214a98: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x214a98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214a9c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x214a9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x214aa0: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x214aa0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
    // 0x214aa4: 0x0  nop
    ctx->pc = 0x214aa4u;
    // NOP
    ctx->pc = 0x214aa8u;
}
