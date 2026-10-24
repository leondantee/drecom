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

// Function: entry_002146bc
// Address: 0x2146bc - 0x2146cc
void entry_002146bc_0x2146bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002146bc_0x2146bc");
#endif

    ctx->pc = 0x2146bcu;

    // 0x2146bc: 0x14e20003  bne         $a3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2146BCu;
    {
        const bool branch_taken_0x2146bc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x2146C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2146BCu;
        // 0x2146c0: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2146bc) {
            ctx->pc = 0x2146CCu;
            return;
        }
    }
    ctx->pc = 0x2146C4u;
    // 0x2146c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2146C4u;
    {
        const bool branch_taken_0x2146c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2146C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2146C4u;
        // 0x2146c8: 0x9671fff8  lhu         $s1, -0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2146c4) {
            ctx->pc = 0x2146D0u;
            return;
        }
    }
    ctx->pc = 0x2146CCu;
}
