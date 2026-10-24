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

// Function: entry_0029e6ac
// Address: 0x29e6ac - 0x29e7d0
void entry_0029e6ac_0x29e6ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029e6ac_0x29e6ac");
#endif

    switch (ctx->pc) {
        case 0x29e6d8u: goto label_29e6d8;
        case 0x29e6f4u: goto label_29e6f4;
        case 0x29e70cu: goto label_29e70c;
        case 0x29e718u: goto label_29e718;
        case 0x29e728u: goto label_29e728;
        case 0x29e734u: goto label_29e734;
        case 0x29e740u: goto label_29e740;
        case 0x29e790u: goto label_29e790;
        default: break;
    }

    ctx->pc = 0x29e6acu;

    // 0x29e6ac: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29e6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e6b0: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x29e6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e6b4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29e6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e6b8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x29e6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29e6bc: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x29e6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x29e6c0: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x29e6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29e6c4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x29e6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x29e6c8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x29e6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x29e6cc: 0xc46d0018  lwc1        $f13, 0x18($v1)
    ctx->pc = 0x29e6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x29e6d0: 0xc05c848  jal         func_172120
    ctx->pc = 0x29E6D0u;
    SET_GPR_U32(ctx, 31, 0x29E6D8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x29E6D0u, 0x29E6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E6D8u;
label_29e6d8:
    // 0x29e6d8: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x29e6d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x29e6dc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29e6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e6e0: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x29e6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29e6e4: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x29e6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29e6e8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x29e6e8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29e6ec: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x29E6ECu;
    SET_GPR_U32(ctx, 31, 0x29E6F4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x29E6ECu, 0x29E6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E6F4u;
label_29e6f4:
    // 0x29e6f4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29e6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e6f8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x29e6f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x29e6fc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29e6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e700: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x29e700u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29e704: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x29E704u;
    SET_GPR_U32(ctx, 31, 0x29E70Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x29E704u, 0x29E70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E70Cu;
label_29e70c:
    // 0x29e70c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29e70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e710: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x29E710u;
    SET_GPR_U32(ctx, 31, 0x29E718u);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x29E710u, 0x29E718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E718u;
label_29e718:
    // 0x29e718: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29e718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e71c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x29e71cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29e720: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x29E720u;
    SET_GPR_U32(ctx, 31, 0x29E728u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x29E720u, 0x29E728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E728u;
label_29e728:
    // 0x29e728: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29e728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e72c: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x29E72Cu;
    SET_GPR_U32(ctx, 31, 0x29E734u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x29E72Cu, 0x29E734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E734u;
label_29e734:
    // 0x29e734: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29e734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e738: 0xc0aa354  jal         func_2A8D50
    ctx->pc = 0x29E738u;
    SET_GPR_U32(ctx, 31, 0x29E740u);
    ctx->pc = 0x2A8D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8D50u, 0x29E738u, 0x29E740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E740u;
label_29e740:
    // 0x29e740: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x29e740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e744: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x29e744u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x29e748: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x29e748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x29e74c: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x29e74cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x29e750: 0x14800052  bnez        $a0, . + 4 + (0x52 << 2)
    ctx->pc = 0x29E750u;
    {
        const bool branch_taken_0x29e750 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e750) {
            ctx->pc = 0x29E89Cu;
            return;
        }
    }
    ctx->pc = 0x29E758u;
    // 0x29e758: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29e758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e75c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29e75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e760: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x29e760u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x29e764: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x29e764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29e768: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29e768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e76c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x29e76cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x29e770: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29e770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e774: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x29e774u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29e778: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29e778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e77c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x29e77cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29e780: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29e780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e784: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x29e784u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x29e788: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29E788u;
    SET_GPR_U32(ctx, 31, 0x29E790u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29E788u, 0x29E790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E790u;
label_29e790:
    // 0x29e790: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x29e790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29e794: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x29e794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x29e798: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x29E798u;
    {
        const bool branch_taken_0x29e798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e798) {
            ctx->pc = 0x29E7D0u;
            return;
        }
    }
    ctx->pc = 0x29E7A0u;
    // 0x29e7a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29e7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e7a4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29e7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e7a8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29e7a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29e7ac: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x29e7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29e7b0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29e7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e7b4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29e7b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29e7b8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29e7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e7bc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29e7bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29e7c0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29e7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e7c4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29e7c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29e7c8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29e7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e7cc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29e7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x29e7d0u;
}
