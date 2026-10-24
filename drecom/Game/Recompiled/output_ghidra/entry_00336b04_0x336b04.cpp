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

// Function: entry_00336b04
// Address: 0x336b04 - 0x336b38
void entry_00336b04_0x336b04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00336b04_0x336b04");
#endif

    switch (ctx->pc) {
        case 0x336b24u: goto label_336b24;
        default: break;
    }

    ctx->pc = 0x336b04u;

    // 0x336b04: 0x26120520  addiu       $s2, $s0, 0x520
    ctx->pc = 0x336b04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1312));
    // 0x336b08: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x336b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x336b0c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x336b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x336b10: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x336b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x336b14: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x336b14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x336b18: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x336b18u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x336b1c: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x336B1Cu;
    SET_GPR_U32(ctx, 31, 0x336B24u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x336B1Cu, 0x336B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336B24u;
label_336b24:
    // 0x336b24: 0x8e035dd4  lw          $v1, 0x5DD4($s0)
    ctx->pc = 0x336b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24020)));
    // 0x336b28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x336b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x336b2c: 0xae035dd4  sw          $v1, 0x5DD4($s0)
    ctx->pc = 0x336b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24020), GPR_U32(ctx, 3));
    // 0x336b30: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x336B30u;
    {
        const bool branch_taken_0x336b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336b30) {
            ctx->pc = 0x336D00u;
            return;
        }
    }
    ctx->pc = 0x336B38u;
}
