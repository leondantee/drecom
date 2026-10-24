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

// Function: entry_00344630
// Address: 0x344630 - 0x344834
void entry_00344630_0x344630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00344630_0x344630");
#endif

    switch (ctx->pc) {
        case 0x344698u: goto label_344698;
        case 0x344714u: goto label_344714;
        case 0x344734u: goto label_344734;
        case 0x3447ccu: goto label_3447cc;
        case 0x3447fcu: goto label_3447fc;
        default: break;
    }

    ctx->pc = 0x344630u;

    // 0x344630: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x344630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x344634: 0x24440ae8  addiu       $a0, $v0, 0xAE8
    ctx->pc = 0x344634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x344638: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x344638u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x34463c: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x34463cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x344640: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x344640u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x344644: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x344644u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x344648: 0x24830ae8  addiu       $v1, $a0, 0xAE8
    ctx->pc = 0x344648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 2792));
    // 0x34464c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34464cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x344650: 0x2411fff0  addiu       $s1, $zero, -0x10
    ctx->pc = 0x344650u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x344654: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x344654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x344658: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x344658u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x34465c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x34465cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x344660: 0x8c230ae8  lw          $v1, 0xAE8($at)
    ctx->pc = 0x344660u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x344664: 0xafa30134  sw          $v1, 0x134($sp)
    ctx->pc = 0x344664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 3));
    // 0x344668: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x344668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x34466c: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x34466cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x344670: 0x248301b0  addiu       $v1, $a0, 0x1B0
    ctx->pc = 0x344670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    // 0x344674: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x344674u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x344678: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x344678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x34467c: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x34467cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
    // 0x344680: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x344680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x344684: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x344684u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x344688: 0x8fb10134  lw          $s1, 0x134($sp)
    ctx->pc = 0x344688u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x34468c: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x34468cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x344690: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x344690u;
    SET_GPR_U32(ctx, 31, 0x344698u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x344690u, 0x344698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344698u;
label_344698:
    // 0x344698: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x344698u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34469c: 0xafa60134  sw          $a2, 0x134($sp)
    ctx->pc = 0x34469cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 6));
    // 0x3446a0: 0x8fa40134  lw          $a0, 0x134($sp)
    ctx->pc = 0x3446a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x3446a4: 0x3c05005d  lui         $a1, 0x5D
    ctx->pc = 0x3446a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)93 << 16));
    // 0x3446a8: 0x24a20ae8  addiu       $v0, $a1, 0xAE8
    ctx->pc = 0x3446a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 2792));
    // 0x3446ac: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3446acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x3446b0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x3446b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x3446b4: 0x24620ae8  addiu       $v0, $v1, 0xAE8
    ctx->pc = 0x3446b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x3446b8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3446b8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x3446bc: 0x24b1000f  addiu       $s1, $a1, 0xF
    ctx->pc = 0x3446bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x3446c0: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x3446c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x3446c4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x3446c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x3446c8: 0x24420ae8  addiu       $v0, $v0, 0xAE8
    ctx->pc = 0x3446c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x3446cc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x3446ccu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x3446d0: 0x2404fff0  addiu       $a0, $zero, -0x10
    ctx->pc = 0x3446d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x3446d4: 0xc42824  and         $a1, $a2, $a0
    ctx->pc = 0x3446d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x3446d8: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3446d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x3446dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3446dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x3446e0: 0x8c220ae8  lw          $v0, 0xAE8($at)
    ctx->pc = 0x3446e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x3446e4: 0xafa20134  sw          $v0, 0x134($sp)
    ctx->pc = 0x3446e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
    // 0x3446e8: 0x8fa50158  lw          $a1, 0x158($sp)
    ctx->pc = 0x3446e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x3446ec: 0x8cb10058  lw          $s1, 0x58($a1)
    ctx->pc = 0x3446ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x3446f0: 0x26220360  addiu       $v0, $s1, 0x360
    ctx->pc = 0x3446f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 864));
    // 0x3446f4: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x3446f4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3446f8: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x3446f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x3446fc: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x3446fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
    // 0x344700: 0x8fa3013c  lw          $v1, 0x13C($sp)
    ctx->pc = 0x344700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x344704: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x344704u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x344708: 0x8fa50134  lw          $a1, 0x134($sp)
    ctx->pc = 0x344708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x34470c: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x34470Cu;
    SET_GPR_U32(ctx, 31, 0x344714u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x34470Cu, 0x344714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344714u;
label_344714:
    // 0x344714: 0xafa20134  sw          $v0, 0x134($sp)
    ctx->pc = 0x344714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
    // 0x344718: 0x8fa30134  lw          $v1, 0x134($sp)
    ctx->pc = 0x344718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x34471c: 0x3c11005d  lui         $s1, 0x5D
    ctx->pc = 0x34471cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)93 << 16));
    // 0x344720: 0x26220ae8  addiu       $v0, $s1, 0xAE8
    ctx->pc = 0x344720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2792));
    // 0x344724: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x344724u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x344728: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x344728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x34472c: 0xc05da88  jal         func_176A20
    ctx->pc = 0x34472Cu;
    SET_GPR_U32(ctx, 31, 0x344734u);
    ctx->pc = 0x176A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176A20u, 0x34472Cu, 0x344734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344734u;
