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

// Function: entry_0014ffe8
// Address: 0x14ffe8 - 0x150024
void entry_0014ffe8_0x14ffe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ffe8_0x14ffe8");
#endif

    switch (ctx->pc) {
        case 0x14fff8u: goto label_14fff8;
        case 0x150004u: goto label_150004;
        default: break;
    }

    ctx->pc = 0x14ffe8u;

    // 0x14ffe8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x14ffe8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x14ffec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14ffecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14fff0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14FFF0u;
    SET_GPR_U32(ctx, 31, 0x14FFF8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14FFF0u, 0x14FFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FFF8u;
label_14fff8:
    // 0x14fff8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x14fff8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x14fffc: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x14FFFCu;
    SET_GPR_U32(ctx, 31, 0x150004u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x14FFFCu, 0x150004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150004u;
label_150004:
    // 0x150004: 0x920209e7  lbu         $v0, 0x9E7($s0)
    ctx->pc = 0x150004u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2535)));
    // 0x150008: 0x1040012f  beqz        $v0, . + 4 + (0x12F << 2)
    ctx->pc = 0x150008u;
    {
        const bool branch_taken_0x150008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x150008) {
            ctx->pc = 0x1504C8u;
            return;
        }
    }
    ctx->pc = 0x150010u;
    // 0x150010: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x150010u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x150014: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x150014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x150018: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x150018u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x15001c: 0x1000012a  b           . + 4 + (0x12A << 2)
    ctx->pc = 0x15001Cu;
    {
        const bool branch_taken_0x15001c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15001c) {
            ctx->pc = 0x1504C8u;
            return;
        }
    }
    ctx->pc = 0x150024u;
}
