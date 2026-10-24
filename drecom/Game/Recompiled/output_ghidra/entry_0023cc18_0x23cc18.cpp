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

// Function: entry_0023cc18
// Address: 0x23cc18 - 0x23cc34
void entry_0023cc18_0x23cc18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023cc18_0x23cc18");
#endif

    ctx->pc = 0x23cc18u;

    // 0x23cc18: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x23cc18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cc1c: 0x84a4127a  lh          $a0, 0x127A($a1)
    ctx->pc = 0x23cc1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4730)));
    // 0x23cc20: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x23cc20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x23cc24: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x23cc24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x23cc28: 0xa4a3127a  sh          $v1, 0x127A($a1)
    ctx->pc = 0x23cc28u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x23cc2c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23CC2Cu;
    {
        const bool branch_taken_0x23cc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cc2c) {
            ctx->pc = 0x23CC44u;
            return;
        }
    }
    ctx->pc = 0x23CC34u;
}
