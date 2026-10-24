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

// Function: entry_002d2f44
// Address: 0x2d2f44 - 0x2d2f90
void entry_002d2f44_0x2d2f44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d2f44_0x2d2f44");
#endif

    switch (ctx->pc) {
        case 0x2d2f50u: goto label_2d2f50;
        default: break;
    }

    ctx->pc = 0x2d2f44u;

    // 0x2d2f44: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d2f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2f48: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D2F48u;
    SET_GPR_U32(ctx, 31, 0x2D2F50u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D2F48u, 0x2D2F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2F50u;
label_2d2f50:
    // 0x2d2f50: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2f54: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d2f54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d2f58: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D2F58u;
    {
        const bool branch_taken_0x2d2f58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2f58) {
            ctx->pc = 0x2D2F90u;
            return;
        }
    }
    ctx->pc = 0x2D2F60u;
    // 0x2d2f60: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d2f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2f64: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2f68: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d2f68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d2f6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d2f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2f70: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2f74: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d2f74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d2f78: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2f7c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d2f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d2f80: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2f84: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d2f84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d2f88: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d2f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2f8c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d2f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2d2f90u;
}
