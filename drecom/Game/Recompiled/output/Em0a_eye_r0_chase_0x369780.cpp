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

// Function: Em0a_eye_r0_chase
// Address: 0x369780 - 0x369f9c
void Em0a_eye_r0_chase_0x369780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0a_eye_r0_chase_0x369780");
#endif

    switch (ctx->pc) {
        case 0x36988cu: goto label_36988c;
        case 0x36989cu: goto label_36989c;
        case 0x3698f8u: goto label_3698f8;
        case 0x369940u: goto label_369940;
        case 0x369950u: goto label_369950;
        case 0x3699b0u: goto label_3699b0;
        case 0x3699ccu: goto label_3699cc;
        case 0x369a08u: goto label_369a08;
        case 0x369ad0u: goto label_369ad0;
        case 0x369b18u: goto label_369b18;
        case 0x369b28u: goto label_369b28;
        case 0x369b88u: goto label_369b88;
        case 0x369ba4u: goto label_369ba4;
        case 0x369be0u: goto label_369be0;
        case 0x369c74u: goto label_369c74;
        case 0x369cbcu: goto label_369cbc;
        case 0x369cccu: goto label_369ccc;
        case 0x369d2cu: goto label_369d2c;
        case 0x369d48u: goto label_369d48;
        case 0x369d84u: goto label_369d84;
        case 0x369e40u: goto label_369e40;
        case 0x369e80u: goto label_369e80;
        case 0x369e9cu: goto label_369e9c;
        case 0x369ed8u: goto label_369ed8;
        case 0x369f48u: goto label_369f48;
        default: break;
    }

    ctx->pc = 0x369780u;

    // 0x369780: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x369780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x369784: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x369784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x369788: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x369788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x36978c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36978cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x369790: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x369790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x369794: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x369794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x369798: 0xafa400e0  sw          $a0, 0xE0($sp)
    ctx->pc = 0x369798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
    // 0x36979c: 0xafa500e8  sw          $a1, 0xE8($sp)
    ctx->pc = 0x36979cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 5));
    // 0x3697a0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x3697a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3697a4: 0x90630013  lbu         $v1, 0x13($v1)
    ctx->pc = 0x3697a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 19)));
    // 0x3697a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3697a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3697ac: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x3697acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3697b0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x3697b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x3697b4: 0x2463af10  addiu       $v1, $v1, -0x50F0
    ctx->pc = 0x3697b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946576));
    // 0x3697b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3697b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3697bc: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x3697bcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3697c0: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x3697c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3697c4: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x3697c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x3697c8: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x3697c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x3697cc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3697ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3697d0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3697d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3697d4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x3697d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3697d8: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x3697d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x3697dc: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x3697dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3697e0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x3697e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3697e4: 0x90630013  lbu         $v1, 0x13($v1)
    ctx->pc = 0x3697e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 19)));
    // 0x3697e8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3697e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3697ec: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x3697ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3697f0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x3697f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x3697f4: 0x2463af20  addiu       $v1, $v1, -0x50E0
    ctx->pc = 0x3697f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946592));
    // 0x3697f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3697f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3697fc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3697fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x369800: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x369800u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x369804: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x369804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x369808: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x369808u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x36980c: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x36980cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x369810: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x369810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x369814: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x369814u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x369818: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x369818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x36981c: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x36981cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x369820: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x369820u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x369824: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x369824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x369828: 0x10830181  beq         $a0, $v1, . + 4 + (0x181 << 2)
    ctx->pc = 0x369828u;
    {
        const bool branch_taken_0x369828 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x369828) {
            ctx->pc = 0x369E30u;
            goto label_369e30;
        }
    }
    ctx->pc = 0x369830u;
    // 0x369830: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x369830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x369834: 0x1083010a  beq         $a0, $v1, . + 4 + (0x10A << 2)
    ctx->pc = 0x369834u;
    {
        const bool branch_taken_0x369834 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x369834) {
            ctx->pc = 0x369C60u;
            goto label_369c60;
        }
    }
    ctx->pc = 0x36983Cu;
    // 0x36983c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x36983cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x369840: 0x1083009e  beq         $a0, $v1, . + 4 + (0x9E << 2)
    ctx->pc = 0x369840u;
    {
        const bool branch_taken_0x369840 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x369840) {
            ctx->pc = 0x369ABCu;
            goto label_369abc;
        }
    }
    ctx->pc = 0x369848u;
    // 0x369848: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x369848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36984c: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x36984Cu;
    {
        const bool branch_taken_0x36984c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x36984c) {
            ctx->pc = 0x3698E4u;
            goto label_3698e4;
        }
    }
    ctx->pc = 0x369854u;
    // 0x369854: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x369854u;
    {
        const bool branch_taken_0x369854 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x369854) {
            ctx->pc = 0x369864u;
            goto label_369864;
        }
    }
    ctx->pc = 0x36985Cu;
    // 0x36985c: 0x100001c7  b           . + 4 + (0x1C7 << 2)
    ctx->pc = 0x36985Cu;
    {
        const bool branch_taken_0x36985c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36985c) {
            ctx->pc = 0x369F7Cu;
            goto label_369f7c;
        }
    }
    ctx->pc = 0x369864u;
