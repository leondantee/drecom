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

// Function: entry_00119124
// Address: 0x119124 - 0x119138
void entry_00119124_0x119124(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119124_0x119124");
#endif

    ctx->pc = 0x119124u;

    // 0x119124: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x119124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x119128: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x119128u;
    {
        const bool branch_taken_0x119128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11912Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119128u;
        // 0x11912c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119128) {
            ctx->pc = 0x119138u;
            return;
        }
    }
    ctx->pc = 0x119130u;
    // 0x119130: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x119130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x119134: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x119134u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    ctx->pc = 0x119138u;
}
