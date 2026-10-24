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

// Function: entry_00111744
// Address: 0x111744 - 0x11174c
void entry_00111744_0x111744(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111744_0x111744");
#endif

    ctx->pc = 0x111744u;

    // 0x111744: 0xe5402b  sltu        $t0, $a3, $a1
    ctx->pc = 0x111744u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x111748: 0xa95821  addu        $t3, $a1, $t1
    ctx->pc = 0x111748u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    ctx->pc = 0x11174cu;
}
