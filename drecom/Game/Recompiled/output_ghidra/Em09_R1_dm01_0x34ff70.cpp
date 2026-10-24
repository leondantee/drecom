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

// Function: Em09_R1_dm01
// Address: 0x34ff70 - 0x350944
void Em09_R1_dm01_0x34ff70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_R1_dm01_0x34ff70");
#endif

    switch (ctx->pc) {
        case 0x350020u: goto label_350020;
        case 0x3500dcu: goto label_3500dc;
        case 0x3501dcu: goto label_3501dc;
        case 0x3501ecu: goto label_3501ec;
        case 0x350278u: goto label_350278;
        case 0x350288u: goto label_350288;
        case 0x3502bcu: goto label_3502bc;
        case 0x3502f4u: goto label_3502f4;
        case 0x35037cu: goto label_35037c;
        case 0x350388u: goto label_350388;
        case 0x3503f4u: goto label_3503f4;
        case 0x350510u: goto label_350510;
        case 0x35051cu: goto label_35051c;
        case 0x3505e4u: goto label_3505e4;
        case 0x350670u: goto label_350670;
        case 0x35068cu: goto label_35068c;
        case 0x350718u: goto label_350718;
        case 0x3507a8u: goto label_3507a8;
        case 0x3507c4u: goto label_3507c4;
        case 0x350800u: goto label_350800;
        case 0x35080cu: goto label_35080c;
        case 0x350820u: goto label_350820;
        case 0x35082cu: goto label_35082c;
        default: break;
    }

    ctx->pc = 0x34ff70u;

    // 0x34ff70: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x34ff70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x34ff74: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x34ff74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x34ff78: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x34ff78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x34ff7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x34ff7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x34ff80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34ff80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34ff84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34ff84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34ff88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34ff88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34ff8c: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x34ff8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
    // 0x34ff90: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x34ff90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x34ff94: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x34ff94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x34ff98: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x34ff98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x34ff9c: 0x2471dbc0  addiu       $s1, $v1, -0x2440
    ctx->pc = 0x34ff9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x34ffa0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x34ffa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x34ffa4: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x34ffa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34ffa8: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x34ffa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x34ffac: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x34ffacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x34ffb0: 0xaca40020  sw          $a0, 0x20($a1)
    ctx->pc = 0x34ffb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 4));
    // 0x34ffb4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x34ffb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x34ffb8: 0x90650002  lbu         $a1, 0x2($v1)
    ctx->pc = 0x34ffb8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x34ffbc: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x34ffbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x34ffc0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x34ffc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34ffc4: 0x1083020a  beq         $a0, $v1, . + 4 + (0x20A << 2)
    ctx->pc = 0x34FFC4u;
    {
        const bool branch_taken_0x34ffc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x34ffc4) {
            ctx->pc = 0x3507F0u;
            goto label_3507f0;
        }
    }
    ctx->pc = 0x34FFCCu;
    // 0x34ffcc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34ffccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34ffd0: 0x108300e3  beq         $a0, $v1, . + 4 + (0xE3 << 2)
    ctx->pc = 0x34FFD0u;
    {
        const bool branch_taken_0x34ffd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x34ffd0) {
            ctx->pc = 0x350360u;
            goto label_350360;
        }
    }
    ctx->pc = 0x34FFD8u;
    // 0x34ffd8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x34ffd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34ffdc: 0x1093007b  beq         $a0, $s3, . + 4 + (0x7B << 2)
    ctx->pc = 0x34FFDCu;
    {
        const bool branch_taken_0x34ffdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 19));
        if (branch_taken_0x34ffdc) {
            ctx->pc = 0x3501CCu;
            goto label_3501cc;
        }
    }
    ctx->pc = 0x34FFE4u;
    // 0x34ffe4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34FFE4u;
    {
        const bool branch_taken_0x34ffe4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ffe4) {
            ctx->pc = 0x34FFF4u;
            goto label_34fff4;
        }
    }
    ctx->pc = 0x34FFECu;
    // 0x34ffec: 0x1000024c  b           . + 4 + (0x24C << 2)
    ctx->pc = 0x34FFECu;
    {
        const bool branch_taken_0x34ffec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ffec) {
            ctx->pc = 0x350920u;
            goto label_350920;
        }
    }
    ctx->pc = 0x34FFF4u;
