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
// Address: 0x1cf0d4 - 0x1cf174
void caseD_4_0x1cf0d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1cf0d4");
#endif

    switch (ctx->pc) {
        case 0x1cf11cu: goto label_1cf11c;
        case 0x1cf160u: goto label_1cf160;
        default: break;
    }

    ctx->pc = 0x1cf0d4u;

    // 0x1cf0d4: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x1cf0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf0d8: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x1cf0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1cf0dc: 0x3c04dfff  lui         $a0, 0xDFFF
    ctx->pc = 0x1cf0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57343 << 16));
    // 0x1cf0e0: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x1cf0e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1cf0e4: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x1cf0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1cf0e8: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x1cf0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x1cf0ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf0f0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf0f4: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1cf0f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1cf0f8: 0x8ca60368  lw          $a2, 0x368($a1)
    ctx->pc = 0x1cf0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 872)));
    // 0x1cf0fc: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1cf0fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1cf100: 0x24070039  addiu       $a3, $zero, 0x39
    ctx->pc = 0x1cf100u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x1cf104: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x1cf104u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1cf108: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x1cf108u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cf10c: 0x71003e28  paddub      $a3, $t0, $zero
    ctx->pc = 0x1cf10cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1cf110: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1cf110u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1cf114: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1CF114u;
    SET_GPR_U32(ctx, 31, 0x1CF11Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CF114u, 0x1CF11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF11Cu;
label_1cf11c:
    // 0x1cf11c: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x1cf11cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1cf120: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf124: 0xa4701278  sh          $s0, 0x1278($v1)
    ctx->pc = 0x1cf124u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 16));
    // 0x1cf128: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1cf128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cf12c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf130: 0xa0641576  sb          $a0, 0x1576($v1)
    ctx->pc = 0x1cf130u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5494), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cf134: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1cf134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1cf138: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf13c: 0xa0a21577  sb          $v0, 0x1577($a1)
    ctx->pc = 0x1cf13cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5495), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cf140: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1cf140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf144: 0xac401b6c  sw          $zero, 0x1B6C($v0)
    ctx->pc = 0x1cf144u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7020), GPR_U32(ctx, 0));
    // 0x1cf148: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1cf148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf14c: 0x904413a5  lbu         $a0, 0x13A5($v0)
    ctx->pc = 0x1cf14cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5029)));
    // 0x1cf150: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1cf150u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1cf154: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1cf154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cf158: 0xc0c50a4  jal         func_314290
    ctx->pc = 0x1CF158u;
    SET_GPR_U32(ctx, 31, 0x1CF160u);
    ctx->pc = 0x314290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314290u, 0x1CF158u, 0x1CF160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF160u;
label_1cf160:
    // 0x1cf160: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cf160u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cf164: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf168: 0x90a60002  lbu         $a2, 0x2($a1)
    ctx->pc = 0x1cf168u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1cf16c: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x1cf16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1cf170: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x1cf170u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1cf174u;
}
