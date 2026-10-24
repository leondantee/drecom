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

// Function: Em10_R1_fall
// Address: 0x125410 - 0x125570
void Em10_R1_fall_0x125410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_R1_fall_0x125410");
#endif

    switch (ctx->pc) {
        case 0x12549cu: goto label_12549c;
        case 0x125550u: goto label_125550;
        case 0x12555cu: goto label_12555c;
        default: break;
    }

    ctx->pc = 0x125410u;

    // 0x125410: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x125410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x125414: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x125414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x125418: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x125418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12541c: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x12541cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x125420: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x125420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x125424: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x125424u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x125428: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x125428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x12542c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x12542cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x125430: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x125430u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x125434: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x125434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125438: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x125438u;
    {
        const bool branch_taken_0x125438 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x125438) {
            ctx->pc = 0x125488u;
            goto label_125488;
        }
    }
    ctx->pc = 0x125440u;
    // 0x125440: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x125440u;
    {
        const bool branch_taken_0x125440 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x125440) {
            ctx->pc = 0x125450u;
            goto label_125450;
        }
    }
    ctx->pc = 0x125448u;
    // 0x125448: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x125448u;
    {
        const bool branch_taken_0x125448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125448) {
            ctx->pc = 0x12555Cu;
            goto label_12555c;
        }
    }
    ctx->pc = 0x125450u;
label_125450:
    // 0x125450: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x125450u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125454: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x125454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x125458: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x125458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x12545c: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x12545cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x125460: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x125460u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125464: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x125464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x125468: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x125468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x12546c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x12546cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x125470: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x125470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x125474: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x125474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x125478: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x125478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x12547c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x12547cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x125480: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x125480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x125484: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x125484u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_125488:
    // 0x125488: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x125488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x12548c: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x12548cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x125490: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x125490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x125494: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x125494u;
    SET_GPR_U32(ctx, 31, 0x12549Cu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x125494u, 0x12549Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12549Cu;
label_12549c:
    // 0x12549c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x12549cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1254a0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1254a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1254a4: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x1254a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1254a8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1254a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1254ac: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1254acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1254b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1254b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1254b4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1254b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1254b8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1254b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1254bc: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x1254bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1254c0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1254c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1254c4: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x1254c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1254c8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1254c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1254cc: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1254ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x1254d0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1254d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1254d4: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1254d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1254d8: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x1254d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1254dc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1254dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1254e0: 0x0  nop
    ctx->pc = 0x1254e0u;
    // NOP
    // 0x1254e4: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x1254E4u;
    {
        const bool branch_taken_0x1254e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1254e4) {
            ctx->pc = 0x125540u;
            goto label_125540;
        }
    }
    ctx->pc = 0x1254ECu;
    // 0x1254ec: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x1254ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1254f0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1254f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1254f4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1254f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1254f8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1254f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1254fc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1254fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x125500: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x125500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x125504: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x125504u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x125508: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x125508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12550c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x12550cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x125510: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x125510u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x125514: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x125514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x125518: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x125518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x12551c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x12551cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x125520: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x125520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x125524: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x125524u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x125528: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x125528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x12552c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x12552cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x125530: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x125530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x125534: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x125534u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x125538: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x125538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x12553c: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x12553cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
label_125540:
    // 0x125540: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x125540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x125544: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x125544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x125548: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x125548u;
    SET_GPR_U32(ctx, 31, 0x125550u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x125548u, 0x125550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125550u;
label_125550:
    // 0x125550: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x125550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x125554: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x125554u;
    SET_GPR_U32(ctx, 31, 0x12555Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x125554u, 0x12555Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12555Cu;
label_12555c:
    // 0x12555c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x12555cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125560: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x125560u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125564: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x125564u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x125568: 0x3e00008  jr          $ra
    ctx->pc = 0x125568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125570u;
}
