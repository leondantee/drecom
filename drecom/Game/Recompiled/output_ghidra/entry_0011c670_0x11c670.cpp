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

// Function: entry_0011c670
// Address: 0x11c670 - 0x11c698
void entry_0011c670_0x11c670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c670_0x11c670");
#endif

    ctx->pc = 0x11c670u;

    // 0x11c670: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x11c670u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x11c674: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x11c674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11c678: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x11c678u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x11c67c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x11c67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c680: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11c684: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x11c684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x11c688: 0x28440008  slti        $a0, $v0, 0x8
    ctx->pc = 0x11c688u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x11c68c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x11c68cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x11c690: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x11C690u;
    {
        const bool branch_taken_0x11c690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C690u;
        // 0x11c694: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c690) {
            ctx->pc = 0x11C6C0u;
            return;
        }
    }
    ctx->pc = 0x11C698u;
}
