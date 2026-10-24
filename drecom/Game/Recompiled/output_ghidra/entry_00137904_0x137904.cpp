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

// Function: entry_00137904
// Address: 0x137904 - 0x137920
void entry_00137904_0x137904(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137904_0x137904");
#endif

    ctx->pc = 0x137904u;

    // 0x137904: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x137904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x137908: 0x30440008  andi        $a0, $v0, 0x8
    ctx->pc = 0x137908u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x13790c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13790Cu;
    {
        const bool branch_taken_0x13790c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13790c) {
            ctx->pc = 0x137920u;
            return;
        }
    }
    ctx->pc = 0x137914u;
    // 0x137914: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x137914u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x137918: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x137918u;
    {
        const bool branch_taken_0x137918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137918) {
            ctx->pc = 0x137924u;
            return;
        }
    }
    ctx->pc = 0x137920u;
}
