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

// Function: Pl_em_dam_em05_atk_ele
// Address: 0x20d230 - 0x20d604
void Pl_em_dam_em05_atk_ele_0x20d230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_em_dam_em05_atk_ele_0x20d230");
#endif

    switch (ctx->pc) {
        case 0x20d2a4u: goto label_20d2a4;
        case 0x20d2ecu: goto label_20d2ec;
        case 0x20d40cu: goto label_20d40c;
        case 0x20d41cu: goto label_20d41c;
        case 0x20d42cu: goto label_20d42c;
        case 0x20d46cu: goto label_20d46c;
        case 0x20d48cu: goto label_20d48c;
        case 0x20d4dcu: goto label_20d4dc;
        case 0x20d4ecu: goto label_20d4ec;
        case 0x20d4fcu: goto label_20d4fc;
        case 0x20d53cu: goto label_20d53c;
        case 0x20d55cu: goto label_20d55c;
        case 0x20d574u: goto label_20d574;
        case 0x20d580u: goto label_20d580;
        case 0x20d594u: goto label_20d594;
        case 0x20d5a0u: goto label_20d5a0;
        default: break;
    }

    ctx->pc = 0x20d230u;

    // 0x20d230: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x20d230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x20d234: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x20d234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x20d238: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x20d238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x20d23c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x20d23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x20d240: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20d240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x20d244: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x20d244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x20d248: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x20d248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x20d24c: 0x2463a2e0  addiu       $v1, $v1, -0x5D20
    ctx->pc = 0x20d24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943456));
    // 0x20d250: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x20d250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20d254: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x20d254u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x38A2E0u));
    // 0x20d258: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x20d258u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x20d25c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x20d25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d260: 0x8c701210  lw          $s0, 0x1210($v1)
    ctx->pc = 0x20d260u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4624)));
    // 0x20d264: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x20d264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d268: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x20d268u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20d26c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x20d26cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x20d270: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20d270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d274: 0x10830028  beq         $a0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x20D274u;
    {
        const bool branch_taken_0x20d274 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x20d274) {
            ctx->pc = 0x20D318u;
            goto label_20d318;
        }
    }
    ctx->pc = 0x20D27Cu;
    // 0x20d27c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D27Cu;
    {
        const bool branch_taken_0x20d27c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d27c) {
            ctx->pc = 0x20D28Cu;
            goto label_20d28c;
        }
    }
    ctx->pc = 0x20D284u;
    // 0x20d284: 0x100000d8  b           . + 4 + (0xD8 << 2)
    ctx->pc = 0x20D284u;
    {
        const bool branch_taken_0x20d284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d284) {
            ctx->pc = 0x20D5E8u;
            goto label_20d5e8;
        }
    }
    ctx->pc = 0x20D28Cu;
