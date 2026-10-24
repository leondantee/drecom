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

// Function: entry_0026758c
// Address: 0x26758c - 0x2675a8
void entry_0026758c_0x26758c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026758c_0x26758c");
#endif

    switch (ctx->pc) {
        case 0x2675a0u: goto label_2675a0;
        default: break;
    }

    ctx->pc = 0x26758cu;

    // 0x26758c: 0x8e041240  lw          $a0, 0x1240($s0)
    ctx->pc = 0x26758cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4672)));
    // 0x267590: 0x260500e0  addiu       $a1, $s0, 0xE0
    ctx->pc = 0x267590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x267594: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x267594u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x267598: 0xc05b4f8  jal         func_16D3E0
    ctx->pc = 0x267598u;
    SET_GPR_U32(ctx, 31, 0x2675A0u);
    ctx->pc = 0x16D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D3E0u, 0x267598u, 0x2675A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2675A0u;
label_2675a0:
    // 0x2675a0: 0xae021240  sw          $v0, 0x1240($s0)
    ctx->pc = 0x2675a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4672), GPR_U32(ctx, 2));
    // 0x2675a4: 0x0  nop
    ctx->pc = 0x2675a4u;
    // NOP
    ctx->pc = 0x2675a8u;
}
