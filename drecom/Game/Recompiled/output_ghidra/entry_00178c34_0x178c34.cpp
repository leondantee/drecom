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

// Function: entry_00178c34
// Address: 0x178c34 - 0x178c40
void entry_00178c34_0x178c34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178c34_0x178c34");
#endif

    ctx->pc = 0x178c34u;

    // 0x178c34: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x178c34u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x178c38: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x178C38u;
    {
        const bool branch_taken_0x178c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x178c38) {
            ctx->pc = 0x178F10u;
            return;
        }
    }
    ctx->pc = 0x178C40u;
}
