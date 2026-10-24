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

// Function: Em09_kage_move
// Address: 0x355050 - 0x355314
void Em09_kage_move_0x355050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_kage_move_0x355050");
#endif

    ctx->pc = 0x355050u;

    // 0x355050: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x355050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x355054: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x355054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x355058: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x355058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x35505c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35505cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x355060: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x355060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x355064: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x355064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x355068: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x355068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x35506c: 0x2473dbc0  addiu       $s3, $v1, -0x2440
    ctx->pc = 0x35506cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x355070: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x355070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x355074: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x355074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x355078: 0x24703cf0  addiu       $s0, $v1, 0x3CF0
    ctx->pc = 0x355078u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 15600));
    // 0x35507c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35507cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x355080: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x355080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x355084: 0x247203f0  addiu       $s2, $v1, 0x3F0
    ctx->pc = 0x355084u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1008));
    // 0x355088: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x355088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x35508c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x35508cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x355090: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x355090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x355094: 0x10600098  beqz        $v1, . + 4 + (0x98 << 2)
    ctx->pc = 0x355094u;
    {
        const bool branch_taken_0x355094 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x355094) {
            ctx->pc = 0x3552F8u;
            goto label_3552f8;
        }
    }
    ctx->pc = 0x35509Cu;
    // 0x35509c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x35509cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3550a0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x3550a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3550a4: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x3550a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x3550a8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3550a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3550ac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3550acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3550b0: 0x10830060  beq         $a0, $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x3550B0u;
    {
        const bool branch_taken_0x3550b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3550b0) {
            ctx->pc = 0x355234u;
            goto label_355234;
        }
    }
    ctx->pc = 0x3550B8u;
    // 0x3550b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3550b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3550bc: 0x1083004c  beq         $a0, $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x3550BCu;
    {
        const bool branch_taken_0x3550bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3550bc) {
            ctx->pc = 0x3551F0u;
            goto label_3551f0;
        }
    }
    ctx->pc = 0x3550C4u;
    // 0x3550c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3550c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3550c8: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3550C8u;
    {
        const bool branch_taken_0x3550c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3550c8) {
            ctx->pc = 0x355100u;
            goto label_355100;
        }
    }
    ctx->pc = 0x3550D0u;
    // 0x3550d0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3550D0u;
    {
        const bool branch_taken_0x3550d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3550d0) {
            ctx->pc = 0x3550E0u;
            goto label_3550e0;
        }
    }
    ctx->pc = 0x3550D8u;
    // 0x3550d8: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x3550D8u;
    {
        const bool branch_taken_0x3550d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3550d8) {
            ctx->pc = 0x3552F8u;
            goto label_3552f8;
        }
    }
    ctx->pc = 0x3550E0u;
label_3550e0:
    // 0x3550e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3550e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3550e4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x3550e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3550e8: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x3550e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x3550ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3550ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3550f0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x3550f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3550f4: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x3550f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x3550f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3550f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3550fc: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x3550fcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
label_355100:
    // 0x355100: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x355100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x355104: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x355104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355108: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x355108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35510c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x35510cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x355110: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x355110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x355114: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x355114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x355118: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x355118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35511c: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x35511cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355120: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x355120u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x355124: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x355124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x355128: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x355128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x35512c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x35512cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355130: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x355130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355134: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x355134u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x355138: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x355138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x35513c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x35513cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x355140: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x355140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355144: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x355144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355148: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x355148u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35514c: 0x0  nop
    ctx->pc = 0x35514cu;
    // NOP
    // 0x355150: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x355150u;
    {
        const bool branch_taken_0x355150 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x355150) {
            ctx->pc = 0x355168u;
            goto label_355168;
        }
    }
    ctx->pc = 0x355158u;
    // 0x355158: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x355158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x35515c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x35515cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355160: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x355160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x355164: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x355164u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_355168:
    // 0x355168: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x355168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x35516c: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x35516cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355170: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x355170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355174: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x355174u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x355178: 0x0  nop
    ctx->pc = 0x355178u;
    // NOP
    // 0x35517c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x35517Cu;
    {
        const bool branch_taken_0x35517c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x35517c) {
            ctx->pc = 0x3551A0u;
            goto label_3551a0;
        }
    }
    ctx->pc = 0x355184u;
    // 0x355184: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x355184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x355188: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x355188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35518c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x35518cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x355190: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x355190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x355194: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x355194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355198: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x355198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x35519c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x35519cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3551a0:
    // 0x3551a0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3551a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3551a4: 0x16230004  bne         $s1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3551A4u;
    {
        const bool branch_taken_0x3551a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x3551a4) {
            ctx->pc = 0x3551B8u;
            goto label_3551b8;
        }
    }
    ctx->pc = 0x3551ACu;
    // 0x3551ac: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3551acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3551b0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x3551b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3551b4: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x3551b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_3551b8:
    // 0x3551b8: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x3551b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3551bc: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x3551bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3551c0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x3551c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3551c4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3551c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3551c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3551c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3551cc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3551ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x3551d0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x3551d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3551d4: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x3551d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3551d8: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x3551d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3551dc: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x3551dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3551e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3551e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3551e4: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x3551e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3551e8: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x3551E8u;
    {
        const bool branch_taken_0x3551e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3551e8) {
            ctx->pc = 0x3552F8u;
            goto label_3552f8;
        }
    }
    ctx->pc = 0x3551F0u;
