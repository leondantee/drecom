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

// Function: entry_00131128
// Address: 0x131128 - 0x131158
void entry_00131128_0x131128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131128_0x131128");
#endif

    switch (ctx->pc) {
        case 0x131150u: goto label_131150;
        default: break;
    }

    ctx->pc = 0x131128u;

    // 0x131128: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x131128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x13112c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x13112cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x131130: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x131130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x131134: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131138: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x131138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x13113c: 0x24040507  addiu       $a0, $zero, 0x507
    ctx->pc = 0x13113cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1287));
    // 0x131140: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x131140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x131144: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x131144u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x131148: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x131148u;
    SET_GPR_U32(ctx, 31, 0x131150u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x131148u, 0x131150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131150u;
label_131150:
    // 0x131150: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x131150u;
    {
        const bool branch_taken_0x131150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131150) {
            ctx->pc = 0x1311B0u;
            return;
        }
    }
    ctx->pc = 0x131158u;
}
