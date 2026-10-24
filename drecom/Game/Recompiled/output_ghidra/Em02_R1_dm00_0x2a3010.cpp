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

// Function: Em02_R1_dm00
// Address: 0x2a3010 - 0x2a3ad8
void Em02_R1_dm00_0x2a3010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em02_R1_dm00_0x2a3010");
#endif

    switch (ctx->pc) {
        case 0x2a3084u: goto label_2a3084;
        case 0x2a30b8u: goto label_2a30b8;
        case 0x2a30f4u: goto label_2a30f4;
        case 0x2a3110u: goto label_2a3110;
        case 0x2a3174u: goto label_2a3174;
        case 0x2a31ccu: goto label_2a31cc;
        case 0x2a3200u: goto label_2a3200;
        case 0x2a3244u: goto label_2a3244;
        case 0x2a3250u: goto label_2a3250;
        case 0x2a3284u: goto label_2a3284;
        case 0x2a32c8u: goto label_2a32c8;
        case 0x2a32d0u: goto label_2a32d0;
        case 0x2a3304u: goto label_2a3304;
        case 0x2a3348u: goto label_2a3348;
        case 0x2a3364u: goto label_2a3364;
        case 0x2a3370u: goto label_2a3370;
        case 0x2a337cu: goto label_2a337c;
        case 0x2a3434u: goto label_2a3434;
        case 0x2a346cu: goto label_2a346c;
        case 0x2a34a4u: goto label_2a34a4;
        case 0x2a34dcu: goto label_2a34dc;
        case 0x2a3514u: goto label_2a3514;
        case 0x2a354cu: goto label_2a354c;
        case 0x2a3560u: goto label_2a3560;
        case 0x2a3578u: goto label_2a3578;
        case 0x2a3590u: goto label_2a3590;
        case 0x2a35a8u: goto label_2a35a8;
        case 0x2a35c0u: goto label_2a35c0;
        case 0x2a361cu: goto label_2a361c;
        case 0x2a3624u: goto label_2a3624;
        case 0x2a3658u: goto label_2a3658;
        case 0x2a36ccu: goto label_2a36cc;
        case 0x2a36e8u: goto label_2a36e8;
        case 0x2a3710u: goto label_2a3710;
        case 0x2a3740u: goto label_2a3740;
        case 0x2a3770u: goto label_2a3770;
        case 0x2a3798u: goto label_2a3798;
        case 0x2a37c8u: goto label_2a37c8;
        case 0x2a3834u: goto label_2a3834;
        case 0x2a3850u: goto label_2a3850;
        case 0x2a3880u: goto label_2a3880;
        case 0x2a389cu: goto label_2a389c;
        case 0x2a38b4u: goto label_2a38b4;
        case 0x2a38d4u: goto label_2a38d4;
        case 0x2a38e4u: goto label_2a38e4;
        case 0x2a38f0u: goto label_2a38f0;
        case 0x2a3994u: goto label_2a3994;
        case 0x2a39f8u: goto label_2a39f8;
        case 0x2a3a44u: goto label_2a3a44;
        case 0x2a3aa8u: goto label_2a3aa8;
        default: break;
    }

    ctx->pc = 0x2a3010u;

    // 0x2a3010: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2a3010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2a3014: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2a3014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2a3018: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a3018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a301c: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x2a301cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
    // 0x2a3020: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2a3020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x2a3024: 0x24636bb0  addiu       $v1, $v1, 0x6BB0
    ctx->pc = 0x2a3024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27568));
    // 0x2a3028: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2a3028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a302c: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x2a302cu;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x396BB0u));
    // 0x2a3030: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x2a3030u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x2a3034: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2a3034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x2a3038: 0x24646bb8  addiu       $a0, $v1, 0x6BB8
    ctx->pc = 0x2a3038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 27576));
    // 0x2a303c: 0x27a3009c  addiu       $v1, $sp, 0x9C
    ctx->pc = 0x2a303cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x2a3040: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2a3040u;
    { uint32_t bits = FAST_READ32(0x396BB8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3044: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2a3044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2a3048: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a3048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a304c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2a304cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2a3050: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2a3050u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2a3054: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a3054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a3058: 0x108301e5  beq         $a0, $v1, . + 4 + (0x1E5 << 2)
    ctx->pc = 0x2A3058u;
    {
        const bool branch_taken_0x2a3058 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a3058) {
            ctx->pc = 0x2A37F0u;
            goto label_2a37f0;
        }
    }
    ctx->pc = 0x2A3060u;
    // 0x2a3060: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A3060u;
    {
        const bool branch_taken_0x2a3060 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3060) {
            ctx->pc = 0x2A3070u;
            goto label_2a3070;
        }
    }
    ctx->pc = 0x2A3068u;
    // 0x2a3068: 0x10000296  b           . + 4 + (0x296 << 2)
    ctx->pc = 0x2A3068u;
    {
        const bool branch_taken_0x2a3068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3068) {
            ctx->pc = 0x2A3AC4u;
            goto label_2a3ac4;
        }
    }
    ctx->pc = 0x2A3070u;
