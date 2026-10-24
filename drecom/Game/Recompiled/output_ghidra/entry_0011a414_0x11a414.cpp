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

// Function: entry_0011a414
// Address: 0x11a414 - 0x11a428
void entry_0011a414_0x11a414(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a414_0x11a414");
#endif

    ctx->pc = 0x11a414u;

    // 0x11a414: 0x1310c2  srl         $v0, $s3, 3
    ctx->pc = 0x11a414u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 3));
    // 0x11a418: 0x2bca0002  slti        $t2, $fp, 0x2
    ctx->pc = 0x11a418u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11a41c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x11A41Cu;
    {
        const bool branch_taken_0x11a41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A41Cu;
        // 0x11a420: 0x2483c  dsll32      $t1, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a41c) {
            ctx->pc = 0x11A4D4u;
            return;
        }
    }
    ctx->pc = 0x11A424u;
    // 0x11a424: 0x0  nop
    ctx->pc = 0x11a424u;
    // NOP
    ctx->pc = 0x11a428u;
}
