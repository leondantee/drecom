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

// Function: entry_0022cb08
// Address: 0x22cb08 - 0x22cbd4
void entry_0022cb08_0x22cb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022cb08_0x22cb08");
#endif

    switch (ctx->pc) {
        case 0x22cb40u: goto label_22cb40;
        case 0x22cb98u: goto label_22cb98;
        case 0x22cbd0u: goto label_22cbd0;
        default: break;
    }

    ctx->pc = 0x22cb08u;

    // 0x22cb08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22cb08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22cb0c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22cb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cb10: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x22cb10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x22cb14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22cb14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22cb18: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22cb18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cb1c: 0xe4800180  swc1        $f0, 0x180($a0)
    ctx->pc = 0x22cb1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
    // 0x22cb20: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x22cb20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cb24: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22cb24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cb28: 0x8ca50368  lw          $a1, 0x368($a1)
    ctx->pc = 0x22cb28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 872)));
    // 0x22cb2c: 0x24063c1c  addiu       $a2, $zero, 0x3C1C
    ctx->pc = 0x22cb2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15388));
    // 0x22cb30: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22cb30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22cb34: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22cb34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22cb38: 0xc0965d0  jal         func_259740
    ctx->pc = 0x22CB38u;
    SET_GPR_U32(ctx, 31, 0x22CB40u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22CB38u, 0x22CB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CB40u;
label_22cb40:
    // 0x22cb40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22cb40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22cb44: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22cb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cb48: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x22cb48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22cb4c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x22cb4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x22cb50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22cb50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22cb54: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22cb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cb58: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22cb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22cb5c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22cb5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x22cb60: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x22cb60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x22cb64: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x22cb64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x22cb68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22cb68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22cb6c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22cb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cb70: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22cb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22cb74: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x22cb74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x22cb78: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x22cb78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x22cb7c: 0x3462999a  ori         $v0, $v1, 0x999A
    ctx->pc = 0x22cb7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x22cb80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22cb80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22cb84: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22cb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cb88: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22cb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22cb8c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x22cb8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x22cb90: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22CB90u;
    SET_GPR_U32(ctx, 31, 0x22CB98u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22CB90u, 0x22CB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CB98u;
label_22cb98:
    // 0x22cb98: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x22cb98u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22cb9c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x22cb9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x22cba0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x22cba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x22cba4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x22CBA4u;
    {
        const bool branch_taken_0x22cba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cba4) {
            ctx->pc = 0x22CBD4u;
            return;
        }
    }
    ctx->pc = 0x22CBACu;
    // 0x22cbac: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x22cbacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x22cbb0: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x22cbb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x22cbb4: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x22cbb4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22cbb8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22cbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cbbc: 0x24040503  addiu       $a0, $zero, 0x503
    ctx->pc = 0x22cbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x22cbc0: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x22cbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x22cbc4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22cbc4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22cbc8: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22CBC8u;
    SET_GPR_U32(ctx, 31, 0x22CBD0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22CBC8u, 0x22CBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CBD0u;
label_22cbd0:
    // 0x22cbd0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x22cbd0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x22cbd4u;
}
