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

// Function: entry_0029f30c
// Address: 0x29f30c - 0x29f430
void entry_0029f30c_0x29f30c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029f30c_0x29f30c");
#endif

    switch (ctx->pc) {
        case 0x29f338u: goto label_29f338;
        case 0x29f354u: goto label_29f354;
        case 0x29f36cu: goto label_29f36c;
        case 0x29f378u: goto label_29f378;
        case 0x29f388u: goto label_29f388;
        case 0x29f394u: goto label_29f394;
        case 0x29f3a0u: goto label_29f3a0;
        case 0x29f3f0u: goto label_29f3f0;
        default: break;
    }

    ctx->pc = 0x29f30cu;

    // 0x29f30c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29f30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f310: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x29f310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f314: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29f314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f318: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x29f318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29f31c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x29f31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x29f320: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x29f320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29f324: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x29f324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x29f328: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x29f328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x29f32c: 0xc46d0018  lwc1        $f13, 0x18($v1)
    ctx->pc = 0x29f32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x29f330: 0xc05c848  jal         func_172120
    ctx->pc = 0x29F330u;
    SET_GPR_U32(ctx, 31, 0x29F338u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x29F330u, 0x29F338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F338u;
label_29f338:
    // 0x29f338: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x29f338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x29f33c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29f33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f340: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x29f340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29f344: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x29f344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f348: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x29f348u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29f34c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x29F34Cu;
    SET_GPR_U32(ctx, 31, 0x29F354u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x29F34Cu, 0x29F354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F354u;
label_29f354:
    // 0x29f354: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29f354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f358: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x29f358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x29f35c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29f35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f360: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x29f360u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29f364: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x29F364u;
    SET_GPR_U32(ctx, 31, 0x29F36Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x29F364u, 0x29F36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F36Cu;
label_29f36c:
    // 0x29f36c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29f36cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f370: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x29F370u;
    SET_GPR_U32(ctx, 31, 0x29F378u);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x29F370u, 0x29F378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F378u;
label_29f378:
    // 0x29f378: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29f378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f37c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x29f37cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29f380: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x29F380u;
    SET_GPR_U32(ctx, 31, 0x29F388u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x29F380u, 0x29F388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F388u;
label_29f388:
    // 0x29f388: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29f388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f38c: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x29F38Cu;
    SET_GPR_U32(ctx, 31, 0x29F394u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x29F38Cu, 0x29F394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F394u;
label_29f394:
    // 0x29f394: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29f394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f398: 0xc0aa354  jal         func_2A8D50
    ctx->pc = 0x29F398u;
    SET_GPR_U32(ctx, 31, 0x29F3A0u);
    ctx->pc = 0x2A8D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8D50u, 0x29F398u, 0x29F3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F3A0u;
label_29f3a0:
    // 0x29f3a0: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x29f3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f3a4: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x29f3a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x29f3a8: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x29f3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x29f3ac: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x29f3acu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x29f3b0: 0x1480001f  bnez        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x29F3B0u;
    {
        const bool branch_taken_0x29f3b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x29f3b0) {
            ctx->pc = 0x29F430u;
            return;
        }
    }
    ctx->pc = 0x29F3B8u;
    // 0x29f3b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29f3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f3bc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29f3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f3c0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x29f3c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x29f3c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x29f3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29f3c8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29f3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f3cc: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x29f3ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x29f3d0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29f3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f3d4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x29f3d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29f3d8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29f3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f3dc: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x29f3dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29f3e0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29f3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f3e4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x29f3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x29f3e8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29F3E8u;
    SET_GPR_U32(ctx, 31, 0x29F3F0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29F3E8u, 0x29F3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F3F0u;
label_29f3f0:
    // 0x29f3f0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x29f3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29f3f4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x29f3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x29f3f8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x29F3F8u;
    {
        const bool branch_taken_0x29f3f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f3f8) {
            ctx->pc = 0x29F430u;
            return;
        }
    }
    ctx->pc = 0x29F400u;
    // 0x29f400: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29f400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f404: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29f404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f408: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29f408u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29f40c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x29f40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29f410: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29f410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f414: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29f414u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29f418: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29f418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f41c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29f41cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29f420: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29f420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f424: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29f424u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29f428: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29f428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f42c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29f42cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x29f430u;
}
