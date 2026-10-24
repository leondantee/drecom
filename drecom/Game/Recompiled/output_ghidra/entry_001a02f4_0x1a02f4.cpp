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

// Function: entry_001a02f4
// Address: 0x1a02f4 - 0x1a0328
void entry_001a02f4_0x1a02f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a02f4_0x1a02f4");
#endif

    switch (ctx->pc) {
        case 0x1a0320u: goto label_1a0320;
        default: break;
    }

    ctx->pc = 0x1a02f4u;

    // 0x1a02f4: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x1a02f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x1a02f8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a02f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a02fc: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x1a02fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1a0300: 0x161400  sll         $v0, $s6, 16
    ctx->pc = 0x1a0300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
    // 0x1a0304: 0x438825  or          $s1, $v0, $v1
    ctx->pc = 0x1a0304u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a0308: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x1a0308u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1a030c: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x1a030cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1a0310: 0x72803628  paddub      $a2, $s4, $zero
    ctx->pc = 0x1a0310u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1a0314: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1a0314u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a0318: 0xc0ce394  jal         func_338E50
    ctx->pc = 0x1A0318u;
    SET_GPR_U32(ctx, 31, 0x1A0320u);
    ctx->pc = 0x338E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338E50u, 0x1A0318u, 0x1A0320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0320u;
label_1a0320:
    // 0x1a0320: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a0320u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a0324: 0x0  nop
    ctx->pc = 0x1a0324u;
    // NOP
    ctx->pc = 0x1a0328u;
}
