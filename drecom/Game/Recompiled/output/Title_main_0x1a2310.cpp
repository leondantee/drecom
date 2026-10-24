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

// Function: Title_main
// Address: 0x1a2310 - 0x1a249c
void Title_main_0x1a2310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Title_main_0x1a2310");
#endif

    switch (ctx->pc) {
        case 0x1a2398u: goto label_1a2398;
        case 0x1a23c8u: goto label_1a23c8;
        case 0x1a2408u: goto label_1a2408;
        case 0x1a2430u: goto label_1a2430;
        case 0x1a2454u: goto label_1a2454;
        case 0x1a2480u: goto label_1a2480;
        case 0x1a248cu: goto label_1a248c;
        default: break;
    }

    ctx->pc = 0x1a2310u;

    // 0x1a2310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a2310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a2314: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1a2314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1a2318: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1a2318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1a231c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a231cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a2320: 0x94220080  lhu         $v0, 0x80($at)
    ctx->pc = 0x1a2320u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D0080u));
    // 0x1a2324: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A2324u;
    {
        const bool branch_taken_0x1a2324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2324) {
            ctx->pc = 0x1A233Cu;
            goto label_1a233c;
        }
    }
    ctx->pc = 0x1A232Cu;
    // 0x1a232c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1a232cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a2330: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x1a2330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1a2334: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1a2334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a2338: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x1a2338u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
label_1a233c:
    // 0x1a233c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1a233cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a2340: 0x9042000a  lbu         $v0, 0xA($v0)
    ctx->pc = 0x1a2340u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x1a2344: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1a2344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a2348: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a2348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a234c: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1A234Cu;
    {
        const bool branch_taken_0x1a234c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a234c) {
            ctx->pc = 0x1A23BCu;
            goto label_1a23bc;
        }
    }
    ctx->pc = 0x1A2354u;
    // 0x1a2354: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A2354u;
    {
        const bool branch_taken_0x1a2354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2354) {
            ctx->pc = 0x1A2364u;
            goto label_1a2364;
        }
    }
    ctx->pc = 0x1A235Cu;
    // 0x1a235c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1A235Cu;
    {
        const bool branch_taken_0x1a235c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a235c) {
            ctx->pc = 0x1A2460u;
            goto label_1a2460;
        }
    }
    ctx->pc = 0x1A2364u;
label_1a2364:
    // 0x1a2364: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1a2364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a2368: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1a2368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1a236c: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1A236Cu;
    {
        const bool branch_taken_0x1a236c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a236c) {
            ctx->pc = 0x1A2460u;
            goto label_1a2460;
        }
    }
    ctx->pc = 0x1A2374u;
    // 0x1a2374: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a2374u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2378: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a2378u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a237c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a237cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a2380: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1a2380u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2384: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1a2384u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2388: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x1a2388u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x1a238c: 0x240a000f  addiu       $t2, $zero, 0xF
    ctx->pc = 0x1a238cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1a2390: 0xc059190  jal         func_164640
    ctx->pc = 0x1A2390u;
    SET_GPR_U32(ctx, 31, 0x1A2398u);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x1A2390u, 0x1A2398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2398u;
label_1a2398:
    // 0x1a2398: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a2398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a239c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1a239cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a23a0: 0xa0430009  sb          $v1, 0x9($v0)
    ctx->pc = 0x1a23a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a23a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1a23a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a23a8: 0x9062000a  lbu         $v0, 0xA($v1)
    ctx->pc = 0x1a23a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x1a23ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a23acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a23b0: 0xa062000a  sb          $v0, 0xA($v1)
    ctx->pc = 0x1a23b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a23b4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1A23B4u;
    {
        const bool branch_taken_0x1a23b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a23b4) {
            ctx->pc = 0x1A2460u;
            goto label_1a2460;
        }
    }
    ctx->pc = 0x1A23BCu;
label_1a23bc:
    // 0x1a23bc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a23bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a23c0: 0xc0592ec  jal         func_164BB0
    ctx->pc = 0x1A23C0u;
    SET_GPR_U32(ctx, 31, 0x1A23C8u);
    ctx->pc = 0x164BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164BB0u, 0x1A23C0u, 0x1A23C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A23C8u;
