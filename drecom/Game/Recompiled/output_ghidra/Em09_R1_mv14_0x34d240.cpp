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

// Function: Em09_R1_mv14
// Address: 0x34d240 - 0x34d8c4
void Em09_R1_mv14_0x34d240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_R1_mv14_0x34d240");
#endif

    switch (ctx->pc) {
        case 0x34d2d4u: goto label_34d2d4;
        case 0x34d4b8u: goto label_34d4b8;
        case 0x34d4d8u: goto label_34d4d8;
        case 0x34d524u: goto label_34d524;
        case 0x34d540u: goto label_34d540;
        case 0x34d558u: goto label_34d558;
        case 0x34d564u: goto label_34d564;
        case 0x34d590u: goto label_34d590;
        case 0x34d59cu: goto label_34d59c;
        case 0x34d630u: goto label_34d630;
        case 0x34d880u: goto label_34d880;
        case 0x34d8a4u: goto label_34d8a4;
        default: break;
    }

    ctx->pc = 0x34d240u;

    // 0x34d240: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x34d240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x34d244: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x34d244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x34d248: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x34d248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x34d24c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34d24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34d250: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34d250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34d254: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34d254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34d258: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x34d258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x34d25c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x34d25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d260: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x34d260u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x34d264: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x34d264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x34d268: 0x2473dbc0  addiu       $s3, $v1, -0x2440
    ctx->pc = 0x34d268u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x34d26c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x34d26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d270: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34d270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34d274: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x34d274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x34d278: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x34d278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x34d27c: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x34d27cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x34d280: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x34d280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d284: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x34d284u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x34d288: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x34d288u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x34d28c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34d28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34d290: 0x10830091  beq         $a0, $v1, . + 4 + (0x91 << 2)
    ctx->pc = 0x34D290u;
    {
        const bool branch_taken_0x34d290 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x34d290) {
            ctx->pc = 0x34D4D8u;
            goto label_34d4d8;
        }
    }
    ctx->pc = 0x34D298u;
    // 0x34d298: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34D298u;
    {
        const bool branch_taken_0x34d298 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d298) {
            ctx->pc = 0x34D2A8u;
            goto label_34d2a8;
        }
    }
    ctx->pc = 0x34D2A0u;
    // 0x34d2a0: 0x10000180  b           . + 4 + (0x180 << 2)
    ctx->pc = 0x34D2A0u;
    {
        const bool branch_taken_0x34d2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d2a0) {
            ctx->pc = 0x34D8A4u;
            goto label_34d8a4;
        }
    }
    ctx->pc = 0x34D2A8u;