label_369864:
    // 0x369864: 0x24030081  addiu       $v1, $zero, 0x81
    ctx->pc = 0x369864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x369868: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x369868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x36986c: 0xa0430010  sb          $v1, 0x10($v0)
    ctx->pc = 0x36986cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x369870: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x369870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x369874: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x369874u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x369878: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x369878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x36987c: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x36987cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x369880: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x369880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x369884: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x369884u;
    SET_GPR_U32(ctx, 31, 0x36988Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x369884u, 0x36988Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36988Cu;
label_36988c:
    // 0x36988c: 0xc7ac00b0  lwc1        $f12, 0xB0($sp)
    ctx->pc = 0x36988cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x369890: 0xc7ad00b8  lwc1        $f13, 0xB8($sp)
    ctx->pc = 0x369890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x369894: 0xc0455e6  jal         func_115798
    ctx->pc = 0x369894u;
    SET_GPR_U32(ctx, 31, 0x36989Cu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x369894u, 0x36989Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36989Cu;
label_36989c:
    // 0x36989c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x36989cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3698a0: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x3698a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x3698a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3698a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3698a8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3698a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3698ac: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x3698acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3698b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3698b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3698b4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3698b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3698b8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x3698b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x3698bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3698bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3698c0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3698c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3698c4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x3698c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x3698c8: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x3698c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x3698cc: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3698ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3698d0: 0xa4430014  sh          $v1, 0x14($v0)
    ctx->pc = 0x3698d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x3698d4: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x3698d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3698d8: 0x90620012  lbu         $v0, 0x12($v1)
    ctx->pc = 0x3698d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x3698dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3698dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3698e0: 0xa0620012  sb          $v0, 0x12($v1)
    ctx->pc = 0x3698e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 18), (uint8_t)GPR_U32(ctx, 2));
label_3698e4:
    // 0x3698e4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3698e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3698e8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3698e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3698ec: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x3698ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3698f0: 0xc067874  jal         func_19E1D0
    ctx->pc = 0x3698F0u;
    SET_GPR_U32(ctx, 31, 0x3698F8u);
    ctx->pc = 0x19E1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E1D0u, 0x3698F0u, 0x3698F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3698F8u;
label_3698f8:
    // 0x3698f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3698f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3698fc: 0x0  nop
    ctx->pc = 0x3698fcu;
    // NOP
    // 0x369900: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x369900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x369904: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x369904u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369908: 0x0  nop
    ctx->pc = 0x369908u;
    // NOP
    // 0x36990c: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x36990cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x369910: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x369910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369914: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x369914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369918: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x369918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x36991c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x36991cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x369920: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x369920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369924: 0x0  nop
    ctx->pc = 0x369924u;
    // NOP
    // 0x369928: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x369928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x36992c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x36992cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x369930: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x369930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x369934: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x369934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x369938: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x369938u;
    SET_GPR_U32(ctx, 31, 0x369940u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x369940u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x369940u) { return; }
    ctx->pc = 0x369940u;
