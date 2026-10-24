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

// Function: entry_002235bc
// Address: 0x2235bc - 0x223718
void entry_002235bc_0x2235bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002235bc_0x2235bc");
#endif

    switch (ctx->pc) {
        case 0x2235f4u: goto label_2235f4;
        case 0x223614u: goto label_223614;
        case 0x223620u: goto label_223620;
        case 0x223708u: goto label_223708;
        default: break;
    }

    ctx->pc = 0x2235bcu;

    // 0x2235bc: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2235bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2235c0: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x2235c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2235c4: 0x245002d0  addiu       $s0, $v0, 0x2D0
    ctx->pc = 0x2235c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    // 0x2235c8: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2235c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2235cc: 0xafa2010c  sw          $v0, 0x10C($sp)
    ctx->pc = 0x2235ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
    // 0x2235d0: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2235d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2235d4: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2235d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2235d8: 0x90421308  lbu         $v0, 0x1308($v0)
    ctx->pc = 0x2235d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4872)));
    // 0x2235dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2235dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2235e0: 0x30460080  andi        $a2, $v0, 0x80
    ctx->pc = 0x2235e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2235e4: 0x2464024c  addiu       $a0, $v1, 0x24C
    ctx->pc = 0x2235e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 588));
    // 0x2235e8: 0x24050150  addiu       $a1, $zero, 0x150
    ctx->pc = 0x2235e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x2235ec: 0xc06b118  jal         func_1AC460
    ctx->pc = 0x2235ECu;
    SET_GPR_U32(ctx, 31, 0x2235F4u);
    ctx->pc = 0x1AC460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC460u, 0x2235ECu, 0x2235F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2235F4u;
label_2235f4:
    // 0x2235f4: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x2235f4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2235f8: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x2235f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x2235fc: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2235fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x223600: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x223600u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x223604: 0x26650150  addiu       $a1, $s3, 0x150
    ctx->pc = 0x223604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 336));
    // 0x223608: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x223608u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22360c: 0xc074674  jal         func_1D19D0
    ctx->pc = 0x22360Cu;
    SET_GPR_U32(ctx, 31, 0x223614u);
    ctx->pc = 0x1D19D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19D0u, 0x22360Cu, 0x223614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223614u;
label_223614:
    // 0x223614: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x223614u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x223618: 0xc067694  jal         func_19DA50
    ctx->pc = 0x223618u;
    SET_GPR_U32(ctx, 31, 0x223620u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x223618u, 0x223620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223620u;
label_223620:
    // 0x223620: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x223620u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x223624: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x223624u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x223628: 0x30a30007  andi        $v1, $a1, 0x7
    ctx->pc = 0x223628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x22362c: 0x24640003  addiu       $a0, $v1, 0x3
    ctx->pc = 0x22362cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x223630: 0x8fbe0128  lw          $fp, 0x128($sp)
    ctx->pc = 0x223630u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223634: 0x27c31330  addiu       $v1, $fp, 0x1330
    ctx->pc = 0x223634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4912));
    // 0x223638: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x223638u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x22363c: 0x24033001  addiu       $v1, $zero, 0x3001
    ctx->pc = 0x22363cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12289));
    // 0x223640: 0xfe630060  sd          $v1, 0x60($s3)
    ctx->pc = 0x223640u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 96), GPR_U64(ctx, 3));
    // 0x223644: 0x24053001  addiu       $a1, $zero, 0x3001
    ctx->pc = 0x223644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12289));
    // 0x223648: 0xfe6501b0  sd          $a1, 0x1B0($s3)
    ctx->pc = 0x223648u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 432), GPR_U64(ctx, 5));
    // 0x22364c: 0x34078900  ori         $a3, $zero, 0x8900
    ctx->pc = 0x22364cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35072);
    // 0x223650: 0x7a03c  dsll32      $s4, $a3, 0
    ctx->pc = 0x223650u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 7) << (32 + 0));
    // 0x223654: 0x24087800  addiu       $t0, $zero, 0x7800
    ctx->pc = 0x223654u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 30720));
    // 0x223658: 0x1141825  or          $v1, $t0, $s4
    ctx->pc = 0x223658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 20));
    // 0x22365c: 0xfe6300f0  sd          $v1, 0xF0($s3)
    ctx->pc = 0x22365cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 240), GPR_U64(ctx, 3));
    // 0x223660: 0x34098900  ori         $t1, $zero, 0x8900
    ctx->pc = 0x223660u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35072);
    // 0x223664: 0x9183c  dsll32      $v1, $t1, 0
    ctx->pc = 0x223664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) << (32 + 0));
    // 0x223668: 0x240a7800  addiu       $t2, $zero, 0x7800
    ctx->pc = 0x223668u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 30720));
    // 0x22366c: 0x1431825  or          $v1, $t2, $v1
    ctx->pc = 0x22366cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
    // 0x223670: 0xfe630240  sd          $v1, 0x240($s3)
    ctx->pc = 0x223670u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 576), GPR_U64(ctx, 3));
    // 0x223674: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x223674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223678: 0x90911308  lbu         $s1, 0x1308($a0)
    ctx->pc = 0x223678u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4872)));
    // 0x22367c: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x22367cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x223680: 0x30720080  andi        $s2, $v1, 0x80
    ctx->pc = 0x223680u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x223684: 0x16400024  bnez        $s2, . + 4 + (0x24 << 2)
    ctx->pc = 0x223684u;
    {
        const bool branch_taken_0x223684 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x223684) {
            ctx->pc = 0x223718u;
            return;
        }
    }
    ctx->pc = 0x22368Cu;
    // 0x22368c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x22368cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x223690: 0x24640ae8  addiu       $a0, $v1, 0xAE8
    ctx->pc = 0x223690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x223694: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x223694u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x223698: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x223698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x22369c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x22369cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x2236a0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2236a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2236a4: 0x24440ae8  addiu       $a0, $v0, 0xAE8
    ctx->pc = 0x2236a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x2236a8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2236a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x2236ac: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2236acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2236b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2236b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2236b4: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2236b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x2236b8: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x2236b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2236bc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2236bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2236c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2236c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2236c4: 0x8c220ae8  lw          $v0, 0xAE8($at)
    ctx->pc = 0x2236c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x2236c8: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x2236c8u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2236cc: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2236ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2236d0: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x2236d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2236d4: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2236d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x2236d8: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x2236d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2236dc: 0x244202d0  addiu       $v0, $v0, 0x2D0
    ctx->pc = 0x2236dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    // 0x2236e0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2236e0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2236e4: 0x8e160034  lw          $s6, 0x34($s0)
    ctx->pc = 0x2236e4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2236e8: 0x8ec20024  lw          $v0, 0x24($s6)
    ctx->pc = 0x2236e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
    // 0x2236ec: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x2236ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x2236f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2236f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2236f4: 0xaec20024  sw          $v0, 0x24($s6)
    ctx->pc = 0x2236f4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 36), GPR_U32(ctx, 2));
    // 0x2236f8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2236f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2236fc: 0x72e02e28  paddub      $a1, $s7, $zero
    ctx->pc = 0x2236fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x223700: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x223700u;
    SET_GPR_U32(ctx, 31, 0x223708u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x223700u, 0x223708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223708u;
label_223708:
    // 0x223708: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x223708u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22370c: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x22370cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x223710: 0x24830ae8  addiu       $v1, $a0, 0xAE8
    ctx->pc = 0x223710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 2792));
    // 0x223714: 0xac770000  sw          $s7, 0x0($v1)
    ctx->pc = 0x223714u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 23)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    ctx->pc = 0x223718u;
}
