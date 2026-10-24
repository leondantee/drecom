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

// Function: entry_001b3480
// Address: 0x1b3480 - 0x1b3498
void entry_001b3480_0x1b3480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3480_0x1b3480");
#endif

    ctx->pc = 0x1b3480u;

    // 0x1b3480: 0x92021219  lbu         $v0, 0x1219($s0)
    ctx->pc = 0x1b3480u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4633)));
    // 0x1b3484: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b3484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3488: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x1b3488u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b348c: 0x1440fe99  bnez        $v0, . + 4 + (-0x167 << 2)
    ctx->pc = 0x1B348Cu;
    {
        const bool branch_taken_0x1b348c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b348c) {
            ctx->pc = 0x1B2EF4u;
            return;
        }
    }
    ctx->pc = 0x1B3494u;
    // 0x1b3494: 0x0  nop
    ctx->pc = 0x1b3494u;
    // NOP
    ctx->pc = 0x1b3498u;
}