label_369940:
    // 0x369940: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x369940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x369944: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x369944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x369948: 0xc040c9e  jal         func_103278
    ctx->pc = 0x369948u;
    SET_GPR_U32(ctx, 31, 0x369950u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x369950u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x369950u) { return; }
    ctx->pc = 0x369950u;
label_369950:
    // 0x369950: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x369950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369954: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x369954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369958: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x369958u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36995c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x36995cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x369960: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x369960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369964: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x369964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369968: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x369968u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36996c: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x36996cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x369970: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x369970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x369974: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x369974u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369978: 0x0  nop
    ctx->pc = 0x369978u;
    // NOP
    // 0x36997c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x36997cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x369980: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x369980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x369984: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x369984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369988: 0x0  nop
    ctx->pc = 0x369988u;
    // NOP
    // 0x36998c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x36998cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x369990: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x369990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x369994: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x369994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x369998: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x369998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x36999c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x36999cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3699a0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x3699a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x3699a4: 0x344801c7  ori         $t0, $v0, 0x1C7
    ctx->pc = 0x3699a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)455);
    // 0x3699a8: 0xc05a2d4  jal         func_168B50
    ctx->pc = 0x3699A8u;
    SET_GPR_U32(ctx, 31, 0x3699B0u);
    ctx->pc = 0x168B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168B50u, 0x3699A8u, 0x3699B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3699B0u;
label_3699b0:
    // 0x3699b0: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x3699b0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3699b4: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3699B4u;
    {
        const bool branch_taken_0x3699b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3699b4) {
            ctx->pc = 0x3699CCu;
            goto label_3699cc;
        }
    }
    ctx->pc = 0x3699BCu;
    // 0x3699bc: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x3699bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x3699c0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x3699c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3699c4: 0xc040c9e  jal         func_103278
    ctx->pc = 0x3699C4u;
    SET_GPR_U32(ctx, 31, 0x3699CCu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x3699CCu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3699CCu) { return; }
    ctx->pc = 0x3699CCu;
label_3699cc:
    // 0x3699cc: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3699ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3699d0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x3699d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3699d4: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x3699d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3699d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3699d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3699dc: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x3699dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x3699e0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x3699e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3699e4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x3699e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3699e8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x3699e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x3699ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3699ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3699f0: 0x0  nop
    ctx->pc = 0x3699f0u;
    // NOP
    // 0x3699f4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3699f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3699f8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x3699f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3699fc: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x3699fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x369a00: 0xc05cfdc  jal         func_173F70
    ctx->pc = 0x369A00u;
    SET_GPR_U32(ctx, 31, 0x369A08u);
    ctx->pc = 0x173F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173F70u, 0x369A00u, 0x369A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369A08u;
