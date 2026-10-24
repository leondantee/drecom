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

// Function: entry_00217088
// Address: 0x217088 - 0x2170a4
void entry_00217088_0x217088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00217088_0x217088");
#endif

    ctx->pc = 0x217088u;

    // 0x217088: 0x8c62aaf8  lw          $v0, -0x5508($v1)
    ctx->pc = 0x217088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945528)));
    // 0x21708c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x21708cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217090: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x217090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x217094: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x217094u;
    {
        const bool branch_taken_0x217094 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x217098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217094u;
        // 0x217098: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217094) {
            ctx->pc = 0x2170A4u;
            return;
        }
    }
    ctx->pc = 0x21709Cu;
    // 0x21709c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x21709Cu;
    {
        const bool branch_taken_0x21709c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2170A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21709Cu;
        // 0x2170a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21709c) {
            ctx->pc = 0x2170E8u;
            return;
        }
    }
    ctx->pc = 0x2170A4u;
}
