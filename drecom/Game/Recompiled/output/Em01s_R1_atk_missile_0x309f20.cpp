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

// Function: Em01s_R1_atk_missile
// Address: 0x309f20 - 0x30a6b0
void Em01s_R1_atk_missile_0x309f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01s_R1_atk_missile_0x309f20");
#endif

    switch (ctx->pc) {
        case 0x309f84u: goto label_309f84;
        case 0x309fccu: goto label_309fcc;
        case 0x309fe0u: goto label_309fe0;
        case 0x30a008u: goto label_30a008;
        case 0x30a01cu: goto label_30a01c;
        case 0x30a030u: goto label_30a030;
        case 0x30a040u: goto label_30a040;
        case 0x30a0a8u: goto label_30a0a8;
        case 0x30a160u: goto label_30a160;
        case 0x30a16cu: goto label_30a16c;
        case 0x30a1b4u: goto label_30a1b4;
        case 0x30a1dcu: goto label_30a1dc;
        case 0x30a1e8u: goto label_30a1e8;
        case 0x30a220u: goto label_30a220;
        case 0x30a33cu: goto label_30a33c;
        case 0x30a360u: goto label_30a360;
        case 0x30a374u: goto label_30a374;
        case 0x30a384u: goto label_30a384;
        case 0x30a394u: goto label_30a394;
        case 0x30a3a4u: goto label_30a3a4;
        case 0x30a3e0u: goto label_30a3e0;
        case 0x30a470u: goto label_30a470;
        case 0x30a47cu: goto label_30a47c;
        case 0x30a49cu: goto label_30a49c;
        case 0x30a4bcu: goto label_30a4bc;
        case 0x30a5fcu: goto label_30a5fc;
        default: break;
    }

    ctx->pc = 0x309f20u;

    // 0x309f20: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x309f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x309f24: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x309f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x309f28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x309f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x309f2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x309f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x309f30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x309f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x309f34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x309f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x309f38: 0xafa400e8  sw          $a0, 0xE8($sp)
    ctx->pc = 0x309f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 4));
    // 0x309f3c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x309f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x309f40: 0x90650002  lbu         $a1, 0x2($v1)
    ctx->pc = 0x309f40u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x309f44: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x309f44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x309f48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x309f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309f4c: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x309F4Cu;
    {
        const bool branch_taken_0x309f4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x309f4c) {
            ctx->pc = 0x309FA0u;
            goto label_309fa0;
        }
    }
    ctx->pc = 0x309F54u;
    // 0x309f54: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x309F54u;
    {
        const bool branch_taken_0x309f54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x309f54) {
            ctx->pc = 0x309F64u;
            goto label_309f64;
        }
    }
    ctx->pc = 0x309F5Cu;
    // 0x309f5c: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x309F5Cu;
    {
        const bool branch_taken_0x309f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x309f5c) {
            ctx->pc = 0x30A084u;
            goto label_30a084;
        }
    }
    ctx->pc = 0x309F64u;
