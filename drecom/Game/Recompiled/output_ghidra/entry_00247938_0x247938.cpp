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

// Function: entry_00247938
// Address: 0x247938 - 0x247954
void entry_00247938_0x247938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00247938_0x247938");
#endif

    ctx->pc = 0x247938u;

    // 0x247938: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x247938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24793c: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x24793cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
    // 0x247940: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x247940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x247944: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x247944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x247948: 0xa482127a  sh          $v0, 0x127A($a0)
    ctx->pc = 0x247948u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 2));
    // 0x24794c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x24794Cu;
    {
        const bool branch_taken_0x24794c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24794c) {
            ctx->pc = 0x247964u;
            return;
        }
    }
    ctx->pc = 0x247954u;
}
