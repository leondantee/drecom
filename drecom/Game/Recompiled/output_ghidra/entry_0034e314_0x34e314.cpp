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

// Function: entry_0034e314
// Address: 0x34e314 - 0x34e59c
void entry_0034e314_0x34e314(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034e314_0x34e314");
#endif

    switch (ctx->pc) {
        case 0x34e4b0u: goto label_34e4b0;
        case 0x34e4d4u: goto label_34e4d4;
        case 0x34e524u: goto label_34e524;
        default: break;
    }

    ctx->pc = 0x34e314u;

    // 0x34e314: 0x8fb000f8  lw          $s0, 0xF8($sp)
    ctx->pc = 0x34e314u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e318: 0x261210b0  addiu       $s2, $s0, 0x10B0
    ctx->pc = 0x34e318u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4272));
    // 0x34e31c: 0x8e4400f0  lw          $a0, 0xF0($s2)
    ctx->pc = 0x34e31cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x34e320: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x34e320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x34e324: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x34e324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x34e328: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x34e328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x34e32c: 0xae4300f0  sw          $v1, 0xF0($s2)
    ctx->pc = 0x34e32cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 240), GPR_U32(ctx, 3));
    // 0x34e330: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34e330u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e334: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e338: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x34e338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x34e33c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34e33cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e340: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34e340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e344: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x34e344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x34e348: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e34c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34e34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e350: 0xa0600028  sb          $zero, 0x28($v1)
    ctx->pc = 0x34e350u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x34e354: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e358: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34e358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e35c: 0xa0600029  sb          $zero, 0x29($v1)
    ctx->pc = 0x34e35cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x34e360: 0x3c033ccc  lui         $v1, 0x3CCC
    ctx->pc = 0x34e360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15564 << 16));
    // 0x34e364: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x34e364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x34e368: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34e368u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e36c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e370: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34e370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e374: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x34e374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x34e378: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x34e378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x34e37c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e380: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34e380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e384: 0xa4640036  sh          $a0, 0x36($v1)
    ctx->pc = 0x34e384u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 54), (uint16_t)GPR_U32(ctx, 4));
    // 0x34e388: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x34e388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x34e38c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e390: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34e390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e394: 0xa4640038  sh          $a0, 0x38($v1)
    ctx->pc = 0x34e394u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 56), (uint16_t)GPR_U32(ctx, 4));
    // 0x34e398: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x34e398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x34e39c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e3a0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34e3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e3a4: 0xa464003a  sh          $a0, 0x3A($v1)
    ctx->pc = 0x34e3a4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 58), (uint16_t)GPR_U32(ctx, 4));
    // 0x34e3a8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x34e3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x34e3ac: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e3b0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34e3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e3b4: 0xa464003c  sh          $a0, 0x3C($v1)
    ctx->pc = 0x34e3b4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 60), (uint16_t)GPR_U32(ctx, 4));
    // 0x34e3b8: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34e3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e3bc: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x34e3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34e3c0: 0xa060008e  sb          $zero, 0x8E($v1)
    ctx->pc = 0x34e3c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 142), (uint8_t)GPR_U32(ctx, 0));
    // 0x34e3c4: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e3c8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34e3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e3cc: 0xa4600090  sh          $zero, 0x90($v1)
    ctx->pc = 0x34e3ccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 0));
    // 0x34e3d0: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x34e3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x34e3d4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x34e3d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x34e3d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34e3d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e3dc: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e3e0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34e3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e3e4: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x34e3e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x34e3e8: 0x3c043d4c  lui         $a0, 0x3D4C
    ctx->pc = 0x34e3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15692 << 16));
    // 0x34e3ec: 0x3482cccd  ori         $v0, $a0, 0xCCCD
    ctx->pc = 0x34e3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x34e3f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e3f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e3f4: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x34e3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e3f8: 0x24a21330  addiu       $v0, $a1, 0x1330
    ctx->pc = 0x34e3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x34e3fc: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x34e3fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x34e400: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x34e400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x34e404: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x34e404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x34e408: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e40c: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34e40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e410: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x34e410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34e414: 0xe4a0009c  swc1        $f0, 0x9C($a1)
    ctx->pc = 0x34e414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 156), bits); }
    // 0x34e418: 0x3c043c23  lui         $a0, 0x3C23
    ctx->pc = 0x34e418u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15395 << 16));
    // 0x34e41c: 0x3482d70a  ori         $v0, $a0, 0xD70A
    ctx->pc = 0x34e41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x34e420: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e424: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e428: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x34e428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e42c: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x34e42cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x34e430: 0x3c043c23  lui         $a0, 0x3C23
    ctx->pc = 0x34e430u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15395 << 16));
    // 0x34e434: 0x3482d70a  ori         $v0, $a0, 0xD70A
    ctx->pc = 0x34e434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x34e438: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e43c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34e43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e440: 0x24451330  addiu       $a1, $v0, 0x1330
    ctx->pc = 0x34e440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34e444: 0xe4a000a4  swc1        $f0, 0xA4($a1)
    ctx->pc = 0x34e444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 164), bits); }
    // 0x34e448: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x34e448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x34e44c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x34e44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x34e450: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e454: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34e454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e458: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34e458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34e45c: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x34e45cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x34e460: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34e460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x34e464: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e464u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e468: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34e468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e46c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34e46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34e470: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x34e470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x34e474: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34e474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x34e478: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e47c: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34e47cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e480: 0x24821330  addiu       $v0, $a0, 0x1330
    ctx->pc = 0x34e480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34e484: 0xe44000b0  swc1        $f0, 0xB0($v0)
    ctx->pc = 0x34e484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
    // 0x34e488: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34e488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x34e48c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34e48cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e490: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34e490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e494: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x34e494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34e498: 0xe4a000b4  swc1        $f0, 0xB4($a1)
    ctx->pc = 0x34e498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 180), bits); }
    // 0x34e49c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34e49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e4a0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x34e4a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34e4a4: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x34e4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x34e4a8: 0xc0d58b0  jal         func_3562C0
    ctx->pc = 0x34E4A8u;
    SET_GPR_U32(ctx, 31, 0x34E4B0u);
    ctx->pc = 0x3562C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3562C0u, 0x34E4A8u, 0x34E4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E4B0u;
