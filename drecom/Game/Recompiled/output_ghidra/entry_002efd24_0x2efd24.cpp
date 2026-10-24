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

// Function: entry_002efd24
// Address: 0x2efd24 - 0x2efd34
void entry_002efd24_0x2efd24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002efd24_0x2efd24");
#endif

    ctx->pc = 0x2efd24u;

    // 0x2efd24: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2efd24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2efd28: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2efd28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2efd2c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2EFD2Cu;
    {
        const bool branch_taken_0x2efd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efd2c) {
            ctx->pc = 0x2EFD58u;
            return;
        }
    }
    ctx->pc = 0x2EFD34u;
}