label_34fff4:
    // 0x34fff4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34fff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34fff8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x34fff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x34fffc: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x34fffcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x350000: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x350000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350004: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x350004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350008: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x350008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x35000c: 0x24060420  addiu       $a2, $zero, 0x420
    ctx->pc = 0x35000cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
    // 0x350010: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x350010u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x350014: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x350014u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x350018: 0xc0965d0  jal         func_259740
    ctx->pc = 0x350018u;
    SET_GPR_U32(ctx, 31, 0x350020u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x350018u, 0x350020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350020u;
label_350020:
    // 0x350020: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x350020u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x350024: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x350024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350028: 0x8c4402d0  lw          $a0, 0x2D0($v0)
    ctx->pc = 0x350028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x35002c: 0x24900960  addiu       $s0, $a0, 0x960
    ctx->pc = 0x35002cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 2400));
    // 0x350030: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x350030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x350034: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x350034u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x350038: 0x34e80001  ori         $t0, $a3, 0x1
    ctx->pc = 0x350038u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1);
    // 0x35003c: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x35003cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
    // 0x350040: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x350040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350044: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x350044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350048: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x350048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x35004c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x35004cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x350050: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x350050u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x350054: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x350054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350058: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x350058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x35005c: 0xa0400028  sb          $zero, 0x28($v0)
    ctx->pc = 0x35005cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x350060: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x350060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x350064: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x350064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350068: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x350068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x35006c: 0xa0430029  sb          $v1, 0x29($v0)
    ctx->pc = 0x35006cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x350070: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x350070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x350074: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x350074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x350078: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x350078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35007c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x35007cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350080: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x350080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350084: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x350084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x350088: 0xc6210120  lwc1        $f1, 0x120($s1)
    ctx->pc = 0x350088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35008c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x35008cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350090: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x350090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350094: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x350094u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x350098: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x350098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x35009c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35009cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3500a0: 0x0  nop
    ctx->pc = 0x3500a0u;
    // NOP
    // 0x3500a4: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x3500a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x3500a8: 0xc6210128  lwc1        $f1, 0x128($s1)
    ctx->pc = 0x3500a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3500ac: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3500acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3500b0: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x3500b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3500b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3500b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3500b8: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x3500b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x3500bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3500bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3500c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3500c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3500c4: 0x0  nop
    ctx->pc = 0x3500c4u;
    // NOP
    // 0x3500c8: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x3500c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x3500cc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3500ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3500d0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3500d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3500d4: 0xc040c24  jal         func_103090
    ctx->pc = 0x3500D4u;
    SET_GPR_U32(ctx, 31, 0x3500DCu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x3500DCu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3500DCu) { return; }
    ctx->pc = 0x3500DCu;
