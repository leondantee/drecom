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

// Function: entry_00258868
// Address: 0x258868 - 0x258880
void entry_00258868_0x258868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00258868_0x258868");
#endif

    switch (ctx->pc) {
        case 0x25887cu: goto label_25887c;
        default: break;
    }

    ctx->pc = 0x258868u;

    // 0x258868: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x258868u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25886c: 0x93a50048  lbu         $a1, 0x48($sp)
    ctx->pc = 0x25886cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x258870: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x258870u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x258874: 0xc096254  jal         func_258950
    ctx->pc = 0x258874u;
    SET_GPR_U32(ctx, 31, 0x25887Cu);
    ctx->pc = 0x258950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258950u, 0x258874u, 0x25887Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25887Cu;
label_25887c:
    // 0x25887c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x25887cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x258880u;
}
