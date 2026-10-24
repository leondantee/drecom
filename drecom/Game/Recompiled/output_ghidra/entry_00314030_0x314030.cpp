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

// Function: entry_00314030
// Address: 0x314030 - 0x31416c
void entry_00314030_0x314030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00314030_0x314030");
#endif

    switch (ctx->pc) {
        case 0x314044u: goto label_314044;
        case 0x3140ecu: goto label_3140ec;
        default: break;
    }

    ctx->pc = 0x314030u;

    // 0x314030: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x314030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x314034: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x314034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x314038: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x314038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x31403c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x31403Cu;
    SET_GPR_U32(ctx, 31, 0x314044u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x31403Cu, 0x314044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314044u;
label_314044:
    // 0x314044: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x314044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x314048: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x314048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31404c: 0x0  nop
    ctx->pc = 0x31404cu;
    // NOP
    // 0x314050: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x314050u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x314054: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x314054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x314058: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x314058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31405c: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x31405cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x314060: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x314060u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x314064: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x314064u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x314068: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x314068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x31406c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x31406cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x314070: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x314070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x314074: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x314074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x314078: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x314078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x31407c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31407cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314080: 0x0  nop
    ctx->pc = 0x314080u;
    // NOP
    // 0x314084: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x314084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x314088: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x314088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31408c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31408cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x314090: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x314090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x314094: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x314094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x314098: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x314098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31409c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31409cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3140a0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3140a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3140a4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x3140a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3140a8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x3140a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3140ac: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3140acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3140b0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3140b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3140b4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3140b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3140b8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3140b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3140bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3140bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3140c0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3140c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3140c4: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x3140c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3140c8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3140c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3140cc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3140ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3140d0: 0x3c023c04  lui         $v0, 0x3C04
    ctx->pc = 0x3140d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15364 << 16));
    // 0x3140d4: 0x3442001e  ori         $v0, $v0, 0x1E
    ctx->pc = 0x3140d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30);
    // 0x3140d8: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x3140d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3140dc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3140dcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3140e0: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x3140e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3140e4: 0xc06352c  jal         func_18D4B0
    ctx->pc = 0x3140E4u;
    SET_GPR_U32(ctx, 31, 0x3140ECu);
    ctx->pc = 0x18D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D4B0u, 0x3140E4u, 0x3140ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3140ECu;
label_3140ec:
    // 0x3140ec: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x3140ecu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3140f0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x3140f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x3140f4: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x3140f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x3140f8: 0x1203001c  beq         $s0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x3140F8u;
    {
        const bool branch_taken_0x3140f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3140f8) {
            ctx->pc = 0x31416Cu;
            return;
        }
    }
    ctx->pc = 0x314100u;
    // 0x314100: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x314100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x314104: 0xa203034d  sb          $v1, 0x34D($s0)
    ctx->pc = 0x314104u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 845), (uint8_t)GPR_U32(ctx, 3));
    // 0x314108: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x314108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31410c: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x31410cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
    // 0x314110: 0xa200034e  sb          $zero, 0x34E($s0)
    ctx->pc = 0x314110u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 846), (uint8_t)GPR_U32(ctx, 0));
    // 0x314114: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x314114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x314118: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x314118u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31411c: 0x0  nop
    ctx->pc = 0x31411cu;
    // NOP
    // 0x314120: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x314120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
    // 0x314124: 0x3c034328  lui         $v1, 0x4328
    ctx->pc = 0x314124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17192 << 16));
    // 0x314128: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x314128u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31412c: 0x0  nop
    ctx->pc = 0x31412cu;
    // NOP
    // 0x314130: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x314130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
    // 0x314134: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x314134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x314138: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x314138u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31413c: 0x0  nop
    ctx->pc = 0x31413cu;
    // NOP
    // 0x314140: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x314140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
    // 0x314144: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x314144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x314148: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x314148u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31414c: 0x0  nop
    ctx->pc = 0x31414cu;
    // NOP
    // 0x314150: 0xe60002dc  swc1        $f0, 0x2DC($s0)
    ctx->pc = 0x314150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 732), bits); }
    // 0x314154: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x314154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x314158: 0xa20302a8  sb          $v1, 0x2A8($s0)
    ctx->pc = 0x314158u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 680), (uint8_t)GPR_U32(ctx, 3));
    // 0x31415c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x31415cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x314160: 0xa203034f  sb          $v1, 0x34F($s0)
    ctx->pc = 0x314160u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 847), (uint8_t)GPR_U32(ctx, 3));
    // 0x314164: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x314164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x314168: 0xae030364  sw          $v1, 0x364($s0)
    ctx->pc = 0x314168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 3));
    ctx->pc = 0x31416cu;
}