label_3500dc:
    // 0x3500dc: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x3500dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x3500e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3500e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3500e4: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x3500e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3500e8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3500e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3500ec: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x3500ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3500f0: 0x24a21330  addiu       $v0, $a1, 0x1330
    ctx->pc = 0x3500f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x3500f4: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x3500f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x3500f8: 0x3c03c2a0  lui         $v1, 0xC2A0
    ctx->pc = 0x3500f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49824 << 16));
    // 0x3500fc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3500fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x350100: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x350100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350104: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x350104u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x350108: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x350108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x35010c: 0x24741330  addiu       $s4, $v1, 0x1330
    ctx->pc = 0x35010cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x350110: 0xe6800014  swc1        $f0, 0x14($s4)
    ctx->pc = 0x350110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 20), bits); }
    // 0x350114: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x350114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350118: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x350118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x35011c: 0xa060006e  sb          $zero, 0x6E($v1)
    ctx->pc = 0x35011cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x350120: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x350120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x350124: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x350124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350128: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x350128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35012c: 0xa085006f  sb          $a1, 0x6F($a0)
    ctx->pc = 0x35012cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 111), (uint8_t)GPR_U32(ctx, 5));
    // 0x350130: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x350130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x350134: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x350134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350138: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x350138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x35013c: 0xa0620072  sb          $v0, 0x72($v1)
    ctx->pc = 0x35013cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 114), (uint8_t)GPR_U32(ctx, 2));
    // 0x350140: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x350140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350144: 0x24821330  addiu       $v0, $a0, 0x1330
    ctx->pc = 0x350144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x350148: 0x90440028  lbu         $a0, 0x28($v0)
    ctx->pc = 0x350148u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x35014c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x35014cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x350150: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x350150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x350154: 0x1043001d  beq         $v0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x350154u;
    {
        const bool branch_taken_0x350154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x350154) {
            ctx->pc = 0x3501CCu;
            goto label_3501cc;
        }
    }
    ctx->pc = 0x35015Cu;
    // 0x35015c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x35015cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350160: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x350160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x350164: 0xa0600028  sb          $zero, 0x28($v1)
    ctx->pc = 0x350164u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x350168: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x350168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35016c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x35016cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350170: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x350170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x350174: 0xa0650029  sb          $a1, 0x29($v1)
    ctx->pc = 0x350174u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 5));
    // 0x350178: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x350178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x35017c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x35017cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x350180: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x350180u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350184: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x350184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350188: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x350188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35018c: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x35018cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x350190: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x350190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350194: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x350194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x350198: 0x24700190  addiu       $s0, $v1, 0x190
    ctx->pc = 0x350198u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
    // 0x35019c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x35019cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x3501a0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3501a0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3501a4: 0x0  nop
    ctx->pc = 0x3501a4u;
    // NOP
    // 0x3501a8: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x3501a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x3501ac: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x3501acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x3501b0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3501b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3501b4: 0x0  nop
    ctx->pc = 0x3501b4u;
    // NOP
    // 0x3501b8: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x3501b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x3501bc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3501bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3501c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3501c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3501c4: 0x0  nop
    ctx->pc = 0x3501c4u;
    // NOP
    // 0x3501c8: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x3501c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
