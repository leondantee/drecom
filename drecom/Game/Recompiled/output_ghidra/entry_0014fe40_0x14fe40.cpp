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

// Function: entry_0014fe40
// Address: 0x14fe40 - 0x14fe4c
void entry_0014fe40_0x14fe40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014fe40_0x14fe40");
#endif

    ctx->pc = 0x14fe40u;

    // 0x14fe40: 0x2a230004  slti        $v1, $s1, 0x4
    ctx->pc = 0x14fe40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x14fe44: 0x1460ff8d  bnez        $v1, . + 4 + (-0x73 << 2)
    ctx->pc = 0x14FE44u;
    {
        const bool branch_taken_0x14fe44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14fe44) {
            ctx->pc = 0x14FC7Cu;
            return;
        }
    }
    ctx->pc = 0x14FE4Cu;
}
