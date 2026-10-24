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

// Function: Em10_R1_wait_air
// Address: 0x124fc0 - 0x1253e4
void Em10_R1_wait_air_0x124fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_R1_wait_air_0x124fc0");
#endif

    switch (ctx->pc) {
        case 0x125044u: goto label_125044;
        case 0x12506cu: goto label_12506c;
        case 0x125200u: goto label_125200;
        case 0x125270u: goto label_125270;
        case 0x125284u: goto label_125284;
        case 0x1253c4u: goto label_1253c4;
        case 0x1253d0u: goto label_1253d0;
        default: break;
    }

    ctx->pc = 0x124fc0u;

    // 0x124fc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x124fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x124fc4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x124fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x124fc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x124fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x124fcc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x124fccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x124fd0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x124fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124fd4: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x124fd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x124fd8: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x124fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x124fdc: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x124fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x124fe0: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x124fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x124fe4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x124fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124fe8: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x124fe8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x124fec: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x124fecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x124ff0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x124ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124ff4: 0x1083007a  beq         $a0, $v1, . + 4 + (0x7A << 2)
    ctx->pc = 0x124FF4u;
    {
        const bool branch_taken_0x124ff4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x124ff4) {
            ctx->pc = 0x1251E0u;
            goto label_1251e0;
        }
    }
    ctx->pc = 0x124FFCu;
    // 0x124ffc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x124FFCu;
    {
        const bool branch_taken_0x124ffc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x124ffc) {
            ctx->pc = 0x12500Cu;
            goto label_12500c;
        }
    }
    ctx->pc = 0x125004u;
    // 0x125004: 0x100000f2  b           . + 4 + (0xF2 << 2)
    ctx->pc = 0x125004u;
    {
        const bool branch_taken_0x125004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125004) {
            ctx->pc = 0x1253D0u;
            goto label_1253d0;
        }
    }
    ctx->pc = 0x12500Cu;
label_12500c:
    // 0x12500c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12500cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125010: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x125010u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x125014: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x125014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x125018: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x125018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x12501c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x12501Cu;
    {
        const bool branch_taken_0x12501c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12501c) {
            ctx->pc = 0x12504Cu;
            goto label_12504c;
        }
    }
    ctx->pc = 0x125024u;
    // 0x125024: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x125024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125028: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x125028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12502c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12502cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x125030: 0x24060049  addiu       $a2, $zero, 0x49
    ctx->pc = 0x125030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x125034: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x125034u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x125038: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x125038u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12503c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12503Cu;
    SET_GPR_U32(ctx, 31, 0x125044u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12503Cu, 0x125044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125044u;
label_125044:
    // 0x125044: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x125044u;
    {
        const bool branch_taken_0x125044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125044) {
            ctx->pc = 0x12506Cu;
            goto label_12506c;
        }
    }
    ctx->pc = 0x12504Cu;
label_12504c:
    // 0x12504c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12504cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125050: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x125050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125054: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x125054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x125058: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x125058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x12505c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x12505cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x125060: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x125060u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x125064: 0xc0965d0  jal         func_259740
    ctx->pc = 0x125064u;
    SET_GPR_U32(ctx, 31, 0x12506Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x125064u, 0x12506Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12506Cu;
label_12506c:
    // 0x12506c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12506cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125070: 0x0  nop
    ctx->pc = 0x125070u;
    // NOP
    // 0x125074: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x125074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x125078: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x125078u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12507c: 0x0  nop
    ctx->pc = 0x12507cu;
    // NOP
    // 0x125080: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x125080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x125084: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x125084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125088: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x125088u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x12508c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x12508cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x125090: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x125090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x125094: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x125094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x125098: 0x1062003b  beq         $v1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x125098u;
    {
        const bool branch_taken_0x125098 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x125098) {
            ctx->pc = 0x125188u;
            goto label_125188;
        }
    }
    ctx->pc = 0x1250A0u;
    // 0x1250a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1250a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1250a4: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1250A4u;
    {
        const bool branch_taken_0x1250a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1250a4) {
            ctx->pc = 0x125148u;
            goto label_125148;
        }
    }
    ctx->pc = 0x1250ACu;
    // 0x1250ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1250acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1250b0: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1250B0u;
    {
        const bool branch_taken_0x1250b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1250b0) {
            ctx->pc = 0x125108u;
            goto label_125108;
        }
    }
    ctx->pc = 0x1250B8u;
    // 0x1250b8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1250B8u;
    {
        const bool branch_taken_0x1250b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1250b8) {
            ctx->pc = 0x1250C8u;
            goto label_1250c8;
        }
    }
    ctx->pc = 0x1250C0u;
    // 0x1250c0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1250C0u;
    {
        const bool branch_taken_0x1250c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1250c0) {
            ctx->pc = 0x1250C8u;
            goto label_1250c8;
        }
    }
    ctx->pc = 0x1250C8u;