label_3551f0:
    // 0x3551f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3551f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3551f4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x3551f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3551f8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3551f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3551fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3551fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x355200: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x355200u;
    {
        const bool branch_taken_0x355200 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x355200) {
            ctx->pc = 0x355220u;
            goto label_355220;
        }
    }
    ctx->pc = 0x355208u;
    // 0x355208: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x355208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35520c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x35520cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x355210: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x355210u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x355214: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x355214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x355218: 0x14830037  bne         $a0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x355218u;
    {
        const bool branch_taken_0x355218 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x355218) {
            ctx->pc = 0x3552F8u;
            goto label_3552f8;
        }
    }
    ctx->pc = 0x355220u;
label_355220:
    // 0x355220: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x355220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x355224: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x355224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x355228: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x355228u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x35522c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x35522Cu;
    {
        const bool branch_taken_0x35522c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35522c) {
            ctx->pc = 0x3552F8u;
            goto label_3552f8;
        }
    }
    ctx->pc = 0x355234u;
label_355234:
    // 0x355234: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x355234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x355238: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x355238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35523c: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x35523cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355240: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x355240u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x355244: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x355244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x355248: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x355248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x35524c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x35524cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355250: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x355250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355254: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x355254u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x355258: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x355258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x35525c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x35525cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x355260: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x355260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355264: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x355264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355268: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x355268u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x35526c: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x35526cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x355270: 0xc601012c  lwc1        $f1, 0x12C($s0)
    ctx->pc = 0x355270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355274: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x355274u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x355278: 0x0  nop
    ctx->pc = 0x355278u;
    // NOP
    // 0x35527c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x35527cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x355280: 0x0  nop
    ctx->pc = 0x355280u;
    // NOP
    // 0x355284: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x355284u;
    {
        const bool branch_taken_0x355284 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x355284) {
            ctx->pc = 0x35529Cu;
            goto label_35529c;
        }
    }
    ctx->pc = 0x35528Cu;
    // 0x35528c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35528cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x355290: 0x0  nop
    ctx->pc = 0x355290u;
    // NOP
    // 0x355294: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x355294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x355298: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x355298u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_35529c:
    // 0x35529c: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x35529cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3552a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3552a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3552a4: 0x0  nop
    ctx->pc = 0x3552a4u;
    // NOP
    // 0x3552a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3552a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3552ac: 0x0  nop
    ctx->pc = 0x3552acu;
    // NOP
    // 0x3552b0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x3552B0u;
    {
        const bool branch_taken_0x3552b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3552b0) {
            ctx->pc = 0x3552D4u;
            goto label_3552d4;
        }
    }
    ctx->pc = 0x3552B8u;
    // 0x3552b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3552b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3552bc: 0x0  nop
    ctx->pc = 0x3552bcu;
    // NOP
    // 0x3552c0: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x3552c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x3552c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3552c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3552c8: 0x0  nop
    ctx->pc = 0x3552c8u;
    // NOP
    // 0x3552cc: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x3552ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x3552d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3552d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3552d4:
    // 0x3552d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3552d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3552d8: 0x16230007  bne         $s1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3552D8u;
    {
        const bool branch_taken_0x3552d8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x3552d8) {
            ctx->pc = 0x3552F8u;
            goto label_3552f8;
        }
    }
    ctx->pc = 0x3552E0u;
    // 0x3552e0: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x3552e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3552e4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x3552e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3552e8: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x3552e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x3552ec: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3552ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3552f0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3552f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x3552f4: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x3552f4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
label_3552f8:
    // 0x3552f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3552f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3552fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3552fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x355300: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x355300u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x355304: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x355304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x355308: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x355308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x35530c: 0x3e00008  jr          $ra
    ctx->pc = 0x35530Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35530Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x355314u;
}
