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

// Function: entry_001ef9ac
// Address: 0x1ef9ac - 0x1efb54
void entry_001ef9ac_0x1ef9ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ef9ac_0x1ef9ac");
#endif

    switch (ctx->pc) {
        case 0x1ef9c4u: goto label_1ef9c4;
        case 0x1ef9dcu: goto label_1ef9dc;
        case 0x1ef9e8u: goto label_1ef9e8;
        case 0x1efaacu: goto label_1efaac;
        case 0x1efb30u: goto label_1efb30;
        case 0x1efb38u: goto label_1efb38;
        default: break;
    }

    ctx->pc = 0x1ef9acu;

    // 0x1ef9ac: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ef9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef9b0: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1ef9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef9b4: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1ef9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef9b8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1ef9b8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ef9bc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1EF9BCu;
    SET_GPR_U32(ctx, 31, 0x1EF9C4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1EF9BCu, 0x1EF9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF9C4u;
label_1ef9c4:
    // 0x1ef9c4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ef9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef9c8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1ef9c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1ef9cc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ef9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef9d0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1ef9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ef9d4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1EF9D4u;
    SET_GPR_U32(ctx, 31, 0x1EF9DCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1EF9D4u, 0x1EF9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF9DCu;
label_1ef9dc:
    // 0x1ef9dc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ef9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef9e0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1EF9E0u;
    SET_GPR_U32(ctx, 31, 0x1EF9E8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1EF9E0u, 0x1EF9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF9E8u;
label_1ef9e8:
    // 0x1ef9e8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ef9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef9ec: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x1ef9ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x1ef9f0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ef9f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ef9f4: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x1ef9f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1ef9f8: 0x10600082  beqz        $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x1EF9F8u;
    {
        const bool branch_taken_0x1ef9f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef9f8) {
            ctx->pc = 0x1EFC04u;
            return;
        }
    }
    ctx->pc = 0x1EFA00u;
    // 0x1efa00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1efa00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1efa04: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1efa04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efa08: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x1efa08u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x1efa0c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1efa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x1efa10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1efa10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efa14: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1efa14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efa18: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1efa18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1efa1c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1efa1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1efa20: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1efa20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1efa24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1efa24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efa28: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1efa28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efa2c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1efa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1efa30: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1efa30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1efa34: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1efa34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efa38: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1efa38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1efa3c: 0x24420880  addiu       $v0, $v0, 0x880
    ctx->pc = 0x1efa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x1efa40: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1efa40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1efa44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1efa44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efa48: 0x0  nop
    ctx->pc = 0x1efa48u;
    // NOP
    // 0x1efa4c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1efa4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1efa50: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1efa50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x1efa54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1efa54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efa58: 0x0  nop
    ctx->pc = 0x1efa58u;
    // NOP
    // 0x1efa5c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1efa5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1efa60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1efa60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efa64: 0x0  nop
    ctx->pc = 0x1efa64u;
    // NOP
    // 0x1efa68: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1efa68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1efa6c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1efa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1efa70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1efa70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efa74: 0x0  nop
    ctx->pc = 0x1efa74u;
    // NOP
    // 0x1efa78: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1efa78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1efa7c: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x1efa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x1efa80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1efa80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efa84: 0x0  nop
    ctx->pc = 0x1efa84u;
    // NOP
    // 0x1efa88: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1efa88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1efa8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1efa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1efa90: 0xa7a20034  sh          $v0, 0x34($sp)
    ctx->pc = 0x1efa90u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 52), (uint16_t)GPR_U32(ctx, 2));
    // 0x1efa94: 0xa3a00036  sb          $zero, 0x36($sp)
    ctx->pc = 0x1efa94u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 54), (uint8_t)GPR_U32(ctx, 0));
    // 0x1efa98: 0xa3a00037  sb          $zero, 0x37($sp)
    ctx->pc = 0x1efa98u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 55), (uint8_t)GPR_U32(ctx, 0));
    // 0x1efa9c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1efa9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efaa0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1efaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1efaa4: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x1EFAA4u;
    SET_GPR_U32(ctx, 31, 0x1EFAACu);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x1EFAA4u, 0x1EFAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFAACu;
label_1efaac:
    // 0x1efaac: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x1EFAACu;
    {
        const bool branch_taken_0x1efaac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efaac) {
            ctx->pc = 0x1EFC04u;
            return;
        }
    }
    ctx->pc = 0x1EFAB4u;
    // 0x1efab4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1efab4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efab8: 0x0  nop
    ctx->pc = 0x1efab8u;
    // NOP
    // 0x1efabc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1efabcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1efac0: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x1efac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x1efac4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1efac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efac8: 0x0  nop
    ctx->pc = 0x1efac8u;
    // NOP
    // 0x1efacc: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1efaccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1efad0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1efad0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efad4: 0x0  nop
    ctx->pc = 0x1efad4u;
    // NOP
    // 0x1efad8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1efad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1efadc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1efadcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1efae0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1efae0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efae4: 0x0  nop
    ctx->pc = 0x1efae4u;
    // NOP
    // 0x1efae8: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1efae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1efaec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1efaecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efaf0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1efaf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1efaf4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1efaf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1efaf8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1efaf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1efafc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1efafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1efb00: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1efb00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1efb04: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1efb04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1efb08: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1efb08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1efb0c: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x1efb0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x1efb10: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1efb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efb14: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1efb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1efb18: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1efb18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1efb1c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1efb1cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1efb20: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x1efb20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x1efb24: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1efb24u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1efb28: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1EFB28u;
    SET_GPR_U32(ctx, 31, 0x1EFB30u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1EFB28u, 0x1EFB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFB30u;
label_1efb30:
    // 0x1efb30: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EFB30u;
    SET_GPR_U32(ctx, 31, 0x1EFB38u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EFB30u, 0x1EFB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFB38u;
label_1efb38:
    // 0x1efb38: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EFB38u;
    {
        const bool branch_taken_0x1efb38 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1efb38) {
            ctx->pc = 0x1EFB54u;
            return;
        }
    }
    ctx->pc = 0x1EFB40u;
    // 0x1efb40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1efb40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efb44: 0x0  nop
    ctx->pc = 0x1efb44u;
    // NOP
    // 0x1efb48: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1efb48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1efb4c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EFB4Cu;
    {
        const bool branch_taken_0x1efb4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efb4c) {
            ctx->pc = 0x1EFB70u;
            return;
        }
    }
    ctx->pc = 0x1EFB54u;
}