label_1250c8:
    // 0x1250c8: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x1250c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1250cc: 0xa6020082  sh          $v0, 0x82($s0)
    ctx->pc = 0x1250ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 130), (uint16_t)GPR_U32(ctx, 2));
    // 0x1250d0: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x1250d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1250d4: 0xa6020084  sh          $v0, 0x84($s0)
    ctx->pc = 0x1250d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 132), (uint16_t)GPR_U32(ctx, 2));
    // 0x1250d8: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1250d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1250dc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1250dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1250e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1250e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1250e4: 0x0  nop
    ctx->pc = 0x1250e4u;
    // NOP
    // 0x1250e8: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1250e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1250ec: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x1250ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x1250f0: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x1250f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x1250f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1250f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1250f8: 0x0  nop
    ctx->pc = 0x1250f8u;
    // NOP
    // 0x1250fc: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1250fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x125100: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x125100u;
    {
        const bool branch_taken_0x125100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125100) {
            ctx->pc = 0x1251C0u;
            goto label_1251c0;
        }
    }
    ctx->pc = 0x125108u;
label_125108:
    // 0x125108: 0x2402005d  addiu       $v0, $zero, 0x5D
    ctx->pc = 0x125108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x12510c: 0xa6020082  sh          $v0, 0x82($s0)
    ctx->pc = 0x12510cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 130), (uint16_t)GPR_U32(ctx, 2));
    // 0x125110: 0x240200bb  addiu       $v0, $zero, 0xBB
    ctx->pc = 0x125110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
    // 0x125114: 0xa6020084  sh          $v0, 0x84($s0)
    ctx->pc = 0x125114u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 132), (uint16_t)GPR_U32(ctx, 2));
    // 0x125118: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x125118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x12511c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x12511cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x125120: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x125120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125124: 0x0  nop
    ctx->pc = 0x125124u;
    // NOP
    // 0x125128: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x125128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x12512c: 0x3c02391d  lui         $v0, 0x391D
    ctx->pc = 0x12512cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14621 << 16));
    // 0x125130: 0x34424952  ori         $v0, $v0, 0x4952
    ctx->pc = 0x125130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18770);
    // 0x125134: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x125134u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125138: 0x0  nop
    ctx->pc = 0x125138u;
    // NOP
    // 0x12513c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x12513cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x125140: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x125140u;
    {
        const bool branch_taken_0x125140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125140) {
            ctx->pc = 0x1251C0u;
            goto label_1251c0;
        }
    }
    ctx->pc = 0x125148u;
label_125148:
    // 0x125148: 0x24020051  addiu       $v0, $zero, 0x51
    ctx->pc = 0x125148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x12514c: 0xa6020082  sh          $v0, 0x82($s0)
    ctx->pc = 0x12514cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 130), (uint16_t)GPR_U32(ctx, 2));
    // 0x125150: 0x240200a3  addiu       $v0, $zero, 0xA3
    ctx->pc = 0x125150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 163));
    // 0x125154: 0xa6020084  sh          $v0, 0x84($s0)
    ctx->pc = 0x125154u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 132), (uint16_t)GPR_U32(ctx, 2));
    // 0x125158: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x125158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x12515c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x12515cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x125160: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x125160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125164: 0x0  nop
    ctx->pc = 0x125164u;
    // NOP
    // 0x125168: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x125168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x12516c: 0x3c0237a7  lui         $v0, 0x37A7
    ctx->pc = 0x12516cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14247 << 16));
    // 0x125170: 0x3442c5ac  ori         $v0, $v0, 0xC5AC
    ctx->pc = 0x125170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50604);
    // 0x125174: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x125174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125178: 0x0  nop
    ctx->pc = 0x125178u;
    // NOP
    // 0x12517c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x12517cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x125180: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x125180u;
    {
        const bool branch_taken_0x125180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125180) {
            ctx->pc = 0x1251C0u;
            goto label_1251c0;
        }
    }
    ctx->pc = 0x125188u;
