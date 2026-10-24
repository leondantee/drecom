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

// Function: entry_001150f8
// Address: 0x1150f8 - 0x11510c
void entry_001150f8_0x1150f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001150f8_0x1150f8");
#endif

    ctx->pc = 0x1150f8u;

    // 0x1150f8: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1150f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x1150fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1150fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x115100: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x115100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x115104: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x115104u;
    {
        const bool branch_taken_0x115104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115104u;
        // 0x115108: 0x62200b  movn        $a0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115104) {
            ctx->pc = 0x115178u;
            return;
        }
    }
    ctx->pc = 0x11510Cu;
}
