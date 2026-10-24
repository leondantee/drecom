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

// Function: entry_00116e34
// Address: 0x116e34 - 0x116e4c
void entry_00116e34_0x116e34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116e34_0x116e34");
#endif

    ctx->pc = 0x116e34u;

    // 0x116e34: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x116e34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x116e38: 0x0  nop
    ctx->pc = 0x116e38u;
    // NOP
    // 0x116e3c: 0x0  nop
    ctx->pc = 0x116e3cu;
    // NOP
    // 0x116e40: 0x0  nop
    ctx->pc = 0x116e40u;
    // NOP
    // 0x116e44: 0x1043fffa  beq         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x116E44u;
    {
        const bool branch_taken_0x116e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x116e44) {
            ctx->pc = 0x116E30u;
            return;
        }
    }
    ctx->pc = 0x116E4Cu;
}