label_125188:
    // 0x125188: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x125188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x12518c: 0xa6020082  sh          $v0, 0x82($s0)
    ctx->pc = 0x12518cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 130), (uint16_t)GPR_U32(ctx, 2));
    // 0x125190: 0x240200c9  addiu       $v0, $zero, 0xC9
    ctx->pc = 0x125190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
    // 0x125194: 0xa6020084  sh          $v0, 0x84($s0)
    ctx->pc = 0x125194u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 132), (uint16_t)GPR_U32(ctx, 2));
    // 0x125198: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x125198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x12519c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x12519cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1251a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1251a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1251a4: 0x0  nop
    ctx->pc = 0x1251a4u;
    // NOP
    // 0x1251a8: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1251a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1251ac: 0x3c0237a7  lui         $v0, 0x37A7
    ctx->pc = 0x1251acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14247 << 16));
    // 0x1251b0: 0x3442c5ac  ori         $v0, $v0, 0xC5AC
    ctx->pc = 0x1251b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50604);
    // 0x1251b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1251b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1251b8: 0x0  nop
    ctx->pc = 0x1251b8u;
    // NOP
    // 0x1251bc: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1251bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_1251c0:
    // 0x1251c0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1251c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1251c4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1251c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1251c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1251c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1251cc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1251ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x1251d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1251d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1251d4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1251d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1251d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1251d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1251dc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1251dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_1251e0:
    // 0x1251e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1251e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1251e4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1251e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1251e8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1251e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1251ec: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1251ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1251f0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1251f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1251f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1251f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1251f8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1251F8u;
    SET_GPR_U32(ctx, 31, 0x125200u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1251F8u, 0x125200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125200u;
label_125200:
    // 0x125200: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x125200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x125204: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x125204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x125208: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x125208u;
    {
        const bool branch_taken_0x125208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x125208) {
            ctx->pc = 0x125238u;
            goto label_125238;
        }
    }
    ctx->pc = 0x125210u;
    // 0x125210: 0xc601002c  lwc1        $f1, 0x2C($s0)
    ctx->pc = 0x125210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125214: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x125214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x125218: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x125218u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12521c: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x12521cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x125220: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x125220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125224: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x125224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x125228: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x125228u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12522c: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x12522cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x125230: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x125230u;
    {
        const bool branch_taken_0x125230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125230) {
            ctx->pc = 0x125258u;
            goto label_125258;
        }
    }
    ctx->pc = 0x125238u;
label_125238:
    // 0x125238: 0xc601002c  lwc1        $f1, 0x2C($s0)
    ctx->pc = 0x125238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12523c: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x12523cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x125240: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x125240u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x125244: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x125244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x125248: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x125248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12524c: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x12524cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x125250: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x125250u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x125254: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x125254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_125258:
    // 0x125258: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x125258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12525c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x12525cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125260: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x125260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x125264: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x125264u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x125268: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x125268u;
    SET_GPR_U32(ctx, 31, 0x125270u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x125268u, 0x125270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125270u;
label_125270:
    // 0x125270: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x125270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125274: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x125274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x125278: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x125278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12527c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x12527Cu;
    SET_GPR_U32(ctx, 31, 0x125284u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x12527Cu, 0x125284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125284u;
label_125284:
    // 0x125284: 0x96020082  lhu         $v0, 0x82($s0)
    ctx->pc = 0x125284u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 130)));
    // 0x125288: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x125288u;
    {
        const bool branch_taken_0x125288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x125288) {
            ctx->pc = 0x1252A4u;
            goto label_1252a4;
        }
    }
    ctx->pc = 0x125290u;
    // 0x125290: 0x96020082  lhu         $v0, 0x82($s0)
    ctx->pc = 0x125290u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 130)));
    // 0x125294: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x125294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x125298: 0xa6020082  sh          $v0, 0x82($s0)
    ctx->pc = 0x125298u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 130), (uint16_t)GPR_U32(ctx, 2));
    // 0x12529c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12529Cu;
    {
        const bool branch_taken_0x12529c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12529c) {
            ctx->pc = 0x1252B8u;
            goto label_1252b8;
        }
    }
    ctx->pc = 0x1252A4u;
