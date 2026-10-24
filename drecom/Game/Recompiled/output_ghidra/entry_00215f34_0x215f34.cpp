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

// Function: entry_00215f34
// Address: 0x215f34 - 0x215f48
void entry_00215f34_0x215f34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215f34_0x215f34");
#endif

    ctx->pc = 0x215f34u;

    // 0x215f34: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x215F34u;
    {
        const bool branch_taken_0x215f34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x215f34) {
            ctx->pc = 0x215F68u;
            return;
        }
    }
    ctx->pc = 0x215F3Cu;
    // 0x215f3c: 0x8cc30038  lw          $v1, 0x38($a2)
    ctx->pc = 0x215f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x215f40: 0x50640008  beql        $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x215F40u;
    {
        const bool branch_taken_0x215f40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x215f40) {
            ctx->pc = 0x215F44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215F40u;
            // 0x215f44: 0x8c820038  lw          $v0, 0x38($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215F64u;
            return;
        }
    }
    ctx->pc = 0x215F48u;
}
