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

// Function: entry_0011fb88
// Address: 0x11fb88 - 0x11fbb4
void entry_0011fb88_0x11fb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fb88_0x11fb88");
#endif

    ctx->pc = 0x11fb88u;

    // 0x11fb88: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11FB88u;
    {
        const bool branch_taken_0x11fb88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB88u;
        // 0x11fb8c: 0x42040  sll         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb88) {
            ctx->pc = 0x11FB70u;
            return;
        }
    }
    ctx->pc = 0x11FB90u;
    // 0x11fb90: 0x30e3007f  andi        $v1, $a3, 0x7F
    ctx->pc = 0x11fb90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)127);
    // 0x11fb94: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x11fb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x11fb98: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11FB98u;
    {
        const bool branch_taken_0x11fb98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11fb98) {
            ctx->pc = 0x11FB9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FB98u;
            // 0x11fb9c: 0xaca7000c  sw          $a3, 0xC($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FBBCu;
            return;
        }
    }
    ctx->pc = 0x11FBA0u;
    // 0x11fba0: 0x30e20080  andi        $v0, $a3, 0x80
    ctx->pc = 0x11fba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)128);
    // 0x11fba4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11FBA4u;
    {
        const bool branch_taken_0x11fba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FBA4u;
        // 0x11fba8: 0x24e20040  addiu       $v0, $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fba4) {
            ctx->pc = 0x11FBB4u;
            return;
        }
    }
    ctx->pc = 0x11FBACu;
    // 0x11fbac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11FBACu;
    {
        const bool branch_taken_0x11fbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FBACu;
        // 0x11fbb0: 0x24e70040  addiu       $a3, $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fbac) {
            ctx->pc = 0x11FBB8u;
            return;
        }
    }
    ctx->pc = 0x11FBB4u;
}
