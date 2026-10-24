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

// Function: entry_00110780
// Address: 0x110780 - 0x110794
void entry_00110780_0x110780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110780_0x110780");
#endif

    ctx->pc = 0x110780u;

    // 0x110780: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x110780u;
    {
        const bool branch_taken_0x110780 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x110784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110780u;
        // 0x110784: 0x26235280  addiu       $v1, $s1, 0x5280 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 21120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110780) {
            ctx->pc = 0x110794u;
            return;
        }
    }
    ctx->pc = 0x110788u;
    // 0x110788: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x110788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11078c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11078Cu;
    {
        const bool branch_taken_0x11078c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11078Cu;
        // 0x110790: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11078c) {
            ctx->pc = 0x11079Cu;
            return;
        }
    }
    ctx->pc = 0x110794u;
}
