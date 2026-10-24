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

// Function: caseD_8
// Address: 0x1c7944 - 0x1c7978
void caseD_8_0x1c7944(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x1c7944");
#endif

    switch (ctx->pc) {
        case 0x1c7968u: goto label_1c7968;
        default: break;
    }

    ctx->pc = 0x1c7944u;

    // 0x1c7944: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7948: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c794c: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1c794cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1c7950: 0x24060f3f  addiu       $a2, $zero, 0xF3F
    ctx->pc = 0x1c7950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3903));
    // 0x1c7954: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1c7954u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c7958: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1c7958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c795c: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x1c795cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c7960: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C7960u;
    SET_GPR_U32(ctx, 31, 0x1C7968u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C7960u, 0x1C7968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7968u;
label_1c7968:
    // 0x1c7968: 0x8fb00048  lw          $s0, 0x48($sp)
    ctx->pc = 0x1c7968u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c796c: 0x92050002  lbu         $a1, 0x2($s0)
    ctx->pc = 0x1c796cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1c7970: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1c7970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1c7974: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x1c7974u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1c7978u;
}
