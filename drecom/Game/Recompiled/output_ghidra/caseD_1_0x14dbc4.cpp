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

// Function: caseD_1
// Address: 0x14dbc4 - 0x14dbd8
void caseD_1_0x14dbc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x14dbc4");
#endif

    ctx->pc = 0x14dbc4u;

    // 0x14dbc4: 0x860213ac  lh          $v0, 0x13AC($s0)
    ctx->pc = 0x14dbc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5036)));
    // 0x14dbc8: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x14dbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x14dbcc: 0xa60213ac  sh          $v0, 0x13AC($s0)
    ctx->pc = 0x14dbccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5036), (uint16_t)GPR_U32(ctx, 2));
    // 0x14dbd0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x14DBD0u;
    {
        const bool branch_taken_0x14dbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dbd0) {
            ctx->pc = 0x14DBF8u;
            return;
        }
    }
    ctx->pc = 0x14DBD8u;
}
