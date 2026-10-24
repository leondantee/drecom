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

// Function: caseD_2
// Address: 0x35124c - 0x3515a0
void caseD_2_0x35124c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x35124c");
#endif

    switch (ctx->pc) {
        case 0x351294u: goto label_351294;
        case 0x3512acu: goto label_3512ac;
        case 0x3512c0u: goto label_3512c0;
        case 0x3512d8u: goto label_3512d8;
        case 0x3512f0u: goto label_3512f0;
        case 0x35131cu: goto label_35131c;
        case 0x3514f8u: goto label_3514f8;
        case 0x35151cu: goto label_35151c;
        case 0x351540u: goto label_351540;
        case 0x351564u: goto label_351564;
        case 0x351588u: goto label_351588;
        default: break;
    }

    ctx->pc = 0x35124cu;

    // 0x35124c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35124cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x351250: 0x0  nop
    ctx->pc = 0x351250u;
    // NOP
    // 0x351254: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x351254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x351258: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x351258u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35125c: 0x0  nop
    ctx->pc = 0x35125cu;
    // NOP
    // 0x351260: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x351260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x351264: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x351264u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x351268: 0x0  nop
    ctx->pc = 0x351268u;
    // NOP
    // 0x35126c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x35126cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x351270: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x351270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x351274: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x351274u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x351278: 0x0  nop
    ctx->pc = 0x351278u;
    // NOP
    // 0x35127c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x35127cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x351280: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x351280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x351284: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x351284u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x351288: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x351288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x35128c: 0xc0d58d4  jal         func_356350
    ctx->pc = 0x35128Cu;
    SET_GPR_U32(ctx, 31, 0x351294u);
    ctx->pc = 0x356350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356350u, 0x35128Cu, 0x351294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351294u;
label_351294:
    // 0x351294: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x351294u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x351298: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x351298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x35129c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x35129cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3512a0: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3512a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3512a4: 0xc0d58d4  jal         func_356350
    ctx->pc = 0x3512A4u;
    SET_GPR_U32(ctx, 31, 0x3512ACu);
    ctx->pc = 0x356350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356350u, 0x3512A4u, 0x3512ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3512ACu;
label_3512ac:
    // 0x3512ac: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3512acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3512b0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3512b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3512b4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3512b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3512b8: 0xc0d58d4  jal         func_356350
    ctx->pc = 0x3512B8u;
    SET_GPR_U32(ctx, 31, 0x3512C0u);
    ctx->pc = 0x356350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356350u, 0x3512B8u, 0x3512C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3512C0u;
label_3512c0:
    // 0x3512c0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3512c0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3512c4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3512c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3512c8: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x3512c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x3512cc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3512ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3512d0: 0xc0d58d4  jal         func_356350
    ctx->pc = 0x3512D0u;
    SET_GPR_U32(ctx, 31, 0x3512D8u);
    ctx->pc = 0x356350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356350u, 0x3512D0u, 0x3512D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3512D8u;
label_3512d8:
    // 0x3512d8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3512d8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3512dc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3512dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3512e0: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x3512e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x3512e4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3512e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3512e8: 0xc0d5c00  jal         func_357000
    ctx->pc = 0x3512E8u;
    SET_GPR_U32(ctx, 31, 0x3512F0u);
    ctx->pc = 0x357000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357000u, 0x3512E8u, 0x3512F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3512F0u;
label_3512f0:
    // 0x3512f0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3512f0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3512f4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3512f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3512f8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3512f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3512fc: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x3512fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x351300: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x351300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x351304: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x351304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x351308: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x351308u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x35130c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x35130cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x351310: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x351310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x351314: 0xc0d58b0  jal         func_3562C0
    ctx->pc = 0x351314u;
    SET_GPR_U32(ctx, 31, 0x35131Cu);
    ctx->pc = 0x3562C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3562C0u, 0x351314u, 0x35131Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35131Cu;
