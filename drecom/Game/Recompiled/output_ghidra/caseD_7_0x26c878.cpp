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

// Function: caseD_7
// Address: 0x26c878 - 0x26c898
void caseD_7_0x26c878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x26c878");
#endif

    ctx->pc = 0x26c878u;

    // 0x26c878: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x26c878u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c87c: 0x910309e7  lbu         $v1, 0x9E7($t0)
    ctx->pc = 0x26c87cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2535)));
    // 0x26c880: 0x10600053  beqz        $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x26C880u;
    {
        const bool branch_taken_0x26c880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c880) {
            ctx->pc = 0x26C9D0u;
            return;
        }
    }
    ctx->pc = 0x26C888u;
    // 0x26c888: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26c888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c88c: 0xac801b60  sw          $zero, 0x1B60($a0)
    ctx->pc = 0x26c88cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 0));
    // 0x26c890: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x26C890u;
    {
        const bool branch_taken_0x26c890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c890) {
            ctx->pc = 0x26C9D0u;
            return;
        }
    }
    ctx->pc = 0x26C898u;
}
