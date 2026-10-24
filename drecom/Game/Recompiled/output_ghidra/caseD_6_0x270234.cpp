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

// Function: caseD_6
// Address: 0x270234 - 0x270274
void caseD_6_0x270234(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x270234");
#endif

    switch (ctx->pc) {
        case 0x270258u: goto label_270258;
        default: break;
    }

    ctx->pc = 0x270234u;

    // 0x270234: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x270234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270238: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x27023c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x27023cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x270240: 0x24061461  addiu       $a2, $zero, 0x1461
    ctx->pc = 0x270240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5217));
    // 0x270244: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x270244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270248: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x270248u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27024c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x27024cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x270250: 0xc0965d0  jal         func_259740
    ctx->pc = 0x270250u;
    SET_GPR_U32(ctx, 31, 0x270258u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x270250u, 0x270258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270258u;
label_270258:
    // 0x270258: 0x240300f0  addiu       $v1, $zero, 0xF0
    ctx->pc = 0x270258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x27025c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x27025cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270260: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x270260u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x270264: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x270264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270268: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x270268u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x27026c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27026cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x270270: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x270270u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x270274u;
}