label_35131c:
    // 0x35131c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x35131cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x351320: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x351320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x351324: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x351324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x351328: 0x90a300c4  lbu         $v1, 0xC4($a1)
    ctx->pc = 0x351328u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x35132c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x35132cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x351330: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x351330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x351334: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x351334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x351338: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x351338u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x35133c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x35133cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x351340: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x351340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x351344: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x351344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x351348: 0x8ca4007c  lw          $a0, 0x7C($a1)
    ctx->pc = 0x351348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
    // 0x35134c: 0x2403fff8  addiu       $v1, $zero, -0x8
    ctx->pc = 0x35134cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x351350: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x351350u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x351354: 0xaca4007c  sw          $a0, 0x7C($a1)
    ctx->pc = 0x351354u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 124), GPR_U32(ctx, 4));
    // 0x351358: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x351358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x35135c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35135cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x351360: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x351360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x351364: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x351364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x351368: 0x906300c4  lbu         $v1, 0xC4($v1)
    ctx->pc = 0x351368u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x35136c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x35136cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x351370: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x351370u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x351374: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x351374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x351378: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x351378u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x35137c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x35137cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x351380: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x351380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x351384: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x351384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x351388: 0xe4800070  swc1        $f0, 0x70($a0)
    ctx->pc = 0x351388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x35138c: 0x3c03435c  lui         $v1, 0x435C
    ctx->pc = 0x35138cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17244 << 16));
    // 0x351390: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x351390u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x351394: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x351394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x351398: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x351398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35139c: 0x906300c4  lbu         $v1, 0xC4($v1)
    ctx->pc = 0x35139cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x3513a0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3513a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3513a4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x3513a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3513a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3513a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3513ac: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x3513acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3513b0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3513b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3513b4: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x3513b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x3513b8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3513b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3513bc: 0xe4600074  swc1        $f0, 0x74($v1)
    ctx->pc = 0x3513bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
    // 0x3513c0: 0x3c044310  lui         $a0, 0x4310
    ctx->pc = 0x3513c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17168 << 16));
    // 0x3513c4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3513c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3513c8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3513c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3513cc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3513ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3513d0: 0x906300c4  lbu         $v1, 0xC4($v1)
    ctx->pc = 0x3513d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x3513d4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3513d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3513d8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x3513d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3513dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3513dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3513e0: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x3513e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3513e4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3513e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3513e8: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x3513e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x3513ec: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3513ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3513f0: 0xe4600078  swc1        $f0, 0x78($v1)
    ctx->pc = 0x3513f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
    // 0x3513f4: 0x3c033f48  lui         $v1, 0x3F48
    ctx->pc = 0x3513f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16200 << 16));
    // 0x3513f8: 0x3464c8c9  ori         $a0, $v1, 0xC8C9
    ctx->pc = 0x3513f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51401);
    // 0x3513fc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3513fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x351400: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x351400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x351404: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x351404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x351408: 0x906300c4  lbu         $v1, 0xC4($v1)
    ctx->pc = 0x351408u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x35140c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x35140cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x351410: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x351410u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x351414: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x351414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x351418: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x351418u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x35141c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35141cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x351420: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x351420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x351424: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x351424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x351428: 0xe4600080  swc1        $f0, 0x80($v1)
    ctx->pc = 0x351428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
    // 0x35142c: 0x3c033f5c  lui         $v1, 0x3F5C
    ctx->pc = 0x35142cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16220 << 16));
    // 0x351430: 0x3464dcdd  ori         $a0, $v1, 0xDCDD
    ctx->pc = 0x351430u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)56541);
    // 0x351434: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x351434u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x351438: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x351438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x35143c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x35143cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x351440: 0x906300c4  lbu         $v1, 0xC4($v1)
    ctx->pc = 0x351440u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x351444: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x351444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x351448: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x351448u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x35144c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x35144cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x351450: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x351450u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x351454: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x351454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x351458: 0x2471bd00  addiu       $s1, $v1, -0x4300
    ctx->pc = 0x351458u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x35145c: 0x2249021  addu        $s2, $s1, $a0
    ctx->pc = 0x35145cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x351460: 0xe6400084  swc1        $f0, 0x84($s2)
    ctx->pc = 0x351460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 132), bits); }
    // 0x351464: 0x3c033f10  lui         $v1, 0x3F10
    ctx->pc = 0x351464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16144 << 16));
    // 0x351468: 0x34639091  ori         $v1, $v1, 0x9091
    ctx->pc = 0x351468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)37009);
    // 0x35146c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35146cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x351470: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x351470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x351474: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x351474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x351478: 0x906300c4  lbu         $v1, 0xC4($v1)
    ctx->pc = 0x351478u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x35147c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x35147cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x351480: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x351480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x351484: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x351484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x351488: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x351488u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x35148c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x35148cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x351490: 0x2462bd00  addiu       $v0, $v1, -0x4300
    ctx->pc = 0x351490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x351494: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x351494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x351498: 0xe4400088  swc1        $f0, 0x88($v0)
    ctx->pc = 0x351498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
    // 0x35149c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35149cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3514a0: 0x0  nop
    ctx->pc = 0x3514a0u;
    // NOP
    // 0x3514a4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3514a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3514a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3514a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3514ac: 0x0  nop
    ctx->pc = 0x3514acu;
    // NOP
    // 0x3514b0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x3514b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x3514b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3514b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3514b8: 0x0  nop
    ctx->pc = 0x3514b8u;
    // NOP
    // 0x3514bc: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x3514bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x3514c0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x3514c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x3514c4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3514c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3514c8: 0x0  nop
    ctx->pc = 0x3514c8u;
    // NOP
    // 0x3514cc: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x3514ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x3514d0: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x3514d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3514d4: 0x24c21330  addiu       $v0, $a2, 0x1330
    ctx->pc = 0x3514d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x3514d8: 0x904400c4  lbu         $a0, 0xC4($v0)
    ctx->pc = 0x3514d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x3514dc: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x3514dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3514e0: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x3514e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3514e4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x3514e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x3514e8: 0x8cc50130  lw          $a1, 0x130($a2)
    ctx->pc = 0x3514e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
    // 0x3514ec: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3514ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3514f0: 0xc05db20  jal         func_176C80
    ctx->pc = 0x3514F0u;
    SET_GPR_U32(ctx, 31, 0x3514F8u);
    ctx->pc = 0x176C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C80u, 0x3514F0u, 0x3514F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3514F8u;