label_369a08:
    // 0x369a08: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x369a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x369a0c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x369a0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x369a10: 0x0  nop
    ctx->pc = 0x369a10u;
    // NOP
    // 0x369a14: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x369a14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x369a18: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x369a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x369a1c: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x369a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369a20: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x369a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369a24: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x369a24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x369a28: 0x0  nop
    ctx->pc = 0x369a28u;
    // NOP
    // 0x369a2c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x369A2Cu;
    {
        const bool branch_taken_0x369a2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x369a2c) {
            ctx->pc = 0x369A48u;
            goto label_369a48;
        }
    }
    ctx->pc = 0x369A34u;
    // 0x369a34: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x369a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369a38: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x369a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x369a3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x369a3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369a40: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x369a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369a44: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x369a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_369a48:
    // 0x369a48: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x369a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369a4c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x369a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369a50: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x369a50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x369a54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x369a54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369a58: 0x0  nop
    ctx->pc = 0x369a58u;
    // NOP
    // 0x369a5c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x369a5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x369a60: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x369a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x369a64: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x369a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369a68: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x369a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369a6c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x369a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x369a70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x369a70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369a74: 0x0  nop
    ctx->pc = 0x369a74u;
    // NOP
    // 0x369a78: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x369a78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x369a7c: 0x0  nop
    ctx->pc = 0x369a7cu;
    // NOP
    // 0x369a80: 0x4501013e  bc1t        . + 4 + (0x13E << 2)
    ctx->pc = 0x369A80u;
    {
        const bool branch_taken_0x369a80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x369a80) {
            ctx->pc = 0x369F7Cu;
            goto label_369f7c;
        }
    }
    ctx->pc = 0x369A88u;
    // 0x369a88: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x369a88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x369a8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x369a8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369a90: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x369a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369a94: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x369a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x369a98: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x369a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x369a9c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x369a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369aa0: 0xa4640014  sh          $a0, 0x14($v1)
    ctx->pc = 0x369aa0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 4));
    // 0x369aa4: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x369aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369aa8: 0x90830012  lbu         $v1, 0x12($a0)
    ctx->pc = 0x369aa8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x369aac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x369aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x369ab0: 0xa0830012  sb          $v1, 0x12($a0)
    ctx->pc = 0x369ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 18), (uint8_t)GPR_U32(ctx, 3));
    // 0x369ab4: 0x10000131  b           . + 4 + (0x131 << 2)
    ctx->pc = 0x369AB4u;
    {
        const bool branch_taken_0x369ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x369ab4) {
            ctx->pc = 0x369F7Cu;
            goto label_369f7c;
        }
    }
    ctx->pc = 0x369ABCu;
label_369abc:
    // 0x369abc: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x369abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369ac0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x369ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x369ac4: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x369ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x369ac8: 0xc067874  jal         func_19E1D0
    ctx->pc = 0x369AC8u;
    SET_GPR_U32(ctx, 31, 0x369AD0u);
    ctx->pc = 0x19E1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E1D0u, 0x369AC8u, 0x369AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369AD0u;
label_369ad0:
    // 0x369ad0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x369ad0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369ad4: 0x0  nop
    ctx->pc = 0x369ad4u;
    // NOP
    // 0x369ad8: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x369ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x369adc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x369adcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369ae0: 0x0  nop
    ctx->pc = 0x369ae0u;
    // NOP
    // 0x369ae4: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x369ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x369ae8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x369ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369aec: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x369aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369af0: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x369af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x369af4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x369af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x369af8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x369af8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369afc: 0x0  nop
    ctx->pc = 0x369afcu;
    // NOP
    // 0x369b00: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x369b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x369b04: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x369b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x369b08: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x369b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x369b0c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x369b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x369b10: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x369B10u;
    SET_GPR_U32(ctx, 31, 0x369B18u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x369B18u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x369B18u) { return; }
    ctx->pc = 0x369B18u;
label_369b18:
    // 0x369b18: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x369b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x369b1c: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x369b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x369b20: 0xc040c9e  jal         func_103278
    ctx->pc = 0x369B20u;
    SET_GPR_U32(ctx, 31, 0x369B28u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x369B28u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x369B28u) { return; }
    ctx->pc = 0x369B28u;
label_369b28:
    // 0x369b28: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x369b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369b2c: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x369b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369b30: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x369b30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x369b34: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x369b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x369b38: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x369b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369b3c: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x369b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369b40: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x369b40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x369b44: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x369b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x369b48: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x369b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x369b4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x369b4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369b50: 0x0  nop
    ctx->pc = 0x369b50u;
    // NOP
    // 0x369b54: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x369b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x369b58: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x369b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x369b5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x369b5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369b60: 0x0  nop
    ctx->pc = 0x369b60u;
    // NOP
    // 0x369b64: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x369b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x369b68: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x369b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x369b6c: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x369b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x369b70: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x369b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x369b74: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x369b74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x369b78: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x369b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x369b7c: 0x344801c7  ori         $t0, $v0, 0x1C7
    ctx->pc = 0x369b7cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)455);
    // 0x369b80: 0xc05a2d4  jal         func_168B50
    ctx->pc = 0x369B80u;
    SET_GPR_U32(ctx, 31, 0x369B88u);
    ctx->pc = 0x168B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168B50u, 0x369B80u, 0x369B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369B88u;
