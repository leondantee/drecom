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

// Function: entry_00157028
// Address: 0x157028 - 0x157050
void entry_00157028_0x157028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157028_0x157028");
#endif

    switch (ctx->pc) {
        case 0x157044u: goto label_157044;
        default: break;
    }

    ctx->pc = 0x157028u;

    // 0x157028: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x157028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x15702c: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x15702cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x157030: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x157030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x157034: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x157034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x157038: 0x24650060  addiu       $a1, $v1, 0x60
    ctx->pc = 0x157038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x15703c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x15703Cu;
    SET_GPR_U32(ctx, 31, 0x157044u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x15703Cu, 0x157044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157044u;
label_157044:
    // 0x157044: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x157044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x157048: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x157048u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x15704c: 0x0  nop
    ctx->pc = 0x15704cu;
    // NOP
    ctx->pc = 0x157050u;
}
