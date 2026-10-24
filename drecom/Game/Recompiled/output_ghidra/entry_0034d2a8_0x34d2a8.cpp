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

// Function: entry_0034d2a8
// Address: 0x34d2a8 - 0x34d4d8
void entry_0034d2a8_0x34d2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034d2a8_0x34d2a8");
#endif

    switch (ctx->pc) {
        case 0x34d2d4u: goto label_34d2d4;
        case 0x34d4b8u: goto label_34d4b8;
        default: break;
    }

    ctx->pc = 0x34d2a8u;

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
}
