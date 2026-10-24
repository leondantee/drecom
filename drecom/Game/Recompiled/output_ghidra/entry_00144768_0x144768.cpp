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

// Function: entry_00144768
// Address: 0x144768 - 0x144780
void entry_00144768_0x144768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144768_0x144768");
#endif

    ctx->pc = 0x144768u;

    // 0x144768: 0x8e031370  lw          $v1, 0x1370($s0)
    ctx->pc = 0x144768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4976)));
    // 0x14476c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x14476cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x144770: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x144770u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x144774: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x144774u;
    {
        const bool branch_taken_0x144774 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x144774) {
            ctx->pc = 0x14471Cu;
            return;
        }
    }
    ctx->pc = 0x14477Cu;
    // 0x14477c: 0x0  nop
    ctx->pc = 0x14477cu;
    // NOP
    ctx->pc = 0x144780u;
}
