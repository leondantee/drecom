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

// Function: caseD_5
// Address: 0x13033c - 0x1304d0
void caseD_5_0x13033c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x13033c");
#endif

    switch (ctx->pc) {
        case 0x130368u: goto label_130368;
        case 0x130384u: goto label_130384;
        case 0x13039cu: goto label_13039c;
        case 0x1303a8u: goto label_1303a8;
        case 0x1303c0u: goto label_1303c0;
        case 0x1303d4u: goto label_1303d4;
        case 0x1303e8u: goto label_1303e8;
        case 0x130418u: goto label_130418;
        case 0x130440u: goto label_130440;
        case 0x130458u: goto label_130458;
        case 0x1304a4u: goto label_1304a4;
        case 0x1304ccu: goto label_1304cc;
        default: break;
    }

    ctx->pc = 0x13033cu;

    // 0x13033c: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x13033cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x130340: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x130340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x130344: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x130344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x130348: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x130348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13034c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x13034cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x130350: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x130350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x130354: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x130354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x130358: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x130358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13035c: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x13035cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x130360: 0xc05c848  jal         func_172120
    ctx->pc = 0x130360u;
    SET_GPR_U32(ctx, 31, 0x130368u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x130360u, 0x130368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130368u;
label_130368:
    // 0x130368: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x130368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x13036c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x13036cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x130370: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x130370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130374: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x130374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130378: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x130378u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13037c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x13037Cu;
    SET_GPR_U32(ctx, 31, 0x130384u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x13037Cu, 0x130384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130384u;
label_130384:
    // 0x130384: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x130384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x130388: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x130388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x13038c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x13038cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x130390: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x130390u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x130394: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x130394u;
    SET_GPR_U32(ctx, 31, 0x13039Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x130394u, 0x13039Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13039Cu;
label_13039c:
    // 0x13039c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x13039cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1303a0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1303A0u;
    SET_GPR_U32(ctx, 31, 0x1303A8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1303A0u, 0x1303A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1303A8u;
label_1303a8:
    // 0x1303a8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1303a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1303ac: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x1303acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1303b0: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x1303b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1303b4: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1303b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1303b8: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1303B8u;
    SET_GPR_U32(ctx, 31, 0x1303C0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1303C0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1303C0u) { return; }
    ctx->pc = 0x1303C0u;
label_1303c0:
    // 0x1303c0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1303c0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1303c4: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1303c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1303c8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1303c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1303cc: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x1303CCu;
    SET_GPR_U32(ctx, 31, 0x1303D4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x1303CCu, 0x1303D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1303D4u;
label_1303d4:
    // 0x1303d4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1303d4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1303d8: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x1303d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1303dc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1303dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1303e0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1303E0u;
    SET_GPR_U32(ctx, 31, 0x1303E8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1303E0u, 0x1303E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1303E8u;
label_1303e8:
    // 0x1303e8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1303e8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1303ec: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1303ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1303f0: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x1303f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x1303f4: 0x10600065  beqz        $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x1303F4u;
    {
        const bool branch_taken_0x1303f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1303f4) {
            ctx->pc = 0x13058Cu;
            return;
        }
    }
    ctx->pc = 0x1303FCu;
    // 0x1303fc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1303fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x130400: 0x84431278  lh          $v1, 0x1278($v0)
    ctx->pc = 0x130400u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x130404: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x130404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x130408: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x130408u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x13040c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x13040cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x130410: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x130410u;
    SET_GPR_U32(ctx, 31, 0x130418u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x130410u, 0x130418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130418u;
label_130418:
    // 0x130418: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x130418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13041c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x13041cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x130420: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x130420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x130424: 0x24450540  addiu       $a1, $v0, 0x540
    ctx->pc = 0x130424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
    // 0x130428: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x130428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13042c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x13042cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x130430: 0x24428d80  addiu       $v0, $v0, -0x7280
    ctx->pc = 0x130430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937984));
    // 0x130434: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x130434u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x130438: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x130438u;
    SET_GPR_U32(ctx, 31, 0x130440u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x130438u, 0x130440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130440u;
label_130440:
    // 0x130440: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x130440u;
    {
        const bool branch_taken_0x130440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x130440) {
            ctx->pc = 0x1304D0u;
            return;
        }
    }
    ctx->pc = 0x130448u;
    // 0x130448: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x130448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13044c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x13044cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x130450: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x130450u;
    SET_GPR_U32(ctx, 31, 0x130458u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x130450u, 0x130458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130458u;
label_130458:
    // 0x130458: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x130458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13045c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x13045cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x130460: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x130460u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x130464: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x130464u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x130468: 0x51438  dsll        $v0, $a1, 16
    ctx->pc = 0x130468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 16);
    // 0x13046c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x13046cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x130470: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x130470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x130474: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x130474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x130478: 0x34420106  ori         $v0, $v0, 0x106
    ctx->pc = 0x130478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x13047c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x13047cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x130480: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x130480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x130484: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x130484u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x130488: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x130488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13048c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x13048cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x130490: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x130490u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x130494: 0x24670540  addiu       $a3, $v1, 0x540
    ctx->pc = 0x130494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1344));
    // 0x130498: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x130498u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13049c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x13049Cu;
    SET_GPR_U32(ctx, 31, 0x1304A4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x13049Cu, 0x1304A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1304A4u;
label_1304a4:
    // 0x1304a4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1304a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1304a8: 0x8c500130  lw          $s0, 0x130($v0)
    ctx->pc = 0x1304a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1304ac: 0x3c06469c  lui         $a2, 0x469C
    ctx->pc = 0x1304acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18076 << 16));
    // 0x1304b0: 0x34c24000  ori         $v0, $a2, 0x4000
    ctx->pc = 0x1304b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
    // 0x1304b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1304b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1304b8: 0x24040515  addiu       $a0, $zero, 0x515
    ctx->pc = 0x1304b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1301));
    // 0x1304bc: 0x26050570  addiu       $a1, $s0, 0x570
    ctx->pc = 0x1304bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1392));
    // 0x1304c0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1304c0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1304c4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1304C4u;
    SET_GPR_U32(ctx, 31, 0x1304CCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1304C4u, 0x1304CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1304CCu;
label_1304cc:
    // 0x1304cc: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1304ccu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1304d0u;
}
