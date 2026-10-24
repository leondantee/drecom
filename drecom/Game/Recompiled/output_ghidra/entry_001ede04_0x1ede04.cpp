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

// Function: entry_001ede04
// Address: 0x1ede04 - 0x1ede18
void entry_001ede04_0x1ede04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ede04_0x1ede04");
#endif

    ctx->pc = 0x1ede04u;

    // 0x1ede04: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ede04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ede08: 0x8c241a50  lw          $a0, 0x1A50($at)
    ctx->pc = 0x1ede08u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A50u));
    // 0x1ede0c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1ede0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1ede10: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1ede10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x1ede14: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ede14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    ctx->pc = 0x1ede18u;
}
