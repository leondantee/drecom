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

// Function: entry_00188fcc
// Address: 0x188fcc - 0x188fe0
void entry_00188fcc_0x188fcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188fcc_0x188fcc");
#endif

    ctx->pc = 0x188fccu;

    // 0x188fcc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x188fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x188fd0: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x188fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x188fd4: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x188fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x188fd8: 0x10600065  beqz        $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x188FD8u;
    {
        const bool branch_taken_0x188fd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x188fd8) {
            ctx->pc = 0x189170u;
            return;
        }
    }
    ctx->pc = 0x188FE0u;
}
