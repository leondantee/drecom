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

// Function: entry_001aa810
// Address: 0x1aa810 - 0x1aa840
void entry_001aa810_0x1aa810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa810_0x1aa810");
#endif

    ctx->pc = 0x1aa810u;

    // 0x1aa810: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1aa810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1aa814: 0x1603000a  bne         $s0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1AA814u;
    {
        const bool branch_taken_0x1aa814 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1aa814) {
            ctx->pc = 0x1AA840u;
            return;
        }
    }
    ctx->pc = 0x1AA81Cu;
    // 0x1aa81c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1aa81cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1aa820: 0x8c83020c  lw          $v1, 0x20C($a0)
    ctx->pc = 0x1aa820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x1aa824: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x1aa824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x1aa828: 0xac83020c  sw          $v1, 0x20C($a0)
    ctx->pc = 0x1aa828u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 524), GPR_U32(ctx, 3));
    // 0x1aa82c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1aa82cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1aa830: 0x8ca4020c  lw          $a0, 0x20C($a1)
    ctx->pc = 0x1aa830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x1aa834: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x1aa834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1aa838: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1aa838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1aa83c: 0xaca3020c  sw          $v1, 0x20C($a1)
    ctx->pc = 0x1aa83cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 524), GPR_U32(ctx, 3));
    ctx->pc = 0x1aa840u;
}