label_34d2a8:
    // 0x34d2a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34d2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34d2ac: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d2b0: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x34d2b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34d2b4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d2b8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x34d2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d2bc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x34d2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x34d2c0: 0x24061e32  addiu       $a2, $zero, 0x1E32
    ctx->pc = 0x34d2c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7730));
    // 0x34d2c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34d2c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34d2c8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34d2c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34d2cc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34D2CCu;
    SET_GPR_U32(ctx, 31, 0x34D2D4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34D2CCu, 0x34D2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D2D4u;
label_34d2d4:
    // 0x34d2d4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x34d2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d2d8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34d2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34d2dc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x34d2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x34d2e0: 0x34620001  ori         $v0, $v1, 0x1
    ctx->pc = 0x34d2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x34d2e4: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x34d2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x34d2e8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d2ec: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x34d2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x34d2f0: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x34d2f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x34d2f4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x34d2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34d2f8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x34d2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34d2fc: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x34d2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x34d300: 0x851024  and         $v0, $a0, $a1
    ctx->pc = 0x34d300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x34d304: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34d304u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x34d308: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x34d308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x34d30c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d310: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x34d310u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x34d314: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x34d314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d318: 0x249110b0  addiu       $s1, $a0, 0x10B0
    ctx->pc = 0x34d318u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4272));
    // 0x34d31c: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x34d31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x34d320: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x34d320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x34d324: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34d324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34d328: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x34d328u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x34d32c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d330: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34d330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34d334: 0xa0400028  sb          $zero, 0x28($v0)
    ctx->pc = 0x34d334u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x34d338: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x34d338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34d33c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d340: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34d340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34d344: 0xa0430029  sb          $v1, 0x29($v0)
    ctx->pc = 0x34d344u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x34d348: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x34d348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x34d34c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x34d34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x34d350: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34d350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d354: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d358: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34d358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34d35c: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x34d35cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x34d360: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d364: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34d364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34d368: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x34d368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x34d36c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x34d36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x34d370: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x34d370u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x34d374: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x34d374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d378: 0x906210a8  lbu         $v0, 0x10A8($v1)
    ctx->pc = 0x34d378u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4264)));
    // 0x34d37c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x34d37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x34d380: 0xa06210a8  sb          $v0, 0x10A8($v1)
    ctx->pc = 0x34d380u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x34d384: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d388: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34d388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34d38c: 0xa040008e  sb          $zero, 0x8E($v0)
    ctx->pc = 0x34d38cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 142), (uint8_t)GPR_U32(ctx, 0));
    // 0x34d390: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d394: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34d394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34d398: 0xa4400090  sh          $zero, 0x90($v0)
    ctx->pc = 0x34d398u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 0));
    // 0x34d39c: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x34d39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x34d3a0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x34d3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x34d3a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34d3a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d3a8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d3ac: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34d3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34d3b0: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x34d3b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x34d3b4: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x34d3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x34d3b8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x34d3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x34d3bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34d3bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d3c0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d3c4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34d3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34d3c8: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x34d3c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x34d3cc: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x34d3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x34d3d0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x34d3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x34d3d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34d3d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d3d8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d3dc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34d3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34d3e0: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x34d3e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x34d3e4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x34d3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x34d3e8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x34d3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x34d3ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34d3ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d3f0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d3f4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34d3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34d3f8: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x34d3f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x34d3fc: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x34d3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x34d400: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x34d400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x34d404: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34d404u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d408: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d40c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34d40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34d410: 0xe44000a4  swc1        $f0, 0xA4($v0)
    ctx->pc = 0x34d410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x34d414: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x34d414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x34d418: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x34d418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x34d41c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34d41cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d420: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d424: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34d424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34d428: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x34d428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x34d42c: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x34d42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x34d430: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34d430u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d434: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d438: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34d438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34d43c: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x34d43cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x34d440: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x34d440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x34d444: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34d444u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d448: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d44c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34d44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34d450: 0xe44000b0  swc1        $f0, 0xB0($v0)
    ctx->pc = 0x34d450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
    // 0x34d454: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x34d454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x34d458: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34d458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d45c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d460: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34d460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34d464: 0xe44000b4  swc1        $f0, 0xB4($v0)
    ctx->pc = 0x34d464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
    // 0x34d468: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x34d468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34d46c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d470: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34d470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34d474: 0xa4430036  sh          $v1, 0x36($v0)
    ctx->pc = 0x34d474u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 54), (uint16_t)GPR_U32(ctx, 3));
    // 0x34d478: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x34d478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34d47c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d480: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34d480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34d484: 0xa4430038  sh          $v1, 0x38($v0)
    ctx->pc = 0x34d484u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 56), (uint16_t)GPR_U32(ctx, 3));
    // 0x34d488: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x34d488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34d48c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d490: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34d490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34d494: 0xa443003a  sh          $v1, 0x3A($v0)
    ctx->pc = 0x34d494u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 58), (uint16_t)GPR_U32(ctx, 3));
    // 0x34d498: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x34d498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x34d49c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d4a0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34d4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34d4a4: 0xa443003c  sh          $v1, 0x3C($v0)
    ctx->pc = 0x34d4a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 3));
    // 0x34d4a8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x34d4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d4ac: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x34d4acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x34d4b0: 0xc0d58b0  jal         func_3562C0
    ctx->pc = 0x34D4B0u;
    SET_GPR_U32(ctx, 31, 0x34D4B8u);
    ctx->pc = 0x3562C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3562C0u, 0x34D4B0u, 0x34D4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D4B8u;
label_34d4b8:
    // 0x34d4b8: 0x3c0243af  lui         $v0, 0x43AF
    ctx->pc = 0x34d4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17327 << 16));
    // 0x34d4bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x34d4bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34d4c0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x34d4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x34d4c4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x34d4c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34d4c8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x34d4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d4cc: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x34d4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x34d4d0: 0xc0d5874  jal         func_3561D0
    ctx->pc = 0x34D4D0u;
    SET_GPR_U32(ctx, 31, 0x34D4D8u);
    ctx->pc = 0x3561D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3561D0u, 0x34D4D0u, 0x34D4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D4D8u;