label_369b88:
    // 0x369b88: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x369b88u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x369b8c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x369B8Cu;
    {
        const bool branch_taken_0x369b8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x369b8c) {
            ctx->pc = 0x369BA4u;
            goto label_369ba4;
        }
    }
    ctx->pc = 0x369B94u;
    // 0x369b94: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x369b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x369b98: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x369b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x369b9c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x369B9Cu;
    SET_GPR_U32(ctx, 31, 0x369BA4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x369BA4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x369BA4u) { return; }
    ctx->pc = 0x369BA4u;
label_369ba4:
    // 0x369ba4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x369ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369ba8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x369ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369bac: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x369bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369bb0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x369bb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x369bb4: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x369bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x369bb8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x369bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369bbc: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x369bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369bc0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x369bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x369bc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x369bc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369bc8: 0x0  nop
    ctx->pc = 0x369bc8u;
    // NOP
    // 0x369bcc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x369bccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x369bd0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x369bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x369bd4: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x369bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x369bd8: 0xc05cfdc  jal         func_173F70
    ctx->pc = 0x369BD8u;
    SET_GPR_U32(ctx, 31, 0x369BE0u);
    ctx->pc = 0x173F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173F70u, 0x369BD8u, 0x369BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369BE0u;
label_369be0:
    // 0x369be0: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x369be0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x369be4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x369be4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x369be8: 0x0  nop
    ctx->pc = 0x369be8u;
    // NOP
    // 0x369bec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x369becu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x369bf0: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x369bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x369bf4: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x369bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369bf8: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x369bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369bfc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x369bfcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x369c00: 0x0  nop
    ctx->pc = 0x369c00u;
    // NOP
    // 0x369c04: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x369C04u;
    {
        const bool branch_taken_0x369c04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x369c04) {
            ctx->pc = 0x369C20u;
            goto label_369c20;
        }
    }
    ctx->pc = 0x369C0Cu;
    // 0x369c0c: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x369c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369c10: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x369c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x369c14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x369c14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369c18: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x369c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369c1c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x369c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_369c20:
    // 0x369c20: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x369c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369c24: 0x84630014  lh          $v1, 0x14($v1)
    ctx->pc = 0x369c24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x369c28: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x369C28u;
    {
        const bool branch_taken_0x369c28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x369c28) {
            ctx->pc = 0x369C48u;
            goto label_369c48;
        }
    }
    ctx->pc = 0x369C30u;
    // 0x369c30: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x369c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369c34: 0x84830014  lh          $v1, 0x14($a0)
    ctx->pc = 0x369c34u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x369c38: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x369c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x369c3c: 0xa4830014  sh          $v1, 0x14($a0)
    ctx->pc = 0x369c3cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x369c40: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x369C40u;
    {
        const bool branch_taken_0x369c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x369c40) {
            ctx->pc = 0x369F7Cu;
            goto label_369f7c;
        }
    }
    ctx->pc = 0x369C48u;
label_369c48:
    // 0x369c48: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x369c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369c4c: 0x90830012  lbu         $v1, 0x12($a0)
    ctx->pc = 0x369c4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x369c50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x369c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x369c54: 0xa0830012  sb          $v1, 0x12($a0)
    ctx->pc = 0x369c54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 18), (uint8_t)GPR_U32(ctx, 3));
    // 0x369c58: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x369C58u;
    {
        const bool branch_taken_0x369c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x369c58) {
            ctx->pc = 0x369F7Cu;
            goto label_369f7c;
        }
    }
    ctx->pc = 0x369C60u;
label_369c60:
    // 0x369c60: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x369c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369c64: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x369c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x369c68: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x369c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x369c6c: 0xc067874  jal         func_19E1D0
    ctx->pc = 0x369C6Cu;
    SET_GPR_U32(ctx, 31, 0x369C74u);
    ctx->pc = 0x19E1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E1D0u, 0x369C6Cu, 0x369C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369C74u;