label_344734:
    // 0x344734: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x344734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x344738: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x344738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x34473c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34473cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x344740: 0xa04300c4  sb          $v1, 0xC4($v0)
    ctx->pc = 0x344740u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 196), (uint8_t)GPR_U32(ctx, 3));
    // 0x344744: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x344744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x344748: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x344748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34474c: 0x906200c4  lbu         $v0, 0xC4($v1)
    ctx->pc = 0x34474cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x344750: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x344750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x344754: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x344754u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x344758: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x344758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x34475c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x34475cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x344760: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x344760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x344764: 0x2451bd00  addiu       $s1, $v0, -0x4300
    ctx->pc = 0x344764u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x344768: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x344768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x34476c: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x34476cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x344770: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x344770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x344774: 0xac62007c  sw          $v0, 0x7C($v1)
    ctx->pc = 0x344774u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 124), GPR_U32(ctx, 2));
    // 0x344778: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x344778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x34477c: 0x946210a4  lhu         $v0, 0x10A4($v1)
    ctx->pc = 0x34477cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4260)));
    // 0x344780: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x344780u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x344784: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x344784u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x344788: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x344788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x34478c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x34478cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x344790: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x344790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x344794: 0x24455ac0  addiu       $a1, $v0, 0x5AC0
    ctx->pc = 0x344794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 23232));
    // 0x344798: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x344798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x34479c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x34479cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x3447a0: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x3447a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x3447a4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x3447a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3447a8: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x3447a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x3447ac: 0x27b10110  addiu       $s1, $sp, 0x110
    ctx->pc = 0x3447acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x3447b0: 0x72203e28  paddub      $a3, $s1, $zero
    ctx->pc = 0x3447b0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x3447b4: 0x27a80120  addiu       $t0, $sp, 0x120
    ctx->pc = 0x3447b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x3447b8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3447b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3447bc: 0x70005628  paddub      $t2, $zero, $zero
    ctx->pc = 0x3447bcu;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3447c0: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x3447c0u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3447c4: 0xc05acdc  jal         func_16B370
    ctx->pc = 0x3447C4u;
    SET_GPR_U32(ctx, 31, 0x3447CCu);
    ctx->pc = 0x16B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B370u, 0x3447C4u, 0x3447CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3447CCu;
label_3447cc:
    // 0x3447cc: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x3447ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x3447d0: 0x946410a4  lhu         $a0, 0x10A4($v1)
    ctx->pc = 0x3447d0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4260)));
    // 0x3447d4: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x3447d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3447d8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3447d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3447dc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3447dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3447e0: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x3447e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3447e4: 0x3c100089  lui         $s0, 0x89
    ctx->pc = 0x3447e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)137 << 16));
    // 0x3447e8: 0x26055ac0  addiu       $a1, $s0, 0x5AC0
    ctx->pc = 0x3447e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 23232));
    // 0x3447ec: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x3447ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3447f0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3447f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3447f4: 0xc05ae10  jal         func_16B840
    ctx->pc = 0x3447F4u;
    SET_GPR_U32(ctx, 31, 0x3447FCu);
    ctx->pc = 0x16B840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B840u, 0x3447F4u, 0x3447FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3447FCu;
label_3447fc:
    // 0x3447fc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x3447fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x344800: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x344800u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x344804: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x344804u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x344808: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x344808u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x34480c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x34480cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x344810: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x344810u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x344814: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x344814u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x344818: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x344818u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34481c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34481cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x344820: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x344820u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x344824: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x344824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344828: 0x27bd0160  addiu       $sp, $sp, 0x160
    ctx->pc = 0x344828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x34482c: 0x3e00008  jr          $ra
    ctx->pc = 0x34482Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34482Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344834u;
}
