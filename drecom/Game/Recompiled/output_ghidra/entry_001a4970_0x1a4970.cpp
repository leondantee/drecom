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

// Function: entry_001a4970
// Address: 0x1a4970 - 0x1a4988
void entry_001a4970_0x1a4970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4970_0x1a4970");
#endif

    ctx->pc = 0x1a4970u;

    // 0x1a4970: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a4970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a4974: 0x942400cc  lhu         $a0, 0xCC($at)
    ctx->pc = 0x1a4974u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x5D00CCu));
    // 0x1a4978: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x1a4978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1a497c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x1a497cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1a4980: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1A4980u;
    {
        const bool branch_taken_0x1a4980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4980) {
            ctx->pc = 0x1A4A20u;
            return;
        }
    }
    ctx->pc = 0x1A4988u;
}
