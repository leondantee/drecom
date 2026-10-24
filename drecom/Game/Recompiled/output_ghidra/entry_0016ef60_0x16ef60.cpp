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

// Function: entry_0016ef60
// Address: 0x16ef60 - 0x16ef90
void entry_0016ef60_0x16ef60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ef60_0x16ef60");
#endif

    switch (ctx->pc) {
        case 0x16ef6cu: goto label_16ef6c;
        case 0x16ef8cu: goto label_16ef8c;
        default: break;
    }

    ctx->pc = 0x16ef60u;

    // 0x16ef60: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x16ef60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x16ef64: 0xc05e964  jal         func_17A590
    ctx->pc = 0x16EF64u;
    SET_GPR_U32(ctx, 31, 0x16EF6Cu);
    ctx->pc = 0x17A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A590u, 0x16EF64u, 0x16EF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EF6Cu;
label_16ef6c:
    // 0x16ef6c: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x16ef6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x16ef70: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16EF70u;
    {
        const bool branch_taken_0x16ef70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ef70) {
            ctx->pc = 0x16EF90u;
            return;
        }
    }
    ctx->pc = 0x16EF78u;
    // 0x16ef78: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x16ef78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x16ef7c: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x16ef7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x16ef80: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x16ef80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x16ef84: 0xc062b60  jal         func_18AD80
    ctx->pc = 0x16EF84u;
    SET_GPR_U32(ctx, 31, 0x16EF8Cu);
    ctx->pc = 0x18AD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD80u, 0x16EF84u, 0x16EF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EF8Cu;
label_16ef8c:
    // 0x16ef8c: 0x0  nop
    ctx->pc = 0x16ef8cu;
    // NOP
    ctx->pc = 0x16ef90u;
}
