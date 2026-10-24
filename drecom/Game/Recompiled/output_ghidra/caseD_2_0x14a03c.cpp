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

// Function: caseD_2
// Address: 0x14a03c - 0x14a074
void caseD_2_0x14a03c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x14a03c");
#endif

    switch (ctx->pc) {
        case 0x14a06cu: goto label_14a06c;
        default: break;
    }

    ctx->pc = 0x14a03cu;

    // 0x14a03c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a040: 0x8c421b60  lw          $v0, 0x1B60($v0)
    ctx->pc = 0x14a040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
    // 0x14a044: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14A044u;
    {
        const bool branch_taken_0x14a044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a044) {
            ctx->pc = 0x14A074u;
            return;
        }
    }
    ctx->pc = 0x14A04Cu;
    // 0x14a04c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a04cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a050: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a054: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14a054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x14a058: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x14a058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x14a05c: 0x24070045  addiu       $a3, $zero, 0x45
    ctx->pc = 0x14a05cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x14a060: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14a060u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14a064: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14A064u;
    SET_GPR_U32(ctx, 31, 0x14A06Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14A064u, 0x14A06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A06Cu;
label_14a06c:
    // 0x14a06c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x14A06Cu;
    {
        const bool branch_taken_0x14a06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a06c) {
            ctx->pc = 0x14A094u;
            return;
        }
    }
    ctx->pc = 0x14A074u;
}
