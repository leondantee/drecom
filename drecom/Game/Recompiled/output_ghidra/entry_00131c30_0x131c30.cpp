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

// Function: entry_00131c30
// Address: 0x131c30 - 0x131c60
void entry_00131c30_0x131c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131c30_0x131c30");
#endif

    switch (ctx->pc) {
        case 0x131c58u: goto label_131c58;
        default: break;
    }

    ctx->pc = 0x131c30u;

    // 0x131c30: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x131c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x131c34: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x131c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x131c38: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x131c38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x131c3c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x131c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131c40: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x131c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x131c44: 0x24040508  addiu       $a0, $zero, 0x508
    ctx->pc = 0x131c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1288));
    // 0x131c48: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x131c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x131c4c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x131c4cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x131c50: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x131C50u;
    SET_GPR_U32(ctx, 31, 0x131C58u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x131C50u, 0x131C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131C58u;
label_131c58:
    // 0x131c58: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x131C58u;
    {
        const bool branch_taken_0x131c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131c58) {
            ctx->pc = 0x131C88u;
            return;
        }
    }
    ctx->pc = 0x131C60u;
}