label_3514f8:
    // 0x3514f8: 0x3c06457a  lui         $a2, 0x457A
    ctx->pc = 0x3514f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17786 << 16));
    // 0x3514fc: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x3514fcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x351500: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x351500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x351504: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x351504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x351508: 0x908500c4  lbu         $a1, 0xC4($a0)
    ctx->pc = 0x351508u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x35150c: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x35150cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x351510: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x351510u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x351514: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x351514u;
    SET_GPR_U32(ctx, 31, 0x35151Cu);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x351514u, 0x35151Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35151Cu;
label_35151c:
    // 0x35151c: 0x3c05463b  lui         $a1, 0x463B
    ctx->pc = 0x35151cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17979 << 16));
    // 0x351520: 0x34a48000  ori         $a0, $a1, 0x8000
    ctx->pc = 0x351520u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x351524: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x351524u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x351528: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x351528u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x35152c: 0x24c21330  addiu       $v0, $a2, 0x1330
    ctx->pc = 0x35152cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x351530: 0x904500c4  lbu         $a1, 0xC4($v0)
    ctx->pc = 0x351530u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x351534: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x351534u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x351538: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x351538u;
    SET_GPR_U32(ctx, 31, 0x351540u);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x351538u, 0x351540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351540u;
label_351540:
    // 0x351540: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x351540u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x351544: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x351544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x351548: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x351548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x35154c: 0x24670180  addiu       $a3, $v1, 0x180
    ctx->pc = 0x35154cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x351550: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x351550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x351554: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x351554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x351558: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x351558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x35155c: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x35155Cu;
    SET_GPR_U32(ctx, 31, 0x351564u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x35155Cu, 0x351564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351564u;
label_351564:
    // 0x351564: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x351564u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x351568: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x351568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x35156c: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x35156cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x351570: 0x24670180  addiu       $a3, $v1, 0x180
    ctx->pc = 0x351570u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x351574: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x351574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x351578: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x351578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x35157c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x35157cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x351580: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x351580u;
    SET_GPR_U32(ctx, 31, 0x351588u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x351580u, 0x351588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351588u;
label_351588:
    // 0x351588: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x351588u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x35158c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x35158cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x351590: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x351590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x351594: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x351594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x351598: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x351598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x35159c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x35159cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x3515a0u;
}
