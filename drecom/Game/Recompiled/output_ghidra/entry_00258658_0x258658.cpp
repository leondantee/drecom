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

// Function: entry_00258658
// Address: 0x258658 - 0x258670
void entry_00258658_0x258658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00258658_0x258658");
#endif

    switch (ctx->pc) {
        case 0x25866cu: goto label_25866c;
        default: break;
    }

    ctx->pc = 0x258658u;

    // 0x258658: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x258658u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25865c: 0x97a50048  lhu         $a1, 0x48($sp)
    ctx->pc = 0x25865cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x258660: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x258660u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x258664: 0xc0961d0  jal         func_258740
    ctx->pc = 0x258664u;
    SET_GPR_U32(ctx, 31, 0x25866Cu);
    ctx->pc = 0x258740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258740u, 0x258664u, 0x25866Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25866Cu;
label_25866c:
    // 0x25866c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x25866cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x258670u;
}
