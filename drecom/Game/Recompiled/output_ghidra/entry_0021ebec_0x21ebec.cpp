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

// Function: entry_0021ebec
// Address: 0x21ebec - 0x21ec00
void entry_0021ebec_0x21ebec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021ebec_0x21ebec");
#endif

    switch (ctx->pc) {
        case 0x21ebf4u: goto label_21ebf4;
        default: break;
    }

    ctx->pc = 0x21ebecu;

    // 0x21ebec: 0xc0c4c74  jal         func_3131D0
    ctx->pc = 0x21EBECu;
    SET_GPR_U32(ctx, 31, 0x21EBF4u);
    ctx->pc = 0x3131D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3131D0u, 0x21EBECu, 0x21EBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EBF4u;
label_21ebf4:
    // 0x21ebf4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x21ebf4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21ebf8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21ebf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21ebfc: 0x0  nop
    ctx->pc = 0x21ebfcu;
    // NOP
    ctx->pc = 0x21ec00u;
}
