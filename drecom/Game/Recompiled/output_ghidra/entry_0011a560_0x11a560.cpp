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

// Function: entry_0011a560
// Address: 0x11a560 - 0x11a57c
void entry_0011a560_0x11a560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a560_0x11a560");
#endif

    ctx->pc = 0x11a560u;

    // 0x11a560: 0x17c00006  bnez        $fp, . + 4 + (0x6 << 2)
    ctx->pc = 0x11A560u;
    {
        const bool branch_taken_0x11a560 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x11a560) {
            ctx->pc = 0x11A57Cu;
            return;
        }
    }
    ctx->pc = 0x11A568u;
    // 0x11a568: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x11a568u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11a56c: 0xde230000  ld          $v1, 0x0($s1)
    ctx->pc = 0x11a56cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11a570: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x11a570u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x11a574: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x11A574u;
    {
        const bool branch_taken_0x11a574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A574u;
        // 0x11a578: 0xfe030000  sd          $v1, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a574) {
            ctx->pc = 0x11A5E8u;
            return;
        }
    }
    ctx->pc = 0x11A57Cu;
}
