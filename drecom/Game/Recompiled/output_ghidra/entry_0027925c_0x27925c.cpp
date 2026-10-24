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

// Function: entry_0027925c
// Address: 0x27925c - 0x2792a8
void entry_0027925c_0x27925c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027925c_0x27925c");
#endif

    switch (ctx->pc) {
        case 0x279270u: goto label_279270;
        default: break;
    }

    ctx->pc = 0x27925cu;

    // 0x27925c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x27925cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x279260: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x279260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x279264: 0x24451a98  addiu       $a1, $v0, 0x1A98
    ctx->pc = 0x279264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6808));
    // 0x279268: 0xc0cf4b4  jal         func_33D2D0
    ctx->pc = 0x279268u;
    SET_GPR_U32(ctx, 31, 0x279270u);
    ctx->pc = 0x33D2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D2D0u, 0x279268u, 0x279270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279270u;
label_279270:
    // 0x279270: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x279270u;
    {
        const bool branch_taken_0x279270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x279270) {
            ctx->pc = 0x2792B4u;
            return;
        }
    }
    ctx->pc = 0x279278u;
    // 0x279278: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x279278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27927c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x27927cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621A98u));
    // 0x279280: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x279280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x279284: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x279284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x279288: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x279288u;
    {
        const bool branch_taken_0x279288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x279288) {
            ctx->pc = 0x2792B4u;
            return;
        }
    }
    ctx->pc = 0x279290u;
    // 0x279290: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x279290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x279294: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x279294u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x621A98u));
    // 0x279298: 0x90831308  lbu         $v1, 0x1308($a0)
    ctx->pc = 0x279298u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4872)));
    // 0x27929c: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x27929cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x2792a0: 0xa0831308  sb          $v1, 0x1308($a0)
    ctx->pc = 0x2792a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4872), (uint8_t)GPR_U32(ctx, 3));
    // 0x2792a4: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x2792a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->pc = 0x2792a8u;
}
