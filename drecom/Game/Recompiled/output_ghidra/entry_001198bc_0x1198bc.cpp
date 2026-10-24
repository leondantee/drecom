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

// Function: entry_001198bc
// Address: 0x1198bc - 0x1198e8
void entry_001198bc_0x1198bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001198bc_0x1198bc");
#endif

    ctx->pc = 0x1198bcu;

    // 0x1198bc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1198bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1198c0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1198c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1198c4: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x1198c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x1198c8: 0x2882001f  slti        $v0, $a0, 0x1F
    ctx->pc = 0x1198c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1198cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1198CCu;
    {
        const bool branch_taken_0x1198cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1198D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1198CCu;
        // 0x1198d0: 0xa32824  and         $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1198cc) {
            ctx->pc = 0x1198E8u;
            return;
        }
    }
    ctx->pc = 0x1198D4u;
    // 0x1198d4: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x1198d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1198d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1198d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1198dc: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1198dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1198e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1198E0u;
    {
        const bool branch_taken_0x1198e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1198E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1198E0u;
        // 0x1198e4: 0x431004  sllv        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1198e0) {
            ctx->pc = 0x1198ECu;
            return;
        }
    }
    ctx->pc = 0x1198E8u;
}
