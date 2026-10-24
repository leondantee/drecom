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

// Function: entry_002c72ac
// Address: 0x2c72ac - 0x2c7430
void entry_002c72ac_0x2c72ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c72ac_0x2c72ac");
#endif

    switch (ctx->pc) {
        case 0x2c72bcu: goto label_2c72bc;
        case 0x2c72dcu: goto label_2c72dc;
        case 0x2c72ecu: goto label_2c72ec;
        case 0x2c72f8u: goto label_2c72f8;
        case 0x2c738cu: goto label_2c738c;
        case 0x2c73a4u: goto label_2c73a4;
        case 0x2c73b4u: goto label_2c73b4;
        case 0x2c73ecu: goto label_2c73ec;
        default: break;
    }

    ctx->pc = 0x2c72acu;

    // 0x2c72ac: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c72acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c72b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c72b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c72b4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2C72B4u;
    SET_GPR_U32(ctx, 31, 0x2C72BCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2C72B4u, 0x2C72BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C72BCu;
label_2c72bc:
    // 0x2c72bc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c72bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c72c0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c72c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c72c4: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x2c72c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c72c8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c72c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c72cc: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2c72ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2c72d0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c72d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c72d4: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x2C72D4u;
    SET_GPR_U32(ctx, 31, 0x2C72DCu);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x2C72D4u, 0x2C72DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C72DCu;
label_2c72dc:
    // 0x2c72dc: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c72dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c72e0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c72e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c72e4: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2C72E4u;
    SET_GPR_U32(ctx, 31, 0x2C72ECu);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2C72E4u, 0x2C72ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C72ECu;
label_2c72ec:
    // 0x2c72ec: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c72ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c72f0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2C72F0u;
    SET_GPR_U32(ctx, 31, 0x2C72F8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2C72F0u, 0x2C72F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C72F8u;
label_2c72f8:
    // 0x2c72f8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c72f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c72fc: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x2c72fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x2c7300: 0x1460004b  bnez        $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x2C7300u;
    {
        const bool branch_taken_0x2c7300 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7300) {
            ctx->pc = 0x2C7430u;
            return;
        }
    }
    ctx->pc = 0x2C7308u;
    // 0x2c7308: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c7308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c730c: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x2c730cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x2c7310: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x2c7310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x2c7314: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x2c7314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x2c7318: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c7318u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c731c: 0x0  nop
    ctx->pc = 0x2c731cu;
    // NOP
    // 0x2c7320: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2c7320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2c7324: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c7324u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7328: 0x0  nop
    ctx->pc = 0x2c7328u;
    // NOP
    // 0x2c732c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2c732cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2c7330: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c7330u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7334: 0x0  nop
    ctx->pc = 0x2c7334u;
    // NOP
    // 0x2c7338: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2c7338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2c733c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2c733cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2c7340: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c7340u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7344: 0x0  nop
    ctx->pc = 0x2c7344u;
    // NOP
    // 0x2c7348: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2c7348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2c734c: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2c734cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2c7350: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c7350u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7354: 0x0  nop
    ctx->pc = 0x2c7354u;
    // NOP
    // 0x2c7358: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2c7358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2c735c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c735cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7360: 0xa7a30054  sh          $v1, 0x54($sp)
    ctx->pc = 0x2c7360u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 84), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c7364: 0xa3a00056  sb          $zero, 0x56($sp)
    ctx->pc = 0x2c7364u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 86), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c7368: 0xa3a00057  sb          $zero, 0x57($sp)
    ctx->pc = 0x2c7368u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 87), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c736c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c736cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7370: 0x906310a8  lbu         $v1, 0x10A8($v1)
    ctx->pc = 0x2c7370u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4264)));
    // 0x2c7374: 0x1460002e  bnez        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x2C7374u;
    {
        const bool branch_taken_0x2c7374 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7374) {
            ctx->pc = 0x2C7430u;
            return;
        }
    }
    ctx->pc = 0x2C737Cu;
    // 0x2c737c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c737cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7380: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2c7380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c7384: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x2C7384u;
    SET_GPR_U32(ctx, 31, 0x2C738Cu);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x2C7384u, 0x2C738Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C738Cu;
label_2c738c:
    // 0x2c738c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2C738Cu;
    {
        const bool branch_taken_0x2c738c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c738c) {
            ctx->pc = 0x2C7430u;
            return;
        }
    }
    ctx->pc = 0x2C7394u;
    // 0x2c7394: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x2c7394u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x2c7398: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x2c7398u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x2c739c: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x2C739Cu;
    SET_GPR_U32(ctx, 31, 0x2C73A4u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x2C739Cu, 0x2C73A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C73A4u;
label_2c73a4:
    // 0x2c73a4: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x2c73a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x2c73a8: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x2c73a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x2c73ac: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x2C73ACu;
    SET_GPR_U32(ctx, 31, 0x2C73B4u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x2C73ACu, 0x2C73B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C73B4u;
label_2c73b4:
    // 0x2c73b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c73b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c73b8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c73b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c73bc: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x2c73bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c73c0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c73c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c73c4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2c73c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c73c8: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2c73c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2c73cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c73ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c73d0: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x2c73d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x2c73d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c73d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c73d8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c73d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c73dc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c73dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c73e0: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x2c73e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c73e4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C73E4u;
    SET_GPR_U32(ctx, 31, 0x2C73ECu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C73E4u, 0x2C73ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C73ECu;
label_2c73ec:
    // 0x2c73ec: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c73ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c73f0: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x2c73f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2c73f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c73f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c73f8: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2C73F8u;
    {
        const bool branch_taken_0x2c73f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c73f8) {
            ctx->pc = 0x2C7430u;
            return;
        }
    }
    ctx->pc = 0x2C7400u;
    // 0x2c7400: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2c7400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c7404: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c7404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7408: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c7408u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c740c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c740cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7410: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c7410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7414: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2c7414u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c7418: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c7418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c741c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2c741cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c7420: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c7420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7424: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2c7424u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c7428: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2c7428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c742c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c742cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2c7430u;
}
