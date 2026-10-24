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

// Function: Pl_r1_devil_sky_end
// Address: 0x26d6d0 - 0x26d9c8
void Pl_r1_devil_sky_end_0x26d6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_devil_sky_end_0x26d6d0");
#endif

    switch (ctx->pc) {
        case 0x26d74cu: goto label_26d74c;
        case 0x26d7d4u: goto label_26d7d4;
        case 0x26d838u: goto label_26d838;
        case 0x26d844u: goto label_26d844;
        case 0x26d858u: goto label_26d858;
        case 0x26d864u: goto label_26d864;
        case 0x26d948u: goto label_26d948;
        default: break;
    }

    ctx->pc = 0x26d6d0u;

    // 0x26d6d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26d6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26d6d4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x26d6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x26d6d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26d6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26d6dc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x26d6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x26d6e0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x26d6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x26d6e4: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x26d6e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x26d6e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26d6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d6ec: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x26d6ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x26d6f0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x26d6f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x26d6f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26d6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26d6f8: 0x1083004b  beq         $a0, $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x26D6F8u;
    {
        const bool branch_taken_0x26d6f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x26d6f8) {
            ctx->pc = 0x26D828u;
            goto label_26d828;
        }
    }
    ctx->pc = 0x26D700u;
    // 0x26d700: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26D700u;
    {
        const bool branch_taken_0x26d700 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d700) {
            ctx->pc = 0x26D710u;
            goto label_26d710;
        }
    }
    ctx->pc = 0x26D708u;
    // 0x26d708: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x26D708u;
    {
        const bool branch_taken_0x26d708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d708) {
            ctx->pc = 0x26D9B4u;
            goto label_26d9b4;
        }
    }
    ctx->pc = 0x26D710u;
