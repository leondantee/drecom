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

// Function: entry_0021cd98
// Address: 0x21cd98 - 0x21cda8
void entry_0021cd98_0x21cd98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021cd98_0x21cd98");
#endif

    ctx->pc = 0x21cd98u;

    // 0x21cd98: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x21cd98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21cd9c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x21cd9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21cda0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x21CDA0u;
    {
        const bool branch_taken_0x21cda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21cda0) {
            ctx->pc = 0x21CDCCu;
            return;
        }
    }
    ctx->pc = 0x21CDA8u;
}
