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

// Function: Pl_r1_devil_sky_evt_stand
// Address: 0x270350 - 0x270480
void Pl_r1_devil_sky_evt_stand_0x270350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_devil_sky_evt_stand_0x270350");
#endif

    switch (ctx->pc) {
        case 0x2703a4u: goto label_2703a4;
        case 0x270410u: goto label_270410;
        case 0x270444u: goto label_270444;
        case 0x270450u: goto label_270450;
        case 0x270464u: goto label_270464;
        case 0x270470u: goto label_270470;
        default: break;
    }

    ctx->pc = 0x270350u;

    // 0x270350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x270350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x270354: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x270354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x270358: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x270358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x27035c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x27035cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x270360: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x270360u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x270364: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x270364u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x270368: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x270368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27036c: 0x1083002c  beq         $a0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x27036Cu;
    {
        const bool branch_taken_0x27036c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x27036c) {
            ctx->pc = 0x270420u;
            goto label_270420;
        }
    }
    ctx->pc = 0x270374u;
    // 0x270374: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x270374u;
    {
        const bool branch_taken_0x270374 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x270374) {
            ctx->pc = 0x270384u;
            goto label_270384;
        }
    }
    ctx->pc = 0x27037Cu;
    // 0x27037c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x27037Cu;
    {
        const bool branch_taken_0x27037c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27037c) {
            ctx->pc = 0x270470u;
            goto label_270470;
        }
    }
    ctx->pc = 0x270384u;
label_270384:
    // 0x270384: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x270384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x270388: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x270388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27038c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x27038cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x270390: 0x8c841344  lw          $a0, 0x1344($a0)
    ctx->pc = 0x270390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4932)));
    // 0x270394: 0x8c651334  lw          $a1, 0x1334($v1)
    ctx->pc = 0x270394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x270398: 0x8c46133c  lw          $a2, 0x133C($v0)
    ctx->pc = 0x270398u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4924)));
    // 0x27039c: 0xc050f5c  jal         func_143D70
    ctx->pc = 0x27039Cu;
    SET_GPR_U32(ctx, 31, 0x2703A4u);
    ctx->pc = 0x143D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143D70u, 0x27039Cu, 0x2703A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2703A4u;
label_2703a4:
    // 0x2703a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2703a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2703a8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2703a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2703ac: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x2703acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2703b0: 0xa0430090  sb          $v1, 0x90($v0)
    ctx->pc = 0x2703b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 144), (uint8_t)GPR_U32(ctx, 3));
    // 0x2703b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2703b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2703b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2703b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2703bc: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x2703bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2703c0: 0xa0430630  sb          $v1, 0x630($v0)
    ctx->pc = 0x2703c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1584), (uint8_t)GPR_U32(ctx, 3));
    // 0x2703c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2703c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2703c8: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x2703c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2703cc: 0xa04007e0  sb          $zero, 0x7E0($v0)
    ctx->pc = 0x2703ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2016), (uint8_t)GPR_U32(ctx, 0));
    // 0x2703d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2703d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2703d4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x2703d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2703d8: 0xa0400870  sb          $zero, 0x870($v0)
    ctx->pc = 0x2703d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2160), (uint8_t)GPR_U32(ctx, 0));
    // 0x2703dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2703dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2703e0: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x2703e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x2703e4: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x2703e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x2703e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2703e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2703ec: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x2703ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x2703f0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2703f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2703f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2703f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2703f8: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x2703f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x2703fc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2703fcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x270400: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x270400u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270404: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x270404u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x270408: 0xc0965d0  jal         func_259740
    ctx->pc = 0x270408u;
    SET_GPR_U32(ctx, 31, 0x270410u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x270408u, 0x270410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270410u;
label_270410:
    // 0x270410: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x270410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x270414: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x270414u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x270418: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x270418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27041c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x27041cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_270420:
    // 0x270420: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x270420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x270424: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x270424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x270428: 0x3c028200  lui         $v0, 0x8200
    ctx->pc = 0x270428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33280 << 16));
    // 0x27042c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x27042cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x270430: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x270430u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x270434: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x270434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x270438: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x270438u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27043c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x27043Cu;
    SET_GPR_U32(ctx, 31, 0x270444u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x27043Cu, 0x270444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270444u;
label_270444:
    // 0x270444: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x270444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x270448: 0xc05cd10  jal         func_173440
    ctx->pc = 0x270448u;
    SET_GPR_U32(ctx, 31, 0x270450u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x270448u, 0x270450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270450u;
label_270450:
    // 0x270450: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x270450u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x270454: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x270454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x270458: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x270458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x27045c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x27045Cu;
    SET_GPR_U32(ctx, 31, 0x270464u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x27045Cu, 0x270464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270464u;
label_270464:
    // 0x270464: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x270464u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x270468: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x270468u;
    SET_GPR_U32(ctx, 31, 0x270470u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x270468u, 0x270470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270470u;
label_270470:
    // 0x270470: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x270470u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270474: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x270474u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x270478: 0x3e00008  jr          $ra
    ctx->pc = 0x270478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x270480u;
}
