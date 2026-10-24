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

// Function: entry_001085c4
// Address: 0x1085c4 - 0x1085dc
void entry_001085c4_0x1085c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001085c4_0x1085c4");
#endif

    ctx->pc = 0x1085c4u;

    // 0x1085c4: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x1085c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1085c8: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x1085c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1085cc: 0x433018  mult        $a2, $v0, $v1
    ctx->pc = 0x1085ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1085d0: 0xb9202a  slt         $a0, $a1, $t9
    ctx->pc = 0x1085d0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x1085d4: 0x1480ffb4  bnez        $a0, . + 4 + (-0x4C << 2)
    ctx->pc = 0x1085D4u;
    {
        const bool branch_taken_0x1085d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1085D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1085D4u;
        // 0x1085d8: 0xcf7821  addu        $t7, $a2, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1085d4) {
            ctx->pc = 0x1084A8u;
            return;
        }
    }
    ctx->pc = 0x1085DCu;
}