label_369c74:
    // 0x369c74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x369c74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369c78: 0x0  nop
    ctx->pc = 0x369c78u;
    // NOP
    // 0x369c7c: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x369c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x369c80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x369c80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369c84: 0x0  nop
    ctx->pc = 0x369c84u;
    // NOP
    // 0x369c88: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x369c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x369c8c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x369c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369c90: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x369c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369c94: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x369c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x369c98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x369c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x369c9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x369c9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369ca0: 0x0  nop
    ctx->pc = 0x369ca0u;
    // NOP
    // 0x369ca4: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x369ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x369ca8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x369ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x369cac: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x369cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x369cb0: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x369cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x369cb4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x369CB4u;
    SET_GPR_U32(ctx, 31, 0x369CBCu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x369CBCu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x369CBCu) { return; }
    ctx->pc = 0x369CBCu;
label_369cbc:
    // 0x369cbc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x369cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x369cc0: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x369cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x369cc4: 0xc040c9e  jal         func_103278
    ctx->pc = 0x369CC4u;
    SET_GPR_U32(ctx, 31, 0x369CCCu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x369CCCu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x369CCCu) { return; }
    ctx->pc = 0x369CCCu;
label_369ccc:
    // 0x369ccc: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x369cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369cd0: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x369cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369cd4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x369cd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x369cd8: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x369cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x369cdc: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x369cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369ce0: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x369ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369ce4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x369ce4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x369ce8: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x369ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x369cec: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x369cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x369cf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x369cf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369cf4: 0x0  nop
    ctx->pc = 0x369cf4u;
    // NOP
    // 0x369cf8: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x369cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x369cfc: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x369cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x369d00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x369d00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369d04: 0x0  nop
    ctx->pc = 0x369d04u;
    // NOP
    // 0x369d08: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x369d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x369d0c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x369d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x369d10: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x369d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x369d14: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x369d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x369d18: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x369d18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x369d1c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x369d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x369d20: 0x344801c7  ori         $t0, $v0, 0x1C7
    ctx->pc = 0x369d20u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)455);
    // 0x369d24: 0xc05a2d4  jal         func_168B50
    ctx->pc = 0x369D24u;
    SET_GPR_U32(ctx, 31, 0x369D2Cu);
    ctx->pc = 0x168B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168B50u, 0x369D24u, 0x369D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369D2Cu;
label_369d2c:
    // 0x369d2c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x369d2cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x369d30: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x369D30u;
    {
        const bool branch_taken_0x369d30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x369d30) {
            ctx->pc = 0x369D48u;
            goto label_369d48;
        }
    }
    ctx->pc = 0x369D38u;
    // 0x369d38: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x369d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x369d3c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x369d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x369d40: 0xc040c9e  jal         func_103278
    ctx->pc = 0x369D40u;
    SET_GPR_U32(ctx, 31, 0x369D48u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x369D48u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x369D48u) { return; }
    ctx->pc = 0x369D48u;
label_369d48:
    // 0x369d48: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x369d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369d4c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x369d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369d50: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x369d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369d54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x369d54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x369d58: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x369d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x369d5c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x369d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369d60: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x369d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369d64: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x369d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x369d68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x369d68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369d6c: 0x0  nop
    ctx->pc = 0x369d6cu;
    // NOP
    // 0x369d70: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x369d70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x369d74: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x369d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x369d78: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x369d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x369d7c: 0xc05cfdc  jal         func_173F70
    ctx->pc = 0x369D7Cu;
    SET_GPR_U32(ctx, 31, 0x369D84u);
    ctx->pc = 0x173F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173F70u, 0x369D7Cu, 0x369D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369D84u;
