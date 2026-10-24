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

// Function: entry_0018dd00
// Address: 0x18dd00 - 0x18dd20
void entry_0018dd00_0x18dd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018dd00_0x18dd00");
#endif

    ctx->pc = 0x18dd00u;

    // 0x18dd00: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x18dd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x18dd04: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18DD04u;
    {
        const bool branch_taken_0x18dd04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18dd04) {
            ctx->pc = 0x18DD20u;
            return;
        }
    }
    ctx->pc = 0x18DD0Cu;
    // 0x18dd0c: 0xae30007c  sw          $s0, 0x7C($s1)
    ctx->pc = 0x18dd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 16));
    // 0x18dd10: 0xae300078  sw          $s0, 0x78($s1)
    ctx->pc = 0x18dd10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 16));
    // 0x18dd14: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x18dd14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x18dd18: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18DD18u;
    {
        const bool branch_taken_0x18dd18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18dd18) {
            ctx->pc = 0x18DD34u;
            return;
        }
    }
    ctx->pc = 0x18DD20u;
}