label_3501cc:
    // 0x3501cc: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x3501ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3501d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3501d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3501d4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3501D4u;
    SET_GPR_U32(ctx, 31, 0x3501DCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3501D4u, 0x3501DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3501DCu;
label_3501dc:
    // 0x3501dc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3501dcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3501e0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x3501e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3501e4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x3501E4u;
    SET_GPR_U32(ctx, 31, 0x3501ECu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x3501E4u, 0x3501ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3501ECu;
label_3501ec:
    // 0x3501ec: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x3501ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3501f0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3501f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3501f4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3501f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3501f8: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x3501f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3501fc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3501fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350200: 0xc4600120  lwc1        $f0, 0x120($v1)
    ctx->pc = 0x350200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350204: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x350204u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x350208: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x350208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x35020c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x35020cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350210: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x350210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x350214: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x350214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x350218: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x350218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x35021c: 0xc4600128  lwc1        $f0, 0x128($v1)
    ctx->pc = 0x35021cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350220: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x350220u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x350224: 0xe4600128  swc1        $f0, 0x128($v1)
    ctx->pc = 0x350224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
    // 0x350228: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x350228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x35022c: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x35022cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x350230: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x350230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x350234: 0x34643333  ori         $a0, $v1, 0x3333
    ctx->pc = 0x350234u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x350238: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x350238u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35023c: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x35023cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350240: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x350240u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x350244: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x350244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x350248: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x350248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x35024c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x35024cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x350250: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x350250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x350254: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x350254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x350258: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x350258u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35025c: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x35025cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350260: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x350260u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x350264: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x350264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x350268: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x350268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x35026c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x35026cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x350270: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x350270u;
    SET_GPR_U32(ctx, 31, 0x350278u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x350270u, 0x350278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350278u;
label_350278:
    // 0x350278: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x350278u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x35027c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x35027cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350280: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x350280u;
    SET_GPR_U32(ctx, 31, 0x350288u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x350280u, 0x350288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350288u;
label_350288:
    // 0x350288: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x350288u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x35028c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x35028cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350290: 0x908309e7  lbu         $v1, 0x9E7($a0)
    ctx->pc = 0x350290u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
    // 0x350294: 0x106001a2  beqz        $v1, . + 4 + (0x1A2 << 2)
    ctx->pc = 0x350294u;
    {
        const bool branch_taken_0x350294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x350294) {
            ctx->pc = 0x350920u;
            goto label_350920;
        }
    }
    ctx->pc = 0x35029Cu;
    // 0x35029c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x35029cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3502a0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x3502a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3502a4: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x3502a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x3502a8: 0x24065a25  addiu       $a2, $zero, 0x5A25
    ctx->pc = 0x3502a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23077));
    // 0x3502ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3502acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3502b0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3502b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3502b4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3502B4u;
    SET_GPR_U32(ctx, 31, 0x3502BCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3502B4u, 0x3502BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3502BCu;
label_3502bc:
    // 0x3502bc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3502bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3502c0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3502c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3502c4: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x3502c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x3502c8: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x3502c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x3502cc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3502ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3502d0: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x3502d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x3502d4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3502d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3502d8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3502d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3502dc: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x3502dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3502e0: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x3502e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x3502e4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3502E4u;
    {
        const bool branch_taken_0x3502e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3502e4) {
            ctx->pc = 0x350310u;
            goto label_350310;
        }
    }
    ctx->pc = 0x3502ECu;
    // 0x3502ec: 0xc067694  jal         func_19DA50
    ctx->pc = 0x3502ECu;
    SET_GPR_U32(ctx, 31, 0x3502F4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x3502ECu, 0x3502F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3502F4u;
label_3502f4:
    // 0x3502f4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3502f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3502f8: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x3502f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x3502fc: 0x2463003c  addiu       $v1, $v1, 0x3C
    ctx->pc = 0x3502fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x350300: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x350300u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x350304: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x350304u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x350308: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x350308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x35030c: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x35030cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
label_350310:
    // 0x350310: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x350310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350314: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x350314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x350318: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x350318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x35031c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x35031cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x350320: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x350320u;
    {
        const bool branch_taken_0x350320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x350320) {
            ctx->pc = 0x350340u;
            goto label_350340;
        }
    }
    ctx->pc = 0x350328u;
    // 0x350328: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x350328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x35032c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x35032cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x350330: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x350330u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350334: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x350334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350338: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x350338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35033c: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x35033cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_350340:
    // 0x350340: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x350340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350344: 0x247210b0  addiu       $s2, $v1, 0x10B0
    ctx->pc = 0x350344u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4272));
    // 0x350348: 0x8e4400f0  lw          $a0, 0xF0($s2)
    ctx->pc = 0x350348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x35034c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x35034cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x350350: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x350350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x350354: 0xae4300f0  sw          $v1, 0xF0($s2)
    ctx->pc = 0x350354u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 240), GPR_U32(ctx, 3));
    // 0x350358: 0x10000171  b           . + 4 + (0x171 << 2)
    ctx->pc = 0x350358u;
    {
        const bool branch_taken_0x350358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350358) {
            ctx->pc = 0x350920u;
            goto label_350920;
        }
    }
    ctx->pc = 0x350360u;
label_350360:
    // 0x350360: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x350360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x350364: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x350364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350368: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x350368u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x35036c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x35036cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350370: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x350370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x350374: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x350374u;
    SET_GPR_U32(ctx, 31, 0x35037Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x350374u, 0x35037Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35037Cu;
label_35037c:
    // 0x35037c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x35037cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350380: 0xc05cd10  jal         func_173440
    ctx->pc = 0x350380u;
    SET_GPR_U32(ctx, 31, 0x350388u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x350380u, 0x350388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350388u;
label_350388:
    // 0x350388: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x350388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x35038c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x35038cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350390: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x350390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x350394: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x350394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x350398: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x350398u;
    {
        const bool branch_taken_0x350398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x350398) {
            ctx->pc = 0x350488u;
            goto label_350488;
        }
    }
    ctx->pc = 0x3503A0u;
    // 0x3503a0: 0xc6210120  lwc1        $f1, 0x120($s1)
    ctx->pc = 0x3503a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3503a4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3503a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3503a8: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x3503a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3503ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3503acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3503b0: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x3503b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x3503b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3503b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3503b8: 0x0  nop
    ctx->pc = 0x3503b8u;
    // NOP
    // 0x3503bc: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x3503bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x3503c0: 0xc6210128  lwc1        $f1, 0x128($s1)
    ctx->pc = 0x3503c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3503c4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3503c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3503c8: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x3503c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3503cc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3503ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3503d0: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x3503d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x3503d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3503d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3503d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3503d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3503dc: 0x0  nop
    ctx->pc = 0x3503dcu;
    // NOP
    // 0x3503e0: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x3503e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x3503e4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3503e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3503e8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3503e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3503ec: 0xc040c24  jal         func_103090
    ctx->pc = 0x3503ECu;
    SET_GPR_U32(ctx, 31, 0x3503F4u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x3503F4u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3503F4u) { return; }
    ctx->pc = 0x3503F4u;
label_3503f4:
    // 0x3503f4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3503f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3503f8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3503f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3503fc: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x3503fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x350400: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x350400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350404: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x350404u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x350408: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x350408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x35040c: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x35040cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350410: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x350410u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x350414: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x350414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x350418: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x350418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x35041c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x35041cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350420: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x350420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x350424: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x350424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350428: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x350428u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x35042c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x35042cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350430: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x350430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350434: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x350434u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x350438: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x350438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x35043c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x35043cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350440: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x350440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350444: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x350444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x350448: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x350448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x35044c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x35044cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350450: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x350450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350454: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x350454u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x350458: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x350458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x35045c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x35045cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350460: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x350460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350464: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x350464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x350468: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x350468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x35046c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x35046cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x350470: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x350470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350474: 0x0  nop
    ctx->pc = 0x350474u;
    // NOP
    // 0x350478: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x350478u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x35047c: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x35047cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x350480: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x350480u;
    {
        const bool branch_taken_0x350480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350480) {
            ctx->pc = 0x350500u;
            goto label_350500;
        }
    }
    ctx->pc = 0x350488u;
