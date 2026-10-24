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

// Function: entry_00113fe8
// Address: 0x113fe8 - 0x114008
void entry_00113fe8_0x113fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113fe8_0x113fe8");
#endif

    ctx->pc = 0x113fe8u;

    // 0x113fe8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x113FE8u;
    {
        const bool branch_taken_0x113fe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x113FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113FE8u;
        // 0x113fec: 0x8fa40144  lw          $a0, 0x144($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113fe8) {
            ctx->pc = 0x114008u;
            return;
        }
    }
    ctx->pc = 0x113FF0u;
    // 0x113ff0: 0x5c80001f  bgtzl       $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x113FF0u;
    {
        const bool branch_taken_0x113ff0 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x113ff0) {
            ctx->pc = 0x113FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113FF0u;
            // 0x113ff4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114070u;
            return;
        }
    }
    ctx->pc = 0x113FF8u;
    // 0x113ff8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x113FF8u;
    {
        const bool branch_taken_0x113ff8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x113FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113FF8u;
        // 0x113ffc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113ff8) {
            ctx->pc = 0x114020u;
            return;
        }
    }
    ctx->pc = 0x114000u;
    // 0x114000: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x114000u;
    {
        const bool branch_taken_0x114000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114000u;
        // 0x114004: 0xdfbf01f0  ld          $ra, 0x1F0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114000) {
            ctx->pc = 0x114234u;
            return;
        }
    }
    ctx->pc = 0x114008u;
}
