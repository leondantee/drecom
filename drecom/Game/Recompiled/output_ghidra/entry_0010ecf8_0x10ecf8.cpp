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

// Function: entry_0010ecf8
// Address: 0x10ecf8 - 0x10ed34
void entry_0010ecf8_0x10ecf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ecf8_0x10ecf8");
#endif

    ctx->pc = 0x10ecf8u;

    // 0x10ecf8: 0x24a200ff  addiu       $v0, $a1, 0xFF
    ctx->pc = 0x10ecf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 255));
    // 0x10ecfc: 0xc5182a  slt         $v1, $a2, $a1
    ctx->pc = 0x10ecfcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x10ed00: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x10ed00u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x10ed04: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x10ed04u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x10ed08: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x10ed08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x10ed0c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x10ED0Cu;
    {
        const bool branch_taken_0x10ed0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ed0c) {
            ctx->pc = 0x10ED10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10ED0Cu;
            // 0x10ed10: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10ED34u;
            return;
        }
    }
    ctx->pc = 0x10ED14u;
    // 0x10ed14: 0xc4182a  slt         $v1, $a2, $a0
    ctx->pc = 0x10ed14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x10ed18: 0x248200ff  addiu       $v0, $a0, 0xFF
    ctx->pc = 0x10ed18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 255));
    // 0x10ed1c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x10ed1cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x10ed20: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x10ed20u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x10ed24: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x10ed24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x10ed28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10ED28u;
    {
        const bool branch_taken_0x10ed28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ED2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED28u;
        // 0x10ed2c: 0x3c040038  lui         $a0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ed28) {
            ctx->pc = 0x10ED38u;
            return;
        }
    }
    ctx->pc = 0x10ED30u;
    // 0x10ed30: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x10ed30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x10ed34u;
}
