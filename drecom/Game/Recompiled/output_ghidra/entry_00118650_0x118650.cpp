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

// Function: entry_00118650
// Address: 0x118650 - 0x118668
void entry_00118650_0x118650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118650_0x118650");
#endif

    ctx->pc = 0x118650u;

    // 0x118650: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x118650u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x118654: 0x31620003  andi        $v0, $t3, 0x3
    ctx->pc = 0x118654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
    // 0x118658: 0x5440ffdf  bnel        $v0, $zero, . + 4 + (-0x21 << 2)
    ctx->pc = 0x118658u;
    {
        const bool branch_taken_0x118658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x118658) {
            ctx->pc = 0x11865Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118658u;
            // 0x11865c: 0x8cb0000c  lw          $s0, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1185D8u;
            return;
        }
    }
    ctx->pc = 0x118660u;
    // 0x118660: 0x42878  dsll        $a1, $a0, 1
    ctx->pc = 0x118660u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 1);
    // 0x118664: 0x0  nop
    ctx->pc = 0x118664u;
    // NOP
    ctx->pc = 0x118668u;
}