label_309f64:
    // 0x309f64: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x309f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x309f68: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x309f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x309f6c: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x309f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x309f70: 0x2406283f  addiu       $a2, $zero, 0x283F
    ctx->pc = 0x309f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10303));
    // 0x309f74: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x309f74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309f78: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x309f78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x309f7c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x309F7Cu;
    SET_GPR_U32(ctx, 31, 0x309F84u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x309F7Cu, 0x309F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309F84u;
label_309f84:
    // 0x309f84: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x309f84u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x309f88: 0x8fb200e8  lw          $s2, 0xE8($sp)
    ctx->pc = 0x309f88u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x309f8c: 0xa6401278  sh          $zero, 0x1278($s2)
    ctx->pc = 0x309f8cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x309f90: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x309f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x309f94: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x309f94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x309f98: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x309f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x309f9c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x309f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_309fa0:
    // 0x309fa0: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x309fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x309fa4: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x309fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x309fa8: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x309fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x309fac: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x309facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x309fb0: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x309fb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x309fb4: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x309fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x309fb8: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x309fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x309fbc: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x309fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x309fc0: 0x2465dce0  addiu       $a1, $v1, -0x2320
    ctx->pc = 0x309fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x309fc4: 0xc05c848  jal         func_172120
    ctx->pc = 0x309FC4u;
    SET_GPR_U32(ctx, 31, 0x309FCCu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x309FC4u, 0x309FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309FCCu;
label_309fcc:
    // 0x309fcc: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x309fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x309fd0: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x309fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309fd4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x309fd4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x309fd8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x309FD8u;
    SET_GPR_U32(ctx, 31, 0x309FE0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x309FD8u, 0x309FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309FE0u;
label_309fe0:
    // 0x309fe0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x309fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x309fe4: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x309fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x309fe8: 0x8fb000e8  lw          $s0, 0xE8($sp)
    ctx->pc = 0x309fe8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x309fec: 0x86031278  lh          $v1, 0x1278($s0)
    ctx->pc = 0x309fecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4728)));
    // 0x309ff0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x309ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x309ff4: 0xa6031278  sh          $v1, 0x1278($s0)
    ctx->pc = 0x309ff4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x309ff8: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x309ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x309ffc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x309ffcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30a000: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x30A000u;
    SET_GPR_U32(ctx, 31, 0x30A008u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x30A000u, 0x30A008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A008u;
label_30a008:
    // 0x30a008: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x30a008u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30a00c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x30a00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a010: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x30a010u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x30a014: 0xc05cd10  jal         func_173440
    ctx->pc = 0x30A014u;
    SET_GPR_U32(ctx, 31, 0x30A01Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30A014u, 0x30A01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A01Cu;
label_30a01c:
    // 0x30a01c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x30a01cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30a020: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x30a020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a024: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30a024u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30a028: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30A028u;
    SET_GPR_U32(ctx, 31, 0x30A030u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30A028u, 0x30A030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A030u;
label_30a030:
    // 0x30a030: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x30a030u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30a034: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x30a034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a038: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x30A038u;
    SET_GPR_U32(ctx, 31, 0x30A040u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x30A038u, 0x30A040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A040u;
label_30a040:
    // 0x30a040: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x30a040u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30a044: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x30a044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a048: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x30a048u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x30a04c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x30A04Cu;
    {
        const bool branch_taken_0x30a04c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a04c) {
            ctx->pc = 0x30A084u;
            goto label_30a084;
        }
    }
    ctx->pc = 0x30A054u;
    // 0x30a054: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x30a054u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30a058: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x30a058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a05c: 0xa0710000  sb          $s1, 0x0($v1)
    ctx->pc = 0x30a05cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x30a060: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x30a060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x30a064: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x30a064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a068: 0xa0850001  sb          $a1, 0x1($a0)
    ctx->pc = 0x30a068u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x30a06c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x30a06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a070: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30a070u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30a074: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x30a074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a078: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30a078u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30a07c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x30a07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a080: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30a080u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_30a084:
    // 0x30a084: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x30a084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a088: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x30a088u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x30a08c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x30a08cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30a090: 0x30640080  andi        $a0, $v1, 0x80
    ctx->pc = 0x30a090u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x30a094: 0x108000d8  beqz        $a0, . + 4 + (0xD8 << 2)
    ctx->pc = 0x30A094u;
    {
        const bool branch_taken_0x30a094 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a094) {
            ctx->pc = 0x30A3F8u;
            goto label_30a3f8;
        }
    }
    ctx->pc = 0x30A09Cu;
    // 0x30a09c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x30a09cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30a0a0: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x30A0A0u;
    {
        const bool branch_taken_0x30a0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a0a0) {
            ctx->pc = 0x30A3E8u;
            goto label_30a3e8;
        }
    }
    ctx->pc = 0x30A0A8u;
label_30a0a8:
    // 0x30a0a8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x30a0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a0ac: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x30a0acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x30a0b0: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x30a0b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30a0b4: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x30a0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x30a0b8: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x30a0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x30a0bc: 0x246492f0  addiu       $a0, $v1, -0x6D10
    ctx->pc = 0x30a0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939376));
    // 0x30a0c0: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x30a0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x30a0c4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x30a0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30a0c8: 0xc32024  and         $a0, $a2, $v1
    ctx->pc = 0x30a0c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x30a0cc: 0x108000c4  beqz        $a0, . + 4 + (0xC4 << 2)
    ctx->pc = 0x30A0CCu;
    {
        const bool branch_taken_0x30a0cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a0cc) {
            ctx->pc = 0x30A3E0u;
            goto label_30a3e0;
        }
    }
    ctx->pc = 0x30A0D4u;
    // 0x30a0d4: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x30a0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x30a0d8: 0x24639740  addiu       $v1, $v1, -0x68C0
    ctx->pc = 0x30a0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940480));
    // 0x30a0dc: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x30a0dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30a0e0: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x30a0e0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x399740u));
    // 0x30a0e4: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x30a0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x30a0e8: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x30a0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x30a0ec: 0x24639750  addiu       $v1, $v1, -0x68B0
    ctx->pc = 0x30a0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940496));
    // 0x30a0f0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x30a0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x30a0f4: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x30a0f4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x399750u));
    // 0x30a0f8: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x30a0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x30a0fc: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x30a0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x30a100: 0x24649760  addiu       $a0, $v1, -0x68A0
    ctx->pc = 0x30a100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940512));
    // 0x30a104: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x30a104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x30a108: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x30a108u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399760u));
    // 0x30a10c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x30a10cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x30a110: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x30a110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x30a114: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30a114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30a118: 0x244292c0  addiu       $v0, $v0, -0x6D40
    ctx->pc = 0x30a118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x30a11c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30a11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30a120: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x30a120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30a124: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x30a124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x30a128: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x30a128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a12c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30a12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30a130: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30a130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30a134: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x30a134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30a138: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30a138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x30a13c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x30a13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30a140: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30a140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30a144: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30a144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30a148: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x30a148u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30a14c: 0x24045c00  addiu       $a0, $zero, 0x5C00
    ctx->pc = 0x30a14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23552));
    // 0x30a150: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30a150u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30a154: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x30a154u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30a158: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x30A158u;
    SET_GPR_U32(ctx, 31, 0x30A160u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x30A158u, 0x30A160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A160u;
label_30a160:
    // 0x30a160: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30a160u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30a164: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x30A164u;
    SET_GPR_U32(ctx, 31, 0x30A16Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x30A164u, 0x30A16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A16Cu;
label_30a16c:
    // 0x30a16c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x30a16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a170: 0x8c621338  lw          $v0, 0x1338($v1)
    ctx->pc = 0x30a170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x30a174: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x30a174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x30a178: 0xac621338  sw          $v0, 0x1338($v1)
    ctx->pc = 0x30a178u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4920), GPR_U32(ctx, 2));
    // 0x30a17c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30a17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30a180: 0x2222004  sllv        $a0, $v0, $s1
    ctx->pc = 0x30a180u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x30a184: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x30a184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a188: 0x8c621338  lw          $v0, 0x1338($v1)
    ctx->pc = 0x30a188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x30a18c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x30a18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x30a190: 0xac621338  sw          $v0, 0x1338($v1)
    ctx->pc = 0x30a190u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4920), GPR_U32(ctx, 2));
    // 0x30a194: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x30a194u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x30a198: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30a198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30a19c: 0x244292c0  addiu       $v0, $v0, -0x6D40
    ctx->pc = 0x30a19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x30a1a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30a1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30a1a4: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x30a1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a1a8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x30a1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30a1ac: 0xc096ca4  jal         func_25B290
    ctx->pc = 0x30A1ACu;
    SET_GPR_U32(ctx, 31, 0x30A1B4u);
    ctx->pc = 0x25B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B290u, 0x30A1ACu, 0x30A1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A1B4u;
