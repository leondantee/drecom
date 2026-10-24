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

// Function: entry_002f21f4
// Address: 0x2f21f4 - 0x2f2204
void entry_002f21f4_0x2f21f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f21f4_0x2f21f4");
#endif

    ctx->pc = 0x2f21f4u;

    // 0x2f21f4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2f21f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f21f8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2f21f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f21fc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2F21FCu;
    {
        const bool branch_taken_0x2f21fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f21fc) {
            ctx->pc = 0x2F2228u;
            return;
        }
    }
    ctx->pc = 0x2F2204u;
}
