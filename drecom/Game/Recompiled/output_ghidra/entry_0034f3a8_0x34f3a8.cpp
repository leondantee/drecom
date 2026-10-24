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

// Function: entry_0034f3a8
// Address: 0x34f3a8 - 0x34f568
void entry_0034f3a8_0x34f3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034f3a8_0x34f3a8");
#endif

    switch (ctx->pc) {
        case 0x34f544u: goto label_34f544;
        default: break;
    }

    ctx->pc = 0x34f3a8u;

    // 0x34f3a8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f3ac: 0x245210b0  addiu       $s2, $v0, 0x10B0
    ctx->pc = 0x34f3acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x34f3b0: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x34f3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x34f3b4: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x34f3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x34f3b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x34f3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x34f3bc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x34f3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x34f3c0: 0xae4200f0  sw          $v0, 0xF0($s2)
    ctx->pc = 0x34f3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 240), GPR_U32(ctx, 2));
    // 0x34f3c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34f3c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f3c8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f3cc: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x34f3ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x34f3d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34f3d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f3d4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f3d8: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x34f3d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x34f3dc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f3e0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f3e4: 0xa0400028  sb          $zero, 0x28($v0)
    ctx->pc = 0x34f3e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x34f3e8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f3ec: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f3f0: 0xa0400029  sb          $zero, 0x29($v0)
    ctx->pc = 0x34f3f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x34f3f4: 0x3c023ccc  lui         $v0, 0x3CCC
    ctx->pc = 0x34f3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15564 << 16));
    // 0x34f3f8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x34f3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x34f3fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f3fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f400: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f404: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f408: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x34f408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x34f40c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f410: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f414: 0xa040008e  sb          $zero, 0x8E($v0)
    ctx->pc = 0x34f414u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 142), (uint8_t)GPR_U32(ctx, 0));
    // 0x34f418: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f41c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f420: 0xa4400090  sh          $zero, 0x90($v0)
    ctx->pc = 0x34f420u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 0));
    // 0x34f424: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x34f424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x34f428: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x34f428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x34f42c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f42cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f430: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f434: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f438: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x34f438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x34f43c: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x34f43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x34f440: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x34f440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x34f444: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f444u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f448: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x34f448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f44c: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x34f44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34f450: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x34f450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x34f454: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x34f454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x34f458: 0x3462cccd  ori         $v0, $v1, 0xCCCD
    ctx->pc = 0x34f458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x34f45c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f45cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f460: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f464: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f468: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x34f468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x34f46c: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x34f46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x34f470: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x34f470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x34f474: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34f474u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f478: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f47c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34f47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f480: 0xe46000a0  swc1        $f0, 0xA0($v1)
    ctx->pc = 0x34f480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
    // 0x34f484: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x34f484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x34f488: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x34f488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x34f48c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f48cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f490: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x34f490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f494: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x34f494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34f498: 0xe4a000a4  swc1        $f0, 0xA4($a1)
    ctx->pc = 0x34f498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 164), bits); }
    // 0x34f49c: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x34f49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x34f4a0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x34f4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x34f4a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f4a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f4a8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f4ac: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x34f4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f4b0: 0xe48000a8  swc1        $f0, 0xA8($a0)
    ctx->pc = 0x34f4b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 168), bits); }
    // 0x34f4b4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x34f4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x34f4b8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x34f4b8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f4bc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f4c0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f4c4: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x34f4c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x34f4c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34f4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x34f4cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f4ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f4d0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f4d4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f4d8: 0xe44000b0  swc1        $f0, 0xB0($v0)
    ctx->pc = 0x34f4d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
    // 0x34f4dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34f4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x34f4e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f4e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f4e4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f4e8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f4ec: 0xe44000b4  swc1        $f0, 0xB4($v0)
    ctx->pc = 0x34f4ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
    // 0x34f4f0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x34f4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x34f4f4: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x34f4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f4f8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34f4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34f4fc: 0xa4620036  sh          $v0, 0x36($v1)
    ctx->pc = 0x34f4fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 54), (uint16_t)GPR_U32(ctx, 2));
    // 0x34f500: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x34f500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x34f504: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f508: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f50c: 0xa4430038  sh          $v1, 0x38($v0)
    ctx->pc = 0x34f50cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 56), (uint16_t)GPR_U32(ctx, 3));
    // 0x34f510: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x34f510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x34f514: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f518: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f51c: 0xa443003a  sh          $v1, 0x3A($v0)
    ctx->pc = 0x34f51cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 58), (uint16_t)GPR_U32(ctx, 3));
    // 0x34f520: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x34f520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x34f524: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x34f524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f528: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x34f528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f52c: 0xa483003c  sh          $v1, 0x3C($a0)
    ctx->pc = 0x34f52cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 60), (uint16_t)GPR_U32(ctx, 3));
    // 0x34f530: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x34f530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f534: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x34f534u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x34f538: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x34f538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x34f53c: 0xc0d58b0  jal         func_3562C0
    ctx->pc = 0x34F53Cu;
    SET_GPR_U32(ctx, 31, 0x34F544u);
    ctx->pc = 0x3562C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3562C0u, 0x34F53Cu, 0x34F544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F544u;
label_34f544:
    // 0x34f544: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x34f544u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
    // 0x34f548: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x34f548u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34f54c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x34f54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x34f550: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x34f550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34f554: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x34f554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x34f558: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x34f558u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x34f55c: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x34f55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x34f560: 0xc0d5874  jal         func_3561D0
    ctx->pc = 0x34F560u;
    SET_GPR_U32(ctx, 31, 0x34F568u);
    ctx->pc = 0x3561D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3561D0u, 0x34F560u, 0x34F568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F568u;
}
