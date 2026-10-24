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

// Function: entry_002146a4
// Address: 0x2146a4 - 0x2146bc
void entry_002146a4_0x2146a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002146a4_0x2146a4");
#endif

    ctx->pc = 0x2146a4u;

    // 0x2146a4: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x2146a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x2146a8: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2146A8u;
    {
        const bool branch_taken_0x2146a8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x2146ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2146A8u;
        // 0x2146ac: 0x24020068  addiu       $v0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2146a8) {
            ctx->pc = 0x2146BCu;
            return;
        }
    }
    ctx->pc = 0x2146B0u;
    // 0x2146b0: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x2146b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2146b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2146B4u;
    {
        const bool branch_taken_0x2146b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2146B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2146B4u;
        // 0x2146b8: 0xde71fff8  ld          $s1, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2146b4) {
            ctx->pc = 0x2146D0u;
            return;
        }
    }
    ctx->pc = 0x2146BCu;
}
