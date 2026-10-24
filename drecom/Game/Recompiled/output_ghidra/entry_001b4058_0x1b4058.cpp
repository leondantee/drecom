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

// Function: entry_001b4058
// Address: 0x1b4058 - 0x1b4070
void entry_001b4058_0x1b4058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4058_0x1b4058");
#endif

    ctx->pc = 0x1b4058u;

    // 0x1b4058: 0x92021219  lbu         $v0, 0x1219($s0)
    ctx->pc = 0x1b4058u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4633)));
    // 0x1b405c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b405cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b4060: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1b4060u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b4064: 0x1440fede  bnez        $v0, . + 4 + (-0x122 << 2)
    ctx->pc = 0x1B4064u;
    {
        const bool branch_taken_0x1b4064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4064) {
            ctx->pc = 0x1B3BE0u;
            return;
        }
    }
    ctx->pc = 0x1B406Cu;
    // 0x1b406c: 0x0  nop
    ctx->pc = 0x1b406cu;
    // NOP
    ctx->pc = 0x1b4070u;
}
