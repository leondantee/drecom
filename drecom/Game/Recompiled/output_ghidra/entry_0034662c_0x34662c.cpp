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

// Function: entry_0034662c
// Address: 0x34662c - 0x346740
void entry_0034662c_0x34662c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034662c_0x34662c");
#endif

    switch (ctx->pc) {
        case 0x34669cu: goto label_34669c;
        case 0x34671cu: goto label_34671c;
        case 0x346724u: goto label_346724;
        default: break;
    }

    ctx->pc = 0x34662cu;

    // 0x34662c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x34662cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346630: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x346630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x346634: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x346634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
    // 0x346638: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x346638u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34663c: 0x0  nop
    ctx->pc = 0x34663cu;
    // NOP
    // 0x346640: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x346640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x346644: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x346644u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346648: 0x0  nop
    ctx->pc = 0x346648u;
    // NOP
    // 0x34664c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x34664cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x346650: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x346650u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346654: 0x0  nop
    ctx->pc = 0x346654u;
    // NOP
    // 0x346658: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x346658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x34665c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34665cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x346660: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x346660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346664: 0x0  nop
    ctx->pc = 0x346664u;
    // NOP
    // 0x346668: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x346668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x34666c: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x34666cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x346670: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x346670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346674: 0x0  nop
    ctx->pc = 0x346674u;
    // NOP
    // 0x346678: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x346678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x34667c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x34667cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x346680: 0xa7a200b4  sh          $v0, 0xB4($sp)
    ctx->pc = 0x346680u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 180), (uint16_t)GPR_U32(ctx, 2));
    // 0x346684: 0xa3a000b6  sb          $zero, 0xB6($sp)
    ctx->pc = 0x346684u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 182), (uint8_t)GPR_U32(ctx, 0));
    // 0x346688: 0xa3a000b7  sb          $zero, 0xB7($sp)
    ctx->pc = 0x346688u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 183), (uint8_t)GPR_U32(ctx, 0));
    // 0x34668c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x34668cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346690: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x346690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x346694: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x346694u;
    SET_GPR_U32(ctx, 31, 0x34669Cu);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x346694u, 0x34669Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34669Cu;
label_34669c:
    // 0x34669c: 0x104000bf  beqz        $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x34669Cu;
    {
        const bool branch_taken_0x34669c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34669c) {
            ctx->pc = 0x34699Cu;
            return;
        }
    }
    ctx->pc = 0x3466A4u;
    // 0x3466a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3466a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3466a8: 0x0  nop
    ctx->pc = 0x3466a8u;
    // NOP
    // 0x3466ac: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x3466acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x3466b0: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x3466b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x3466b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3466b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3466b8: 0x0  nop
    ctx->pc = 0x3466b8u;
    // NOP
    // 0x3466bc: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x3466bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x3466c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3466c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3466c4: 0x0  nop
    ctx->pc = 0x3466c4u;
    // NOP
    // 0x3466c8: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x3466c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x3466cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3466ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3466d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3466d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3466d4: 0x0  nop
    ctx->pc = 0x3466d4u;
    // NOP
    // 0x3466d8: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x3466d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x3466dc: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3466dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3466e0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3466e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3466e4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3466e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3466e8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3466e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3466ec: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3466ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3466f0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3466f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3466f4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3466f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3466f8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3466f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3466fc: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x3466fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x346700: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x346700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346704: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x346704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x346708: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x346708u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34670c: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x34670cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x346710: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x346710u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x346714: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x346714u;
    SET_GPR_U32(ctx, 31, 0x34671Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x346714u, 0x34671Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34671Cu;
label_34671c:
    // 0x34671c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34671Cu;
    SET_GPR_U32(ctx, 31, 0x346724u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34671Cu, 0x346724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346724u;
label_346724:
    // 0x346724: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x346724u;
    {
        const bool branch_taken_0x346724 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x346724) {
            ctx->pc = 0x346740u;
            return;
        }
    }
    ctx->pc = 0x34672Cu;
    // 0x34672c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34672cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346730: 0x0  nop
    ctx->pc = 0x346730u;
    // NOP
    // 0x346734: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x346734u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x346738: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x346738u;
    {
        const bool branch_taken_0x346738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x346738) {
            ctx->pc = 0x34675Cu;
            return;
        }
    }
    ctx->pc = 0x346740u;
}
