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

// Function: entry_0027caf0
// Address: 0x27caf0 - 0x27cafc
void entry_0027caf0_0x27caf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027caf0_0x27caf0");
#endif

    ctx->pc = 0x27caf0u;

    // 0x27caf0: 0x24100030  addiu       $s0, $zero, 0x30
    ctx->pc = 0x27caf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x27caf4: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x27CAF4u;
    {
        const bool branch_taken_0x27caf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27caf4) {
            ctx->pc = 0x27CE40u;
            return;
        }
    }
    ctx->pc = 0x27CAFCu;
}