label_350488:
    // 0x350488: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x350488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x35048c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x35048cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350490: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x350490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x350494: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x350494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350498: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x350498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35049c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x35049cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3504a0: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x3504a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x3504a4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3504a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3504a8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3504a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3504ac: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x3504acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3504b0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3504b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3504b4: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x3504b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3504b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3504b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3504bc: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x3504bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x3504c0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3504c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3504c4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x3504c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3504c8: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x3504c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x3504cc: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x3504ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x3504d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3504d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3504d4: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x3504d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3504d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3504d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3504dc: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x3504dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x3504e0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3504e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3504e4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x3504e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3504e8: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x3504e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x3504ec: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x3504ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x3504f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3504f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3504f4: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x3504f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3504f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3504f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3504fc: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x3504fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_350500:
    // 0x350500: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x350500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350504: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x350504u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x350508: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x350508u;
    SET_GPR_U32(ctx, 31, 0x350510u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x350508u, 0x350510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350510u;
label_350510:
    // 0x350510: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x350510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350514: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x350514u;
    SET_GPR_U32(ctx, 31, 0x35051Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x350514u, 0x35051Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35051Cu;
label_35051c:
    // 0x35051c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x35051cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350520: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x350520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x350524: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x350524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x350528: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x350528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x35052c: 0x10600062  beqz        $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x35052Cu;
    {
        const bool branch_taken_0x35052c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35052c) {
            ctx->pc = 0x3506B8u;
            goto label_3506b8;
        }
    }
    ctx->pc = 0x350534u;
    // 0x350534: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x350534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350538: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x350538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35053c: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x35053cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x350540: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x350540u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350544: 0x0  nop
    ctx->pc = 0x350544u;
    // NOP
    // 0x350548: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x350548u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35054c: 0x0  nop
    ctx->pc = 0x35054cu;
    // NOP
    // 0x350550: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x350550u;
    {
        const bool branch_taken_0x350550 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x350550) {
            ctx->pc = 0x3505ACu;
            goto label_3505ac;
        }
    }
    ctx->pc = 0x350558u;
    // 0x350558: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x350558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35055c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x35055cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350560: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x350560u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x350564: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x350564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x350568: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x350568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x35056c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x35056cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x350570: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x350570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350574: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x350574u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x350578: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x350578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x35057c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x35057cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x350580: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x350580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350584: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x350584u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x350588: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x350588u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35058c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x35058cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350590: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x350590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x350594: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x350594u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350598: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x350598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x35059c: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x35059cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x3505a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3505a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3505a4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3505a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3505a8: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x3505a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_3505ac:
    // 0x3505ac: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x3505acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3505b0: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x3505b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x3505b4: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x3505b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3505b8: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x3505b8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x3505bc: 0x148000d8  bnez        $a0, . + 4 + (0xD8 << 2)
    ctx->pc = 0x3505BCu;
    {
        const bool branch_taken_0x3505bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3505bc) {
            ctx->pc = 0x350920u;
            goto label_350920;
        }
    }
    ctx->pc = 0x3505C4u;
    // 0x3505c4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3505c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3505c8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x3505c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3505cc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3505ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3505d0: 0x24063c1e  addiu       $a2, $zero, 0x3C1E
    ctx->pc = 0x3505d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15390));
    // 0x3505d4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3505d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3505d8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3505d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3505dc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3505DCu;
    SET_GPR_U32(ctx, 31, 0x3505E4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3505DCu, 0x3505E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3505E4u;
label_3505e4:
    // 0x3505e4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3505e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3505e8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3505e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3505ec: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x3505ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3505f0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3505f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3505f4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3505f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3505f8: 0xa0400028  sb          $zero, 0x28($v0)
    ctx->pc = 0x3505f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x3505fc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3505fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350600: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x350600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350604: 0xa0400029  sb          $zero, 0x29($v0)
    ctx->pc = 0x350604u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x350608: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x350608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x35060c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x35060cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x350610: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x350610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350614: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x350614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350618: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x350618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x35061c: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x35061cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x350620: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x350620u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350624: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x350624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350628: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x350628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x35062c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35062cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350630: 0x8fb00088  lw          $s0, 0x88($sp)
    ctx->pc = 0x350630u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350634: 0xe6000184  swc1        $f0, 0x184($s0)
    ctx->pc = 0x350634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 388), bits); }
    // 0x350638: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x350638u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35063c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x35063cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350640: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x350640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x350644: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x350644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x350648: 0x34710fdb  ori         $s1, $v1, 0xFDB
    ctx->pc = 0x350648u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x35064c: 0x44916800  mtc1        $s1, $f13
    ctx->pc = 0x35064cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x350650: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x350650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350654: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x350654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350658: 0x24a40120  addiu       $a0, $a1, 0x120
    ctx->pc = 0x350658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x35065c: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x35065cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x350660: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x350660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x350664: 0x2465dce0  addiu       $a1, $v1, -0x2320
    ctx->pc = 0x350664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x350668: 0xc05c848  jal         func_172120
    ctx->pc = 0x350668u;
    SET_GPR_U32(ctx, 31, 0x350670u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x350668u, 0x350670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350670u;
label_350670:
    // 0x350670: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x350670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x350674: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x350674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350678: 0xc48100d4  lwc1        $f1, 0xD4($a0)
    ctx->pc = 0x350678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35067c: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x35067cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350680: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x350680u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x350684: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x350684u;
    SET_GPR_U32(ctx, 31, 0x35068Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x350684u, 0x35068Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35068Cu;
label_35068c:
    // 0x35068c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x35068cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350690: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x350690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x350694: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x350694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350698: 0x247310b0  addiu       $s3, $v1, 0x10B0
    ctx->pc = 0x350698u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4272));
    // 0x35069c: 0x8e6400f0  lw          $a0, 0xF0($s3)
    ctx->pc = 0x35069cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x3506a0: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x3506a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x3506a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3506a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3506a8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x3506a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3506ac: 0xae6400f0  sw          $a0, 0xF0($s3)
    ctx->pc = 0x3506acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 240), GPR_U32(ctx, 4));
    // 0x3506b0: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x3506B0u;
    {
        const bool branch_taken_0x3506b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3506b0) {
            ctx->pc = 0x350920u;
            goto label_350920;
        }
    }
    ctx->pc = 0x3506B8u;
