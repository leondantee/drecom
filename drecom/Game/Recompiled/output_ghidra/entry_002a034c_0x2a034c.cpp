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

// Function: entry_002a034c
// Address: 0x2a034c - 0x2a0530
void entry_002a034c_0x2a034c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a034c_0x2a034c");
#endif

    switch (ctx->pc) {
        case 0x2a03a0u: goto label_2a03a0;
        case 0x2a03b0u: goto label_2a03b0;
        case 0x2a03bcu: goto label_2a03bc;
        case 0x2a0478u: goto label_2a0478;
        case 0x2a04b4u: goto label_2a04b4;
        case 0x2a04f0u: goto label_2a04f0;
        case 0x2a0528u: goto label_2a0528;
        default: break;
    }

    ctx->pc = 0x2a034cu;

    // 0x2a034c: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x2a034cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0350: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x2a0350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2a0354: 0x14600076  bnez        $v1, . + 4 + (0x76 << 2)
    ctx->pc = 0x2A0354u;
    {
        const bool branch_taken_0x2a0354 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0354) {
            ctx->pc = 0x2A0530u;
            return;
        }
    }
    ctx->pc = 0x2A035Cu;
    // 0x2a035c: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x2a035cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0360: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x2a0360u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x2a0364: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2a0364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2a0368: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a0368u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2a036c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a036cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a0370: 0x1440009f  bnez        $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x2A0370u;
    {
        const bool branch_taken_0x2a0370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0370) {
            ctx->pc = 0x2A05F0u;
            return;
        }
    }
    ctx->pc = 0x2A0378u;
    // 0x2a0378: 0x8fa60168  lw          $a2, 0x168($sp)
    ctx->pc = 0x2a0378u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a037c: 0x24c41330  addiu       $a0, $a2, 0x1330
    ctx->pc = 0x2a037cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x2a0380: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x2a0380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2a0384: 0x30a70004  andi        $a3, $a1, 0x4
    ctx->pc = 0x2a0384u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x2a0388: 0x10e00099  beqz        $a3, . + 4 + (0x99 << 2)
    ctx->pc = 0x2A0388u;
    {
        const bool branch_taken_0x2a0388 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0388) {
            ctx->pc = 0x2A05F0u;
            return;
        }
    }
    ctx->pc = 0x2A0390u;
    // 0x2a0390: 0x27a80100  addiu       $t0, $sp, 0x100
    ctx->pc = 0x2a0390u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2a0394: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x2a0394u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a0398: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A0398u;
    SET_GPR_U32(ctx, 31, 0x2A03A0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A0398u, 0x2A03A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A03A0u;
label_2a03a0:
    // 0x2a03a0: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x2a03a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2a03a4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a03a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a03a8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A03A8u;
    SET_GPR_U32(ctx, 31, 0x2A03B0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A03A8u, 0x2A03B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A03B0u;
label_2a03b0:
    // 0x2a03b0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2a03b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2a03b4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A03B4u;
    SET_GPR_U32(ctx, 31, 0x2A03BCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A03B4u, 0x2A03BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A03BCu;
label_2a03bc:
    // 0x2a03bc: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2a03bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2a03c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a03c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a03c4: 0x0  nop
    ctx->pc = 0x2a03c4u;
    // NOP
    // 0x2a03c8: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x2a03c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2a03cc: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x2a03ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x2a03d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a03d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a03d4: 0x0  nop
    ctx->pc = 0x2a03d4u;
    // NOP
    // 0x2a03d8: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x2a03d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x2a03dc: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2a03dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x2a03e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a03e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a03e4: 0x0  nop
    ctx->pc = 0x2a03e4u;
    // NOP
    // 0x2a03e8: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x2a03e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x2a03ec: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2a03ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2a03f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a03f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a03f4: 0x0  nop
    ctx->pc = 0x2a03f4u;
    // NOP
    // 0x2a03f8: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x2a03f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x2a03fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a03fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a0400: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a0400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0404: 0x0  nop
    ctx->pc = 0x2a0404u;
    // NOP
    // 0x2a0408: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x2a0408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x2a040c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a040cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a0410: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a0410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0414: 0x0  nop
    ctx->pc = 0x2a0414u;
    // NOP
    // 0x2a0418: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x2a0418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x2a041c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a041cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a0420: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a0420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0424: 0x0  nop
    ctx->pc = 0x2a0424u;
    // NOP
    // 0x2a0428: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x2a0428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x2a042c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a042cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a0430: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a0430u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0434: 0x0  nop
    ctx->pc = 0x2a0434u;
    // NOP
    // 0x2a0438: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x2a0438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x2a043c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2a043cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2a0440: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a0440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a0444: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x2a0444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x2a0448: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a0448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a044c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a044cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a0450: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x2a0450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0454: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2a0454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a0458: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2a0458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2a045c: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x2a045cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2a0460: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x2a0460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2a0464: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x2a0464u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a0468: 0x27a90120  addiu       $t1, $sp, 0x120
    ctx->pc = 0x2a0468u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2a046c: 0x27aa0130  addiu       $t2, $sp, 0x130
    ctx->pc = 0x2a046cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2a0470: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A0470u;
    SET_GPR_U32(ctx, 31, 0x2A0478u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A0470u, 0x2A0478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0478u;
label_2a0478:
    // 0x2a0478: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x2a0478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x2a047c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a047cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a0480: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a0480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a0484: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2a0484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2a0488: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a0488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a048c: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x2a048cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0490: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2a0490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a0494: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2a0494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2a0498: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x2a0498u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2a049c: 0x27a80110  addiu       $t0, $sp, 0x110
    ctx->pc = 0x2a049cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2a04a0: 0x27a90120  addiu       $t1, $sp, 0x120
    ctx->pc = 0x2a04a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2a04a4: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x2a04a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2a04a8: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x2a04a8u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a04ac: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A04ACu;
    SET_GPR_U32(ctx, 31, 0x2A04B4u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A04ACu, 0x2A04B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A04B4u;
label_2a04b4:
    // 0x2a04b4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a04b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a04b8: 0x3c043ca3  lui         $a0, 0x3CA3
    ctx->pc = 0x2a04b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15523 << 16));
    // 0x2a04bc: 0x3482d70a  ori         $v0, $a0, 0xD70A
    ctx->pc = 0x2a04bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x2a04c0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a04c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a04c4: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2a04c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2a04c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a04c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a04cc: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x2a04ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a04d0: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2a04d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a04d4: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2a04d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2a04d8: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x2a04d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2a04dc: 0x27a80110  addiu       $t0, $sp, 0x110
    ctx->pc = 0x2a04dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2a04e0: 0x27a90120  addiu       $t1, $sp, 0x120
    ctx->pc = 0x2a04e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2a04e4: 0x27aa0130  addiu       $t2, $sp, 0x130
    ctx->pc = 0x2a04e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2a04e8: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A04E8u;
    SET_GPR_U32(ctx, 31, 0x2A04F0u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A04E8u, 0x2A04F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A04F0u;
label_2a04f0:
    // 0x2a04f0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2a04f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2a04f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a04f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a04f8: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x2a04f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x2a04fc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a04fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a0500: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a0500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a0504: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x2a0504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0508: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2a0508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a050c: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2a050cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2a0510: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x2a0510u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2a0514: 0x27a80110  addiu       $t0, $sp, 0x110
    ctx->pc = 0x2a0514u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2a0518: 0x27a90120  addiu       $t1, $sp, 0x120
    ctx->pc = 0x2a0518u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2a051c: 0x27aa0130  addiu       $t2, $sp, 0x130
    ctx->pc = 0x2a051cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2a0520: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A0520u;
    SET_GPR_U32(ctx, 31, 0x2A0528u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A0520u, 0x2A0528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0528u;
label_2a0528:
    // 0x2a0528: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2A0528u;
    {
        const bool branch_taken_0x2a0528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0528) {
            ctx->pc = 0x2A05F0u;
            return;
        }
    }
    ctx->pc = 0x2A0530u;
}