label_30a1b4:
    // 0x30a1b4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x30a1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a1b8: 0x2444133c  addiu       $a0, $v0, 0x133C
    ctx->pc = 0x30a1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4924));
    // 0x30a1bc: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x30a1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x30a1c0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x30a1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x30a1c4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x30a1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30a1c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x30a1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30a1cc: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x30a1ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30a1d0: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x30a1d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x30a1d4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x30A1D4u;
    SET_GPR_U32(ctx, 31, 0x30A1DCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x30A1D4u, 0x30A1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A1DCu;
label_30a1dc:
    // 0x30a1dc: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x30a1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x30a1e0: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x30A1E0u;
    SET_GPR_U32(ctx, 31, 0x30A1E8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x30A1E0u, 0x30A1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A1E8u;
label_30a1e8:
    // 0x30a1e8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x30a1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a1ec: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x30a1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30a1f0: 0xe6600020  swc1        $f0, 0x20($s3)
    ctx->pc = 0x30a1f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
    // 0x30a1f4: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x30a1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a1f8: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x30a1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x30a1fc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x30a1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x30a200: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30a200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30a204: 0xc4601288  lwc1        $f0, 0x1288($v1)
    ctx->pc = 0x30a204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30a208: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x30a208u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x30a20c: 0x0  nop
    ctx->pc = 0x30a20cu;
    // NOP
    // 0x30a210: 0x0  nop
    ctx->pc = 0x30a210u;
    // NOP
    // 0x30a214: 0x0  nop
    ctx->pc = 0x30a214u;
    // NOP
    // 0x30a218: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x30A218u;
    SET_GPR_U32(ctx, 31, 0x30A220u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x30A218u, 0x30A220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A220u;
label_30a220:
    // 0x30a220: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x30a220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a224: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30a224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30a228: 0xc4420034  lwc1        $f2, 0x34($v0)
    ctx->pc = 0x30a228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30a22c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x30a22cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x30a230: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x30a230u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x30a234: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x30a234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30a238: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x30a238u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x30a23c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x30a23cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x30a240: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x30a240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
    // 0x30a244: 0xae600024  sw          $zero, 0x24($s3)
    ctx->pc = 0x30a244u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
    // 0x30a248: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x30a248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x30a24c: 0xae620028  sw          $v0, 0x28($s3)
    ctx->pc = 0x30a24cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
    // 0x30a250: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x30a250u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x30a254: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30a254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30a258: 0x244292d0  addiu       $v0, $v0, -0x6D30
    ctx->pc = 0x30a258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939344));
    // 0x30a25c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30a25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30a260: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x30a260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30a264: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x30a264u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x30a268: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30a268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30a26c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x30a26cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30a270: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x30a270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a274: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x30a274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x30a278: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x30a278u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30a27c: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x30a27cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x30a280: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x30a280u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x30a284: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30a284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30a288: 0x244292e0  addiu       $v0, $v0, -0x6D20
    ctx->pc = 0x30a288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939360));
    // 0x30a28c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30a28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30a290: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x30a290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30a294: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x30a294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x30a298: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30a298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30a29c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x30a29cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30a2a0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x30a2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a2a4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x30a2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x30a2a8: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x30a2a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30a2ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30a2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30a2b0: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x30a2b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x30a2b4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x30a2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x30a2b8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30a2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30a2bc: 0x244292c0  addiu       $v0, $v0, -0x6D40
    ctx->pc = 0x30a2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x30a2c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30a2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30a2c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x30a2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30a2c8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x30a2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30a2cc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x30a2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30a2d0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x30a2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30a2d4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x30a2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30a2d8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x30a2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30a2dc: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x30a2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a2e0: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x30a2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x30a2e4: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x30a2e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30a2e8: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x30a2e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x30a2ec: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x30a2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x30a2f0: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x30a2f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x30a2f4: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x30a2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x30a2f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30a2f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30a2fc: 0x0  nop
    ctx->pc = 0x30a2fcu;
    // NOP
    // 0x30a300: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x30a300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x30a304: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x30a304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x30a308: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30a308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30a30c: 0x0  nop
    ctx->pc = 0x30a30cu;
    // NOP
    // 0x30a310: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x30a310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x30a314: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x30a314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x30a318: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30a318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30a31c: 0x0  nop
    ctx->pc = 0x30a31cu;
    // NOP
    // 0x30a320: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x30a320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x30a324: 0x3c023fc8  lui         $v0, 0x3FC8
    ctx->pc = 0x30a324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16328 << 16));
    // 0x30a328: 0x3442f5c3  ori         $v0, $v0, 0xF5C3
    ctx->pc = 0x30a328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62915);
    // 0x30a32c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x30a32cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30a330: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x30a330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30a334: 0xc06770c  jal         func_19DC30
    ctx->pc = 0x30A334u;
    SET_GPR_U32(ctx, 31, 0x30A33Cu);
    ctx->pc = 0x19DC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DC30u, 0x30A334u, 0x30A33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A33Cu;
