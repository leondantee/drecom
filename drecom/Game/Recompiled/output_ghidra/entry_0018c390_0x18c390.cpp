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

// Function: entry_0018c390
// Address: 0x18c390 - 0x18c3b0
void entry_0018c390_0x18c390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c390_0x18c390");
#endif

    ctx->pc = 0x18c390u;

    // 0x18c390: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x18c390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x18c394: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18C394u;
    {
        const bool branch_taken_0x18c394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c394) {
            ctx->pc = 0x18C3B0u;
            return;
        }
    }
    ctx->pc = 0x18C39Cu;
    // 0x18c39c: 0xae50003c  sw          $s0, 0x3C($s2)
    ctx->pc = 0x18c39cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 16));
    // 0x18c3a0: 0xae500038  sw          $s0, 0x38($s2)
    ctx->pc = 0x18c3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 16));
    // 0x18c3a4: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x18c3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
    // 0x18c3a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18C3A8u;
    {
        const bool branch_taken_0x18c3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c3a8) {
            ctx->pc = 0x18C3C4u;
            return;
        }
    }
    ctx->pc = 0x18C3B0u;
}