label_1252a4:
    // 0x1252a4: 0x96020084  lhu         $v0, 0x84($s0)
    ctx->pc = 0x1252a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1252a8: 0xa6020082  sh          $v0, 0x82($s0)
    ctx->pc = 0x1252a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 130), (uint16_t)GPR_U32(ctx, 2));
    // 0x1252ac: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1252acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1252b0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1252b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1252b4: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1252b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1252b8:
    // 0x1252b8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1252b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1252bc: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x1252bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1252c0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1252c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1252c4: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x1252c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1252c8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1252c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1252cc: 0x1062002f  beq         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1252CCu;
    {
        const bool branch_taken_0x1252cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1252cc) {
            ctx->pc = 0x12538Cu;
            goto label_12538c;
        }
    }
    ctx->pc = 0x1252D4u;
    // 0x1252d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1252d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1252d8: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1252D8u;
    {
        const bool branch_taken_0x1252d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1252d8) {
            ctx->pc = 0x12535Cu;
            goto label_12535c;
        }
    }
    ctx->pc = 0x1252E0u;
    // 0x1252e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1252e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1252e4: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1252E4u;
    {
        const bool branch_taken_0x1252e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1252e4) {
            ctx->pc = 0x12532Cu;
            goto label_12532c;
        }
    }
    ctx->pc = 0x1252ECu;
    // 0x1252ec: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1252ECu;
    {
        const bool branch_taken_0x1252ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1252ec) {
            ctx->pc = 0x1252FCu;
            goto label_1252fc;
        }
    }
    ctx->pc = 0x1252F4u;
    // 0x1252f4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1252F4u;
    {
        const bool branch_taken_0x1252f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1252f4) {
            ctx->pc = 0x1252FCu;
            goto label_1252fc;
        }
    }
    ctx->pc = 0x1252FCu;
label_1252fc:
    // 0x1252fc: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x1252fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125300: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x125300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125304: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x125304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x125308: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x125308u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12530c: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x12530cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x125310: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x125310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125314: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x125314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125318: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x125318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12531c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x12531cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x125320: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x125320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x125324: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x125324u;
    {
        const bool branch_taken_0x125324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125324) {
            ctx->pc = 0x1253B4u;
            goto label_1253b4;
        }
    }
    ctx->pc = 0x12532Cu;
label_12532c:
    // 0x12532c: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x12532cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125330: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x125330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125334: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x125334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x125338: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x125338u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x12533c: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x12533cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x125340: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x125340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125344: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x125344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125348: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x125348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12534c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x12534cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x125350: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x125350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x125354: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x125354u;
    {
        const bool branch_taken_0x125354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125354) {
            ctx->pc = 0x1253B4u;
            goto label_1253b4;
        }
    }
    ctx->pc = 0x12535Cu;
label_12535c:
    // 0x12535c: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x12535cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125360: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x125360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125364: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x125364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x125368: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x125368u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12536c: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x12536cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x125370: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x125370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125374: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x125374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125378: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x125378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12537c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12537cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x125380: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x125380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x125384: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x125384u;
    {
        const bool branch_taken_0x125384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125384) {
            ctx->pc = 0x1253B4u;
            goto label_1253b4;
        }
    }
    ctx->pc = 0x12538Cu;
label_12538c:
    // 0x12538c: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x12538cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125390: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x125390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125394: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x125394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x125398: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x125398u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x12539c: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x12539cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x1253a0: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x1253a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1253a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1253a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1253a8: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x1253a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1253ac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1253acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1253b0: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x1253b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
label_1253b4:
    // 0x1253b4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1253b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1253b8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1253b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1253bc: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x1253BCu;
    SET_GPR_U32(ctx, 31, 0x1253C4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x1253BCu, 0x1253C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1253C4u;
label_1253c4:
    // 0x1253c4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1253c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1253c8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1253C8u;
    SET_GPR_U32(ctx, 31, 0x1253D0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1253C8u, 0x1253D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1253D0u;
label_1253d0:
    // 0x1253d0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1253d0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1253d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1253d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1253d8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1253d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1253dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1253DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1253DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1253E4u;
}
