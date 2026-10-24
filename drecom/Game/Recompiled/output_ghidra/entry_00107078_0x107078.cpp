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

// Function: entry_00107078
// Address: 0x107078 - 0x1070a0
void entry_00107078_0x107078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107078_0x107078");
#endif

    ctx->pc = 0x107078u;

    // 0x107078: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x107078u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x10707c: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x10707cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x107080: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x107080u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x107084: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x107084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x107088: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x107088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x10708c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x10708cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x107090: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x107090u;
    {
        const bool branch_taken_0x107090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x107094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107090u;
        // 0x107094: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107090) {
            ctx->pc = 0x1070ECu;
            return;
        }
    }
    ctx->pc = 0x107098u;
    // 0x107098: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x107098u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x10709c: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x10709cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    ctx->pc = 0x1070a0u;
}
