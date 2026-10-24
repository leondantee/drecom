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

// Function: entry_00361c28
// Address: 0x361c28 - 0x361c40
void entry_00361c28_0x361c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00361c28_0x361c28");
#endif

    ctx->pc = 0x361c28u;

    // 0x361c28: 0x92221340  lbu         $v0, 0x1340($s1)
    ctx->pc = 0x361c28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4928)));
    // 0x361c2c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x361c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361c30: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x361c30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x361c34: 0x1440ff9d  bnez        $v0, . + 4 + (-0x63 << 2)
    ctx->pc = 0x361C34u;
    {
        const bool branch_taken_0x361c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x361c34) {
            ctx->pc = 0x361AACu;
            return;
        }
    }
    ctx->pc = 0x361C3Cu;
    // 0x361c3c: 0x0  nop
    ctx->pc = 0x361c3cu;
    // NOP
    ctx->pc = 0x361c40u;
}
