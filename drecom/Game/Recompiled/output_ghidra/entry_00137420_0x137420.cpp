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

// Function: entry_00137420
// Address: 0x137420 - 0x137430
void entry_00137420_0x137420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137420_0x137420");
#endif

    ctx->pc = 0x137420u;

    // 0x137420: 0x2a630002  slti        $v1, $s3, 0x2
    ctx->pc = 0x137420u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x137424: 0x1460fe5d  bnez        $v1, . + 4 + (-0x1A3 << 2)
    ctx->pc = 0x137424u;
    {
        const bool branch_taken_0x137424 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x137424) {
            ctx->pc = 0x136D9Cu;
            return;
        }
    }
    ctx->pc = 0x13742Cu;
    // 0x13742c: 0x0  nop
    ctx->pc = 0x13742cu;
    // NOP
    ctx->pc = 0x137430u;
}
