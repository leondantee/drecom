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

// Function: entry_0034fff4
// Address: 0x34fff4 - 0x3501cc
void entry_0034fff4_0x34fff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034fff4_0x34fff4");
#endif

    switch (ctx->pc) {
        case 0x350020u: goto label_350020;
        case 0x3500dcu: goto label_3500dc;
        default: break;
    }

    ctx->pc = 0x34fff4u;

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
            return;
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
    ctx->pc = 0x3501ccu;
}