label_3506b8:
    // 0x3506b8: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x3506b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3506bc: 0x84a61278  lh          $a2, 0x1278($a1)
    ctx->pc = 0x3506bcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x3506c0: 0x24c7ffff  addiu       $a3, $a2, -0x1
    ctx->pc = 0x3506c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3506c4: 0xa4a71278  sh          $a3, 0x1278($a1)
    ctx->pc = 0x3506c4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 7));
    // 0x3506c8: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x3506C8u;
    {
        const bool branch_taken_0x3506c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3506c8) {
            ctx->pc = 0x3506F4u;
            goto label_3506f4;
        }
    }
    ctx->pc = 0x3506D0u;
    // 0x3506d0: 0x8fa80088  lw          $t0, 0x88($sp)
    ctx->pc = 0x3506d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3506d4: 0xc501128c  lwc1        $f1, 0x128C($t0)
    ctx->pc = 0x3506d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3506d8: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x3506d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x3506dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3506dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3506e0: 0x0  nop
    ctx->pc = 0x3506e0u;
    // NOP
    // 0x3506e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3506e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3506e8: 0x0  nop
    ctx->pc = 0x3506e8u;
    // NOP
    // 0x3506ec: 0x4500008c  bc1f        . + 4 + (0x8C << 2)
    ctx->pc = 0x3506ECu;
    {
        const bool branch_taken_0x3506ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3506ec) {
            ctx->pc = 0x350920u;
            goto label_350920;
        }
    }
    ctx->pc = 0x3506F4u;
