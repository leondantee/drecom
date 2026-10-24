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

// Function: entry_001b46f0
// Address: 0x1b46f0 - 0x1b4708
void entry_001b46f0_0x1b46f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b46f0_0x1b46f0");
#endif

    ctx->pc = 0x1b46f0u;

    // 0x1b46f0: 0x92021219  lbu         $v0, 0x1219($s0)
    ctx->pc = 0x1b46f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4633)));
    // 0x1b46f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b46f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b46f8: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1b46f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b46fc: 0x1440fea5  bnez        $v0, . + 4 + (-0x15B << 2)
    ctx->pc = 0x1B46FCu;
    {
        const bool branch_taken_0x1b46fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b46fc) {
            ctx->pc = 0x1B4194u;
            return;
        }
    }
    ctx->pc = 0x1B4704u;
    // 0x1b4704: 0x0  nop
    ctx->pc = 0x1b4704u;
    // NOP
    ctx->pc = 0x1b4708u;
}
