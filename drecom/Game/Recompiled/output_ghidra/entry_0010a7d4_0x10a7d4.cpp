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

// Function: entry_0010a7d4
// Address: 0x10a7d4 - 0x10a7e8
void entry_0010a7d4_0x10a7d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a7d4_0x10a7d4");
#endif

    ctx->pc = 0x10a7d4u;

    // 0x10a7d4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x10a7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x10a7d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10A7D8u;
    {
        const bool branch_taken_0x10a7d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A7D8u;
        // 0x10a7dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a7d8) {
            ctx->pc = 0x10A7E8u;
            return;
        }
    }
    ctx->pc = 0x10A7E0u;
    // 0x10a7e0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x10a7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x10a7e4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x10a7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x10a7e8u;
}
