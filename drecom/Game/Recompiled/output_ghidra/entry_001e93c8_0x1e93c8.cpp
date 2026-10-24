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

// Function: entry_001e93c8
// Address: 0x1e93c8 - 0x1e9588
void entry_001e93c8_0x1e93c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e93c8_0x1e93c8");
#endif

    switch (ctx->pc) {
        case 0x1e9418u: goto label_1e9418;
        case 0x1e9450u: goto label_1e9450;
        case 0x1e9478u: goto label_1e9478;
        case 0x1e94d4u: goto label_1e94d4;
        case 0x1e9500u: goto label_1e9500;
        case 0x1e951cu: goto label_1e951c;
        case 0x1e9538u: goto label_1e9538;
        case 0x1e9550u: goto label_1e9550;
        case 0x1e956cu: goto label_1e956c;
        default: break;
    }

    ctx->pc = 0x1e93c8u;

    // 0x1e93c8: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e93c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e93cc: 0x846311f2  lh          $v1, 0x11F2($v1)
    ctx->pc = 0x1e93ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4594)));
    // 0x1e93d0: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x1e93d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1e93d4: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1e93d4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1e93d8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1e93d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e93dc: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x1e93dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x1e93e0: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x1e93e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
    // 0x1e93e4: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x1e93e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1e93e8: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x1e93e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x1e93ec: 0x0  nop
    ctx->pc = 0x1e93ecu;
    // NOP
    // 0x1e93f0: 0x1810  mfhi        $v1
    ctx->pc = 0x1e93f0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1e93f4: 0x32043  sra         $a0, $v1, 1
    ctx->pc = 0x1e93f4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1e93f8: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x1e93f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1e93fc: 0x61c3c  dsll32      $v1, $a2, 16
    ctx->pc = 0x1e93fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 16));
    // 0x1e9400: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1e9400u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1e9404: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e9404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9408: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x1e9408u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1e940c: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x1e940cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e9410: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x1E9410u;
    SET_GPR_U32(ctx, 31, 0x1E9418u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x1E9410u, 0x1E9418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9418u;
label_1e9418:
    // 0x1e9418: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e9418u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e941c: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e941cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9420: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1e9420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1e9424: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x1e9424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1e9428: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x1e9428u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x1e942c: 0x643024  and         $a2, $v1, $a0
    ctx->pc = 0x1e942cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1e9430: 0x10c00098  beqz        $a2, . + 4 + (0x98 << 2)
    ctx->pc = 0x1E9430u;
    {
        const bool branch_taken_0x1e9430 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9430) {
            ctx->pc = 0x1E9694u;
            return;
        }
    }
    ctx->pc = 0x1E9438u;
    // 0x1e9438: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e943c: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e943cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9440: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x1e9440u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1e9444: 0x846611f2  lh          $a2, 0x11F2($v1)
    ctx->pc = 0x1e9444u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4594)));
    // 0x1e9448: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x1E9448u;
    SET_GPR_U32(ctx, 31, 0x1E9450u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x1E9448u, 0x1E9450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9450u;
label_1e9450:
    // 0x1e9450: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e9450u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e9454: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e9454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9458: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x1e9458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e945c: 0x3c033f86  lui         $v1, 0x3F86
    ctx->pc = 0x1e945cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16262 << 16));
    // 0x1e9460: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x1e9460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
    // 0x1e9464: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e9464u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e9468: 0x0  nop
    ctx->pc = 0x1e9468u;
    // NOP
    // 0x1e946c: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1e946cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e9470: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1E9470u;
    SET_GPR_U32(ctx, 31, 0x1E9478u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1E9470u, 0x1E9478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9478u;
label_1e9478:
    // 0x1e9478: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e9478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e947c: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x1e947cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    // 0x1e9480: 0x8fa60198  lw          $a2, 0x198($sp)
    ctx->pc = 0x1e9480u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9484: 0xc4c11288  lwc1        $f1, 0x1288($a2)
    ctx->pc = 0x1e9484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e9488: 0x3c044448  lui         $a0, 0x4448
    ctx->pc = 0x1e9488u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17480 << 16));
    // 0x1e948c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1e948cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e9490: 0x0  nop
    ctx->pc = 0x1e9490u;
    // NOP
    // 0x1e9494: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e9494u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e9498: 0x0  nop
    ctx->pc = 0x1e9498u;
    // NOP
    // 0x1e949c: 0x4500003a  bc1f        . + 4 + (0x3A << 2)
    ctx->pc = 0x1E949Cu;
    {
        const bool branch_taken_0x1e949c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e949c) {
            ctx->pc = 0x1E9588u;
            return;
        }
    }
    ctx->pc = 0x1E94A4u;
    // 0x1e94a4: 0x8fa60198  lw          $a2, 0x198($sp)
    ctx->pc = 0x1e94a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e94a8: 0x8fa50198  lw          $a1, 0x198($sp)
    ctx->pc = 0x1e94a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e94ac: 0x3c043f49  lui         $a0, 0x3F49
    ctx->pc = 0x1e94acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16201 << 16));
    // 0x1e94b0: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x1e94b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x1e94b4: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1e94b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1e94b8: 0x24c60120  addiu       $a2, $a2, 0x120
    ctx->pc = 0x1e94b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
    // 0x1e94bc: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1e94bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e94c0: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x1e94c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e94c4: 0x26620120  addiu       $v0, $s3, 0x120
    ctx->pc = 0x1e94c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 288));
    // 0x1e94c8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1e94c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e94cc: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x1E94CCu;
    SET_GPR_U32(ctx, 31, 0x1E94D4u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x1E94CCu, 0x1E94D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E94D4u;
label_1e94d4:
    // 0x1e94d4: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1E94D4u;
    {
        const bool branch_taken_0x1e94d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e94d4) {
            ctx->pc = 0x1E9588u;
            return;
        }
    }
    ctx->pc = 0x1E94DCu;
    // 0x1e94dc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1e94dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e94e0: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e94e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e94e4: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x1e94e4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x1e94e8: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e94e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e94ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1e94ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e94f0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1e94f0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e94f4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e94f4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e94f8: 0xc0c7a24  jal         func_31E890
    ctx->pc = 0x1E94F8u;
    SET_GPR_U32(ctx, 31, 0x1E9500u);
    ctx->pc = 0x31E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E890u, 0x1E94F8u, 0x1E9500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9500u;