label_26d710:
    // 0x26d710: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x26d710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x26d714: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26d714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d718: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x26d718u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x26d71c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26d71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d720: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x26d720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d724: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26d724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d728: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x26d728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x26d72c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26d72cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d730: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26d730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d734: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26d734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x26d738: 0x24061e6c  addiu       $a2, $zero, 0x1E6C
    ctx->pc = 0x26d738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7788));
    // 0x26d73c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26d73cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26d740: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26d740u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x26d744: 0xc0965d0  jal         func_259740
    ctx->pc = 0x26D744u;
    SET_GPR_U32(ctx, 31, 0x26D74Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26D744u, 0x26D74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D74Cu;
label_26d74c:
    // 0x26d74c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26d74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x26d750: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26d750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26d754: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26d754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d758: 0xe4401b54  swc1        $f0, 0x1B54($v0)
    ctx->pc = 0x26d758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6996), bits); }
    // 0x26d75c: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x26d75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x26d760: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26d760u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26d764: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26d764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d768: 0xe4401b58  swc1        $f0, 0x1B58($v0)
    ctx->pc = 0x26d768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7000), bits); }
    // 0x26d76c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26d76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d770: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x26d770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26d774: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x26d774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x26d778: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x26d778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26d77c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x26d77cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x26d780: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26d780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d784: 0xa44013c0  sh          $zero, 0x13C0($v0)
    ctx->pc = 0x26d784u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5056), (uint16_t)GPR_U32(ctx, 0));
    // 0x26d788: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x26d788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x26d78c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26d78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d790: 0xa44313c2  sh          $v1, 0x13C2($v0)
    ctx->pc = 0x26d790u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5058), (uint16_t)GPR_U32(ctx, 3));
    // 0x26d794: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26d794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d798: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x26d798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x26d79c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x26d79cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x26d7a0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x26d7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x26d7a4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x26d7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x26d7a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26d7a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26d7ac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26d7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26d7b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x26d7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x26d7b4: 0x34440112  ori         $a0, $v0, 0x112
    ctx->pc = 0x26d7b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)274);
    // 0x26d7b8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26d7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d7bc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26d7bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26d7c0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x26d7c0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26d7c4: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x26d7c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x26d7c8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x26d7c8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26d7cc: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x26D7CCu;
    SET_GPR_U32(ctx, 31, 0x26D7D4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x26D7CCu, 0x26D7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D7D4u;
label_26d7d4:
    // 0x26d7d4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26d7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d7d8: 0x844213ac  lh          $v0, 0x13AC($v0)
    ctx->pc = 0x26d7d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5036)));
    // 0x26d7dc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x26d7dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x26d7e0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x26d7e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x26d7e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26d7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26d7e8: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x26d7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x26d7ec: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x26d7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x26d7f0: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x26d7f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x26d7f4: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x26d7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x26d7f8: 0x0  nop
    ctx->pc = 0x26d7f8u;
    // NOP
    // 0x26d7fc: 0x1010  mfhi        $v0
    ctx->pc = 0x26d7fcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x26d800: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26d800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26d804: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x26d804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x26d808: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x26d808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x26d80c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x26d80cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x26d810: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26d810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d814: 0xa44313a8  sh          $v1, 0x13A8($v0)
    ctx->pc = 0x26d814u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5032), (uint16_t)GPR_U32(ctx, 3));
    // 0x26d818: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26d818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d81c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x26d81cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x26d820: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26d820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26d824: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x26d824u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_26d828:
    // 0x26d828: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26d828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d82c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26d82cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26d830: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x26D830u;
    SET_GPR_U32(ctx, 31, 0x26D838u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x26D830u, 0x26D838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D838u;
label_26d838:
    // 0x26d838: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26d838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d83c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x26D83Cu;
    SET_GPR_U32(ctx, 31, 0x26D844u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x26D83Cu, 0x26D844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D844u;
label_26d844:
    // 0x26d844: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26d844u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26d848: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26d848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d84c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26d84cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26d850: 0xc0574f4  jal         func_15D3D0
    ctx->pc = 0x26D850u;
    SET_GPR_U32(ctx, 31, 0x26D858u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x26D850u, 0x26D858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D858u;
label_26d858:
    // 0x26d858: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26d858u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26d85c: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x26D85Cu;
    SET_GPR_U32(ctx, 31, 0x26D864u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x26D85Cu, 0x26D864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D864u;
label_26d864:
    // 0x26d864: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26d864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d868: 0xc4611b58  lwc1        $f1, 0x1B58($v1)
    ctx->pc = 0x26d868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d86c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26d86cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26d870: 0x0  nop
    ctx->pc = 0x26d870u;
    // NOP
    // 0x26d874: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26d874u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d878: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26d878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26d87c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x26D87Cu;
    {
        const bool branch_taken_0x26d87c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d87c) {
            ctx->pc = 0x26D888u;
            goto label_26d888;
        }
    }
    ctx->pc = 0x26D884u;
    // 0x26d884: 0x70001e28  paddub      $v1, $zero, $zero
    ctx->pc = 0x26d884u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_26d888:
    // 0x26d888: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26d888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d88c: 0xc4811b54  lwc1        $f1, 0x1B54($a0)
    ctx->pc = 0x26d88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d890: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x26d890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x26d894: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26d894u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26d898: 0x0  nop
    ctx->pc = 0x26d898u;
    // NOP
    // 0x26d89c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26d89cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26d8a0: 0xe4801b54  swc1        $f0, 0x1B54($a0)
    ctx->pc = 0x26d8a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6996), bits); }
    // 0x26d8a4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26d8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d8a8: 0xc4811b58  lwc1        $f1, 0x1B58($a0)
    ctx->pc = 0x26d8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d8ac: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x26d8acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x26d8b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26d8b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26d8b4: 0x0  nop
    ctx->pc = 0x26d8b4u;
    // NOP
    // 0x26d8b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26d8b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26d8bc: 0xe4801b58  swc1        $f0, 0x1B58($a0)
    ctx->pc = 0x26d8bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 7000), bits); }
    // 0x26d8c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26d8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d8c4: 0xc4611b58  lwc1        $f1, 0x1B58($v1)
    ctx->pc = 0x26d8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d8c8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x26d8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x26d8cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26d8ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26d8d0: 0x0  nop
    ctx->pc = 0x26d8d0u;
    // NOP
    // 0x26d8d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26d8d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d8d8: 0x0  nop
    ctx->pc = 0x26d8d8u;
    // NOP
    // 0x26d8dc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x26D8DCu;
    {
        const bool branch_taken_0x26d8dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d8dc) {
            ctx->pc = 0x26D8F4u;
            goto label_26d8f4;
        }
    }
    ctx->pc = 0x26D8E4u;
    // 0x26d8e4: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x26d8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x26d8e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26d8e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26d8ec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26d8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d8f0: 0xe4601b58  swc1        $f0, 0x1B58($v1)
    ctx->pc = 0x26d8f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 7000), bits); }
