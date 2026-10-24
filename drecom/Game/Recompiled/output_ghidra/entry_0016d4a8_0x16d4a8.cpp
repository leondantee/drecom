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

// Function: entry_0016d4a8
// Address: 0x16d4a8 - 0x16d4b8
void entry_0016d4a8_0x16d4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d4a8_0x16d4a8");
#endif

    ctx->pc = 0x16d4a8u;

    // 0x16d4a8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x16d4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x16d4ac: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x16d4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x16d4b0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x16d4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x16d4b4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x16d4b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x16d4b8u;
}