label_20d28c:
    // 0x20d28c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x20d28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d290: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x20d290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d294: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x20d294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20d298: 0xc44d11f8  lwc1        $f13, 0x11F8($v0)
    ctx->pc = 0x20d298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x20d29c: 0xc058f20  jal         func_163C80
    ctx->pc = 0x20D29Cu;
    SET_GPR_U32(ctx, 31, 0x20D2A4u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x20D29Cu, 0x20D2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D2A4u;
label_20d2a4:
    // 0x20d2a4: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x20d2a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x20d2a8: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x20d2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20d2ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20d2acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20d2b0: 0x0  nop
    ctx->pc = 0x20d2b0u;
    // NOP
    // 0x20d2b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20d2b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20d2b8: 0x0  nop
    ctx->pc = 0x20d2b8u;
    // NOP
    // 0x20d2bc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x20D2BCu;
    {
        const bool branch_taken_0x20d2bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20d2bc) {
            ctx->pc = 0x20D2D0u;
            goto label_20d2d0;
        }
    }
    ctx->pc = 0x20D2C4u;
    // 0x20d2c4: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x20d2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20d2c8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x20d2c8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x20d2cc: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x20d2ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_20d2d0:
    // 0x20d2d0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x20d2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d2d4: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x20d2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x20d2d8: 0x24060504  addiu       $a2, $zero, 0x504
    ctx->pc = 0x20d2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1284));
    // 0x20d2dc: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x20d2dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x20d2e0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x20d2e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20d2e4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x20D2E4u;
    SET_GPR_U32(ctx, 31, 0x20D2ECu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x20D2E4u, 0x20D2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D2ECu;
label_20d2ec:
    // 0x20d2ec: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x20d2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x20d2f0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x20d2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d2f4: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x20d2f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x20d2f8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x20d2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d2fc: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x20d2fcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x20d300: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x20d300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d304: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x20d304u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x20d308: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x20d308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d30c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x20d30cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20d310: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20d310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20d314: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x20d314u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_20d318:
    // 0x20d318: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x20d318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d31c: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x20d31cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x20d320: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20d320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20d324: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x20d324u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x20d328: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x20d328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d32c: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x20d32cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x20d330: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x20d330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x20d334: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20d334u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x20d338: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x20d338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x20d33c: 0x14620089  bne         $v1, $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x20D33Cu;
    {
        const bool branch_taken_0x20d33c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20d33c) {
            ctx->pc = 0x20D564u;
            goto label_20d564;
        }
    }
    ctx->pc = 0x20D344u;
    // 0x20d344: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x20d344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d348: 0x8462127a  lh          $v0, 0x127A($v1)
    ctx->pc = 0x20d348u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x20d34c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20d34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20d350: 0xa462127a  sh          $v0, 0x127A($v1)
    ctx->pc = 0x20d350u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 2));
    // 0x20d354: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x20d354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x20d358: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x20d358u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x20d35c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x20d35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x20d360: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x20d360u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x20d364: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x20d364u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x20d368: 0x1020007c  beqz        $at, . + 4 + (0x7C << 2)
    ctx->pc = 0x20D368u;
    {
        const bool branch_taken_0x20d368 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d368) {
            ctx->pc = 0x20D55Cu;
            goto label_20d55c;
        }
    }
    ctx->pc = 0x20D370u;
    // 0x20d370: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x20d370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x20d374: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x20d374u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x20d378: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x20d378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x20d37c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x20d37cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20d380: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20d380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20d384: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20d384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20d388: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x20d388u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x20d38c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x20d38cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x20d390: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x20d390u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x20d394: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x20d394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x20d398: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x20d398u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20d39c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20d39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20d3a0: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x20d3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x20d3a4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x20d3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x20d3a8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x20d3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20d3ac: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x20d3acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x20d3b0: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x20d3b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x20d3b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20d3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20d3b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20d3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20d3bc: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x20D3BCu;
    {
        const bool branch_taken_0x20d3bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d3bc) {
            ctx->pc = 0x20D494u;
            goto label_20d494;
        }
    }
    ctx->pc = 0x20D3C4u;
    // 0x20d3c4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x20d3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x20d3c8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x20d3c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x20d3cc: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x20d3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x20d3d0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x20d3d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x20d3d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20d3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20d3d8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x20d3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x20d3dc: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x20d3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x20d3e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20d3e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20d3e4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x20d3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d3e8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x20d3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20d3ec: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x20d3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20d3f0: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x20d3f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d3f4: 0x24080017  addiu       $t0, $zero, 0x17
    ctx->pc = 0x20d3f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x20d3f8: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x20d3f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20d3fc: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x20d3fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20d400: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x20d400u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20d404: 0xc0bb544  jal         func_2ED510
    ctx->pc = 0x20D404u;
    SET_GPR_U32(ctx, 31, 0x20D40Cu);
    ctx->pc = 0x2ED510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED510u, 0x20D404u, 0x20D40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D40Cu;
label_20d40c:
    // 0x20d40c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x20d40cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x20d410: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x20d410u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x20d414: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x20D414u;
    SET_GPR_U32(ctx, 31, 0x20D41Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x20D414u, 0x20D41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D41Cu;
label_20d41c:
    // 0x20d41c: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x20d41cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
    // 0x20d420: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x20d420u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x20d424: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x20D424u;
    SET_GPR_U32(ctx, 31, 0x20D42Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x20D424u, 0x20D42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D42Cu;
label_20d42c:
    // 0x20d42c: 0x24020507  addiu       $v0, $zero, 0x507
    ctx->pc = 0x20d42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1287));
    // 0x20d430: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x20d430u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x20d434: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x20d434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x20d438: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x20d438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x20d43c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x20d43cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20d440: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x20d440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x20d444: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x20d444u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x20d448: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x20d448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x20d44c: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x20d44cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x20d450: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x20d450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x20d454: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20d454u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20d458: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x20d458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x20d45c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x20d45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x20d460: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x20d460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x20d464: 0xc040c70  jal         func_1031C0
    ctx->pc = 0x20D464u;
    SET_GPR_U32(ctx, 31, 0x20D46Cu);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x20D46Cu;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20D46Cu) { return; }
    ctx->pc = 0x20D46Cu;
label_20d46c:
    // 0x20d46c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x20d46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x20d470: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x20d470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x20d474: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20d474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20d478: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x20d478u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x20d47c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x20d47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x20d480: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x20d480u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20d484: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x20D484u;
    SET_GPR_U32(ctx, 31, 0x20D48Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x20D484u, 0x20D48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D48Cu;
label_20d48c:
    // 0x20d48c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x20D48Cu;
    {
        const bool branch_taken_0x20d48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d48c) {
            ctx->pc = 0x20D55Cu;
            goto label_20d55c;
        }
    }
    ctx->pc = 0x20D494u;
