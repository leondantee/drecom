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

// Function: entry_003763fc
// Address: 0x3763fc - 0x3764ec
void entry_003763fc_0x3763fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003763fc_0x3763fc");
#endif

    switch (ctx->pc) {
        case 0x37640cu: goto label_37640c;
        case 0x376454u: goto label_376454;
        case 0x376478u: goto label_376478;
        case 0x376484u: goto label_376484;
        case 0x3764c8u: goto label_3764c8;
        case 0x3764d0u: goto label_3764d0;
        default: break;
    }

    ctx->pc = 0x3763fcu;

    // 0x3763fc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3763fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x376400: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x376400u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x376404: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x376404u;
    SET_GPR_U32(ctx, 31, 0x37640Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x376404u, 0x37640Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37640Cu;
label_37640c:
    // 0x37640c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x37640cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x376410: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x376410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376414: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x376414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x376418: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x376418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37641c: 0x0  nop
    ctx->pc = 0x37641cu;
    // NOP
    // 0x376420: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x376420u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x376424: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x376424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x376428: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x376428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37642c: 0xc44000d0  lwc1        $f0, 0xD0($v0)
    ctx->pc = 0x37642cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376430: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x376430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x376434: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x376434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x376438: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x376438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x37643c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x37643cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x376440: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x376440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x376444: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x376444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x376448: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x376448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37644c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x37644Cu;
    SET_GPR_U32(ctx, 31, 0x376454u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x37644Cu, 0x376454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376454u;
label_376454:
    // 0x376454: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x376454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x376458: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x376458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x37645c: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x37645cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376460: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x376460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x376464: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x376464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x376468: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x376468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37646c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x37646cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x376470: 0xc0dd234  jal         func_3748D0
    ctx->pc = 0x376470u;
    SET_GPR_U32(ctx, 31, 0x376478u);
    ctx->pc = 0x3748D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3748D0u, 0x376470u, 0x376478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376478u;
label_376478:
    // 0x376478: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x376478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37647c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x37647Cu;
    SET_GPR_U32(ctx, 31, 0x376484u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x37647Cu, 0x376484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376484u;
label_376484:
    // 0x376484: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x376484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x376488: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x376488u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x37648c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x37648cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x376490: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x376490u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x376494: 0x14800015  bnez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x376494u;
    {
        const bool branch_taken_0x376494 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x376494) {
            ctx->pc = 0x3764ECu;
            return;
        }
    }
    ctx->pc = 0x37649Cu;
    // 0x37649c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37649cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3764a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3764a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3764a4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x3764a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3764a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3764a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3764ac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3764acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3764b0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3764b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3764b4: 0x24061e03  addiu       $a2, $zero, 0x1E03
    ctx->pc = 0x3764b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7683));
    // 0x3764b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3764b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3764bc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3764bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3764c0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3764C0u;
    SET_GPR_U32(ctx, 31, 0x3764C8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3764C0u, 0x3764C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3764C8u;
label_3764c8:
    // 0x3764c8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x3764C8u;
    SET_GPR_U32(ctx, 31, 0x3764D0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x3764C8u, 0x3764D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3764D0u;
label_3764d0:
    // 0x3764d0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3764d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3764d4: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x3764d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x3764d8: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x3764d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x3764dc: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x3764dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3764e0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x3764e0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x3764e4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3764e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3764e8: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x3764e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x3764ecu;
}