label_30a33c:
    // 0x30a33c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x30a33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a340: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x30a340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30a344: 0x3c02bfc8  lui         $v0, 0xBFC8
    ctx->pc = 0x30a344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49096 << 16));
    // 0x30a348: 0x3442f5c3  ori         $v0, $v0, 0xF5C3
    ctx->pc = 0x30a348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62915);
    // 0x30a34c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30a34cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30a350: 0x0  nop
    ctx->pc = 0x30a350u;
    // NOP
    // 0x30a354: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x30a354u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30a358: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x30A358u;
    SET_GPR_U32(ctx, 31, 0x30A360u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x30A358u, 0x30A360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A360u;
label_30a360:
    // 0x30a360: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x30a360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30a364: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x30a364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30a368: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x30a368u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x30a36c: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x30A36Cu;
    SET_GPR_U32(ctx, 31, 0x30A374u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x30A374u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30A374u) { return; }
    ctx->pc = 0x30A374u;
label_30a374:
    // 0x30a374: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x30a374u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x30a378: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x30a378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30a37c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x30A37Cu;
    SET_GPR_U32(ctx, 31, 0x30A384u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x30A384u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30A384u) { return; }
    ctx->pc = 0x30A384u;
label_30a384:
    // 0x30a384: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x30a384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x30a388: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x30a388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x30a38c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x30A38Cu;
    SET_GPR_U32(ctx, 31, 0x30A394u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x30A394u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30A394u) { return; }
    ctx->pc = 0x30A394u;
label_30a394:
    // 0x30a394: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x30a394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x30a398: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x30a398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x30a39c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x30A39Cu;
    SET_GPR_U32(ctx, 31, 0x30A3A4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x30A3A4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30A3A4u) { return; }
    ctx->pc = 0x30A3A4u;
label_30a3a4:
    // 0x30a3a4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x30a3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a3a8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x30a3a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30a3ac: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30a3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x30a3b0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x30a3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30a3b4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30a3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30a3b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30a3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30a3bc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x30a3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30a3c0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30a3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30a3c4: 0x3444000c  ori         $a0, $v0, 0xC
    ctx->pc = 0x30a3c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
    // 0x30a3c8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x30a3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x30a3cc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x30a3ccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30a3d0: 0x72003e28  paddub      $a3, $s0, $zero
    ctx->pc = 0x30a3d0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x30a3d4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x30a3d4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30a3d8: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x30A3D8u;
    SET_GPR_U32(ctx, 31, 0x30A3E0u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x30A3D8u, 0x30A3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A3E0u;
label_30a3e0:
    // 0x30a3e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x30a3e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x30a3e4: 0x0  nop
    ctx->pc = 0x30a3e4u;
    // NOP
label_30a3e8:
    // 0x30a3e8: 0x2e230004  sltiu       $v1, $s1, 0x4
    ctx->pc = 0x30a3e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x30a3ec: 0x1460ff2e  bnez        $v1, . + 4 + (-0xD2 << 2)
    ctx->pc = 0x30A3ECu;
    {
        const bool branch_taken_0x30a3ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a3ec) {
            ctx->pc = 0x30A0A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30a0a8;
        }
    }
    ctx->pc = 0x30A3F4u;
    // 0x30a3f4: 0x0  nop
    ctx->pc = 0x30a3f4u;
    // NOP
label_30a3f8:
    // 0x30a3f8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x30a3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a3fc: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x30a3fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x30a400: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x30a400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30a404: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x30a404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x30a408: 0x10600073  beqz        $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x30A408u;
    {
        const bool branch_taken_0x30a408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a408) {
            ctx->pc = 0x30A5D8u;
            goto label_30a5d8;
        }
    }
    ctx->pc = 0x30A410u;
    // 0x30a410: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30a410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30a414: 0x24429770  addiu       $v0, $v0, -0x6890
    ctx->pc = 0x30a414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940528));
    // 0x30a418: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x30a418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x30a41c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x30a41cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399770u));
    // 0x30a420: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x30a420u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x30a424: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30a424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30a428: 0x24429780  addiu       $v0, $v0, -0x6880
    ctx->pc = 0x30a428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940544));
    // 0x30a42c: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x30a42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x30a430: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x30a430u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399780u));
    // 0x30a434: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x30a434u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x30a438: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x30a438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a43c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30a43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30a440: 0x24420300  addiu       $v0, $v0, 0x300
    ctx->pc = 0x30a440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x30a444: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x30a444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30a448: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30a448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x30a44c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x30a44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30a450: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30a450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30a454: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30a454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30a458: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x30a458u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30a45c: 0x24045c00  addiu       $a0, $zero, 0x5C00
    ctx->pc = 0x30a45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23552));
    // 0x30a460: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30a460u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30a464: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x30a464u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30a468: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x30A468u;
    SET_GPR_U32(ctx, 31, 0x30A470u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x30A468u, 0x30A470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A470u;
label_30a470:
    // 0x30a470: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30a470u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30a474: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x30A474u;
    SET_GPR_U32(ctx, 31, 0x30A47Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x30A474u, 0x30A47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A47Cu;
label_30a47c:
    // 0x30a47c: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x30a47cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a480: 0x8ca41338  lw          $a0, 0x1338($a1)
    ctx->pc = 0x30a480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x30a484: 0x2403ffe1  addiu       $v1, $zero, -0x1F
    ctx->pc = 0x30a484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967265));
    // 0x30a488: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30a488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30a48c: 0xaca31338  sw          $v1, 0x1338($a1)
    ctx->pc = 0x30a48cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4920), GPR_U32(ctx, 3));
    // 0x30a490: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x30a490u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30a494: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x30A494u;
    {
        const bool branch_taken_0x30a494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a494) {
            ctx->pc = 0x30A5B8u;
            goto label_30a5b8;
        }
    }
    ctx->pc = 0x30A49Cu;