label_2a3070:
    // 0x2a3070: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a3070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a3074: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a3074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3078: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2a3078u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a307c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A307Cu;
    SET_GPR_U32(ctx, 31, 0x2A3084u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A307Cu, 0x2A3084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3084u;
label_2a3084:
    // 0x2a3084: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a3084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a3088: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2a3088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2a308c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2a308cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2a3090: 0x90420090  lbu         $v0, 0x90($v0)
    ctx->pc = 0x2a3090u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x2a3094: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a3094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a3098: 0x34460400  ori         $a2, $v0, 0x400
    ctx->pc = 0x2a3098u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x2a309c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a309cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a30a0: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a30a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a30a4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2a30a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2a30a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a30a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a30ac: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a30acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a30b0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A30B0u;
    SET_GPR_U32(ctx, 31, 0x2A30B8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A30B0u, 0x2A30B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A30B8u;
label_2a30b8:
    // 0x2a30b8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2a30b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a30bc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a30bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a30c0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2a30c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a30c4: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a30c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a30c8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a30c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a30cc: 0x3c023e0e  lui         $v0, 0x3E0E
    ctx->pc = 0x2a30ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15886 << 16));
    // 0x2a30d0: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2a30d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2a30d4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a30d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a30d8: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a30d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a30dc: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2a30dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a30e0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2a30e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2a30e4: 0x2446dce0  addiu       $a2, $v0, -0x2320
    ctx->pc = 0x2a30e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2a30e8: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2a30e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a30ec: 0xc05c848  jal         func_172120
    ctx->pc = 0x2A30ECu;
    SET_GPR_U32(ctx, 31, 0x2A30F4u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A30ECu, 0x2A30F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A30F4u;
label_2a30f4:
    // 0x2a30f4: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2a30f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2a30f8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a30f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a30fc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2a30fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a3100: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2a3100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3104: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a3104u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a3108: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A3108u;
    SET_GPR_U32(ctx, 31, 0x2A3110u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A3108u, 0x2A3110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3110u;
label_2a3110:
    // 0x2a3110: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a3110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3114: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2a3114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2a3118: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a3118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a311c: 0xc4810120  lwc1        $f1, 0x120($a0)
    ctx->pc = 0x2a311cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a3120: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a3120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a3124: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x2a3124u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3128: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a3128u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a312c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2a312cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a3130: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a3130u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3134: 0x0  nop
    ctx->pc = 0x2a3134u;
    // NOP
    // 0x2a3138: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2a3138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2a313c: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x2a313cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3140: 0xc4a10128  lwc1        $f1, 0x128($a1)
    ctx->pc = 0x2a3140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a3144: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a3144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a3148: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x2a3148u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a314c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a314cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a3150: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2a3150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2a3154: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2a3154u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x2a3158: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2a3158u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a315c: 0x0  nop
    ctx->pc = 0x2a315cu;
    // NOP
    // 0x2a3160: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2a3160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2a3164: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2a3164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a3168: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2a3168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a316c: 0xc040c24  jal         func_103090
    ctx->pc = 0x2A316Cu;
    SET_GPR_U32(ctx, 31, 0x2A3174u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2A3174u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2A3174u) { return; }
    ctx->pc = 0x2A3174u;
label_2a3174:
    // 0x2a3174: 0x3c03c2a0  lui         $v1, 0xC2A0
    ctx->pc = 0x2a3174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49824 << 16));
    // 0x2a3178: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a3178u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a317c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2a317cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3180: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a3180u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a3184: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a3184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3188: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x2a3188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x2a318c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a318cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3190: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a3190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3194: 0xe4800184  swc1        $f0, 0x184($a0)
    ctx->pc = 0x2a3194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 388), bits); }
    // 0x2a3198: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x2a3198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x2a319c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a319cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a31a0: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2a31a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a31a4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a31a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a31a8: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x2a31a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a31ac: 0xe4a00188  swc1        $f0, 0x188($a1)
    ctx->pc = 0x2a31acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 392), bits); }
    // 0x2a31b0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a31b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a31b4: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2a31b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2a31b8: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x2a31b8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a31bc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2a31bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a31c0: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x2a31c0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x2a31c4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2A31C4u;
    SET_GPR_U32(ctx, 31, 0x2A31CCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2A31C4u, 0x2A31CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A31CCu;
label_2a31cc:
    // 0x2a31cc: 0x3c043c8e  lui         $a0, 0x3C8E
    ctx->pc = 0x2a31ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15502 << 16));
    // 0x2a31d0: 0x3482fa35  ori         $v0, $a0, 0xFA35
    ctx->pc = 0x2a31d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64053);
    // 0x2a31d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a31d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a31d8: 0x0  nop
    ctx->pc = 0x2a31d8u;
    // NOP
    // 0x2a31dc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a31dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a31e0: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x2a31e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x2a31e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a31e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a31e8: 0x0  nop
    ctx->pc = 0x2a31e8u;
    // NOP
    // 0x2a31ec: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2a31ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a31f0: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2a31f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a31f4: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2a31f4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a31f8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A31F8u;
    SET_GPR_U32(ctx, 31, 0x2A3200u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A31F8u, 0x2A3200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3200u;
label_2a3200:
    // 0x2a3200: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2a3200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2a3204: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a3204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3208: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2a3208u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a320c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2a320cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2a3210: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x2a3210u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a3214: 0x53438  dsll        $a2, $a1, 16
    ctx->pc = 0x2a3214u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << 16);
    // 0x2a3218: 0x34c2ffff  ori         $v0, $a2, 0xFFFF
    ctx->pc = 0x2a3218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2a321c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x2a321cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2a3220: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x2a3220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2a3224: 0x34440008  ori         $a0, $v0, 0x8
    ctx->pc = 0x2a3224u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2a3228: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a3228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a322c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a322cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a3230: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2a3230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a3234: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x2a3234u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2a3238: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2a3238u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a323c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2A323Cu;
    SET_GPR_U32(ctx, 31, 0x2A3244u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2A323Cu, 0x2A3244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3244u;
label_2a3244:
    // 0x2a3244: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a3244u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a3248: 0xc067648  jal         func_19D920
    ctx->pc = 0x2A3248u;
    SET_GPR_U32(ctx, 31, 0x2A3250u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2A3248u, 0x2A3250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3250u;
label_2a3250:
    // 0x2a3250: 0x3c033c8e  lui         $v1, 0x3C8E
    ctx->pc = 0x2a3250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15502 << 16));
    // 0x2a3254: 0x3464fa35  ori         $a0, $v1, 0xFA35
    ctx->pc = 0x2a3254u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x2a3258: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2a3258u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a325c: 0x0  nop
    ctx->pc = 0x2a325cu;
    // NOP
    // 0x2a3260: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a3260u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a3264: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x2a3264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x2a3268: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a3268u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a326c: 0x0  nop
    ctx->pc = 0x2a326cu;
    // NOP
    // 0x2a3270: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2a3270u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a3274: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2a3274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3278: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2a3278u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a327c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A327Cu;
    SET_GPR_U32(ctx, 31, 0x2A3284u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A327Cu, 0x2A3284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3284u;
label_2a3284:
    // 0x2a3284: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2a3284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2a3288: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a3288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a328c: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x2a328cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2a3290: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2a3290u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2a3294: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2a3294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a3298: 0x32c38  dsll        $a1, $v1, 16
    ctx->pc = 0x2a3298u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 16);
    // 0x2a329c: 0x34a4ffff  ori         $a0, $a1, 0xFFFF
    ctx->pc = 0x2a329cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2a32a0: 0xc41824  and         $v1, $a2, $a0
    ctx->pc = 0x2a32a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x2a32a4: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x2a32a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a32a8: 0x34440208  ori         $a0, $v0, 0x208
    ctx->pc = 0x2a32a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)520);
    // 0x2a32ac: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a32acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a32b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a32b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a32b4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2a32b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a32b8: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x2a32b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2a32bc: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2a32bcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a32c0: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2A32C0u;
    SET_GPR_U32(ctx, 31, 0x2A32C8u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2A32C0u, 0x2A32C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A32C8u;
label_2a32c8:
    // 0x2a32c8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2A32C8u;
    SET_GPR_U32(ctx, 31, 0x2A32D0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2A32C8u, 0x2A32D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A32D0u;
label_2a32d0:
    // 0x2a32d0: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x2a32d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x2a32d4: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2a32d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2a32d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a32d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a32dc: 0x0  nop
    ctx->pc = 0x2a32dcu;
    // NOP
    // 0x2a32e0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a32e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a32e4: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x2a32e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x2a32e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a32e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a32ec: 0x0  nop
    ctx->pc = 0x2a32ecu;
    // NOP
    // 0x2a32f0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2a32f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a32f4: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2a32f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a32f8: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2a32f8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a32fc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A32FCu;
    SET_GPR_U32(ctx, 31, 0x2A3304u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A32FCu, 0x2A3304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3304u;
label_2a3304:
    // 0x2a3304: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2a3304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2a3308: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a3308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a330c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2a330cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a3310: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2a3310u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2a3314: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2a3314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a3318: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x2a3318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x2a331c: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x2a331cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a3320: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x2a3320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2a3324: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a3324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a3328: 0x34440008  ori         $a0, $v0, 0x8
    ctx->pc = 0x2a3328u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2a332c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a332cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3330: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a3330u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a3334: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2a3334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a3338: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x2a3338u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2a333c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2a333cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a3340: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2A3340u;
    SET_GPR_U32(ctx, 31, 0x2A3348u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2A3340u, 0x2A3348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3348u;
label_2a3348:
    // 0x2a3348: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a3348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a334c: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x2a334cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2a3350: 0x14400080  bnez        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x2A3350u;
    {
        const bool branch_taken_0x2a3350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a3350) {
            ctx->pc = 0x2A3554u;
            goto label_2a3554;
        }
    }
    ctx->pc = 0x2A3358u;
    // 0x2a3358: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2a3358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a335c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A335Cu;
    SET_GPR_U32(ctx, 31, 0x2A3364u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A335Cu, 0x2A3364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3364u;
label_2a3364:
    // 0x2a3364: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2a3364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a3368: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A3368u;
    SET_GPR_U32(ctx, 31, 0x2A3370u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A3368u, 0x2A3370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3370u;
label_2a3370:
    // 0x2a3370: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2a3370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a3374: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A3374u;
    SET_GPR_U32(ctx, 31, 0x2A337Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A3374u, 0x2A337Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A337Cu;
label_2a337c:
    // 0x2a337c: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2a337cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2a3380: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a3380u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3384: 0x0  nop
    ctx->pc = 0x2a3384u;
    // NOP
    // 0x2a3388: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2a3388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2a338c: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x2a338cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x2a3390: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a3390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3394: 0x0  nop
    ctx->pc = 0x2a3394u;
    // NOP
    // 0x2a3398: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2a3398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2a339c: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2a339cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x2a33a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a33a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a33a4: 0x0  nop
    ctx->pc = 0x2a33a4u;
    // NOP
    // 0x2a33a8: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2a33a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2a33ac: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2a33acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2a33b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a33b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a33b4: 0x0  nop
    ctx->pc = 0x2a33b4u;
    // NOP
    // 0x2a33b8: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2a33b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2a33bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a33bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a33c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a33c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a33c4: 0x0  nop
    ctx->pc = 0x2a33c4u;
    // NOP
    // 0x2a33c8: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2a33c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2a33cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a33ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a33d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a33d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a33d4: 0x0  nop
    ctx->pc = 0x2a33d4u;
    // NOP
    // 0x2a33d8: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2a33d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2a33dc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2a33dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2a33e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a33e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a33e4: 0x0  nop
    ctx->pc = 0x2a33e4u;
    // NOP
    // 0x2a33e8: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2a33e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2a33ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a33ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a33f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a33f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a33f4: 0x0  nop
    ctx->pc = 0x2a33f4u;
    // NOP
    // 0x2a33f8: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x2a33f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2a33fc: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2a33fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2a3400: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a3400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a3404: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a3404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a3408: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a3408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a340c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a340cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a3410: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a3410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3414: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2a3414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a3418: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2a3418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a341c: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2a341cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a3420: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x2a3420u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a3424: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x2a3424u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a3428: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x2a3428u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a342c: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A342Cu;
    SET_GPR_U32(ctx, 31, 0x2A3434u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A342Cu, 0x2A3434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3434u;
label_2a3434:
    // 0x2a3434: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2a3434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2a3438: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a3438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a343c: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2a343cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2a3440: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2a3440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2a3444: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2a3444u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a3448: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a3448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a344c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2a344cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a3450: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2a3450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a3454: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2a3454u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a3458: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x2a3458u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a345c: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x2a345cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a3460: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x2a3460u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a3464: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A3464u;
    SET_GPR_U32(ctx, 31, 0x2A346Cu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A3464u, 0x2A346Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A346Cu;
label_2a346c:
    // 0x2a346c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a346cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a3470: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a3470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a3474: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a3474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a3478: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2a3478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2a347c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a347cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a3480: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a3480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3484: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2a3484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a3488: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2a3488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a348c: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2a348cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a3490: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x2a3490u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a3494: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x2a3494u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a3498: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x2a3498u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a349c: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A349Cu;
    SET_GPR_U32(ctx, 31, 0x2A34A4u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A349Cu, 0x2A34A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A34A4u;
label_2a34a4:
    // 0x2a34a4: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2a34a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2a34a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a34a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a34ac: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a34acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a34b0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a34b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a34b4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a34b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a34b8: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a34b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a34bc: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2a34bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2a34c0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2a34c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a34c4: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2a34c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a34c8: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x2a34c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a34cc: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x2a34ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a34d0: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x2a34d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a34d4: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A34D4u;
    SET_GPR_U32(ctx, 31, 0x2A34DCu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A34D4u, 0x2A34DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A34DCu;
label_2a34dc:
    // 0x2a34dc: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2a34dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2a34e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a34e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a34e4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a34e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a34e8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a34e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a34ec: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a34ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a34f0: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a34f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a34f4: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x2a34f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2a34f8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2a34f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a34fc: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2a34fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a3500: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x2a3500u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a3504: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x2a3504u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a3508: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x2a3508u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a350c: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A350Cu;
    SET_GPR_U32(ctx, 31, 0x2A3514u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A350Cu, 0x2A3514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3514u;
label_2a3514:
    // 0x2a3514: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2a3514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2a3518: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a3518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a351c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a351cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a3520: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a3520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a3524: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a3524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a3528: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a3528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a352c: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2a352cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a3530: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2a3530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a3534: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2a3534u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a3538: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x2a3538u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a353c: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x2a353cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a3540: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x2a3540u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a3544: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A3544u;
    SET_GPR_U32(ctx, 31, 0x2A354Cu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A3544u, 0x2A354Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A354Cu;
label_2a354c:
    // 0x2a354c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2A354Cu;
    {
        const bool branch_taken_0x2a354c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a354c) {
            ctx->pc = 0x2A35C0u;
            goto label_2a35c0;
        }
    }
    ctx->pc = 0x2A3554u;
label_2a3554:
    // 0x2a3554: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2a3554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a3558: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A3558u;
    SET_GPR_U32(ctx, 31, 0x2A3560u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A3558u, 0x2A3560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3560u;
label_2a3560:
    // 0x2a3560: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a3560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3564: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2a3564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a3568: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2a3568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a356c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a356cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a3570: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A3570u;
    SET_GPR_U32(ctx, 31, 0x2A3578u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A3570u, 0x2A3578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3578u;
label_2a3578:
    // 0x2a3578: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a3578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a357c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2a357cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a3580: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2a3580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a3584: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a3584u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a3588: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A3588u;
    SET_GPR_U32(ctx, 31, 0x2A3590u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A3588u, 0x2A3590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3590u;
label_2a3590:
    // 0x2a3590: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a3590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3594: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2a3594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a3598: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2a3598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a359c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a359cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a35a0: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A35A0u;
    SET_GPR_U32(ctx, 31, 0x2A35A8u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A35A0u, 0x2A35A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A35A8u;
label_2a35a8:
    // 0x2a35a8: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a35a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a35ac: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2a35acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a35b0: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2a35b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a35b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a35b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a35b8: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A35B8u;
    SET_GPR_U32(ctx, 31, 0x2A35C0u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A35B8u, 0x2A35C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A35C0u;
label_2a35c0:
    // 0x2a35c0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a35c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a35c4: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x2a35c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a35c8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a35c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a35cc: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x2a35ccu;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a35d0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a35d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a35d4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2a35d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a35d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a35d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a35dc: 0x0  nop
    ctx->pc = 0x2a35dcu;
    // NOP
    // 0x2a35e0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2a35e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2a35e4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a35e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a35e8: 0xc4410128  lwc1        $f1, 0x128($v0)
    ctx->pc = 0x2a35e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a35ec: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a35ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a35f0: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x2a35f0u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a35f4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a35f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a35f8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2a35f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2a35fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a35fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a3600: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a3600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3604: 0x0  nop
    ctx->pc = 0x2a3604u;
    // NOP
    // 0x2a3608: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2a3608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2a360c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2a360cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a3610: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2a3610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a3614: 0xc040c24  jal         func_103090
    ctx->pc = 0x2A3614u;
    SET_GPR_U32(ctx, 31, 0x2A361Cu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2A361Cu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2A361Cu) { return; }
    ctx->pc = 0x2A361Cu;
label_2a361c:
    // 0x2a361c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A361Cu;
    SET_GPR_U32(ctx, 31, 0x2A3624u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A361Cu, 0x2A3624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3624u;
label_2a3624:
    // 0x2a3624: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a3624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a3628: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x2a3628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2a362c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a362cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a3630: 0x1462006d  bne         $v1, $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x2A3630u;
    {
        const bool branch_taken_0x2a3630 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a3630) {
            ctx->pc = 0x2A37E8u;
            goto label_2a37e8;
        }
    }
    ctx->pc = 0x2A3638u;
    // 0x2a3638: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a3638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a363c: 0x944211f6  lhu         $v0, 0x11F6($v0)
    ctx->pc = 0x2a363cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4598)));
    // 0x2a3640: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2a3640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2a3644: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2a3644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2a3648: 0x14620067  bne         $v1, $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x2A3648u;
    {
        const bool branch_taken_0x2a3648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a3648) {
            ctx->pc = 0x2A37E8u;
            goto label_2a37e8;
        }
    }
    ctx->pc = 0x2A3650u;
    // 0x2a3650: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A3650u;
    SET_GPR_U32(ctx, 31, 0x2A3658u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A3650u, 0x2A3658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3658u;
label_2a3658:
    // 0x2a3658: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a3658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a365c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2a365cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2a3660: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2a3660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2a3664: 0x9042009c  lbu         $v0, 0x9C($v0)
    ctx->pc = 0x2a3664u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x2a3668: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2a3668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a366c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2a366cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a3670: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2a3670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a3674: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2a3674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a3678: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2a3678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a367c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2a367cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2a3680: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a3680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3684: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2a3684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2a3688: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2a3688u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a368c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2a368cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2a3690: 0x94630006  lhu         $v1, 0x6($v1)
    ctx->pc = 0x2a3690u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2a3694: 0x3202b  sltu        $a0, $zero, $v1
    ctx->pc = 0x2a3694u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2a3698: 0x38830001  xori        $v1, $a0, 0x1
    ctx->pc = 0x2a3698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x2a369c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2a369cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2a36a0: 0x10600051  beqz        $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x2A36A0u;
    {
        const bool branch_taken_0x2a36a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a36a0) {
            ctx->pc = 0x2A37E8u;
            goto label_2a37e8;
        }
    }
    ctx->pc = 0x2A36A8u;
    // 0x2a36a8: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2a36a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2a36ac: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x2a36acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x2a36b0: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x2a36b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x2a36b4: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x2a36b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a36b8: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x2a36b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2a36bc: 0x3064fff7  andi        $a0, $v1, 0xFFF7
    ctx->pc = 0x2a36bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
    // 0x2a36c0: 0xa6040140  sh          $a0, 0x140($s0)
    ctx->pc = 0x2a36c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 4));
    // 0x2a36c4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A36C4u;
    SET_GPR_U32(ctx, 31, 0x2A36CCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A36C4u, 0x2A36CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A36CCu;
label_2a36cc:
    // 0x2a36cc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a36ccu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a36d0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2a36d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2a36d4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2a36d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2a36d8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2A36D8u;
    {
        const bool branch_taken_0x2a36d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a36d8) {
            ctx->pc = 0x2A3768u;
            goto label_2a3768;
        }
    }
    ctx->pc = 0x2A36E0u;
    // 0x2a36e0: 0xc067654  jal         func_19D950
    ctx->pc = 0x2A36E0u;
    SET_GPR_U32(ctx, 31, 0x2A36E8u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2A36E0u, 0x2A36E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A36E8u;
label_2a36e8:
    // 0x2a36e8: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x2a36e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x2a36ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a36ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a36f0: 0x0  nop
    ctx->pc = 0x2a36f0u;
    // NOP
    // 0x2a36f4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a36f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a36f8: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2a36f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a36fc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a36fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a3700: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2a3700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2a3704: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2a3704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2a3708: 0xc067654  jal         func_19D950
    ctx->pc = 0x2A3708u;
    SET_GPR_U32(ctx, 31, 0x2A3710u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2A3708u, 0x2A3710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3710u;
label_2a3710:
    // 0x2a3710: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2a3710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2a3714: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a3714u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a3718: 0x0  nop
    ctx->pc = 0x2a3718u;
    // NOP
    // 0x2a371c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a371cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a3720: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2a3720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2a3724: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a3724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3728: 0x0  nop
    ctx->pc = 0x2a3728u;
    // NOP
    // 0x2a372c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a372cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a3730: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2a3730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2a3734: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2a3734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2a3738: 0xc067654  jal         func_19D950
    ctx->pc = 0x2A3738u;
    SET_GPR_U32(ctx, 31, 0x2A3740u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2A3738u, 0x2A3740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3740u;
label_2a3740:
    // 0x2a3740: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2a3740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2a3744: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a3744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a3748: 0x0  nop
    ctx->pc = 0x2a3748u;
    // NOP
    // 0x2a374c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a374cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a3750: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2a3750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3754: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a3754u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a3758: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x2a3758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2a375c: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x2a375cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x2a3760: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2A3760u;
    {
        const bool branch_taken_0x2a3760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3760) {
            ctx->pc = 0x2A37E8u;
            goto label_2a37e8;
        }
    }
    ctx->pc = 0x2A3768u;
label_2a3768:
    // 0x2a3768: 0xc067654  jal         func_19D950
    ctx->pc = 0x2A3768u;
    SET_GPR_U32(ctx, 31, 0x2A3770u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2A3768u, 0x2A3770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3770u;
label_2a3770:
    // 0x2a3770: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2a3770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2a3774: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a3774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a3778: 0x0  nop
    ctx->pc = 0x2a3778u;
    // NOP
    // 0x2a377c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a377cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a3780: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2a3780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3784: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a3784u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a3788: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2a3788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2a378c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x2a378cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2a3790: 0xc067654  jal         func_19D950
    ctx->pc = 0x2A3790u;
    SET_GPR_U32(ctx, 31, 0x2A3798u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2A3790u, 0x2A3798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3798u;
label_2a3798:
    // 0x2a3798: 0x3c0541a0  lui         $a1, 0x41A0
    ctx->pc = 0x2a3798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16800 << 16));
    // 0x2a379c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2a379cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a37a0: 0x0  nop
    ctx->pc = 0x2a37a0u;
    // NOP
    // 0x2a37a4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a37a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a37a8: 0x3c074248  lui         $a3, 0x4248
    ctx->pc = 0x2a37a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16968 << 16));
    // 0x2a37ac: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2a37acu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a37b0: 0x0  nop
    ctx->pc = 0x2a37b0u;
    // NOP
    // 0x2a37b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a37b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a37b8: 0x26080150  addiu       $t0, $s0, 0x150
    ctx->pc = 0x2a37b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2a37bc: 0xe5000010  swc1        $f0, 0x10($t0)
    ctx->pc = 0x2a37bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
    // 0x2a37c0: 0xc067654  jal         func_19D950
    ctx->pc = 0x2A37C0u;
    SET_GPR_U32(ctx, 31, 0x2A37C8u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2A37C0u, 0x2A37C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A37C8u;
label_2a37c8:
    // 0x2a37c8: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x2a37c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x2a37cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a37ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a37d0: 0x0  nop
    ctx->pc = 0x2a37d0u;
    // NOP
    // 0x2a37d4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a37d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a37d8: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2a37d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a37dc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a37dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a37e0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2a37e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2a37e4: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x2a37e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_2a37e8:
    // 0x2a37e8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a37e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a37ec: 0xa440127e  sh          $zero, 0x127E($v0)
    ctx->pc = 0x2a37ecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 0));
label_2a37f0:
    // 0x2a37f0: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a37f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a37f4: 0x8483127e  lh          $v1, 0x127E($a0)
    ctx->pc = 0x2a37f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4734)));
    // 0x2a37f8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2a37f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a37fc: 0xa482127e  sh          $v0, 0x127E($a0)
    ctx->pc = 0x2a37fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4734), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a3800: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x2a3800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2a3804: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a3804u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2a3808: 0x28410006  slti        $at, $v0, 0x6
    ctx->pc = 0x2a3808u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2a380c: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A380Cu;
    {
        const bool branch_taken_0x2a380c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a380c) {
            ctx->pc = 0x2A3854u;
            goto label_2a3854;
        }
    }
    ctx->pc = 0x2A3814u;
    // 0x2a3814: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x2a3814u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
    // 0x2a3818: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x2a3818u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a381c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a381cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3820: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a3820u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a3824: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a3824u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a3828: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2a3828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a382c: 0xc0c4b74  jal         func_312DD0
    ctx->pc = 0x2A382Cu;
    SET_GPR_U32(ctx, 31, 0x2A3834u);
    ctx->pc = 0x312DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312DD0u, 0x2A382Cu, 0x2A3834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3834u;
label_2a3834:
    // 0x2a3834: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2a3834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2a3838: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a3838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a383c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a383cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3840: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a3840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a3844: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2a3844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a3848: 0xc0c4b74  jal         func_312DD0
    ctx->pc = 0x2A3848u;
    SET_GPR_U32(ctx, 31, 0x2A3850u);
    ctx->pc = 0x312DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312DD0u, 0x2A3848u, 0x2A3850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3850u;
label_2a3850:
    // 0x2a3850: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a3850u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_2a3854:
    // 0x2a3854: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x2a3854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3858: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a3858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a385c: 0x3c033d0e  lui         $v1, 0x3D0E
    ctx->pc = 0x2a385cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15630 << 16));
    // 0x2a3860: 0x3463fa35  ori         $v1, $v1, 0xFA35
    ctx->pc = 0x2a3860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x2a3864: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2a3864u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a3868: 0x24a40120  addiu       $a0, $a1, 0x120
    ctx->pc = 0x2a3868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x2a386c: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2a386cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a3870: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2a3870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2a3874: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2a3874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2a3878: 0xc05c848  jal         func_172120
    ctx->pc = 0x2A3878u;
    SET_GPR_U32(ctx, 31, 0x2A3880u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A3878u, 0x2A3880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3880u;
label_2a3880:
    // 0x2a3880: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2a3880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2a3884: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a3884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3888: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2a3888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a388c: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2a388cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3890: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a3890u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a3894: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A3894u;
    SET_GPR_U32(ctx, 31, 0x2A389Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A3894u, 0x2A389Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A389Cu;
label_2a389c:
    // 0x2a389c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a389cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a38a0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2a38a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2a38a4: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a38a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a38a8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a38a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a38ac: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A38ACu;
    SET_GPR_U32(ctx, 31, 0x2A38B4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A38ACu, 0x2A38B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A38B4u;
label_2a38b4:
    // 0x2a38b4: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a38b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a38b8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a38b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a38bc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a38bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a38c0: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a38c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a38c4: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2a38c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2a38c8: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x2a38c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2a38cc: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2A38CCu;
    SET_GPR_U32(ctx, 31, 0x2A38D4u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2A38CCu, 0x2A38D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A38D4u;
label_2a38d4:
    // 0x2a38d4: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a38d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a38d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a38d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a38dc: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A38DCu;
    SET_GPR_U32(ctx, 31, 0x2A38E4u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A38DCu, 0x2A38E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A38E4u;
label_2a38e4:
    // 0x2a38e4: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a38e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a38e8: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A38E8u;
    SET_GPR_U32(ctx, 31, 0x2A38F0u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A38E8u, 0x2A38F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A38F0u;
label_2a38f0:
    // 0x2a38f0: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x2a38f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a38f4: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x2a38f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
    // 0x2a38f8: 0x3467999a  ori         $a3, $v1, 0x999A
    ctx->pc = 0x2a38f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2a38fc: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x2a38fcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a3900: 0xc4c00180  lwc1        $f0, 0x180($a2)
    ctx->pc = 0x2a3900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3904: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a3904u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a3908: 0xe4c00180  swc1        $f0, 0x180($a2)
    ctx->pc = 0x2a3908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 384), bits); }
    // 0x2a390c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a390cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3910: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x2a3910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
    // 0x2a3914: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2a3914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2a3918: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a3918u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a391c: 0xc4800184  lwc1        $f0, 0x184($a0)
    ctx->pc = 0x2a391cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3920: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a3920u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a3924: 0xe4800184  swc1        $f0, 0x184($a0)
    ctx->pc = 0x2a3924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 388), bits); }
    // 0x2a3928: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a3928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a392c: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x2a392cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
    // 0x2a3930: 0x3466999a  ori         $a2, $v1, 0x999A
    ctx->pc = 0x2a3930u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2a3934: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2a3934u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a3938: 0xc4800188  lwc1        $f0, 0x188($a0)
    ctx->pc = 0x2a3938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a393c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a393cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a3940: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x2a3940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x2a3944: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x2a3944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3948: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x2a3948u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x2a394c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2a394cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2a3950: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x2a3950u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a3954: 0x1480005b  bnez        $a0, . + 4 + (0x5B << 2)
    ctx->pc = 0x2A3954u;
    {
        const bool branch_taken_0x2a3954 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a3954) {
            ctx->pc = 0x2A3AC4u;
            goto label_2a3ac4;
        }
    }
    ctx->pc = 0x2A395Cu;
    // 0x2a395c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a395cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a3960: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a3960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3964: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x2a3964u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a3968: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a3968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a396c: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x2a396cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3970: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x2a3970u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a3974: 0x8fa700a8  lw          $a3, 0xA8($sp)
    ctx->pc = 0x2a3974u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3978: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x2a3978u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a397c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a397cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3980: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2a3980u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a3984: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a3984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3988: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2a3988u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2a398c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A398Cu;
    SET_GPR_U32(ctx, 31, 0x2A3994u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A398Cu, 0x2A3994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3994u;
label_2a3994:
    // 0x2a3994: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a3994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a3998: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2a3998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2a399c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a399cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a39a0: 0x1444000d  bne         $v0, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A39A0u;
    {
        const bool branch_taken_0x2a39a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2a39a0) {
            ctx->pc = 0x2A39D8u;
            goto label_2a39d8;
        }
    }
    ctx->pc = 0x2A39A8u;
    // 0x2a39a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a39a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a39ac: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a39acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a39b0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2a39b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a39b4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2a39b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a39b8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a39b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a39bc: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2a39bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a39c0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a39c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a39c4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2a39c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a39c8: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a39c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a39cc: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x2a39ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a39d0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a39d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a39d4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2a39d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2a39d8:
    // 0x2a39d8: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x2a39d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a39dc: 0x24c71330  addiu       $a3, $a2, 0x1330
    ctx->pc = 0x2a39dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x2a39e0: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x2a39e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2a39e4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2a39e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2a39e8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2A39E8u;
    {
        const bool branch_taken_0x2a39e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a39e8) {
            ctx->pc = 0x2A3A3Cu;
            goto label_2a3a3c;
        }
    }
    ctx->pc = 0x2A39F0u;
    // 0x2a39f0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A39F0u;
    SET_GPR_U32(ctx, 31, 0x2A39F8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A39F0u, 0x2A39F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A39F8u;
label_2a39f8:
    // 0x2a39f8: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2a39f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a39fc: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2a39fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2a3a00: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a3a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a3a04: 0x1444000d  bne         $v0, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A3A04u;
    {
        const bool branch_taken_0x2a3a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2a3a04) {
            ctx->pc = 0x2A3A3Cu;
            goto label_2a3a3c;
        }
    }
    ctx->pc = 0x2A3A0Cu;
    // 0x2a3a0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a3a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a3a10: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a3a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3a14: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x2a3a14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a3a18: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2a3a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a3a1c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2a3a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3a20: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x2a3a20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a3a24: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a3a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3a28: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2a3a28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a3a2c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a3a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3a30: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2a3a30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a3a34: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a3a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3a38: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2a3a38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2a3a3c:
    // 0x2a3a3c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A3A3Cu;
    SET_GPR_U32(ctx, 31, 0x2A3A44u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A3A3Cu, 0x2A3A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3A44u;
label_2a3a44:
    // 0x2a3a44: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a3a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a3a48: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2a3a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2a3a4c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a3a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a3a50: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2A3A50u;
    {
        const bool branch_taken_0x2a3a50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a3a50) {
            ctx->pc = 0x2A3AA0u;
            goto label_2a3aa0;
        }
    }
    ctx->pc = 0x2A3A58u;
    // 0x2a3a58: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a3a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3a5c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a3a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a3a60: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x2a3a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2a3a64: 0x30440004  andi        $a0, $v0, 0x4
    ctx->pc = 0x2a3a64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2a3a68: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A3A68u;
    {
        const bool branch_taken_0x2a3a68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3a68) {
            ctx->pc = 0x2A3AA0u;
            goto label_2a3aa0;
        }
    }
    ctx->pc = 0x2A3A70u;
    // 0x2a3a70: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a3a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a3a74: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x2a3a74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3a78: 0xa0c50000  sb          $a1, 0x0($a2)
    ctx->pc = 0x2a3a78u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x2a3a7c: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x2a3a7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a3a80: 0x8fa800a8  lw          $t0, 0xA8($sp)
    ctx->pc = 0x2a3a80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3a84: 0xa1070001  sb          $a3, 0x1($t0)
    ctx->pc = 0x2a3a84u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x2a3a88: 0x8fa900a8  lw          $t1, 0xA8($sp)
    ctx->pc = 0x2a3a88u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3a8c: 0xa1200002  sb          $zero, 0x2($t1)
    ctx->pc = 0x2a3a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a3a90: 0x8faa00a8  lw          $t2, 0xA8($sp)
    ctx->pc = 0x2a3a90u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3a94: 0xa1400003  sb          $zero, 0x3($t2)
    ctx->pc = 0x2a3a94u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a3a98: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a3a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3a9c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2a3a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2a3aa0:
    // 0x2a3aa0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A3AA0u;
    SET_GPR_U32(ctx, 31, 0x2A3AA8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A3AA0u, 0x2A3AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3AA8u;
label_2a3aa8:
    // 0x2a3aa8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2a3aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a3aac: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x2a3aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x2a3ab0: 0x2464000a  addiu       $a0, $v1, 0xA
    ctx->pc = 0x2a3ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x2a3ab4: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x2a3ab4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2a3ab8: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x2a3ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a3abc: 0x24c71330  addiu       $a3, $a2, 0x1330
    ctx->pc = 0x2a3abcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x2a3ac0: 0xa4e50042  sh          $a1, 0x42($a3)
    ctx->pc = 0x2a3ac0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 66), (uint16_t)GPR_U32(ctx, 5));
label_2a3ac4:
    // 0x2a3ac4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2a3ac4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a3ac8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a3ac8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a3acc: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2a3accu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a3ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3AD8u;
}
