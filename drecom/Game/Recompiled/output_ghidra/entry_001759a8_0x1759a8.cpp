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

// Function: entry_001759a8
// Address: 0x1759a8 - 0x1759b8
void entry_001759a8_0x1759a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001759a8_0x1759a8");
#endif

    ctx->pc = 0x1759a8u;

    // 0x1759a8: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x1759a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x1759ac: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x1759acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1759b0: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1759B0u;
    {
        const bool branch_taken_0x1759b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1759b0) {
            ctx->pc = 0x175924u;
            return;
        }
    }
    ctx->pc = 0x1759B8u;
}