label_34d4d8:
    // 0x34d4d8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d4dc: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x34d4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34d4e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34d4e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d4e4: 0x0  nop
    ctx->pc = 0x34d4e4u;
    // NOP
    // 0x34d4e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34d4e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34d4ec: 0x0  nop
    ctx->pc = 0x34d4ecu;
    // NOP
    // 0x34d4f0: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x34D4F0u;
    {
        const bool branch_taken_0x34d4f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34d4f0) {
            ctx->pc = 0x34D548u;
            goto label_34d548;
        }
    }
    ctx->pc = 0x34D4F8u;
    // 0x34d4f8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x34d4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d4fc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x34d4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d500: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x34d500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x34d504: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x34d504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x34d508: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x34d508u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34d50c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x34d50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x34d510: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x34d510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34d514: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x34d514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x34d518: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x34d518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x34d51c: 0xc05c848  jal         func_172120
    ctx->pc = 0x34D51Cu;
    SET_GPR_U32(ctx, 31, 0x34D524u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x34D51Cu, 0x34D524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D524u;
label_34d524:
    // 0x34d524: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x34d524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x34d528: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d52c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x34d52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34d530: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x34d530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d534: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x34d534u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34d538: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x34D538u;
    SET_GPR_U32(ctx, 31, 0x34D540u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x34D538u, 0x34D540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D540u;
label_34d540:
    // 0x34d540: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d544: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x34d544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_34d548:
    // 0x34d548: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x34d548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d54c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x34d54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x34d550: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34D550u;
    SET_GPR_U32(ctx, 31, 0x34D558u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34D550u, 0x34D558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D558u;
label_34d558:
    // 0x34d558: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x34d558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d55c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x34D55Cu;
    SET_GPR_U32(ctx, 31, 0x34D564u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x34D55Cu, 0x34D564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D564u;
label_34d564:
    // 0x34d564: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x34d564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d568: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x34d568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x34d56c: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x34d56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x34d570: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x34d570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34d574: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x34d574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d578: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x34d578u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34d57c: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x34d57cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x34d580: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x34d580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d584: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34d584u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34d588: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34D588u;
    SET_GPR_U32(ctx, 31, 0x34D590u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34D588u, 0x34D590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D590u;
label_34d590:
    // 0x34d590: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x34d590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d594: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34D594u;
    SET_GPR_U32(ctx, 31, 0x34D59Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34D594u, 0x34D59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D59Cu;
label_34d59c:
    // 0x34d59c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x34d59cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d5a0: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x34d5a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x34d5a4: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x34d5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x34d5a8: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x34d5a8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x34d5ac: 0x148000bd  bnez        $a0, . + 4 + (0xBD << 2)
    ctx->pc = 0x34D5ACu;
    {
        const bool branch_taken_0x34d5ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x34d5ac) {
            ctx->pc = 0x34D8A4u;
            goto label_34d8a4;
        }
    }
    ctx->pc = 0x34D5B4u;
    // 0x34d5b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34d5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34d5b8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d5bc: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x34d5bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x34d5c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34d5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34d5c4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d5c8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x34d5c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x34d5cc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d5d0: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x34d5d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34d5d4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d5d8: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x34d5d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34d5dc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d5e0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x34d5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x34d5e4: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x34d5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x34d5e8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d5ec: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34d5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34d5f0: 0xa4430068  sh          $v1, 0x68($v0)
    ctx->pc = 0x34d5f0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 104), (uint16_t)GPR_U32(ctx, 3));
    // 0x34d5f4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d5f8: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x34d5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x34d5fc: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x34d5fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x34d600: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x34d600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34d604: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34d604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34d608: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x34d608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x34d60c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34d60cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x34d610: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d614: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x34d614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34d618: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x34d618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x34d61c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x34d61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x34d620: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x34d620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34d624: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x34d624u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x34d628: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34D628u;
    SET_GPR_U32(ctx, 31, 0x34D630u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34D628u, 0x34D630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D630u;
label_34d630:
    // 0x34d630: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34d630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34d634: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x34d634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x34d638: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x34d638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x34d63c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x34d63cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x34d640: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x34d640u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x34d644: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d648: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34d648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34d64c: 0xa4430034  sh          $v1, 0x34($v0)
    ctx->pc = 0x34d64cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 52), (uint16_t)GPR_U32(ctx, 3));
    // 0x34d650: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d654: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x34d654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34d658: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x34d658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x34d65c: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x34d65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x34d660: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x34d660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34d664: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x34d664u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x34d668: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x34d668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x34d66c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d670: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x34d670u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x34d674: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d678: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34d678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34d67c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x34d67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x34d680: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x34d680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x34d684: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x34D684u;
    {
        const bool branch_taken_0x34d684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d684) {
            ctx->pc = 0x34D6C0u;
            goto label_34d6c0;
        }
    }
    ctx->pc = 0x34D68Cu;
    // 0x34d68c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d690: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34d690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34d694: 0xa040006e  sb          $zero, 0x6E($v0)
    ctx->pc = 0x34d694u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x34d698: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34d698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34d69c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d6a0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34d6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34d6a4: 0xa043006f  sb          $v1, 0x6F($v0)
    ctx->pc = 0x34d6a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 111), (uint8_t)GPR_U32(ctx, 3));
    // 0x34d6a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34d6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34d6ac: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d6b0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34d6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34d6b4: 0xa0430072  sb          $v1, 0x72($v0)
    ctx->pc = 0x34d6b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 114), (uint8_t)GPR_U32(ctx, 3));
    // 0x34d6b8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x34D6B8u;
    {
        const bool branch_taken_0x34d6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d6b8) {
            ctx->pc = 0x34D6E8u;
            goto label_34d6e8;
        }
    }
    ctx->pc = 0x34D6C0u;
