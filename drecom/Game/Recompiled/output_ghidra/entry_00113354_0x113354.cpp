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

// Function: entry_00113354
// Address: 0x113354 - 0x113368
void entry_00113354_0x113354(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113354_0x113354");
#endif

    ctx->pc = 0x113354u;

    // 0x113354: 0x680000e  bltz        $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x113354u;
    {
        const bool branch_taken_0x113354 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x113358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113354u;
        // 0x113358: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113354) {
            ctx->pc = 0x113390u;
            return;
        }
    }
    ctx->pc = 0x11335Cu;
    // 0x11335c: 0xdfb100f0  ld          $s1, 0xF0($sp)
    ctx->pc = 0x11335cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x113360: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x113360u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x113364: 0x2a900001  slti        $s0, $s4, 0x1
    ctx->pc = 0x113364u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x113368u;
}
