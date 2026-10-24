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

// Function: entry_0011e4f8
// Address: 0x11e4f8 - 0x11e538
void entry_0011e4f8_0x11e4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e4f8_0x11e4f8");
#endif

    ctx->pc = 0x11e4f8u;

    // 0x11e4f8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x11e4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x11e4fc: 0xa92006  srlv        $a0, $t1, $a1
    ctx->pc = 0x11e4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 5) & 0x1F));
    // 0x11e500: 0x2442e028  addiu       $v0, $v0, -0x1FD8
    ctx->pc = 0x11e500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959144));
    // 0x11e504: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x11e504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x11e508: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11e508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11e50c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x11e50cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11e510: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x11e510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11e514: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x11e514u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x11e518: 0x15a00011  bnez        $t5, . + 4 + (0x11 << 2)
    ctx->pc = 0x11E518u;
    {
        const bool branch_taken_0x11e518 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E518u;
        // 0x11e51c: 0xcd7023  subu        $t6, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e518) {
            ctx->pc = 0x11E560u;
            return;
        }
    }
    ctx->pc = 0x11E520u;
    // 0x11e520: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x11e520u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x11e524: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11E524u;
    {
        const bool branch_taken_0x11e524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E524u;
        // 0x11e528: 0x1882023  subu        $a0, $t4, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e524) {
            ctx->pc = 0x11E538u;
            return;
        }
    }
    ctx->pc = 0x11E52Cu;
    // 0x11e52c: 0x188102b  sltu        $v0, $t4, $t0
    ctx->pc = 0x11e52cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11e530: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E530u;
    {
        const bool branch_taken_0x11e530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e530) {
            ctx->pc = 0x11E548u;
            return;
        }
    }
    ctx->pc = 0x11E538u;
}
