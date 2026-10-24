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

// Function: entry_00342134
// Address: 0x342134 - 0x342164
void entry_00342134_0x342134(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00342134_0x342134");
#endif

    ctx->pc = 0x342134u;

    // 0x342134: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x342134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x342138: 0x24821330  addiu       $v0, $a0, 0x1330
    ctx->pc = 0x342138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34213c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x34213cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x342140: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x342140u;
    {
        const bool branch_taken_0x342140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x342140) {
            ctx->pc = 0x342164u;
            return;
        }
    }
    ctx->pc = 0x342148u;
    // 0x342148: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x342148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x34214c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34214cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x342150: 0x846200c2  lh          $v0, 0xC2($v1)
    ctx->pc = 0x342150u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 194)));
    // 0x342154: 0x24530001  addiu       $s3, $v0, 0x1
    ctx->pc = 0x342154u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x342158: 0xa47300c2  sh          $s3, 0xC2($v1)
    ctx->pc = 0x342158u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 194), (uint16_t)GPR_U32(ctx, 19));
    // 0x34215c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34215Cu;
    {
        const bool branch_taken_0x34215c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34215c) {
            ctx->pc = 0x342170u;
            return;
        }
    }
    ctx->pc = 0x342164u;
}
