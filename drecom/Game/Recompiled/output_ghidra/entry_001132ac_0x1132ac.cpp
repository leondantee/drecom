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

// Function: entry_001132ac
// Address: 0x1132ac - 0x1132b4
void entry_001132ac_0x1132ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001132ac_0x1132ac");
#endif

    ctx->pc = 0x1132acu;

    // 0x1132ac: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x1132acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1132b0: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x1132b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1132b4u;
}
