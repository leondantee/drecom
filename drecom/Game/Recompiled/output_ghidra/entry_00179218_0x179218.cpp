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

// Function: entry_00179218
// Address: 0x179218 - 0x179260
void entry_00179218_0x179218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179218_0x179218");
#endif

    switch (ctx->pc) {
        case 0x179238u: goto label_179238;
        case 0x17924cu: goto label_17924c;
        default: break;
    }

    ctx->pc = 0x179218u;

    // 0x179218: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x179218u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x17921c: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x17921cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x179220: 0x72803628  paddub      $a2, $s4, $zero
    ctx->pc = 0x179220u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x179224: 0x72203e28  paddub      $a3, $s1, $zero
    ctx->pc = 0x179224u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x179228: 0x72604628  paddub      $t0, $s3, $zero
    ctx->pc = 0x179228u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x17922c: 0x72c04e28  paddub      $t1, $s6, $zero
    ctx->pc = 0x17922cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x179230: 0xc05e600  jal         func_179800
    ctx->pc = 0x179230u;
    SET_GPR_U32(ctx, 31, 0x179238u);
    ctx->pc = 0x179800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179800u, 0x179230u, 0x179238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179238u;
label_179238:
    // 0x179238: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x179238u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x17923c: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x17923cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x179240: 0x72603628  paddub      $a2, $s3, $zero
    ctx->pc = 0x179240u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x179244: 0xc05e724  jal         func_179C90
    ctx->pc = 0x179244u;
    SET_GPR_U32(ctx, 31, 0x17924Cu);
    ctx->pc = 0x179C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179C90u, 0x179244u, 0x17924Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17924Cu;
label_17924c:
    // 0x17924c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x17924cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x179250: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x179250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x179254: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x179254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
    // 0x179258: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x179258u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17925c: 0x0  nop
    ctx->pc = 0x17925cu;
    // NOP
    ctx->pc = 0x179260u;
}
