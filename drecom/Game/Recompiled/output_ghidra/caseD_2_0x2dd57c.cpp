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

// Function: caseD_2
// Address: 0x2dd57c - 0x2dd5d0
void caseD_2_0x2dd57c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x2dd57c");
#endif

    switch (ctx->pc) {
        case 0x2dd59cu: goto label_2dd59c;
        default: break;
    }

    ctx->pc = 0x2dd57cu;

    // 0x2dd57c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dd57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd580: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd584: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2dd584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2dd588: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x2dd588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2dd58c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2dd58cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dd590: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2dd590u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2dd594: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2DD594u;
    SET_GPR_U32(ctx, 31, 0x2DD59Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DD594u, 0x2DD59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD59Cu;
label_2dd59c:
    // 0x2dd59c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2dd59cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2dd5a0: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2dd5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2dd5a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd5a8: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x2dd5a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x2dd5ac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd5b0: 0xa460127a  sh          $zero, 0x127A($v1)
    ctx->pc = 0x2dd5b0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x2dd5b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2dd5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dd5b8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd5bc: 0xa464127e  sh          $a0, 0x127E($v1)
    ctx->pc = 0x2dd5bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 4));
    // 0x2dd5c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd5c4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2dd5c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2dd5c8: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x2dd5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2dd5cc: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2dd5ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x2dd5d0u;
}
