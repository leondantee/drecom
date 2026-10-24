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

// Function: entry_00116084
// Address: 0x116084 - 0x1160a0
void entry_00116084_0x116084(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116084_0x116084");
#endif

    ctx->pc = 0x116084u;

    // 0x116084: 0x6600006  bltz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x116084u;
    {
        const bool branch_taken_0x116084 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x116088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116084u;
        // 0x116088: 0x8fa30038  lw          $v1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116084) {
            ctx->pc = 0x1160A0u;
            return;
        }
    }
    ctx->pc = 0x11608Cu;
    // 0x11608c: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x11608cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x116090: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x116090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x116094: 0xafb3003c  sw          $s3, 0x3C($sp)
    ctx->pc = 0x116094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 19));
    // 0x116098: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x116098u;
    {
        const bool branch_taken_0x116098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11609Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116098u;
        // 0x11609c: 0xafa30038  sw          $v1, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116098) {
            ctx->pc = 0x1160B8u;
            return;
        }
    }
    ctx->pc = 0x1160A0u;
}
