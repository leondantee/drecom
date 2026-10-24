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

// Function: entry_0014fe28
// Address: 0x14fe28 - 0x14fe40
void entry_0014fe28_0x14fe28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014fe28_0x14fe28");
#endif

    switch (ctx->pc) {
        case 0x14fe38u: goto label_14fe38;
        default: break;
    }

    ctx->pc = 0x14fe28u;

    // 0x14fe28: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x14fe28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x14fe2c: 0xc60c010c  lwc1        $f12, 0x10C($s0)
    ctx->pc = 0x14fe2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14fe30: 0xc06773c  jal         func_19DCF0
    ctx->pc = 0x14FE30u;
    SET_GPR_U32(ctx, 31, 0x14FE38u);
    ctx->pc = 0x19DCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DCF0u, 0x14FE30u, 0x14FE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FE38u;
label_14fe38:
    // 0x14fe38: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x14fe38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x14fe3c: 0x0  nop
    ctx->pc = 0x14fe3cu;
    // NOP
    ctx->pc = 0x14fe40u;
}
