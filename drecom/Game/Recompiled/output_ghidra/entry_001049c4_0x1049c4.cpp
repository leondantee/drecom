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

// Function: entry_001049c4
// Address: 0x1049c4 - 0x1049f8
void entry_001049c4_0x1049c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001049c4_0x1049c4");
#endif

    ctx->pc = 0x1049c4u;

    // 0x1049c4: 0x1e81004  sllv        $v0, $t0, $t7
    ctx->pc = 0x1049c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 15) & 0x1F));
    // 0x1049c8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1049c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1049cc: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x1049ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1049d0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1049D0u;
    {
        const bool branch_taken_0x1049d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1049d0) {
            ctx->pc = 0x1049D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1049D0u;
            // 0x1049d4: 0xae080008  sw          $t0, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1049F8u;
            return;
        }
    }
    ctx->pc = 0x1049D8u;
    // 0x1049d8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1049d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1049dc: 0x1e61807  srav        $v1, $a2, $t7
    ctx->pc = 0x1049dcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 15) & 0x1F));
    // 0x1049e0: 0x1e21007  srav        $v0, $v0, $t7
    ctx->pc = 0x1049e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 15) & 0x1F));
    // 0x1049e4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1049e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1049e8: 0x1022023  subu        $a0, $t0, $v0
    ctx->pc = 0x1049e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1049ec: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1049ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1049f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1049F0u;
    {
        const bool branch_taken_0x1049f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1049F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1049F0u;
        // 0x1049f4: 0xae04000c  sw          $a0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1049f0) {
            ctx->pc = 0x1049FCu;
            return;
        }
    }
    ctx->pc = 0x1049F8u;
}
