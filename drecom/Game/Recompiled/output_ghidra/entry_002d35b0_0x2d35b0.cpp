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

// Function: entry_002d35b0
// Address: 0x2d35b0 - 0x2d35f8
void entry_002d35b0_0x2d35b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d35b0_0x2d35b0");
#endif

    switch (ctx->pc) {
        case 0x2d35bcu: goto label_2d35bc;
        default: break;
    }

    ctx->pc = 0x2d35b0u;

    // 0x2d35b0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d35b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d35b4: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D35B4u;
    SET_GPR_U32(ctx, 31, 0x2D35BCu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D35B4u, 0x2D35BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D35BCu;
label_2d35bc:
    // 0x2d35bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d35bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d35c0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d35c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d35c4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2D35C4u;
    {
        const bool branch_taken_0x2d35c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d35c4) {
            ctx->pc = 0x2D35F8u;
            return;
        }
    }
    ctx->pc = 0x2D35CCu;
    // 0x2d35cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d35ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d35d0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d35d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d35d4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d35d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d35d8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d35d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d35dc: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2d35dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d35e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d35e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d35e4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d35e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d35e8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d35e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d35ec: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d35ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d35f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d35f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d35f4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d35f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2d35f8u;
}
