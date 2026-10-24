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

// Function: entry_00215914
// Address: 0x215914 - 0x21591c
void entry_00215914_0x215914(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215914_0x215914");
#endif

    ctx->pc = 0x215914u;

    // 0x215914: 0x54a0fff4  bnel        $a1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x215914u;
    {
        const bool branch_taken_0x215914 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x215914) {
            ctx->pc = 0x215918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215914u;
            // 0x215918: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2158E8u;
            return;
        }
    }
    ctx->pc = 0x21591Cu;
}
