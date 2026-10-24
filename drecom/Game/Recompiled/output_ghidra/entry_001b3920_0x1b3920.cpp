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

// Function: entry_001b3920
// Address: 0x1b3920 - 0x1b3938
void entry_001b3920_0x1b3920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3920_0x1b3920");
#endif

    ctx->pc = 0x1b3920u;

    // 0x1b3920: 0x862210a6  lh          $v0, 0x10A6($s1)
    ctx->pc = 0x1b3920u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4262)));
    // 0x1b3924: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b3924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b3928: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1b3928u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1b392c: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B392Cu;
    {
        const bool branch_taken_0x1b392c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b392c) {
            ctx->pc = 0x1B3938u;
            return;
        }
    }
    ctx->pc = 0x1B3934u;
    // 0x1b3934: 0x36100002  ori         $s0, $s0, 0x2
    ctx->pc = 0x1b3934u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
    ctx->pc = 0x1b3938u;
}
