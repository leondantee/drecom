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

// Function: entry_0012d020
// Address: 0x12d020 - 0x12d06c
void entry_0012d020_0x12d020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d020_0x12d020");
#endif

    switch (ctx->pc) {
        case 0x12d030u: goto label_12d030;
        case 0x12d044u: goto label_12d044;
        default: break;
    }

    ctx->pc = 0x12d020u;

    // 0x12d020: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12d020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d024: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12d024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d028: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x12D028u;
    SET_GPR_U32(ctx, 31, 0x12D030u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12D028u, 0x12D030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D030u;
label_12d030:
    // 0x12d030: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x12d030u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12d034: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12d034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d038: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x12d038u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12d03c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x12D03Cu;
    SET_GPR_U32(ctx, 31, 0x12D044u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12D03Cu, 0x12D044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D044u;
label_12d044:
    // 0x12d044: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x12d044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d048: 0x90a309e7  lbu         $v1, 0x9E7($a1)
    ctx->pc = 0x12d048u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2535)));
    // 0x12d04c: 0x1060004d  beqz        $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x12D04Cu;
    {
        const bool branch_taken_0x12d04c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d04c) {
            ctx->pc = 0x12D184u;
            return;
        }
    }
    ctx->pc = 0x12D054u;
    // 0x12d054: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12d054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d058: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x12d058u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x12d05c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12d05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12d060: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x12d060u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x12d064: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x12D064u;
    {
        const bool branch_taken_0x12d064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d064) {
            ctx->pc = 0x12D184u;
            return;
        }
    }
    ctx->pc = 0x12D06Cu;
}
