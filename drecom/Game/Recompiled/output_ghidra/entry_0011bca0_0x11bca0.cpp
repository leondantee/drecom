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

// Function: entry_0011bca0
// Address: 0x11bca0 - 0x11bcc8
void entry_0011bca0_0x11bca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bca0_0x11bca0");
#endif

    ctx->pc = 0x11bca0u;

    // 0x11bca0: 0x16c00037  bnez        $s6, . + 4 + (0x37 << 2)
    ctx->pc = 0x11BCA0u;
    {
        const bool branch_taken_0x11bca0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BCA0u;
        // 0x11bca4: 0x8fa201f4  lw          $v0, 0x1F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bca0) {
            ctx->pc = 0x11BD80u;
            return;
        }
    }
    ctx->pc = 0x11BCA8u;
    // 0x11bca8: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x11bca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x11bcac: 0x438023  subu        $s0, $v0, $v1
    ctx->pc = 0x11bcacu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11bcb0: 0x1a000033  blez        $s0, . + 4 + (0x33 << 2)
    ctx->pc = 0x11BCB0u;
    {
        const bool branch_taken_0x11bcb0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x11BCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BCB0u;
        // 0x11bcb4: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bcb0) {
            ctx->pc = 0x11BD80u;
            return;
        }
    }
    ctx->pc = 0x11BCB8u;
    // 0x11bcb8: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x11BCB8u;
    {
        const bool branch_taken_0x11bcb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BCB8u;
        // 0x11bcbc: 0x3c06003b  lui         $a2, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bcb8) {
            ctx->pc = 0x11BD28u;
            return;
        }
    }
    ctx->pc = 0x11BCC0u;
    // 0x11bcc0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11BCC0u;
    {
        const bool branch_taken_0x11bcc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BCC0u;
        // 0x11bcc4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bcc0) {
            ctx->pc = 0x11BCCCu;
            return;
        }
    }
    ctx->pc = 0x11BCC8u;
}
