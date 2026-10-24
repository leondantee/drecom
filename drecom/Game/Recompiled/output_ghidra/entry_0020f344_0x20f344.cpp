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

// Function: entry_0020f344
// Address: 0x20f344 - 0x20f354
void entry_0020f344_0x20f344(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020f344_0x20f344");
#endif

    ctx->pc = 0x20f344u;

    // 0x20f344: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20f344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20f348: 0x8c259540  lw          $a1, -0x6AC0($at)
    ctx->pc = 0x20f348u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x619540u));
    // 0x20f34c: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x20F34Cu;
    {
        const bool branch_taken_0x20f34c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f34c) {
            ctx->pc = 0x20F3A4u;
            return;
        }
    }
    ctx->pc = 0x20F354u;
}
