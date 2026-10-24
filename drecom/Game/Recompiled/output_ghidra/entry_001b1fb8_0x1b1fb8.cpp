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

// Function: entry_001b1fb8
// Address: 0x1b1fb8 - 0x1b1fd0
void entry_001b1fb8_0x1b1fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1fb8_0x1b1fb8");
#endif

    ctx->pc = 0x1b1fb8u;

    // 0x1b1fb8: 0x92a21219  lbu         $v0, 0x1219($s5)
    ctx->pc = 0x1b1fb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4633)));
    // 0x1b1fbc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b1fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b1fc0: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x1b1fc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b1fc4: 0x1440ff74  bnez        $v0, . + 4 + (-0x8C << 2)
    ctx->pc = 0x1B1FC4u;
    {
        const bool branch_taken_0x1b1fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1fc4) {
            ctx->pc = 0x1B1D98u;
            return;
        }
    }
    ctx->pc = 0x1B1FCCu;
    // 0x1b1fcc: 0x0  nop
    ctx->pc = 0x1b1fccu;
    // NOP
    ctx->pc = 0x1b1fd0u;
}
