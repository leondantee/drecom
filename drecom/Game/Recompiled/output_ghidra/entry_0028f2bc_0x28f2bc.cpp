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

// Function: entry_0028f2bc
// Address: 0x28f2bc - 0x28f2c8
void entry_0028f2bc_0x28f2bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028f2bc_0x28f2bc");
#endif

    ctx->pc = 0x28f2bcu;

    // 0x28f2bc: 0x26115df4  addiu       $s1, $s0, 0x5DF4
    ctx->pc = 0x28f2bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24052));
    // 0x28f2c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28F2C0u;
    {
        const bool branch_taken_0x28f2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f2c0) {
            ctx->pc = 0x28F2CCu;
            return;
        }
    }
    ctx->pc = 0x28F2C8u;
}
