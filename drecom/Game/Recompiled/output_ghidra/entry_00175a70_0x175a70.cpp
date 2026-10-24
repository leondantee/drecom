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

// Function: entry_00175a70
// Address: 0x175a70 - 0x175a80
void entry_00175a70_0x175a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175a70_0x175a70");
#endif

    ctx->pc = 0x175a70u;

    // 0x175a70: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x175a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x175a74: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x175a74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x175a78: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x175A78u;
    {
        const bool branch_taken_0x175a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175a78) {
            ctx->pc = 0x1759ECu;
            return;
        }
    }
    ctx->pc = 0x175A80u;
}
