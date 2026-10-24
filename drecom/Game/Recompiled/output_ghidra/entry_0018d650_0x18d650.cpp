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

// Function: entry_0018d650
// Address: 0x18d650 - 0x18d668
void entry_0018d650_0x18d650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d650_0x18d650");
#endif

    ctx->pc = 0x18d650u;

    // 0x18d650: 0x1680000f  bnez        $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x18D650u;
    {
        const bool branch_taken_0x18d650 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d650) {
            ctx->pc = 0x18D690u;
            return;
        }
    }
    ctx->pc = 0x18D658u;
    // 0x18d658: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x18d658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x18d65c: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x18d65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x18d660: 0x10000177  b           . + 4 + (0x177 << 2)
    ctx->pc = 0x18D660u;
    {
        const bool branch_taken_0x18d660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d660) {
            ctx->pc = 0x18DC40u;
            return;
        }
    }
    ctx->pc = 0x18D668u;
}
