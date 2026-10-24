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

// Function: entry_00107cb4
// Address: 0x107cb4 - 0x107cc8
void entry_00107cb4_0x107cb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107cb4_0x107cb4");
#endif

    ctx->pc = 0x107cb4u;

    // 0x107cb4: 0x1a400016  blez        $s2, . + 4 + (0x16 << 2)
    ctx->pc = 0x107CB4u;
    {
        const bool branch_taken_0x107cb4 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x107CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107CB4u;
        // 0x107cb8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107cb4) {
            ctx->pc = 0x107D10u;
            return;
        }
    }
    ctx->pc = 0x107CBCu;
    // 0x107cbc: 0x3c140038  lui         $s4, 0x38
    ctx->pc = 0x107cbcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)56 << 16));
    // 0x107cc0: 0x3c130038  lui         $s3, 0x38
    ctx->pc = 0x107cc0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
    // 0x107cc4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x107cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x107cc8u;
}
