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

// Function: entry_00362888
// Address: 0x362888 - 0x3628dc
void entry_00362888_0x362888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00362888_0x362888");
#endif

    switch (ctx->pc) {
        case 0x362894u: goto label_362894;
        case 0x3628a0u: goto label_3628a0;
        default: break;
    }

    ctx->pc = 0x362888u;

    // 0x362888: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x362888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36288c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36288Cu;
    SET_GPR_U32(ctx, 31, 0x362894u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36288Cu, 0x362894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362894u;
label_362894:
    // 0x362894: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x362894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x362898: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x362898u;
    SET_GPR_U32(ctx, 31, 0x3628A0u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x362898u, 0x3628A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3628A0u;
label_3628a0:
    // 0x3628a0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3628a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3628a4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x3628a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3628a8: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3628A8u;
    {
        const bool branch_taken_0x3628a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3628a8) {
            ctx->pc = 0x3628DCu;
            return;
        }
    }
    ctx->pc = 0x3628B0u;
    // 0x3628b0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3628b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3628b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3628b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3628b8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3628b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3628bc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3628bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3628c0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3628c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3628c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3628c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3628c8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3628c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3628cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3628ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3628d0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3628d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3628d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3628d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3628d8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3628d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x3628dcu;
}
