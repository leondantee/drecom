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

// Function: entry_00354268
// Address: 0x354268 - 0x354394
void entry_00354268_0x354268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00354268_0x354268");
#endif

    switch (ctx->pc) {
        case 0x3542f8u: goto label_3542f8;
        case 0x354370u: goto label_354370;
        case 0x354378u: goto label_354378;
        default: break;
    }

    ctx->pc = 0x354268u;

    // 0x354268: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x354268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x35426c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x35426cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x354270: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x354270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x354274: 0x9043010c  lbu         $v1, 0x10C($v0)
    ctx->pc = 0x354274u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 268)));
    // 0x354278: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x354278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x35427c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x35427cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x354280: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x354280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x354284: 0x8ca60130  lw          $a2, 0x130($a1)
    ctx->pc = 0x354284u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x354288: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x354288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x35428c: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x35428cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x354290: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x354290u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x354294: 0x0  nop
    ctx->pc = 0x354294u;
    // NOP
    // 0x354298: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x354298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x35429c: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x35429cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
    // 0x3542a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3542a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3542a4: 0x0  nop
    ctx->pc = 0x3542a4u;
    // NOP
    // 0x3542a8: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x3542a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x3542ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3542acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3542b0: 0x0  nop
    ctx->pc = 0x3542b0u;
    // NOP
    // 0x3542b4: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x3542b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x3542b8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3542b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3542bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3542bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3542c0: 0x0  nop
    ctx->pc = 0x3542c0u;
    // NOP
    // 0x3542c4: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x3542c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x3542c8: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x3542c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x3542cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3542ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3542d0: 0x0  nop
    ctx->pc = 0x3542d0u;
    // NOP
    // 0x3542d4: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x3542d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x3542d8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3542d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3542dc: 0xa7a300a4  sh          $v1, 0xA4($sp)
    ctx->pc = 0x3542dcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 164), (uint16_t)GPR_U32(ctx, 3));
    // 0x3542e0: 0xa3a000a6  sb          $zero, 0xA6($sp)
    ctx->pc = 0x3542e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 166), (uint8_t)GPR_U32(ctx, 0));
    // 0x3542e4: 0xa3a000a7  sb          $zero, 0xA7($sp)
    ctx->pc = 0x3542e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 167), (uint8_t)GPR_U32(ctx, 0));
    // 0x3542e8: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x3542e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3542ec: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3542ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3542f0: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x3542F0u;
    SET_GPR_U32(ctx, 31, 0x3542F8u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x3542F0u, 0x3542F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3542F8u;
label_3542f8:
    // 0x3542f8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3542f8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3542fc: 0x10600344  beqz        $v1, . + 4 + (0x344 << 2)
    ctx->pc = 0x3542FCu;
    {
        const bool branch_taken_0x3542fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3542fc) {
            ctx->pc = 0x355010u;
            return;
        }
    }
    ctx->pc = 0x354304u;
    // 0x354304: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x354304u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x354308: 0x0  nop
    ctx->pc = 0x354308u;
    // NOP
    // 0x35430c: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x35430cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x354310: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x354310u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x354314: 0x0  nop
    ctx->pc = 0x354314u;
    // NOP
    // 0x354318: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x354318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x35431c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35431cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x354320: 0x0  nop
    ctx->pc = 0x354320u;
    // NOP
    // 0x354324: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x354324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x354328: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x354328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x35432c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35432cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x354330: 0x0  nop
    ctx->pc = 0x354330u;
    // NOP
    // 0x354334: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x354334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x354338: 0x12283c  dsll32      $a1, $s2, 0
    ctx->pc = 0x354338u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) << (32 + 0));
    // 0x35433c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x35433cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x354340: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x354340u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x354344: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x354344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
    // 0x354348: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x354348u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x35434c: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x35434cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x354350: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x354350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x354354: 0x34640006  ori         $a0, $v1, 0x6
    ctx->pc = 0x354354u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x354358: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x354358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x35435c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x35435cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x354360: 0x8e470130  lw          $a3, 0x130($s2)
    ctx->pc = 0x354360u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x354364: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x354364u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x354368: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x354368u;
    SET_GPR_U32(ctx, 31, 0x354370u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x354368u, 0x354370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354370u;
label_354370:
    // 0x354370: 0xc067694  jal         func_19DA50
    ctx->pc = 0x354370u;
    SET_GPR_U32(ctx, 31, 0x354378u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x354370u, 0x354378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354378u;
label_354378:
    // 0x354378: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x354378u;
    {
        const bool branch_taken_0x354378 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x354378) {
            ctx->pc = 0x354394u;
            return;
        }
    }
    ctx->pc = 0x354380u;
    // 0x354380: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x354380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x354384: 0x0  nop
    ctx->pc = 0x354384u;
    // NOP
    // 0x354388: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x354388u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x35438c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x35438Cu;
    {
        const bool branch_taken_0x35438c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35438c) {
            ctx->pc = 0x3543B0u;
            return;
        }
    }
    ctx->pc = 0x354394u;
}
