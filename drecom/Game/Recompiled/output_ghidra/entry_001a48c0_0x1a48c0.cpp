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

// Function: entry_001a48c0
// Address: 0x1a48c0 - 0x1a48d8
void entry_001a48c0_0x1a48c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a48c0_0x1a48c0");
#endif

    ctx->pc = 0x1a48c0u;

    // 0x1a48c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a48c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a48c4: 0x942300cc  lhu         $v1, 0xCC($at)
    ctx->pc = 0x1a48c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00CCu));
    // 0x1a48c8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1a48c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a48cc: 0x30830020  andi        $v1, $a0, 0x20
    ctx->pc = 0x1a48ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x1a48d0: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1A48D0u;
    {
        const bool branch_taken_0x1a48d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a48d0) {
            ctx->pc = 0x1A4970u;
            return;
        }
    }
    ctx->pc = 0x1A48D8u;
}