label_30a49c:
    // 0x30a49c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x30a49cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x30a4a0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30a4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30a4a4: 0x244292c0  addiu       $v0, $v0, -0x6D40
    ctx->pc = 0x30a4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x30a4a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30a4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30a4ac: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x30a4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a4b0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x30a4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30a4b4: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x30A4B4u;
    SET_GPR_U32(ctx, 31, 0x30A4BCu);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x30A4B4u, 0x30A4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A4BCu;
label_30a4bc:
    // 0x30a4bc: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x30a4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x30a4c0: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x30a4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x30a4c4: 0x246392d0  addiu       $v1, $v1, -0x6D30
    ctx->pc = 0x30a4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939344));
    // 0x30a4c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30a4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30a4cc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x30a4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30a4d0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x30a4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x30a4d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30a4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30a4d8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x30a4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30a4dc: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x30a4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a4e0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x30a4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x30a4e4: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x30a4e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30a4e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30a4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30a4ec: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x30a4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x30a4f0: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x30a4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x30a4f4: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x30a4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x30a4f8: 0x248392e0  addiu       $v1, $a0, -0x6D20
    ctx->pc = 0x30a4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939360));
    // 0x30a4fc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x30a4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x30a500: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x30a500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30a504: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x30a504u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x30a508: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x30a508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x30a50c: 0x63900  sll         $a3, $a2, 4
    ctx->pc = 0x30a50cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x30a510: 0x8fa800e8  lw          $t0, 0xE8($sp)
    ctx->pc = 0x30a510u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a514: 0x8d030058  lw          $v1, 0x58($t0)
    ctx->pc = 0x30a514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 88)));
    // 0x30a518: 0x679021  addu        $s2, $v1, $a3
    ctx->pc = 0x30a518u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x30a51c: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x30a51cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x30a520: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x30a520u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x30a524: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x30a524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x30a528: 0x246392c0  addiu       $v1, $v1, -0x6D40
    ctx->pc = 0x30a528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939328));
    // 0x30a52c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x30a52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30a530: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x30a530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30a534: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x30a534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x30a538: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x30a538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x30a53c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x30a53cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30a540: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30a540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30a544: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x30a544u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30a548: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x30a548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a54c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x30a54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x30a550: 0x658021  addu        $s0, $v1, $a1
    ctx->pc = 0x30a550u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x30a554: 0x92030143  lbu         $v1, 0x143($s0)
    ctx->pc = 0x30a554u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 323)));
    // 0x30a558: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x30a558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30a55c: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x30a55cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x30a560: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x30a560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a564: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x30a564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x30a568: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30a568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30a56c: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x30a56cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
    // 0x30a570: 0x96040140  lhu         $a0, 0x140($s0)
    ctx->pc = 0x30a570u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x30a574: 0x34830008  ori         $v1, $a0, 0x8
    ctx->pc = 0x30a574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x30a578: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x30a578u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x30a57c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x30a57cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x30a580: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x30a580u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30a584: 0x0  nop
    ctx->pc = 0x30a584u;
    // NOP
    // 0x30a588: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x30a588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x30a58c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30a58cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x30a590: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30a590u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30a594: 0x0  nop
    ctx->pc = 0x30a594u;
    // NOP
    // 0x30a598: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x30a598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x30a59c: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x30a59cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x30a5a0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x30a5a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x30a5a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30a5a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30a5a8: 0x0  nop
    ctx->pc = 0x30a5a8u;
    // NOP
    // 0x30a5ac: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x30a5acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x30a5b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x30a5b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x30a5b4: 0x0  nop
    ctx->pc = 0x30a5b4u;
    // NOP
