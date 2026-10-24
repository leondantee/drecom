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

// Function: entry_00377e00
// Address: 0x377e00 - 0x377e20
void entry_00377e00_0x377e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00377e00_0x377e00");
#endif

    switch (ctx->pc) {
        case 0x377e1cu: goto label_377e1c;
        default: break;
    }

    ctx->pc = 0x377e00u;

    // 0x377e00: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x377e00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x377e04: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x377e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x377e08: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x377e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x377e0c: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x377e0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x377e10: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x377e10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x377e14: 0xc0ddf94  jal         func_377E50
    ctx->pc = 0x377E14u;
    SET_GPR_U32(ctx, 31, 0x377E1Cu);
    ctx->pc = 0x377E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377E50u, 0x377E14u, 0x377E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377E1Cu;
label_377e1c:
    // 0x377e1c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x377e1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x377e20u;
}
