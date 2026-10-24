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

// Function: caseD_4
// Address: 0x1c74c4 - 0x1c7540
void caseD_4_0x1c74c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1c74c4");
#endif

    switch (ctx->pc) {
        case 0x1c7504u: goto label_1c7504;
        default: break;
    }

    ctx->pc = 0x1c74c4u;

    // 0x1c74c4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c74c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c74c8: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x1c74c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c74cc: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x1c74ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
    // 0x1c74d0: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x1c74d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c74d4: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1c74d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1c74d8: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x1c74d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x1c74dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c74dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c74e0: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1c74e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c74e4: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1c74e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1c74e8: 0x8ce80368  lw          $t0, 0x368($a3)
    ctx->pc = 0x1c74e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 872)));
    // 0x1c74ec: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x1c74ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1c74f0: 0x24060039  addiu       $a2, $zero, 0x39
    ctx->pc = 0x1c74f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x1c74f4: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1c74f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c74f8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c74f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c74fc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C74FCu;
    SET_GPR_U32(ctx, 31, 0x1C7504u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C74FCu, 0x1C7504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7504u;
label_1c7504:
    // 0x1c7504: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1c7504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c7508: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c750c: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x1c750cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c7510: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c7510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c7514: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7518: 0xa0621576  sb          $v0, 0x1576($v1)
    ctx->pc = 0x1c7518u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5494), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c751c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1c751cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1c7520: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7524: 0xa0641577  sb          $a0, 0x1577($v1)
    ctx->pc = 0x1c7524u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5495), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c7528: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c752c: 0xac801b6c  sw          $zero, 0x1B6C($a0)
    ctx->pc = 0x1c752cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7020), GPR_U32(ctx, 0));
    // 0x1c7530: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c7530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7534: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x1c7534u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1c7538: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1c7538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1c753c: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x1c753cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1c7540u;
}
