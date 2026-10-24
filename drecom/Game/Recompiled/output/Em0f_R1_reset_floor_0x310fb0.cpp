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

// Function: Em0f_R1_reset_floor
// Address: 0x310fb0 - 0x3110fc
void Em0f_R1_reset_floor_0x310fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0f_R1_reset_floor_0x310fb0");
#endif

    switch (ctx->pc) {
        case 0x311004u: goto label_311004;
        case 0x311040u: goto label_311040;
        case 0x311054u: goto label_311054;
        case 0x31106cu: goto label_31106c;
        case 0x311078u: goto label_311078;
        case 0x311088u: goto label_311088;
        case 0x311094u: goto label_311094;
        default: break;
    }

    ctx->pc = 0x310fb0u;

    // 0x310fb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x310fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x310fb4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x310fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x310fb8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x310fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x310fbc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x310fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310fc0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x310fc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x310fc4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x310fc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x310fc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x310fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x310fcc: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x310FCCu;
    {
        const bool branch_taken_0x310fcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x310fcc) {
            ctx->pc = 0x311014u;
            goto label_311014;
        }
    }
    ctx->pc = 0x310FD4u;
    // 0x310fd4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x310FD4u;
    {
        const bool branch_taken_0x310fd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x310fd4) {
            ctx->pc = 0x310FE4u;
            goto label_310fe4;
        }
    }
    ctx->pc = 0x310FDCu;
    // 0x310fdc: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x310FDCu;
    {
        const bool branch_taken_0x310fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310fdc) {
            ctx->pc = 0x3110ECu;
            goto label_3110ec;
        }
    }
    ctx->pc = 0x310FE4u;
label_310fe4:
    // 0x310fe4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x310fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310fe8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x310fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310fec: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x310fecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x310ff0: 0x24062835  addiu       $a2, $zero, 0x2835
    ctx->pc = 0x310ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10293));
    // 0x310ff4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x310ff4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x310ff8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x310ff8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x310ffc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x310FFCu;
    SET_GPR_U32(ctx, 31, 0x311004u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x310FFCu, 0x311004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311004u;
label_311004:
    // 0x311004: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x311004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x311008: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x311008u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x31100c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31100cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x311010: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x311010u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_311014:
    // 0x311014: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x311014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x311018: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x311018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31101c: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x31101cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x311020: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x311020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x311024: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x311024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x311028: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x311028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x31102c: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x31102cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x311030: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x311030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x311034: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x311034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x311038: 0xc05c848  jal         func_172120
    ctx->pc = 0x311038u;
    SET_GPR_U32(ctx, 31, 0x311040u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x311038u, 0x311040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311040u;
label_311040:
    // 0x311040: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x311040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x311044: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x311044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311048: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x311048u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31104c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x31104Cu;
    SET_GPR_U32(ctx, 31, 0x311054u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x31104Cu, 0x311054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311054u;
label_311054:
    // 0x311054: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x311054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x311058: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x311058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x31105c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x31105cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x311060: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x311060u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x311064: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x311064u;
    SET_GPR_U32(ctx, 31, 0x31106Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x311064u, 0x31106Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31106Cu;
label_31106c:
    // 0x31106c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x31106cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x311070: 0xc05cd10  jal         func_173440
    ctx->pc = 0x311070u;
    SET_GPR_U32(ctx, 31, 0x311078u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x311070u, 0x311078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311078u;
label_311078:
    // 0x311078: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x311078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31107c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31107cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x311080: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x311080u;
    SET_GPR_U32(ctx, 31, 0x311088u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x311080u, 0x311088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311088u;
label_311088:
    // 0x311088: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x311088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31108c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x31108Cu;
    SET_GPR_U32(ctx, 31, 0x311094u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x31108Cu, 0x311094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311094u;
label_311094:
    // 0x311094: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x311094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x311098: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x311098u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x31109c: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x31109Cu;
    {
        const bool branch_taken_0x31109c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31109c) {
            ctx->pc = 0x3110ECu;
            goto label_3110ec;
        }
    }
    ctx->pc = 0x3110A4u;
    // 0x3110a4: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x3110a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3110a8: 0x8ca411a0  lw          $a0, 0x11A0($a1)
    ctx->pc = 0x3110a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4512)));
    // 0x3110ac: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x3110acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x3110b0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3110b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3110b4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3110b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3110b8: 0xaca311a0  sw          $v1, 0x11A0($a1)
    ctx->pc = 0x3110b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4512), GPR_U32(ctx, 3));
    // 0x3110bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3110bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3110c0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3110c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3110c4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3110c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3110c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3110c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3110cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3110ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3110d0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3110d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3110d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3110d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3110d8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3110d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3110dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3110dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3110e0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3110e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3110e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3110e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3110e8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3110e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_3110ec:
    // 0x3110ec: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x3110ecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3110f0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3110f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3110f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3110F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3110F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3110FCu;
}
