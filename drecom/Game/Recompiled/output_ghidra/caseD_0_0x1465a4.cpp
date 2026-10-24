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

// Function: caseD_0
// Address: 0x1465a4 - 0x14665c
void caseD_0_0x1465a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1465a4");
#endif

    switch (ctx->pc) {
        case 0x1465c4u: goto label_1465c4;
        case 0x1465ecu: goto label_1465ec;
        case 0x146610u: goto label_146610;
        default: break;
    }

    ctx->pc = 0x1465a4u;

    // 0x1465a4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1465a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1465a8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1465a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1465ac: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1465acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1465b0: 0x24060a0e  addiu       $a2, $zero, 0xA0E
    ctx->pc = 0x1465b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2574));
    // 0x1465b4: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x1465b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1465b8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1465b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1465bc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1465BCu;
    SET_GPR_U32(ctx, 31, 0x1465C4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1465BCu, 0x1465C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1465C4u;
label_1465c4:
    // 0x1465c4: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x1465c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1465c8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1465c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1465cc: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x1465ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1465d0: 0x25071b40  addiu       $a3, $t0, 0x1B40
    ctx->pc = 0x1465d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 6976));
    // 0x1465d4: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x1465d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1465d8: 0x24a81b30  addiu       $t0, $a1, 0x1B30
    ctx->pc = 0x1465d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 6960));
    // 0x1465dc: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x1465dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1465e0: 0x24c60120  addiu       $a2, $a2, 0x120
    ctx->pc = 0x1465e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
    // 0x1465e4: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1465E4u;
    SET_GPR_U32(ctx, 31, 0x1465ECu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1465E4u, 0x1465ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1465ECu;
label_1465ec:
    // 0x1465ec: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1465ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1465f0: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x1465f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1465f4: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x1465f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1465f8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1465f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1465fc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1465fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146600: 0x24441b40  addiu       $a0, $v0, 0x1B40
    ctx->pc = 0x146600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
    // 0x146604: 0x24a51b40  addiu       $a1, $a1, 0x1B40
    ctx->pc = 0x146604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6976));
    // 0x146608: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x146608u;
    SET_GPR_U32(ctx, 31, 0x146610u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x146610u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x146610u) { return; }
    ctx->pc = 0x146610u;
label_146610:
    // 0x146610: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x146610u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x146614: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x146614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x146618: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x146618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14661c: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x14661cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x146620: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x146620u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146624: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146628: 0xe4801b50  swc1        $f0, 0x1B50($a0)
    ctx->pc = 0x146628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6992), bits); }
    // 0x14662c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14662cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146630: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x146630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146634: 0xe4a01b54  swc1        $f0, 0x1B54($a1)
    ctx->pc = 0x146634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 6996), bits); }
    // 0x146638: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x146638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x14663c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x14663cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146640: 0xac641b64  sw          $a0, 0x1B64($v1)
    ctx->pc = 0x146640u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7012), GPR_U32(ctx, 4));
    // 0x146644: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x146644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146648: 0xac601b68  sw          $zero, 0x1B68($v1)
    ctx->pc = 0x146648u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7016), GPR_U32(ctx, 0));
    // 0x14664c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x14664cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146650: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x146650u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x146654: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x146654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x146658: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x146658u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x14665cu;
}
