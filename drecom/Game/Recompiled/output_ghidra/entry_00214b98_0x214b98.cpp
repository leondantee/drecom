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

// Function: entry_00214b98
// Address: 0x214b98 - 0x214ba0
void entry_00214b98_0x214b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214b98_0x214b98");
#endif

    ctx->pc = 0x214b98u;

    // 0x214b98: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x214b98u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x214b9c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x214b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->pc = 0x214ba0u;
}
