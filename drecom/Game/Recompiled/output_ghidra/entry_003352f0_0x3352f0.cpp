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

// Function: entry_003352f0
// Address: 0x3352f0 - 0x335474
void entry_003352f0_0x3352f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003352f0_0x3352f0");
#endif

    ctx->pc = 0x3352f0u;

    // 0x3352f0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3352f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3352f4: 0x2451e7d0  addiu       $s1, $v0, -0x1830
    ctx->pc = 0x3352f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961104));
    // 0x3352f8: 0xafb10108  sw          $s1, 0x108($sp)
    ctx->pc = 0x3352f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 17));
    // 0x3352fc: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x3352fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x335300: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x335300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x335304: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x335304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x335308: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33530c: 0xa42233b0  sh          $v0, 0x33B0($at)
    ctx->pc = 0x33530cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8933B0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8933B0u, _value); } while (0);
    // 0x335310: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x335310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x335314: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x335314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x335318: 0x305effff  andi        $fp, $v0, 0xFFFF
    ctx->pc = 0x335318u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33531c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33531cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335320: 0xa43e33b4  sh          $fp, 0x33B4($at)
    ctx->pc = 0x335320u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 30)); ps2TraceGuestWrite(rdram, 0x8933B4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8933B4u, _value); } while (0);
    // 0x335324: 0x8fa6010c  lw          $a2, 0x10C($sp)
    ctx->pc = 0x335324u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x335328: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x335328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x33532c: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x33532cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x335330: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335334: 0xa42733b2  sh          $a3, 0x33B2($at)
    ctx->pc = 0x335334u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x8933B2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8933B2u, _value); } while (0);
    // 0x335338: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x335338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x33533c: 0x8c570010  lw          $s7, 0x10($v0)
    ctx->pc = 0x33533cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x335340: 0x32f5ffff  andi        $s5, $s7, 0xFFFF
    ctx->pc = 0x335340u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x335344: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335348: 0xa43533b6  sh          $s5, 0x33B6($at)
    ctx->pc = 0x335348u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x8933B6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8933B6u, _value); } while (0);
    // 0x33534c: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x33534cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x335350: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x335350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x335354: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x335354u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x335358: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x335358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x33535c: 0x3443103b  ori         $v1, $v0, 0x103B
    ctx->pc = 0x33535cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4155);
    // 0x335360: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x335360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x335364: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x335364u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x335368: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x335368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x33536c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x33536cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x335370: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x335370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x335374: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x335374u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x335378: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x335378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33537c: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x33537cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x335380: 0x24470018  addiu       $a3, $v0, 0x18
    ctx->pc = 0x335380u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x335384: 0x90e60004  lbu         $a2, 0x4($a3)
    ctx->pc = 0x335384u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x335388: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x335388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x33538c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x33538cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x335390: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x335390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x335394: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x335394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x335398: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x335398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33539c: 0xa0e20004  sb          $v0, 0x4($a3)
    ctx->pc = 0x33539cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x3353a0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3353a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3353a4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x3353a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x3353a8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3353a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3353ac: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x3353acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x3353b0: 0x34461043  ori         $a2, $v0, 0x1043
    ctx->pc = 0x3353b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x3353b4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x3353b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x3353b8: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x3353b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x3353bc: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x3353bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x3353c0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x3353c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x3353c4: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x3353c4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x3353c8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3353c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3353cc: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x3353ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x3353d0: 0x3c028800  lui         $v0, 0x8800
    ctx->pc = 0x3353d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34816 << 16));
    // 0x3353d4: 0x34423b14  ori         $v0, $v0, 0x3B14
    ctx->pc = 0x3353d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15124);
    // 0x3353d8: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x3353d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x3353dc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x3353dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3353e0: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3353e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3353e4: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x3353e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x3353e8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3353e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3353ec: 0x942233b4  lhu         $v0, 0x33B4($at)
    ctx->pc = 0x3353ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x8933B4u));
    // 0x3353f0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3353f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3353f4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3353f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3353f8: 0x942233b0  lhu         $v0, 0x33B0($at)
    ctx->pc = 0x3353f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x8933B0u));
    // 0x3353fc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3353fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x335400: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x335400u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x335404: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x335404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x335408: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33540c: 0x942233b6  lhu         $v0, 0x33B6($at)
    ctx->pc = 0x33540cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x8933B6u));
    // 0x335410: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x335410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x335414: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335418: 0x942633b2  lhu         $a2, 0x33B2($at)
    ctx->pc = 0x335418u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)FAST_READ16(0x8933B2u));
    // 0x33541c: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x33541cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x335420: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x335420u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x335424: 0xafa300fc  sw          $v1, 0xFC($sp)
    ctx->pc = 0x335424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 3));
    // 0x335428: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x335428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x33542c: 0xafa300e8  sw          $v1, 0xE8($sp)
    ctx->pc = 0x33542cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 3));
    // 0x335430: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x335430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x335434: 0xafa300ec  sw          $v1, 0xEC($sp)
    ctx->pc = 0x335434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 3));
    // 0x335438: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x335438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x33543c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33543cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335440: 0x0  nop
    ctx->pc = 0x335440u;
    // NOP
    // 0x335444: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x335444u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x335448: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x335448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x33544c: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x33544cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x335450: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x335450u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x335454: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x335454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x335458: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x335458u;
    {
        const bool branch_taken_0x335458 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x335458) {
            ctx->pc = 0x335474u;
            return;
        }
    }
    ctx->pc = 0x335460u;
    // 0x335460: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x335460u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335464: 0x0  nop
    ctx->pc = 0x335464u;
    // NOP
    // 0x335468: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x335468u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33546c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33546Cu;
    {
        const bool branch_taken_0x33546c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33546c) {
            ctx->pc = 0x335490u;
            return;
        }
    }
    ctx->pc = 0x335474u;
}
