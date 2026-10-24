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

// Function: entry_00188634
// Address: 0x188634 - 0x188658
void entry_00188634_0x188634(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188634_0x188634");
#endif

    ctx->pc = 0x188634u;

    // 0x188634: 0x938380b4  lbu         $v1, -0x7F4C($gp)
    ctx->pc = 0x188634u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934708)));
    // 0x188638: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x188638u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x18863c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18863cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188640: 0x1083002b  beq         $a0, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x188640u;
    {
        const bool branch_taken_0x188640 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x188640) {
            ctx->pc = 0x1886F0u;
            return;
        }
    }
    ctx->pc = 0x188648u;
    // 0x188648: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x188648u;
    {
        const bool branch_taken_0x188648 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x188648) {
            ctx->pc = 0x188658u;
            return;
        }
    }
    ctx->pc = 0x188650u;
    // 0x188650: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x188650u;
    {
        const bool branch_taken_0x188650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x188650) {
            ctx->pc = 0x18890Cu;
            return;
        }
    }
    ctx->pc = 0x188658u;
}
