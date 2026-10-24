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

// Function: entry_002634f8
// Address: 0x2634f8 - 0x263510
void entry_002634f8_0x2634f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002634f8_0x2634f8");
#endif

    ctx->pc = 0x2634f8u;

    // 0x2634f8: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x2634f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x2634fc: 0x3262ffff  andi        $v0, $s3, 0xFFFF
    ctx->pc = 0x2634fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x263500: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x263500u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x263504: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x263504u;
    {
        const bool branch_taken_0x263504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263504) {
            ctx->pc = 0x2634CCu;
            return;
        }
    }
    ctx->pc = 0x26350Cu;
    // 0x26350c: 0x0  nop
    ctx->pc = 0x26350cu;
    // NOP
    ctx->pc = 0x263510u;
}
