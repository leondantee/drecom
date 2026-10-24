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

// Function: entry_001d9784
// Address: 0x1d9784 - 0x1d97b4
void entry_001d9784_0x1d9784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9784_0x1d9784");
#endif

    switch (ctx->pc) {
        case 0x1d97acu: goto label_1d97ac;
        default: break;
    }

    ctx->pc = 0x1d9784u;

    // 0x1d9784: 0x8e020a68  lw          $v0, 0xA68($s0)
    ctx->pc = 0x1d9784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2664)));
    // 0x1d9788: 0x2443007f  addiu       $v1, $v0, 0x7F
    ctx->pc = 0x1d9788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
    // 0x1d978c: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x1d978cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x1d9790: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d9790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d9794: 0xae020a68  sw          $v0, 0xA68($s0)
    ctx->pc = 0x1d9794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2664), GPR_U32(ctx, 2));
    // 0x1d9798: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x1d9798u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1d979c: 0x8e050a68  lw          $a1, 0xA68($s0)
    ctx->pc = 0x1d979cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2664)));
    // 0x1d97a0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d97a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d97a4: 0xc076504  jal         func_1D9410
    ctx->pc = 0x1D97A4u;
    SET_GPR_U32(ctx, 31, 0x1D97ACu);
    ctx->pc = 0x1D9410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9410u, 0x1D97A4u, 0x1D97ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D97ACu;
label_1d97ac:
    // 0x1d97ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D97ACu;
    {
        const bool branch_taken_0x1d97ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d97ac) {
            ctx->pc = 0x1D97C0u;
            return;
        }
    }
    ctx->pc = 0x1D97B4u;
}
