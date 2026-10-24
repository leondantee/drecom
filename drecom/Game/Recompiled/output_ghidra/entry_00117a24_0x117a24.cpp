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

// Function: entry_00117a24
// Address: 0x117a24 - 0x117a40
void entry_00117a24_0x117a24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117a24_0x117a24");
#endif

    ctx->pc = 0x117a24u;

    // 0x117a24: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x117a24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x117a28: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x117a28u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x117a2c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x117a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x117a30: 0x1440ffb3  bnez        $v0, . + 4 + (-0x4D << 2)
    ctx->pc = 0x117A30u;
    {
        const bool branch_taken_0x117a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117A30u;
        // 0x117a34: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117a30) {
            ctx->pc = 0x117900u;
            return;
        }
    }
    ctx->pc = 0x117A38u;
    // 0x117a38: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x117A38u;
    {
        const bool branch_taken_0x117a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117A38u;
        // 0x117a3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117a38) {
            ctx->pc = 0x117BACu;
            return;
        }
    }
    ctx->pc = 0x117A40u;
}
