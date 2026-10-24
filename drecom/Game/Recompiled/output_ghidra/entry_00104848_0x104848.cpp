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

// Function: entry_00104848
// Address: 0x104848 - 0x10487c
void entry_00104848_0x104848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104848_0x104848");
#endif

    ctx->pc = 0x104848u;

    // 0x104848: 0x1f81004  sllv        $v0, $t8, $t7
    ctx->pc = 0x104848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 15) & 0x1F));
    // 0x10484c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x10484cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x104850: 0x28420011  slti        $v0, $v0, 0x11
    ctx->pc = 0x104850u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x104854: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x104854u;
    {
        const bool branch_taken_0x104854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x104854) {
            ctx->pc = 0x104858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104854u;
            // 0x104858: 0xadb80008  sw          $t8, 0x8($t5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10487Cu;
            return;
        }
    }
    ctx->pc = 0x10485Cu;
    // 0x10485c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x10485cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x104860: 0x1e61807  srav        $v1, $a2, $t7
    ctx->pc = 0x104860u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 15) & 0x1F));
    // 0x104864: 0x1e21007  srav        $v0, $v0, $t7
    ctx->pc = 0x104864u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 15) & 0x1F));
    // 0x104868: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x104868u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10486c: 0x3022023  subu        $a0, $t8, $v0
    ctx->pc = 0x10486cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x104870: 0xada20008  sw          $v0, 0x8($t5)
    ctx->pc = 0x104870u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 2));
    // 0x104874: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x104874u;
    {
        const bool branch_taken_0x104874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104874u;
        // 0x104878: 0xada4000c  sw          $a0, 0xC($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104874) {
            ctx->pc = 0x104880u;
            return;
        }
    }
    ctx->pc = 0x10487Cu;
}
