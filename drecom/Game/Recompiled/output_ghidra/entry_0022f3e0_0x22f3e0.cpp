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

// Function: entry_0022f3e0
// Address: 0x22f3e0 - 0x22f524
void entry_0022f3e0_0x22f3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f3e0_0x22f3e0");
#endif

    switch (ctx->pc) {
        case 0x22f478u: goto label_22f478;
        case 0x22f500u: goto label_22f500;
        case 0x22f508u: goto label_22f508;
        default: break;
    }

    ctx->pc = 0x22f3e0u;

    // 0x22f3e0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22f3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f3e4: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x22f3e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x22f3e8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x22f3e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x22f3ec: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x22f3ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x22f3f0: 0x106000dc  beqz        $v1, . + 4 + (0xDC << 2)
    ctx->pc = 0x22F3F0u;
    {
        const bool branch_taken_0x22f3f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f3f0) {
            ctx->pc = 0x22F764u;
            return;
        }
    }
    ctx->pc = 0x22F3F8u;
    // 0x22f3f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22f3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22f3fc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f400: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x22f400u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x22f404: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f408: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x22f408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x22f40c: 0x24420880  addiu       $v0, $v0, 0x880
    ctx->pc = 0x22f40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x22f410: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x22f410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x22f414: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22f414u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f418: 0x0  nop
    ctx->pc = 0x22f418u;
    // NOP
    // 0x22f41c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x22f41cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x22f420: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22f420u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f424: 0x0  nop
    ctx->pc = 0x22f424u;
    // NOP
    // 0x22f428: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x22f428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x22f42c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22f42cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f430: 0x0  nop
    ctx->pc = 0x22f430u;
    // NOP
    // 0x22f434: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x22f434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x22f438: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22f438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x22f43c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22f43cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f440: 0x0  nop
    ctx->pc = 0x22f440u;
    // NOP
    // 0x22f444: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x22f444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x22f448: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x22f448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x22f44c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22f44cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f450: 0x0  nop
    ctx->pc = 0x22f450u;
    // NOP
    // 0x22f454: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x22f454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x22f458: 0xa7a00074  sh          $zero, 0x74($sp)
    ctx->pc = 0x22f458u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 116), (uint16_t)GPR_U32(ctx, 0));
    // 0x22f45c: 0xa3a00076  sb          $zero, 0x76($sp)
    ctx->pc = 0x22f45cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 118), (uint8_t)GPR_U32(ctx, 0));
    // 0x22f460: 0xa3a00077  sb          $zero, 0x77($sp)
    ctx->pc = 0x22f460u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 119), (uint8_t)GPR_U32(ctx, 0));
    // 0x22f464: 0x8fb200a8  lw          $s2, 0xA8($sp)
    ctx->pc = 0x22f464u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f468: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x22f468u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x22f46c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x22f46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22f470: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x22F470u;
    SET_GPR_U32(ctx, 31, 0x22F478u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x22F470u, 0x22F478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F478u;
label_22f478:
    // 0x22f478: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x22f478u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22f47c: 0x10600059  beqz        $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x22F47Cu;
    {
        const bool branch_taken_0x22f47c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f47c) {
            ctx->pc = 0x22F5E4u;
            return;
        }
    }
    ctx->pc = 0x22F484u;
    // 0x22f484: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22f484u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f488: 0x0  nop
    ctx->pc = 0x22f488u;
    // NOP
    // 0x22f48c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x22f48cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x22f490: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x22f490u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
    // 0x22f494: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x22f494u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f498: 0x0  nop
    ctx->pc = 0x22f498u;
    // NOP
    // 0x22f49c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x22f49cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x22f4a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22f4a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f4a4: 0x0  nop
    ctx->pc = 0x22f4a4u;
    // NOP
    // 0x22f4a8: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x22f4a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x22f4ac: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x22f4acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x22f4b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22f4b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f4b4: 0x0  nop
    ctx->pc = 0x22f4b4u;
    // NOP
    // 0x22f4b8: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x22f4b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x22f4bc: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x22f4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f4c0: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x22f4c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x22f4c4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x22f4c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x22f4c8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x22f4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x22f4cc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x22f4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x22f4d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x22f4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x22f4d4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22f4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22f4d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x22f4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22f4dc: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x22f4dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x22f4e0: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x22f4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f4e4: 0x8ca20130  lw          $v0, 0x130($a1)
    ctx->pc = 0x22f4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x22f4e8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x22f4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x22f4ec: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22f4ecu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22f4f0: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x22f4f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x22f4f4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x22f4f4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22f4f8: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x22F4F8u;
    SET_GPR_U32(ctx, 31, 0x22F500u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x22F4F8u, 0x22F500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F500u;
label_22f500:
    // 0x22f500: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22F500u;
    SET_GPR_U32(ctx, 31, 0x22F508u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22F500u, 0x22F508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F508u;
label_22f508:
    // 0x22f508: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22F508u;
    {
        const bool branch_taken_0x22f508 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x22f508) {
            ctx->pc = 0x22F524u;
            return;
        }
    }
    ctx->pc = 0x22F510u;
    // 0x22f510: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22f510u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f514: 0x0  nop
    ctx->pc = 0x22f514u;
    // NOP
    // 0x22f518: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x22f518u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22f51c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22F51Cu;
    {
        const bool branch_taken_0x22f51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f51c) {
            ctx->pc = 0x22F540u;
            return;
        }
    }
    ctx->pc = 0x22F524u;
}