label_3506f4:
    // 0x3506f4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3506f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3506f8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x3506f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3506fc: 0x8c500368  lw          $s0, 0x368($v0)
    ctx->pc = 0x3506fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x350700: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x350700u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x350704: 0x24063c1e  addiu       $a2, $zero, 0x3C1E
    ctx->pc = 0x350704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15390));
    // 0x350708: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x350708u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35070c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x35070cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x350710: 0xc0965d0  jal         func_259740
    ctx->pc = 0x350710u;
    SET_GPR_U32(ctx, 31, 0x350718u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x350710u, 0x350718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350718u;
label_350718:
    // 0x350718: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x350718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35071c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x35071cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350720: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x350720u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x350724: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x350724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350728: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x350728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x35072c: 0xa0400028  sb          $zero, 0x28($v0)
    ctx->pc = 0x35072cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x350730: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x350730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350734: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x350734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350738: 0xa0600029  sb          $zero, 0x29($v1)
    ctx->pc = 0x350738u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x35073c: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x35073cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x350740: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x350740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x350744: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x350744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350748: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x350748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x35074c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x35074cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350750: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x350750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x350754: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x350754u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350758: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x350758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x35075c: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x35075cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x350760: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x350760u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350764: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x350764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350768: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x350768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x35076c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35076cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350770: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x350770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350774: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x350774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x350778: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x350778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x35077c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x35077cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x350780: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x350780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x350784: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x350784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350788: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x350788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x35078c: 0x24820120  addiu       $v0, $a0, 0x120
    ctx->pc = 0x35078cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x350790: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x350790u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x350794: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x350794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x350798: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x350798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x35079c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x35079cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x3507a0: 0xc05c848  jal         func_172120
    ctx->pc = 0x3507A0u;
    SET_GPR_U32(ctx, 31, 0x3507A8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x3507A0u, 0x3507A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3507A8u;
label_3507a8:
    // 0x3507a8: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x3507a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x3507ac: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3507acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3507b0: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x3507b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3507b4: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x3507b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3507b8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x3507b8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3507bc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x3507BCu;
    SET_GPR_U32(ctx, 31, 0x3507C4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x3507BCu, 0x3507C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3507C4u;
label_3507c4:
    // 0x3507c4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3507c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3507c8: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x3507c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x3507cc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3507ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3507d0: 0x247410b0  addiu       $s4, $v1, 0x10B0
    ctx->pc = 0x3507d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4272));
    // 0x3507d4: 0x8e8400f0  lw          $a0, 0xF0($s4)
    ctx->pc = 0x3507d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 240)));
    // 0x3507d8: 0x3c05bfff  lui         $a1, 0xBFFF
    ctx->pc = 0x3507d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49151 << 16));
    // 0x3507dc: 0x34a3ffff  ori         $v1, $a1, 0xFFFF
    ctx->pc = 0x3507dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x3507e0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3507e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3507e4: 0xae8300f0  sw          $v1, 0xF0($s4)
    ctx->pc = 0x3507e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 240), GPR_U32(ctx, 3));
    // 0x3507e8: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x3507E8u;
    {
        const bool branch_taken_0x3507e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3507e8) {
            ctx->pc = 0x350920u;
            goto label_350920;
        }
    }
    ctx->pc = 0x3507F0u;
