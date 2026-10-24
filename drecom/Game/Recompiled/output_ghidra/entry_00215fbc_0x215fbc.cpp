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

// Function: entry_00215fbc
// Address: 0x215fbc - 0x215fd0
void entry_00215fbc_0x215fbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215fbc_0x215fbc");
#endif

    ctx->pc = 0x215fbcu;

    // 0x215fbc: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x215FBCu;
    {
        const bool branch_taken_0x215fbc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x215fbc) {
            ctx->pc = 0x215FF0u;
            return;
        }
    }
    ctx->pc = 0x215FC4u;
    // 0x215fc4: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x215fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x215fc8: 0x50640008  beql        $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x215FC8u;
    {
        const bool branch_taken_0x215fc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x215fc8) {
            ctx->pc = 0x215FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215FC8u;
            // 0x215fcc: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215FECu;
            return;
        }
    }
    ctx->pc = 0x215FD0u;
}