label_20d494:
    // 0x20d494: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x20d494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x20d498: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20d498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20d49c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20d49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20d4a0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x20d4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x20d4a4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x20d4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x20d4a8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x20d4a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x20d4ac: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x20d4acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x20d4b0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x20d4b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x20d4b4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x20d4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d4b8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x20d4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20d4bc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x20d4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20d4c0: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x20d4c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d4c4: 0x2408001b  addiu       $t0, $zero, 0x1B
    ctx->pc = 0x20d4c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x20d4c8: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x20d4c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20d4cc: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x20d4ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20d4d0: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x20d4d0u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20d4d4: 0xc0bb544  jal         func_2ED510
    ctx->pc = 0x20D4D4u;
    SET_GPR_U32(ctx, 31, 0x20D4DCu);
    ctx->pc = 0x2ED510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED510u, 0x20D4D4u, 0x20D4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D4DCu;
label_20d4dc:
    // 0x20d4dc: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x20d4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x20d4e0: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x20d4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x20d4e4: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x20D4E4u;
    SET_GPR_U32(ctx, 31, 0x20D4ECu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x20D4E4u, 0x20D4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D4ECu;
label_20d4ec:
    // 0x20d4ec: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x20d4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
    // 0x20d4f0: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x20d4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x20d4f4: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x20D4F4u;
    SET_GPR_U32(ctx, 31, 0x20D4FCu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x20D4F4u, 0x20D4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D4FCu;
label_20d4fc:
    // 0x20d4fc: 0x24020508  addiu       $v0, $zero, 0x508
    ctx->pc = 0x20d4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1288));
    // 0x20d500: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x20d500u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x20d504: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x20d504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x20d508: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x20d508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x20d50c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x20d50cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20d510: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x20d510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x20d514: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x20d514u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x20d518: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x20d518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x20d51c: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x20d51cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x20d520: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x20d520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x20d524: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20d524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20d528: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x20d528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x20d52c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x20d52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x20d530: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x20d530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x20d534: 0xc040c70  jal         func_1031C0
    ctx->pc = 0x20D534u;
    SET_GPR_U32(ctx, 31, 0x20D53Cu);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x20D53Cu;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20D53Cu) { return; }
    ctx->pc = 0x20D53Cu;
label_20d53c:
    // 0x20d53c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x20d53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x20d540: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x20d540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x20d544: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20d544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20d548: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x20d548u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x20d54c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x20d54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x20d550: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x20d550u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20d554: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x20D554u;
    SET_GPR_U32(ctx, 31, 0x20D55Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x20D554u, 0x20D55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D55Cu;
label_20d55c:
    // 0x20d55c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x20d55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d560: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x20d560u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
label_20d564:
    // 0x20d564: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x20d564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d568: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20d568u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20d56c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x20D56Cu;
    SET_GPR_U32(ctx, 31, 0x20D574u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x20D56Cu, 0x20D574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D574u;
label_20d574:
    // 0x20d574: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x20d574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d578: 0xc05cd10  jal         func_173440
    ctx->pc = 0x20D578u;
    SET_GPR_U32(ctx, 31, 0x20D580u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x20D578u, 0x20D580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D580u;
label_20d580:
    // 0x20d580: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x20d580u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20d584: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x20d584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d588: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20d588u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20d58c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x20D58Cu;
    SET_GPR_U32(ctx, 31, 0x20D594u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x20D58Cu, 0x20D594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D594u;
label_20d594:
    // 0x20d594: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x20d594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d598: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x20D598u;
    SET_GPR_U32(ctx, 31, 0x20D5A0u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20D598u, 0x20D5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D5A0u;
label_20d5a0:
    // 0x20d5a0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x20d5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d5a4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x20d5a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x20d5a8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x20D5A8u;
    {
        const bool branch_taken_0x20d5a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d5a8) {
            ctx->pc = 0x20D5E8u;
            goto label_20d5e8;
        }
    }
    ctx->pc = 0x20D5B0u;
    // 0x20d5b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20d5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d5b4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x20d5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d5b8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x20d5b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20d5bc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x20d5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d5c0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x20d5c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x20d5c4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x20d5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d5c8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x20d5c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20d5cc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x20d5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d5d0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x20d5d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x20d5d4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x20d5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x20d5d8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x20d5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d5dc: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x20d5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x20d5e0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x20D5E0u;
    {
        const bool branch_taken_0x20d5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d5e0) {
            ctx->pc = 0x20D5E8u;
            goto label_20d5e8;
        }
    }
    ctx->pc = 0x20D5E8u;
label_20d5e8:
    // 0x20d5e8: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x20d5e8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20d5ec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x20d5ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20d5f0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x20d5f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20d5f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20d5f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20d5f8: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x20d5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x20d5fc: 0x3e00008  jr          $ra
    ctx->pc = 0x20D5FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D5FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D604u;
}
