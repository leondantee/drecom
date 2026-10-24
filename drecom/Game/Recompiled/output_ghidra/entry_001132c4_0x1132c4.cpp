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

// Function: entry_001132c4
// Address: 0x1132c4 - 0x1132e4
void entry_001132c4_0x1132c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001132c4_0x1132c4");
#endif

    ctx->pc = 0x1132c4u;

    // 0x1132c4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1132C4u;
    {
        const bool branch_taken_0x1132c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1132C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1132C4u;
        // 0x1132c8: 0x8fa30238  lw          $v1, 0x238($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1132c4) {
            ctx->pc = 0x1132E4u;
            return;
        }
    }
    ctx->pc = 0x1132CCu;
    // 0x1132cc: 0x1c600021  bgtz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1132CCu;
    {
        const bool branch_taken_0x1132cc = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1132D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1132CCu;
        // 0x1132d0: 0x2e0a02d  daddu       $s4, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1132cc) {
            ctx->pc = 0x113354u;
            return;
        }
    }
    ctx->pc = 0x1132D4u;
    // 0x1132d4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1132D4u;
    {
        const bool branch_taken_0x1132d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1132D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1132D4u;
        // 0x1132d8: 0x8fa20258  lw          $v0, 0x258($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1132d4) {
            ctx->pc = 0x1132FCu;
            return;
        }
    }
    ctx->pc = 0x1132DCu;
    // 0x1132dc: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x1132DCu;
    {
        const bool branch_taken_0x1132dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1132E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1132DCu;
        // 0x1132e0: 0xdfbf0300  ld          $ra, 0x300($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1132dc) {
            ctx->pc = 0x1135BCu;
            return;
        }
    }
    ctx->pc = 0x1132E4u;
}