label_369d84:
    // 0x369d84: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x369d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x369d88: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x369d88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x369d8c: 0x0  nop
    ctx->pc = 0x369d8cu;
    // NOP
    // 0x369d90: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x369d90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x369d94: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x369d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x369d98: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x369d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369d9c: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x369d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369da0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x369da0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x369da4: 0x0  nop
    ctx->pc = 0x369da4u;
    // NOP
    // 0x369da8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x369DA8u;
    {
        const bool branch_taken_0x369da8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x369da8) {
            ctx->pc = 0x369DC4u;
            goto label_369dc4;
        }
    }
    ctx->pc = 0x369DB0u;
    // 0x369db0: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x369db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369db4: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x369db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x369db8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x369db8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369dbc: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x369dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369dc0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x369dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_369dc4:
    // 0x369dc4: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x369dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369dc8: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x369dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369dcc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x369dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x369dd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x369dd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369dd4: 0x0  nop
    ctx->pc = 0x369dd4u;
    // NOP
    // 0x369dd8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x369dd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x369ddc: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x369ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x369de0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x369de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369de4: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x369de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369de8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x369de8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369dec: 0x0  nop
    ctx->pc = 0x369decu;
    // NOP
    // 0x369df0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x369df0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x369df4: 0x0  nop
    ctx->pc = 0x369df4u;
    // NOP
    // 0x369df8: 0x45000060  bc1f        . + 4 + (0x60 << 2)
    ctx->pc = 0x369DF8u;
    {
        const bool branch_taken_0x369df8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x369df8) {
            ctx->pc = 0x369F7Cu;
            goto label_369f7c;
        }
    }
    ctx->pc = 0x369E00u;
    // 0x369e00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x369e00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369e04: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x369e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369e08: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x369e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x369e0c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x369e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369e10: 0x90830012  lbu         $v1, 0x12($a0)
    ctx->pc = 0x369e10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x369e14: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x369e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x369e18: 0xa0830012  sb          $v1, 0x12($a0)
    ctx->pc = 0x369e18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 18), (uint8_t)GPR_U32(ctx, 3));
    // 0x369e1c: 0x2404012c  addiu       $a0, $zero, 0x12C
    ctx->pc = 0x369e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x369e20: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x369e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369e24: 0xa4640014  sh          $a0, 0x14($v1)
    ctx->pc = 0x369e24u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 4));
    // 0x369e28: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x369E28u;
    {
        const bool branch_taken_0x369e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x369e28) {
            ctx->pc = 0x369F7Cu;
            goto label_369f7c;
        }
    }
    ctx->pc = 0x369E30u;
label_369e30:
    // 0x369e30: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x369e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x369e34: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x369e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x369e38: 0xc040c9e  jal         func_103278
    ctx->pc = 0x369E38u;
    SET_GPR_U32(ctx, 31, 0x369E40u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x369E40u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x369E40u) { return; }
    ctx->pc = 0x369E40u;
label_369e40:
    // 0x369e40: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x369e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x369e44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x369e44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369e48: 0x0  nop
    ctx->pc = 0x369e48u;
    // NOP
    // 0x369e4c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x369e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x369e50: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x369e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x369e54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x369e54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369e58: 0x0  nop
    ctx->pc = 0x369e58u;
    // NOP
    // 0x369e5c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x369e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x369e60: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x369e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x369e64: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x369e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x369e68: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x369e68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x369e6c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x369e6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x369e70: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x369e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x369e74: 0x344801c7  ori         $t0, $v0, 0x1C7
    ctx->pc = 0x369e74u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)455);
    // 0x369e78: 0xc05a2d4  jal         func_168B50
    ctx->pc = 0x369E78u;
    SET_GPR_U32(ctx, 31, 0x369E80u);
    ctx->pc = 0x168B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168B50u, 0x369E78u, 0x369E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369E80u;
label_369e80:
    // 0x369e80: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x369e80u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x369e84: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x369E84u;
    {
        const bool branch_taken_0x369e84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x369e84) {
            ctx->pc = 0x369E9Cu;
            goto label_369e9c;
        }
    }
    ctx->pc = 0x369E8Cu;
    // 0x369e8c: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x369e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x369e90: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x369e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x369e94: 0xc040c9e  jal         func_103278
    ctx->pc = 0x369E94u;
    SET_GPR_U32(ctx, 31, 0x369E9Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x369E9Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x369E9Cu) { return; }
    ctx->pc = 0x369E9Cu;
