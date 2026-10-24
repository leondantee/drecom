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
// Address: 0x14674c - 0x146814
void caseD_2_0x14674c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x14674c");
#endif

    switch (ctx->pc) {
        case 0x14676cu: goto label_14676c;
        case 0x146790u: goto label_146790;
        case 0x1467bcu: goto label_1467bc;
        default: break;
    }

    ctx->pc = 0x14674cu;

    // 0x14674c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x14674cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146750: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x146750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146754: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x146754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x146758: 0x24060a12  addiu       $a2, $zero, 0xA12
    ctx->pc = 0x146758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2578));
    // 0x14675c: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x14675cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x146760: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x146760u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x146764: 0xc0965d0  jal         func_259740
    ctx->pc = 0x146764u;
    SET_GPR_U32(ctx, 31, 0x14676Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x146764u, 0x14676Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14676Cu;
label_14676c:
    // 0x14676c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x14676cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x146770: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146774: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x146774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146778: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x146778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14677c: 0x24841b40  addiu       $a0, $a0, 0x1B40
    ctx->pc = 0x14677cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6976));
    // 0x146780: 0x24a51b30  addiu       $a1, $a1, 0x1B30
    ctx->pc = 0x146780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6960));
    // 0x146784: 0x24660120  addiu       $a2, $v1, 0x120
    ctx->pc = 0x146784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x146788: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x146788u;
    SET_GPR_U32(ctx, 31, 0x146790u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x146788u, 0x146790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146790u;
label_146790:
    // 0x146790: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x146790u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x146794: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x146794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x146798: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x146798u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x14679c: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x14679cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1467a0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1467a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1467a4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1467a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1467a8: 0x24631b40  addiu       $v1, $v1, 0x1B40
    ctx->pc = 0x1467a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
    // 0x1467ac: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1467acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1467b0: 0x24a51b40  addiu       $a1, $a1, 0x1B40
    ctx->pc = 0x1467b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6976));
    // 0x1467b4: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1467B4u;
    SET_GPR_U32(ctx, 31, 0x1467BCu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1467BCu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1467BCu) { return; }
    ctx->pc = 0x1467BCu;
label_1467bc:
    // 0x1467bc: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1467bcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1467c0: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1467c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1467c4: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x1467c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1467c8: 0xa5071278  sh          $a3, 0x1278($t0)
    ctx->pc = 0x1467c8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4728), (uint16_t)GPR_U32(ctx, 7));
    // 0x1467cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1467ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1467d0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1467d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1467d4: 0xe4a01b50  swc1        $f0, 0x1B50($a1)
    ctx->pc = 0x1467d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 6992), bits); }
    // 0x1467d8: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1467d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x1467dc: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x1467dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1467e0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1467e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1467e4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1467e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1467e8: 0xe4601b54  swc1        $f0, 0x1B54($v1)
    ctx->pc = 0x1467e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6996), bits); }
    // 0x1467ec: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1467ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1467f0: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1467f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1467f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1467f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1467f8: 0xac641b64  sw          $a0, 0x1B64($v1)
    ctx->pc = 0x1467f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7012), GPR_U32(ctx, 4));
    // 0x1467fc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1467fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146800: 0xac801b68  sw          $zero, 0x1B68($a0)
    ctx->pc = 0x146800u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7016), GPR_U32(ctx, 0));
    // 0x146804: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x146804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146808: 0x90640002  lbu         $a0, 0x2($v1)
    ctx->pc = 0x146808u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14680c: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x14680cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x146810: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x146810u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x146814u;
}