label_30a5b8:
    // 0x30a5b8: 0x2e230004  sltiu       $v1, $s1, 0x4
    ctx->pc = 0x30a5b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x30a5bc: 0x1460ffb7  bnez        $v1, . + 4 + (-0x49 << 2)
    ctx->pc = 0x30A5BCu;
    {
        const bool branch_taken_0x30a5bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a5bc) {
            ctx->pc = 0x30A49Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30a49c;
        }
    }
    ctx->pc = 0x30A5C4u;
    // 0x30a5c4: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x30a5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a5c8: 0x8ca41338  lw          $a0, 0x1338($a1)
    ctx->pc = 0x30a5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x30a5cc: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x30a5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x30a5d0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30a5d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30a5d4: 0xaca31338  sw          $v1, 0x1338($a1)
    ctx->pc = 0x30a5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4920), GPR_U32(ctx, 3));
label_30a5d8:
    // 0x30a5d8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x30a5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a5dc: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x30a5dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x30a5e0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x30a5e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30a5e4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x30a5e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x30a5e8: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x30A5E8u;
    {
        const bool branch_taken_0x30a5e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a5e8) {
            ctx->pc = 0x30A690u;
            goto label_30a690;
        }
    }
    ctx->pc = 0x30A5F0u;
    // 0x30a5f0: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x30a5f0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30a5f4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x30A5F4u;
    {
        const bool branch_taken_0x30a5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a5f4) {
            ctx->pc = 0x30A680u;
            goto label_30a680;
        }
    }
    ctx->pc = 0x30A5FCu;
