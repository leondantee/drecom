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

// Function: entry_003565d8
// Address: 0x3565d8 - 0x3566ec
void entry_003565d8_0x3565d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003565d8_0x3565d8");
#endif

    switch (ctx->pc) {
        case 0x356624u: goto label_356624;
        case 0x3566c0u: goto label_3566c0;
        default: break;
    }

    ctx->pc = 0x3565d8u;

    // 0x3565d8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x3565d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x3565dc: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x3565DCu;
    {
        const bool branch_taken_0x3565dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3565dc) {
            ctx->pc = 0x35671Cu;
            return;
        }
    }
    ctx->pc = 0x3565E4u;
    // 0x3565e4: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x3565e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x3565e8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x3565e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3565ec: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x3565ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3565f0: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x3565f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x3565f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3565f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3565f8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x3565f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3565fc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3565fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x356600: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x356600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x356604: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x356604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x356608: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x356608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x35660c: 0x833824  and         $a3, $a0, $v1
    ctx->pc = 0x35660cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x356610: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x356610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x356614: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x356614u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x356618: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x356618u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x35661c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x35661Cu;
    SET_GPR_U32(ctx, 31, 0x356624u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x35661Cu, 0x356624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356624u;
label_356624:
    // 0x356624: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x356624u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x356628: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x35662c: 0xac23a618  sw          $v1, -0x59E8($at)
    ctx->pc = 0x35662cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x356630: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356634: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356634u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356638: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x356638u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x35663c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x35663cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x356640: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356644: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356644u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356648: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x356648u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x35664c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x35664cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356650: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356650u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356654: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x356654u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x356658: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x356658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35665c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x35665cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356660: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356660u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356664: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x356664u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x356668: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x35666c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x35666cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356670: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x356670u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x356674: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356678: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356678u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x35667c: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x35667cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x356680: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356684: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356684u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356688: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x356688u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x35668c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x35668cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x356690: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x356690u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x356694: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x356694u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x356698: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x356698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x35669c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x35669cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3566a0: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x3566a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x3566a4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3566a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3566a8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x3566a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x3566ac: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x3566acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x3566b0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3566b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3566b4: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x3566b4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x3566b8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3566B8u;
    SET_GPR_U32(ctx, 31, 0x3566C0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3566B8u, 0x3566C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3566C0u;
label_3566c0:
    // 0x3566c0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3566c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3566c4: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x3566c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x3566c8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x3566c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x3566cc: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x3566ccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x3566d0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x3566d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x3566d4: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x3566d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x3566d8: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3566D8u;
    {
        const bool branch_taken_0x3566d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3566d8) {
            ctx->pc = 0x3566ECu;
            return;
        }
    }
    ctx->pc = 0x3566E0u;
    // 0x3566e0: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x3566e0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3566e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3566E4u;
    {
        const bool branch_taken_0x3566e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3566e4) {
            ctx->pc = 0x356708u;
            return;
        }
    }
    ctx->pc = 0x3566ECu;
}
