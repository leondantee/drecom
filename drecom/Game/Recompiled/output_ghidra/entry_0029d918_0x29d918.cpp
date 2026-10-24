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

// Function: entry_0029d918
// Address: 0x29d918 - 0x29d940
void entry_0029d918_0x29d918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029d918_0x29d918");
#endif

    ctx->pc = 0x29d918u;

    // 0x29d918: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29d918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d91c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29d91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29d920: 0x94420044  lhu         $v0, 0x44($v0)
    ctx->pc = 0x29d920u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x29d924: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29D924u;
    {
        const bool branch_taken_0x29d924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d924) {
            ctx->pc = 0x29D940u;
            return;
        }
    }
    ctx->pc = 0x29D92Cu;
    // 0x29d92c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29d92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29d930: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x29d930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29d934: 0x94620044  lhu         $v0, 0x44($v1)
    ctx->pc = 0x29d934u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x29d938: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29d938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29d93c: 0xa4620044  sh          $v0, 0x44($v1)
    ctx->pc = 0x29d93cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 68), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x29d940u;
}
