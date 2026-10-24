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

// Function: entry_001132e4
// Address: 0x1132e4 - 0x1132fc
void entry_001132e4_0x1132e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001132e4_0x1132e4");
#endif

    ctx->pc = 0x1132e4u;

    // 0x1132e4: 0x8fa40238  lw          $a0, 0x238($sp)
    ctx->pc = 0x1132e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x1132e8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1132e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1132ec: 0x10820050  beq         $a0, $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x1132ECu;
    {
        const bool branch_taken_0x1132ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1132F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1132ECu;
        // 0x1132f0: 0x8fa20258  lw          $v0, 0x258($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1132ec) {
            ctx->pc = 0x113430u;
            return;
        }
    }
    ctx->pc = 0x1132F4u;
    // 0x1132f4: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x1132F4u;
    {
        const bool branch_taken_0x1132f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1132F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1132F4u;
        // 0x1132f8: 0xdfbf0300  ld          $ra, 0x300($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1132f4) {
            ctx->pc = 0x1135BCu;
            return;
        }
    }
    ctx->pc = 0x1132FCu;
}
