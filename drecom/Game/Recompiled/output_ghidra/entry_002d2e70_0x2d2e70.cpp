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

// Function: entry_002d2e70
// Address: 0x2d2e70 - 0x2d2ebc
void entry_002d2e70_0x2d2e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d2e70_0x2d2e70");
#endif

    switch (ctx->pc) {
        case 0x2d2e7cu: goto label_2d2e7c;
        default: break;
    }

    ctx->pc = 0x2d2e70u;

    // 0x2d2e70: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d2e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2e74: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D2E74u;
    SET_GPR_U32(ctx, 31, 0x2D2E7Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D2E74u, 0x2D2E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2E7Cu;
label_2d2e7c:
    // 0x2d2e7c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2e80: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d2e80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d2e84: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D2E84u;
    {
        const bool branch_taken_0x2d2e84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2e84) {
            ctx->pc = 0x2D2EBCu;
            return;
        }
    }
    ctx->pc = 0x2D2E8Cu;
    // 0x2d2e8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d2e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2e90: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2e94: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d2e94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d2e98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d2e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2e9c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2ea0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d2ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d2ea4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2ea8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d2ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d2eac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2eb0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d2eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d2eb4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2eb8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d2eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2d2ebcu;
}
