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

// Function: entry_001b3938
// Address: 0x1b3938 - 0x1b3950
void entry_001b3938_0x1b3938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3938_0x1b3938");
#endif

    ctx->pc = 0x1b3938u;

    // 0x1b3938: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b3938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b393c: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x1b393cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1b3940: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1b3940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1b3944: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B3944u;
    {
        const bool branch_taken_0x1b3944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3944) {
            ctx->pc = 0x1B3950u;
            return;
        }
    }
    ctx->pc = 0x1B394Cu;
    // 0x1b394c: 0x36100004  ori         $s0, $s0, 0x4
    ctx->pc = 0x1b394cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4);
    ctx->pc = 0x1b3950u;
}