label_3507f0:
    // 0x3507f0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x3507f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3507f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3507f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3507f8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3507F8u;
    SET_GPR_U32(ctx, 31, 0x350800u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3507F8u, 0x350800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350800u;
label_350800:
    // 0x350800: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x350800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350804: 0xc05cd10  jal         func_173440
    ctx->pc = 0x350804u;
    SET_GPR_U32(ctx, 31, 0x35080Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x350804u, 0x35080Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35080Cu;
label_35080c:
    // 0x35080c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x35080cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x350810: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x350810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350814: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x350814u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x350818: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x350818u;
    SET_GPR_U32(ctx, 31, 0x350820u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x350818u, 0x350820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350820u;
label_350820:
    // 0x350820: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x350820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350824: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x350824u;
    SET_GPR_U32(ctx, 31, 0x35082Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x350824u, 0x35082Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35082Cu;
label_35082c:
    // 0x35082c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x35082cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350830: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x350830u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x350834: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x350834u;
    {
        const bool branch_taken_0x350834 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x350834) {
            ctx->pc = 0x350920u;
            goto label_350920;
        }
    }
    ctx->pc = 0x35083Cu;
    // 0x35083c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35083cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x350840: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x350840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350844: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x350844u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x350848: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x350848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35084c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x35084cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350850: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x350850u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x350854: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x350854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350858: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x350858u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35085c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x35085cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350860: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x350860u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x350864: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x350864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350868: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x350868u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x35086c: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x35086cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x350870: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x350870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350874: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x350874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x350878: 0xa4640068  sh          $a0, 0x68($v1)
    ctx->pc = 0x350878u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 104), (uint16_t)GPR_U32(ctx, 4));
    // 0x35087c: 0x8fb00088  lw          $s0, 0x88($sp)
    ctx->pc = 0x35087cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350880: 0x26051330  addiu       $a1, $s0, 0x1330
    ctx->pc = 0x350880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x350884: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x350884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x350888: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x350888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x35088c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x35088cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x350890: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x350890u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x350894: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x350894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350898: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x350898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35089c: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x35089cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3508a0: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x3508a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x3508a4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x3508a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x3508a8: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x3508a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x3508ac: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3508acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3508b0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3508b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3508b4: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x3508b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3508b8: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x3508b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x3508bc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3508BCu;
    {
        const bool branch_taken_0x3508bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3508bc) {
            ctx->pc = 0x3508F8u;
            goto label_3508f8;
        }
    }
    ctx->pc = 0x3508C4u;
    // 0x3508c4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3508c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3508c8: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x3508c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3508cc: 0xa0a0006e  sb          $zero, 0x6E($a1)
    ctx->pc = 0x3508ccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x3508d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3508d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3508d4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3508d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3508d8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3508d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3508dc: 0xa064006f  sb          $a0, 0x6F($v1)
    ctx->pc = 0x3508dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 111), (uint8_t)GPR_U32(ctx, 4));
    // 0x3508e0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3508e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3508e4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3508e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3508e8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3508e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3508ec: 0xa0640072  sb          $a0, 0x72($v1)
    ctx->pc = 0x3508ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 114), (uint8_t)GPR_U32(ctx, 4));
    // 0x3508f0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3508F0u;
    {
        const bool branch_taken_0x3508f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3508f0) {
            ctx->pc = 0x350920u;
            goto label_350920;
        }
    }
    ctx->pc = 0x3508F8u;
label_3508f8:
    // 0x3508f8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x3508f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3508fc: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x3508fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x350900: 0xa060006e  sb          $zero, 0x6E($v1)
    ctx->pc = 0x350900u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x350904: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x350904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350908: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x350908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x35090c: 0xa060006f  sb          $zero, 0x6F($v1)
    ctx->pc = 0x35090cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 111), (uint8_t)GPR_U32(ctx, 0));
    // 0x350910: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x350910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x350914: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x350914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350918: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x350918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35091c: 0xa0640072  sb          $a0, 0x72($v1)
    ctx->pc = 0x35091cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 114), (uint8_t)GPR_U32(ctx, 4));
label_350920:
    // 0x350920: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x350920u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x350924: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x350924u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x350928: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x350928u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35092c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35092cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x350930: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x350930u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x350934: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x350934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x350938: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x350938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x35093c: 0x3e00008  jr          $ra
    ctx->pc = 0x35093Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35093Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350944u;
}