label_34d6c0:
    // 0x34d6c0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d6c4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34d6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34d6c8: 0xa040006e  sb          $zero, 0x6E($v0)
    ctx->pc = 0x34d6c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x34d6cc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d6d0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34d6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34d6d4: 0xa040006f  sb          $zero, 0x6F($v0)
    ctx->pc = 0x34d6d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 111), (uint8_t)GPR_U32(ctx, 0));
    // 0x34d6d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34d6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34d6dc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d6e0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34d6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34d6e4: 0xa0430072  sb          $v1, 0x72($v0)
    ctx->pc = 0x34d6e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 114), (uint8_t)GPR_U32(ctx, 3));
label_34d6e8:
    // 0x34d6e8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d6ec: 0x245210b0  addiu       $s2, $v0, 0x10B0
    ctx->pc = 0x34d6ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x34d6f0: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x34d6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x34d6f4: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x34d6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x34d6f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x34d6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x34d6fc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x34d6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34d700: 0xae4200f0  sw          $v0, 0xF0($s2)
    ctx->pc = 0x34d700u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 240), GPR_U32(ctx, 2));
    // 0x34d704: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34d704u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d708: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d70c: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x34d70cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x34d710: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34d710u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d714: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d718: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x34d718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x34d71c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d720: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34d720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34d724: 0xa0400028  sb          $zero, 0x28($v0)
    ctx->pc = 0x34d724u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x34d728: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d72c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34d72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34d730: 0xa0400029  sb          $zero, 0x29($v0)
    ctx->pc = 0x34d730u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x34d734: 0x3c023ccc  lui         $v0, 0x3CCC
    ctx->pc = 0x34d734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15564 << 16));
    // 0x34d738: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x34d738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x34d73c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34d73cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d740: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d744: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34d744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34d748: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x34d748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x34d74c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d750: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34d750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34d754: 0xa040008e  sb          $zero, 0x8E($v0)
    ctx->pc = 0x34d754u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 142), (uint8_t)GPR_U32(ctx, 0));
    // 0x34d758: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d75c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34d75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34d760: 0xa4400090  sh          $zero, 0x90($v0)
    ctx->pc = 0x34d760u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 0));
    // 0x34d764: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x34d764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x34d768: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x34d768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x34d76c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34d76cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d770: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d774: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34d774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34d778: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x34d778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x34d77c: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x34d77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x34d780: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x34d780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x34d784: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34d784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d788: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d78c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34d78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34d790: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x34d790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x34d794: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x34d794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x34d798: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x34d798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x34d79c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34d79cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d7a0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d7a4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34d7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34d7a8: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x34d7a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x34d7ac: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x34d7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x34d7b0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x34d7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x34d7b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34d7b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d7b8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d7bc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34d7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34d7c0: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x34d7c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x34d7c4: 0x3c103ba3  lui         $s0, 0x3BA3
    ctx->pc = 0x34d7c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)15267 << 16));
    // 0x34d7c8: 0x3603d70a  ori         $v1, $s0, 0xD70A
    ctx->pc = 0x34d7c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)55050);
    // 0x34d7cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34d7ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d7d0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x34d7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d7d4: 0x24731330  addiu       $s3, $v1, 0x1330
    ctx->pc = 0x34d7d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34d7d8: 0xe66000a4  swc1        $f0, 0xA4($s3)
    ctx->pc = 0x34d7d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 164), bits); }
    // 0x34d7dc: 0x3c043ba3  lui         $a0, 0x3BA3
    ctx->pc = 0x34d7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15267 << 16));
    // 0x34d7e0: 0x3483d70a  ori         $v1, $a0, 0xD70A
    ctx->pc = 0x34d7e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x34d7e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34d7e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d7e8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x34d7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d7ec: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34d7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34d7f0: 0xe46000a8  swc1        $f0, 0xA8($v1)
    ctx->pc = 0x34d7f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 168), bits); }
    // 0x34d7f4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x34d7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x34d7f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34d7f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d7fc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x34d7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d800: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34d800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34d804: 0xe48000ac  swc1        $f0, 0xAC($a0)
    ctx->pc = 0x34d804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 172), bits); }
    // 0x34d808: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x34d808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x34d80c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34d80cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d810: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x34d810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d814: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x34d814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34d818: 0xe44000b0  swc1        $f0, 0xB0($v0)
    ctx->pc = 0x34d818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
    // 0x34d81c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34d81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x34d820: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34d820u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d824: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x34d824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d828: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x34d828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34d82c: 0xe4a000b4  swc1        $f0, 0xB4($a1)
    ctx->pc = 0x34d82cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 180), bits); }
    // 0x34d830: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x34d830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x34d834: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x34d834u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d838: 0x24e81330  addiu       $t0, $a3, 0x1330
    ctx->pc = 0x34d838u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
    // 0x34d83c: 0xa5060036  sh          $a2, 0x36($t0)
    ctx->pc = 0x34d83cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 54), (uint16_t)GPR_U32(ctx, 6));
    // 0x34d840: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x34d840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x34d844: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x34d844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d848: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34d848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34d84c: 0xa4820038  sh          $v0, 0x38($a0)
    ctx->pc = 0x34d84cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 56), (uint16_t)GPR_U32(ctx, 2));
    // 0x34d850: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x34d850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x34d854: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34d854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d858: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34d858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34d85c: 0xa443003a  sh          $v1, 0x3A($v0)
    ctx->pc = 0x34d85cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 58), (uint16_t)GPR_U32(ctx, 3));
    // 0x34d860: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x34d860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x34d864: 0x8fb00068  lw          $s0, 0x68($sp)
    ctx->pc = 0x34d864u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d868: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x34d868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x34d86c: 0xa462003c  sh          $v0, 0x3C($v1)
    ctx->pc = 0x34d86cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 60), (uint16_t)GPR_U32(ctx, 2));
    // 0x34d870: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x34d870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d874: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x34d874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x34d878: 0xc0d58b0  jal         func_3562C0
    ctx->pc = 0x34D878u;
    SET_GPR_U32(ctx, 31, 0x34D880u);
    ctx->pc = 0x3562C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3562C0u, 0x34D878u, 0x34D880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D880u;
label_34d880:
    // 0x34d880: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x34d880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x34d884: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x34d884u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34d888: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x34d888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x34d88c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x34d88cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34d890: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x34d890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34d894: 0x24110050  addiu       $s1, $zero, 0x50
    ctx->pc = 0x34d894u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x34d898: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x34d898u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x34d89c: 0xc0d5874  jal         func_3561D0
    ctx->pc = 0x34D89Cu;
    SET_GPR_U32(ctx, 31, 0x34D8A4u);
    ctx->pc = 0x3561D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3561D0u, 0x34D89Cu, 0x34D8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D8A4u;
label_34d8a4:
    // 0x34d8a4: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x34d8a4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34d8a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x34d8a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34d8ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34d8acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34d8b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34d8b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34d8b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34d8b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34d8b8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x34d8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34d8bc: 0x3e00008  jr          $ra
    ctx->pc = 0x34D8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34D8BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34D8C4u;
}
