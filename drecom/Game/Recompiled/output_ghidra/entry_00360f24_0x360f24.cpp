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

// Function: entry_00360f24
// Address: 0x360f24 - 0x360f78
void entry_00360f24_0x360f24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00360f24_0x360f24");
#endif

    switch (ctx->pc) {
        case 0x360f30u: goto label_360f30;
        case 0x360f3cu: goto label_360f3c;
        default: break;
    }

    ctx->pc = 0x360f24u;

    // 0x360f24: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x360f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360f28: 0xc05cd10  jal         func_173440
    ctx->pc = 0x360F28u;
    SET_GPR_U32(ctx, 31, 0x360F30u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x360F28u, 0x360F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360F30u;
label_360f30:
    // 0x360f30: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x360f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360f34: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x360F34u;
    SET_GPR_U32(ctx, 31, 0x360F3Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x360F34u, 0x360F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360F3Cu;
label_360f3c:
    // 0x360f3c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x360f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360f40: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x360f40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x360f44: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x360F44u;
    {
        const bool branch_taken_0x360f44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x360f44) {
            ctx->pc = 0x360F78u;
            return;
        }
    }
    ctx->pc = 0x360F4Cu;
    // 0x360f4c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x360f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x360f50: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x360f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360f54: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x360f54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x360f58: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x360f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360f5c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x360f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x360f60: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x360f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360f64: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x360f64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x360f68: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x360f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360f6c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x360f6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x360f70: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x360f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360f74: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x360f74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x360f78u;
}
