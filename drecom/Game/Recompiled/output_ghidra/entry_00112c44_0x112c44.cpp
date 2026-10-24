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

// Function: entry_00112c44
// Address: 0x112c44 - 0x112c5c
void entry_00112c44_0x112c44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112c44_0x112c44");
#endif

    ctx->pc = 0x112c44u;

    // 0x112c44: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x112c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x112c48: 0xfc760000  sd          $s6, 0x0($v1)
    ctx->pc = 0x112c48u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 22));
    // 0x112c4c: 0x8fa30244  lw          $v1, 0x244($sp)
    ctx->pc = 0x112c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x112c50: 0x74102a  slt         $v0, $v1, $s4
    ctx->pc = 0x112c50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x112c54: 0x1040ffde  beqz        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x112C54u;
    {
        const bool branch_taken_0x112c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C54u;
        // 0x112c58: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112c54) {
            ctx->pc = 0x112BD0u;
            return;
        }
    }
    ctx->pc = 0x112C5Cu;
}
