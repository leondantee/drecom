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

// Function: entry_00145340
// Address: 0x145340 - 0x145364
void entry_00145340_0x145340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145340_0x145340");
#endif

    ctx->pc = 0x145340u;

    // 0x145340: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x145340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145344: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145348: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x145348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x14534c: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x14534cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x145350: 0x23200  sll         $a2, $v0, 8
    ctx->pc = 0x145350u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x145354: 0x72003e28  paddub      $a3, $s0, $zero
    ctx->pc = 0x145354u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x145358: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x145358u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14535c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14535Cu;
    SET_GPR_U32(ctx, 31, 0x145364u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14535Cu, 0x145364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145364u;
}
