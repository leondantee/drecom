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

// Function: entry_0011ea5c
// Address: 0x11ea5c - 0x11ea88
void entry_0011ea5c_0x11ea5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ea5c_0x11ea5c");
#endif

    ctx->pc = 0x11ea5cu;

    // 0x11ea5c: 0xdcc50010  ld          $a1, 0x10($a2)
    ctx->pc = 0x11ea5cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x11ea60: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11ea60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11ea64: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x11ea64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x11ea68: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x11ea68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x11ea6c: 0x64a3ffff  daddiu      $v1, $a1, -0x1
    ctx->pc = 0x11ea6cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
    // 0x11ea70: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x11ea70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x11ea74: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x11EA74u;
    {
        const bool branch_taken_0x11ea74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EA74u;
        // 0x11ea78: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ea74) {
            ctx->pc = 0x11EAC4u;
            return;
        }
    }
    ctx->pc = 0x11EA7Cu;
    // 0x11ea7c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x11ea7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11ea80: 0x52978  dsll        $a1, $a1, 5
    ctx->pc = 0x11ea80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 5);
    // 0x11ea84: 0x5293a  dsrl        $a1, $a1, 4
    ctx->pc = 0x11ea84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 4);
    ctx->pc = 0x11ea88u;
}
