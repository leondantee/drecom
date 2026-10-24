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

// Function: entry_0016ecd8
// Address: 0x16ecd8 - 0x16ece8
void entry_0016ecd8_0x16ecd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ecd8_0x16ecd8");
#endif

    ctx->pc = 0x16ecd8u;

    // 0x16ecd8: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x16ecd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x16ecdc: 0x28430005  slti        $v1, $v0, 0x5
    ctx->pc = 0x16ecdcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x16ece0: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x16ECE0u;
    {
        const bool branch_taken_0x16ece0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ece0) {
            ctx->pc = 0x16ECA8u;
            return;
        }
    }
    ctx->pc = 0x16ECE8u;
}
