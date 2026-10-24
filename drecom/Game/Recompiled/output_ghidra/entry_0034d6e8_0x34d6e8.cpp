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

// Function: entry_0034d6e8
// Address: 0x34d6e8 - 0x34d8a4
void entry_0034d6e8_0x34d6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034d6e8_0x34d6e8");
#endif

    switch (ctx->pc) {
        case 0x34d880u: goto label_34d880;
        default: break;
    }

    ctx->pc = 0x34d6e8u;

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
}