label_34e4b0:
    // 0x34e4b0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x34e4b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34e4b4: 0x3c064348  lui         $a2, 0x4348
    ctx->pc = 0x34e4b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17224 << 16));
    // 0x34e4b8: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x34e4b8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34e4bc: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x34e4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x34e4c0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x34e4c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34e4c4: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34e4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e4c8: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x34e4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x34e4cc: 0xc0d5874  jal         func_3561D0
    ctx->pc = 0x34E4CCu;
    SET_GPR_U32(ctx, 31, 0x34E4D4u);
    ctx->pc = 0x3561D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3561D0u, 0x34E4CCu, 0x34E4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E4D4u;
label_34e4d4:
    // 0x34e4d4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34e4d4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34e4d8: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e4dc: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x34e4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34e4e0: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x34e4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x34e4e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34e4e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e4e8: 0x0  nop
    ctx->pc = 0x34e4e8u;
    // NOP
    // 0x34e4ec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34e4ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34e4f0: 0x0  nop
    ctx->pc = 0x34e4f0u;
    // NOP
    // 0x34e4f4: 0x45000029  bc1f        . + 4 + (0x29 << 2)
    ctx->pc = 0x34E4F4u;
    {
        const bool branch_taken_0x34e4f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34e4f4) {
            ctx->pc = 0x34E59Cu;
            return;
        }
    }
    ctx->pc = 0x34E4FCu;
    // 0x34e4fc: 0x3c033f86  lui         $v1, 0x3F86
    ctx->pc = 0x34e4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16262 << 16));
    // 0x34e500: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x34e500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
    // 0x34e504: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x34e504u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34e508: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34e508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e50c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e510: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x34e510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x34e514: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x34e514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34e518: 0x26650120  addiu       $a1, $s3, 0x120
    ctx->pc = 0x34e518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 288));
    // 0x34e51c: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x34E51Cu;
    SET_GPR_U32(ctx, 31, 0x34E524u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x34E51Cu, 0x34E524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E524u;
label_34e524:
    // 0x34e524: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34e524u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34e528: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x34E528u;
    {
        const bool branch_taken_0x34e528 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e528) {
            ctx->pc = 0x34E59Cu;
            return;
        }
    }
    ctx->pc = 0x34E530u;
    // 0x34e530: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e534: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34e534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e538: 0x84630034  lh          $v1, 0x34($v1)
    ctx->pc = 0x34e538u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x34e53c: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x34E53Cu;
    {
        const bool branch_taken_0x34e53c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34e53c) {
            ctx->pc = 0x34E59Cu;
            return;
        }
    }
    ctx->pc = 0x34E544u;
    // 0x34e544: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e548: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34e548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e54c: 0x846300c0  lh          $v1, 0xC0($v1)
    ctx->pc = 0x34e54cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x34e550: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x34E550u;
    {
        const bool branch_taken_0x34e550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34e550) {
            ctx->pc = 0x34E59Cu;
            return;
        }
    }
    ctx->pc = 0x34E558u;
    // 0x34e558: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34e558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34e55c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e560: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x34e560u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x34e564: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x34e564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x34e568: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e56c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x34e56cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x34e570: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e574: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x34e574u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34e578: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e57c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34e57cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34e580: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e584: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x34e584u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x34e588: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e58c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x34e58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e590: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x34e590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x34e594: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x34e594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x34e598: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x34e598u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    ctx->pc = 0x34e59cu;
}