label_1a23c8:
    // 0x1a23c8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1a23c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1a23cc: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1A23CCu;
    {
        const bool branch_taken_0x1a23cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a23cc) {
            ctx->pc = 0x1A2460u;
            goto label_1a2460;
        }
    }
    ctx->pc = 0x1A23D4u;
    // 0x1a23d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1a23d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a23d8: 0x90420007  lbu         $v0, 0x7($v0)
    ctx->pc = 0x1a23d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
    // 0x1a23dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a23dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a23e0: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x1a23e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1a23e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A23E4u;
    {
        const bool branch_taken_0x1a23e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a23e4) {
            ctx->pc = 0x1A23F4u;
            goto label_1a23f4;
        }
    }
    ctx->pc = 0x1A23ECu;
    // 0x1a23ec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1a23ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a23f0: 0xa0400007  sb          $zero, 0x7($v0)
    ctx->pc = 0x1a23f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7), (uint8_t)GPR_U32(ctx, 0));
label_1a23f4:
    // 0x1a23f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1a23f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a23f8: 0x90420007  lbu         $v0, 0x7($v0)
    ctx->pc = 0x1a23f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
    // 0x1a23fc: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1a23fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a2400: 0xc076198  jal         func_1D8660
    ctx->pc = 0x1A2400u;
    SET_GPR_U32(ctx, 31, 0x1A2408u);
    ctx->pc = 0x1D8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8660u, 0x1A2400u, 0x1A2408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2408u;
label_1a2408:
    // 0x1a2408: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1a2408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a240c: 0x90620007  lbu         $v0, 0x7($v1)
    ctx->pc = 0x1a240cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 7)));
    // 0x1a2410: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a2410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a2414: 0xa0620007  sb          $v0, 0x7($v1)
    ctx->pc = 0x1a2414u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a2418: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a2418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a241c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a241cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2420: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1a2420u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2424: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1a2424u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2428: 0xc0590ec  jal         func_1643B0
    ctx->pc = 0x1A2428u;
    SET_GPR_U32(ctx, 31, 0x1A2430u);
    ctx->pc = 0x1643B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1643B0u, 0x1A2428u, 0x1A2430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2430u;
label_1a2430:
    // 0x1a2430: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a2430u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2434: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a2434u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2438: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1a2438u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a243c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1a243cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a2440: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x1a2440u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x1a2444: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x1a2444u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x1a2448: 0x240a0005  addiu       $t2, $zero, 0x5
    ctx->pc = 0x1a2448u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a244c: 0xc059190  jal         func_164640
    ctx->pc = 0x1A244Cu;
    SET_GPR_U32(ctx, 31, 0x1A2454u);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x1A244Cu, 0x1A2454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2454u;
label_1a2454:
    // 0x1a2454: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a2454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a2458: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1a2458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a245c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1a245cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_1a2460:
    // 0x1a2460: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1a2460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a2464: 0x90420009  lbu         $v0, 0x9($v0)
    ctx->pc = 0x1a2464u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x1a2468: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a2468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a246c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A246Cu;
    {
        const bool branch_taken_0x1a246c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a246c) {
            ctx->pc = 0x1A2480u;
            goto label_1a2480;
        }
    }
    ctx->pc = 0x1A2474u;
    // 0x1a2474: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1a2474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a2478: 0xc068928  jal         func_1A24A0
    ctx->pc = 0x1A2478u;
    SET_GPR_U32(ctx, 31, 0x1A2480u);
    ctx->pc = 0x1A24A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A24A0u, 0x1A2478u, 0x1A2480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2480u;
label_1a2480:
    // 0x1a2480: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1a2480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a2484: 0xc068a24  jal         func_1A2890
    ctx->pc = 0x1A2484u;
    SET_GPR_U32(ctx, 31, 0x1A248Cu);
    ctx->pc = 0x1A2890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2890u, 0x1A2484u, 0x1A248Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A248Cu;
label_1a248c:
    // 0x1a248c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1a248cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2490: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1a2490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a2494: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A249Cu;
}
