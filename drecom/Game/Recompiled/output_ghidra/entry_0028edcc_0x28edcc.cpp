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

// Function: entry_0028edcc
// Address: 0x28edcc - 0x28edd8
void entry_0028edcc_0x28edcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028edcc_0x28edcc");
#endif

    ctx->pc = 0x28edccu;

    // 0x28edcc: 0x2411009d  addiu       $s1, $zero, 0x9D
    ctx->pc = 0x28edccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
    // 0x28edd0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28EDD0u;
    {
        const bool branch_taken_0x28edd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28edd0) {
            ctx->pc = 0x28EDDCu;
            return;
        }
    }
    ctx->pc = 0x28EDD8u;
}
