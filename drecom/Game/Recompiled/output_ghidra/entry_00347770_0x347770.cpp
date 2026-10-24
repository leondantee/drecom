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

// Function: entry_00347770
// Address: 0x347770 - 0x34778c
void entry_00347770_0x347770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00347770_0x347770");
#endif

    ctx->pc = 0x347770u;

    // 0x347770: 0x26a3ffff  addiu       $v1, $s5, -0x1
    ctx->pc = 0x347770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x347774: 0x307500ff  andi        $s5, $v1, 0xFF
    ctx->pc = 0x347774u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x347778: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x347778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x34777c: 0x1460ffb7  bnez        $v1, . + 4 + (-0x49 << 2)
    ctx->pc = 0x34777Cu;
    {
        const bool branch_taken_0x34777c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34777c) {
            ctx->pc = 0x34765Cu;
            return;
        }
    }
    ctx->pc = 0x347784u;
    // 0x347784: 0x10000110  b           . + 4 + (0x110 << 2)
    ctx->pc = 0x347784u;
    {
        const bool branch_taken_0x347784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x347784) {
            ctx->pc = 0x347BC8u;
            return;
        }
    }
    ctx->pc = 0x34778Cu;
}