label_26d8f4:
    // 0x26d8f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26d8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d8f8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x26d8f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x26d8fc: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x26D8FCu;
    {
        const bool branch_taken_0x26d8fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d8fc) {
            ctx->pc = 0x26D9B4u;
            goto label_26d9b4;
        }
    }
    ctx->pc = 0x26D904u;
    // 0x26d904: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26d904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d908: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x26d908u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x26d90c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26d90cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26d910: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x26d910u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x26d914: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x26d914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x26d918: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x26d918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x26d91c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26d91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26d920: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26d920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26d924: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x26d924u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x26d928: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26d928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d92c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26d92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d930: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26d930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d934: 0x8c841340  lw          $a0, 0x1340($a0)
    ctx->pc = 0x26d934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4928)));
    // 0x26d938: 0x8c651330  lw          $a1, 0x1330($v1)
    ctx->pc = 0x26d938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4912)));
    // 0x26d93c: 0x8c461338  lw          $a2, 0x1338($v0)
    ctx->pc = 0x26d93cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4920)));
    // 0x26d940: 0xc050f5c  jal         func_143D70
    ctx->pc = 0x26D940u;
    SET_GPR_U32(ctx, 31, 0x26D948u);
    ctx->pc = 0x143D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143D70u, 0x26D940u, 0x26D948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D948u;
label_26d948:
    // 0x26d948: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26d948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d94c: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x26d94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x26d950: 0xa0600090  sb          $zero, 0x90($v1)
    ctx->pc = 0x26d950u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 144), (uint8_t)GPR_U32(ctx, 0));
    // 0x26d954: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26d954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d958: 0xa46013ac  sh          $zero, 0x13AC($v1)
    ctx->pc = 0x26d958u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5036), (uint16_t)GPR_U32(ctx, 0));
    // 0x26d95c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x26d95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26d960: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26d960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d964: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x26d964u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x26d968: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x26d968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x26d96c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26d96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d970: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x26d970u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x26d974: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26d974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d978: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x26d978u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x26d97c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26d97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d980: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x26d980u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x26d984: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26d984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d988: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x26d988u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x26d98c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26d98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d990: 0xac6013e8  sw          $zero, 0x13E8($v1)
    ctx->pc = 0x26d990u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5096), GPR_U32(ctx, 0));
    // 0x26d994: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26d994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d998: 0xac6013ec  sw          $zero, 0x13EC($v1)
    ctx->pc = 0x26d998u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5100), GPR_U32(ctx, 0));
    // 0x26d99c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x26d99cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26d9a0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x26d9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x26d9a4: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x26d9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
    // 0x26d9a8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x26d9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x26d9ac: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x26d9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x26d9b0: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x26d9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_26d9b4:
    // 0x26d9b4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x26d9b4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26d9b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26d9b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26d9bc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x26d9bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26d9c0: 0x3e00008  jr          $ra
    ctx->pc = 0x26D9C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D9C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26D9C8u;
}