label_1e9500:
    // 0x1e9500: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e9500u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e9504: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e9504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9508: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1e9508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1e950c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1e950cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e9510: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e9510u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e9514: 0xc0c7a24  jal         func_31E890
    ctx->pc = 0x1E9514u;
    SET_GPR_U32(ctx, 31, 0x1E951Cu);
    ctx->pc = 0x31E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E890u, 0x1E9514u, 0x1E951Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E951Cu;
label_1e951c:
    // 0x1e951c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e951cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e9520: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e9520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9524: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1e9524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1e9528: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1e9528u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e952c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e952cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e9530: 0xc0c7a24  jal         func_31E890
    ctx->pc = 0x1E9530u;
    SET_GPR_U32(ctx, 31, 0x1E9538u);
    ctx->pc = 0x31E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E890u, 0x1E9530u, 0x1E9538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9538u;
label_1e9538:
    // 0x1e9538: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e9538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e953c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1e953cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1e9540: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1e9540u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e9544: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e9544u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e9548: 0xc0c7a24  jal         func_31E890
    ctx->pc = 0x1E9548u;
    SET_GPR_U32(ctx, 31, 0x1E9550u);
    ctx->pc = 0x31E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E890u, 0x1E9548u, 0x1E9550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9550u;
label_1e9550:
    // 0x1e9550: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e9550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9554: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1e9554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1e9558: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1e9558u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e955c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1e955cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e9560: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e9560u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e9564: 0xc0c7a24  jal         func_31E890
    ctx->pc = 0x1E9564u;
    SET_GPR_U32(ctx, 31, 0x1E956Cu);
    ctx->pc = 0x31E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E890u, 0x1E9564u, 0x1E956Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E956Cu;
label_1e956c:
    // 0x1e956c: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e956cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9570: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e9570u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e9574: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1e9574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1e9578: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1e9578u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e957c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e957cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e9580: 0xc0c7a24  jal         func_31E890
    ctx->pc = 0x1E9580u;
    SET_GPR_U32(ctx, 31, 0x1E9588u);
    ctx->pc = 0x31E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E890u, 0x1E9580u, 0x1E9588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9588u;
}