label_30a5fc:
    // 0x30a5fc: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x30a5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x30a600: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x30a600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x30a604: 0x246392c0  addiu       $v1, $v1, -0x6D40
    ctx->pc = 0x30a604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939328));
    // 0x30a608: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x30a608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30a60c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x30a60cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x30a610: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x30a610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x30a614: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x30a614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x30a618: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30a618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30a61c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x30a61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x30a620: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x30a620u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30a624: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x30a624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x30a628: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x30a628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x30a62c: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x30a62cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30a630: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x30a630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30a634: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x30a634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x30a638: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x30a638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x30a63c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30a63cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30a640: 0x0  nop
    ctx->pc = 0x30a640u;
    // NOP
    // 0x30a644: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x30a644u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x30a648: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x30a648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x30a64c: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x30a64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30a650: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30a650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x30a654: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30a654u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30a658: 0x0  nop
    ctx->pc = 0x30a658u;
    // NOP
    // 0x30a65c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30a65cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30a660: 0x0  nop
    ctx->pc = 0x30a660u;
    // NOP
    // 0x30a664: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x30A664u;
    {
        const bool branch_taken_0x30a664 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30a664) {
            ctx->pc = 0x30A678u;
            goto label_30a678;
        }
    }
    ctx->pc = 0x30A66Cu;
    // 0x30a66c: 0x96040140  lhu         $a0, 0x140($s0)
    ctx->pc = 0x30a66cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x30a670: 0x3083fff7  andi        $v1, $a0, 0xFFF7
    ctx->pc = 0x30a670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65527);
    // 0x30a674: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x30a674u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
label_30a678:
    // 0x30a678: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x30a678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x30a67c: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x30a67cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_30a680:
    // 0x30a680: 0x2e240004  sltiu       $a0, $s1, 0x4
    ctx->pc = 0x30a680u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x30a684: 0x1480ffdd  bnez        $a0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x30A684u;
    {
        const bool branch_taken_0x30a684 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a684) {
            ctx->pc = 0x30A5FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30a5fc;
        }
    }
    ctx->pc = 0x30A68Cu;
    // 0x30a68c: 0x0  nop
    ctx->pc = 0x30a68cu;
    // NOP
label_30a690:
    // 0x30a690: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x30a690u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30a694: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30a694u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30a698: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30a698u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30a69c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30a69cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30a6a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30a6a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30a6a4: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x30a6a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x30a6a8: 0x3e00008  jr          $ra
    ctx->pc = 0x30A6A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A6A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A6B0u;
}