label_369e9c:
    // 0x369e9c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x369e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369ea0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x369ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369ea4: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x369ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369ea8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x369ea8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x369eac: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x369eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x369eb0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x369eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369eb4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x369eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369eb8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x369eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x369ebc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x369ebcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369ec0: 0x0  nop
    ctx->pc = 0x369ec0u;
    // NOP
    // 0x369ec4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x369ec4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x369ec8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x369ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x369ecc: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x369eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x369ed0: 0xc05cfdc  jal         func_173F70
    ctx->pc = 0x369ED0u;
    SET_GPR_U32(ctx, 31, 0x369ED8u);
    ctx->pc = 0x173F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173F70u, 0x369ED0u, 0x369ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369ED8u;
label_369ed8:
    // 0x369ed8: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x369ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x369edc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x369edcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x369ee0: 0x0  nop
    ctx->pc = 0x369ee0u;
    // NOP
    // 0x369ee4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x369ee4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x369ee8: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x369ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x369eec: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x369eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369ef0: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x369ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369ef4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x369ef4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x369ef8: 0x0  nop
    ctx->pc = 0x369ef8u;
    // NOP
    // 0x369efc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x369EFCu;
    {
        const bool branch_taken_0x369efc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x369efc) {
            ctx->pc = 0x369F18u;
            goto label_369f18;
        }
    }
    ctx->pc = 0x369F04u;
    // 0x369f04: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x369f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369f08: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x369f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x369f0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x369f0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369f10: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x369f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369f14: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x369f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_369f18:
    // 0x369f18: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x369f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369f1c: 0x84630014  lh          $v1, 0x14($v1)
    ctx->pc = 0x369f1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x369f20: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x369F20u;
    {
        const bool branch_taken_0x369f20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x369f20) {
            ctx->pc = 0x369F40u;
            goto label_369f40;
        }
    }
    ctx->pc = 0x369F28u;
    // 0x369f28: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x369f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369f2c: 0x84830014  lh          $v1, 0x14($a0)
    ctx->pc = 0x369f2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x369f30: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x369f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x369f34: 0xa4830014  sh          $v1, 0x14($a0)
    ctx->pc = 0x369f34u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x369f38: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x369F38u;
    {
        const bool branch_taken_0x369f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x369f38) {
            ctx->pc = 0x369F7Cu;
            goto label_369f7c;
        }
    }
    ctx->pc = 0x369F40u;
label_369f40:
    // 0x369f40: 0xc067694  jal         func_19DA50
    ctx->pc = 0x369F40u;
    SET_GPR_U32(ctx, 31, 0x369F48u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x369F40u, 0x369F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369F48u;
label_369f48:
    // 0x369f48: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x369f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x369f4c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x369f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x369f50: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x369F50u;
    {
        const bool branch_taken_0x369f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x369f50) {
            ctx->pc = 0x369F68u;
            goto label_369f68;
        }
    }
    ctx->pc = 0x369F58u;
    // 0x369f58: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x369f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369f5c: 0xa0600012  sb          $zero, 0x12($v1)
    ctx->pc = 0x369f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x369f60: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x369F60u;
    {
        const bool branch_taken_0x369f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x369f60) {
            ctx->pc = 0x369F7Cu;
            goto label_369f7c;
        }
    }
    ctx->pc = 0x369F68u;
label_369f68:
    // 0x369f68: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x369f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x369f6c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x369f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369f70: 0xa0640011  sb          $a0, 0x11($v1)
    ctx->pc = 0x369f70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 17), (uint8_t)GPR_U32(ctx, 4));
    // 0x369f74: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x369f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369f78: 0xa0600012  sb          $zero, 0x12($v1)
    ctx->pc = 0x369f78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 18), (uint8_t)GPR_U32(ctx, 0));
label_369f7c:
    // 0x369f7c: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x369f7cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x369f80: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x369f80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x369f84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x369f84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x369f88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x369f88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x369f8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x369f8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x369f90: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x369f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x369f94: 0x3e00008  jr          $ra
    ctx->pc = 0x369F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369F9Cu;
}
