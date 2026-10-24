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

// Function: strip_draw_separate_polyline
// Address: 0x194550 - 0x1953e8
void strip_draw_separate_polyline_0x194550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("strip_draw_separate_polyline_0x194550");
#endif

    switch (ctx->pc) {
        case 0x194748u: goto label_194748;
        case 0x194760u: goto label_194760;
        case 0x19477cu: goto label_19477c;
        case 0x194790u: goto label_194790;
        case 0x1947acu: goto label_1947ac;
        case 0x194878u: goto label_194878;
        case 0x194a2cu: goto label_194a2c;
        case 0x194accu: goto label_194acc;
        case 0x194b00u: goto label_194b00;
        case 0x194b84u: goto label_194b84;
        case 0x194c60u: goto label_194c60;
        case 0x194d0cu: goto label_194d0c;
        case 0x194f64u: goto label_194f64;
        case 0x195394u: goto label_195394;
        default: break;
    }

    ctx->pc = 0x194550u;

    // 0x194550: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x194550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x194554: 0x7fbf00a0  sq          $ra, 0xA0($sp)
    ctx->pc = 0x194554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 31));
    // 0x194558: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x194558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x19455c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x19455cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x194560: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x194560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x194564: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x194564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x194568: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x194568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x19456c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x19456cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x194570: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x194570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x194574: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x194574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x194578: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x194578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19457c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x19457cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x194580: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x194580u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x194584: 0x7080b628  paddub      $s6, $a0, $zero
    ctx->pc = 0x194584u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x194588: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x194588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x19458c: 0x3c127000  lui         $s2, 0x7000
    ctx->pc = 0x19458cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)28672 << 16));
    // 0x194590: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x194590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x194594: 0x34530244  ori         $s3, $v0, 0x244
    ctx->pc = 0x194594u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)580);
    // 0x194598: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x194598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x19459c: 0x3454026c  ori         $s4, $v0, 0x26C
    ctx->pc = 0x19459cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)620);
    // 0x1945a0: 0x96c20340  lhu         $v0, 0x340($s6)
    ctx->pc = 0x1945a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 832)));
    // 0x1945a4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1945a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1945a8: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1945a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1945ac: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1945ACu;
    {
        const bool branch_taken_0x1945ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1945ac) {
            ctx->pc = 0x194644u;
            goto label_194644;
        }
    }
    ctx->pc = 0x1945B4u;
    // 0x1945b4: 0x92c20348  lbu         $v0, 0x348($s6)
    ctx->pc = 0x1945b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x1945b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1945b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1945bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1945BCu;
    {
        const bool branch_taken_0x1945bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1945bc) {
            ctx->pc = 0x1945D0u;
            goto label_1945d0;
        }
    }
    ctx->pc = 0x1945C4u;
    // 0x1945c4: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1945c4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1945c8: 0x10000378  b           . + 4 + (0x378 << 2)
    ctx->pc = 0x1945C8u;
    {
        const bool branch_taken_0x1945c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1945c8) {
            ctx->pc = 0x1953ACu;
            goto label_1953ac;
        }
    }
    ctx->pc = 0x1945D0u;
label_1945d0:
    // 0x1945d0: 0x92c20348  lbu         $v0, 0x348($s6)
    ctx->pc = 0x1945d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x1945d4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1945d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1945d8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1945d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1945dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1945dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1945e0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1945e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1945e4: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x1945e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1945e8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1945e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1945ec: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1945ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1945f0: 0x31082  srl         $v0, $v1, 2
    ctx->pc = 0x1945f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x1945f4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1945f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1945f8: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1945f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x1945fc: 0x8c222580  lw          $v0, 0x2580($at)
    ctx->pc = 0x1945fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532580u));
    // 0x194600: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x194600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x194604: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x194604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x194608: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x194608u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x19460c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19460cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x194610: 0x21c80  sll         $v1, $v0, 18
    ctx->pc = 0x194610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 18));
    // 0x194614: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x194614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x194618: 0x24422580  addiu       $v0, $v0, 0x2580
    ctx->pc = 0x194618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9600));
    // 0x19461c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19461cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x194620: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x194620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
    // 0x194624: 0x3421fffc  ori         $at, $at, 0xFFFC
    ctx->pc = 0x194624u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65532);
    // 0x194628: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x194628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x19462c: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x19462cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x194630: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x194630u;
    {
        const bool branch_taken_0x194630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194630) {
            ctx->pc = 0x194644u;
            goto label_194644;
        }
    }
    ctx->pc = 0x194638u;
    // 0x194638: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x194638u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19463c: 0x1000035b  b           . + 4 + (0x35B << 2)
    ctx->pc = 0x19463Cu;
    {
        const bool branch_taken_0x19463c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19463c) {
            ctx->pc = 0x1953ACu;
            goto label_1953ac;
        }
    }
    ctx->pc = 0x194644u;
label_194644:
    // 0x194644: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x194644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x194648: 0x8c370af0  lw          $s7, 0xAF0($at)
    ctx->pc = 0x194648u;
    SET_GPR_S32(ctx, 23, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x19464c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19464Cu;
    {
        const bool branch_taken_0x19464c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x19464c) {
            ctx->pc = 0x194668u;
            goto label_194668;
        }
    }
    ctx->pc = 0x194654u;
    // 0x194654: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x194654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x194658: 0x2442df50  addiu       $v0, $v0, -0x20B0
    ctx->pc = 0x194658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958928));
    // 0x19465c: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x19465cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x194660: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x194660u;
    {
        const bool branch_taken_0x194660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194660) {
            ctx->pc = 0x194674u;
            goto label_194674;
        }
    }
    ctx->pc = 0x194668u;
label_194668:
    // 0x194668: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x194668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x19466c: 0x2442e550  addiu       $v0, $v0, -0x1AB0
    ctx->pc = 0x19466cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x194670: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x194670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_194674:
    // 0x194674: 0x96c20340  lhu         $v0, 0x340($s6)
    ctx->pc = 0x194674u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 832)));
    // 0x194678: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x194678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19467c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x19467cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x194680: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x194680u;
    {
        const bool branch_taken_0x194680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x194680) {
            ctx->pc = 0x1946ECu;
            goto label_1946ec;
        }
    }
    ctx->pc = 0x194688u;
    // 0x194688: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x194688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19468c: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x19468cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x194690: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x194690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x194694: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x194694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x194698: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x194698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x19469c: 0x8c55036c  lw          $s5, 0x36C($v0)
    ctx->pc = 0x19469cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x1946a0: 0xdea30000  ld          $v1, 0x0($s5)
    ctx->pc = 0x1946a0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1946a4: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x1946a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x1946a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1946a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1946ac: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x1946acu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x1946b0: 0x92c20348  lbu         $v0, 0x348($s6)
    ctx->pc = 0x1946b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x1946b4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1946b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1946b8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1946b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1946bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1946bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1946c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1946c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1946c4: 0x24420009  addiu       $v0, $v0, 0x9
    ctx->pc = 0x1946c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x1946c8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1946c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1946cc: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1946ccu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1946d0: 0x72a01e28  paddub      $v1, $s5, $zero
    ctx->pc = 0x1946d0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1946d4: 0x24750008  addiu       $s5, $v1, 0x8
    ctx->pc = 0x1946d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1946d8: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1946d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1946dc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1946dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1946e0: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1946e0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1946e4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1946E4u;
    {
        const bool branch_taken_0x1946e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1946e4) {
            ctx->pc = 0x194728u;
            goto label_194728;
        }
    }
    ctx->pc = 0x1946ECu;
label_1946ec:
    // 0x1946ec: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1946ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x1946f0: 0x8c352580  lw          $s5, 0x2580($at)
    ctx->pc = 0x1946f0u;
    SET_GPR_S32(ctx, 21, (int32_t)FAST_READ32(0x532580u));
    // 0x1946f4: 0x92c20348  lbu         $v0, 0x348($s6)
    ctx->pc = 0x1946f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x1946f8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1946f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1946fc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1946fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x194700: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x194700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x194704: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x194704u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x194708: 0x24430009  addiu       $v1, $v0, 0x9
    ctx->pc = 0x194708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x19470c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x19470cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x194710: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x194710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x194714: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x194714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x194718: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x194718u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x19471c: 0x72a01628  paddub      $v0, $s5, $zero
    ctx->pc = 0x19471cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x194720: 0x24550008  addiu       $s5, $v0, 0x8
    ctx->pc = 0x194720u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x194724: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x194724u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
label_194728:
    // 0x194728: 0xafb500c0  sw          $s5, 0xC0($sp)
    ctx->pc = 0x194728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 21));
    // 0x19472c: 0x72a01628  paddub      $v0, $s5, $zero
    ctx->pc = 0x19472cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x194730: 0x24550008  addiu       $s5, $v0, 0x8
    ctx->pc = 0x194730u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x194734: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x194734u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x194738: 0x72c02628  paddub      $a0, $s6, $zero
    ctx->pc = 0x194738u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x19473c: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x19473cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x194740: 0xc0d889c  jal         func_362270
    ctx->pc = 0x194740u;
    SET_GPR_U32(ctx, 31, 0x194748u);
    ctx->pc = 0x362270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362270u, 0x194740u, 0x194748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194748u;
label_194748:
    // 0x194748: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x194748u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x19474c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x19474cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x194750: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x194750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x194754: 0x26c60480  addiu       $a2, $s6, 0x480
    ctx->pc = 0x194754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 1152));
    // 0x194758: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x194758u;
    SET_GPR_U32(ctx, 31, 0x194760u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x194760u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x194760u) { return; }
    ctx->pc = 0x194760u;
label_194760:
    // 0x194760: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x194760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194764: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x194764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x194768: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x194768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x19476c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x19476cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x194770: 0xc68c0000  lwc1        $f12, 0x0($s4)
    ctx->pc = 0x194770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x194774: 0xc040c60  jal         func_103180
    ctx->pc = 0x194774u;
    SET_GPR_U32(ctx, 31, 0x19477Cu);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x19477Cu;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19477Cu) { return; }
    ctx->pc = 0x19477Cu;
label_19477c:
    // 0x19477c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x19477cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x194780: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x194780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x194784: 0x26c60490  addiu       $a2, $s6, 0x490
    ctx->pc = 0x194784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 1168));
    // 0x194788: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x194788u;
    SET_GPR_U32(ctx, 31, 0x194790u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x194790u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x194790u) { return; }
    ctx->pc = 0x194790u;
label_194790:
    // 0x194790: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x194790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194794: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x194794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x194798: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x194798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x19479c: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x19479cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1947a0: 0xc68c0004  lwc1        $f12, 0x4($s4)
    ctx->pc = 0x1947a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1947a4: 0xc040c60  jal         func_103180
    ctx->pc = 0x1947A4u;
    SET_GPR_U32(ctx, 31, 0x1947ACu);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x1947ACu;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1947ACu) { return; }
    ctx->pc = 0x1947ACu;
label_1947ac:
    // 0x1947ac: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1947acu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1947b0: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1947b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x1947b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1947b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1947b8: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1947b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1947bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1947bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1947c0: 0x0  nop
    ctx->pc = 0x1947c0u;
    // NOP
    // 0x1947c4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1947C4u;
    {
        const bool branch_taken_0x1947c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1947c4) {
            ctx->pc = 0x1947E8u;
            goto label_1947e8;
        }
    }
    ctx->pc = 0x1947CCu;
    // 0x1947cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1947ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1947d0: 0xc421fd70  lwc1        $f1, -0x290($at)
    ctx->pc = 0x1947d0u;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1947d4: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1947d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1947d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1947d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1947dc: 0x0  nop
    ctx->pc = 0x1947dcu;
    // NOP
    // 0x1947e0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1947E0u;
    {
        const bool branch_taken_0x1947e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1947e0) {
            ctx->pc = 0x1947F0u;
            goto label_1947f0;
        }
    }
    ctx->pc = 0x1947E8u;
label_1947e8:
    // 0x1947e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1947e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1947ec: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1947ecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1947f0:
    // 0x1947f0: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x1947f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1947f4: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1947f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x1947f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1947f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1947fc: 0x0  nop
    ctx->pc = 0x1947fcu;
    // NOP
    // 0x194800: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x194800u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x194804: 0x0  nop
    ctx->pc = 0x194804u;
    // NOP
    // 0x194808: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x194808u;
    {
        const bool branch_taken_0x194808 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x194808) {
            ctx->pc = 0x19482Cu;
            goto label_19482c;
        }
    }
    ctx->pc = 0x194810u;
    // 0x194810: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x194810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194814: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x194814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x194818: 0xc420fd70  lwc1        $f0, -0x290($at)
    ctx->pc = 0x194818u;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19481c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x19481cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x194820: 0x0  nop
    ctx->pc = 0x194820u;
    // NOP
    // 0x194824: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x194824u;
    {
        const bool branch_taken_0x194824 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x194824) {
            ctx->pc = 0x194834u;
            goto label_194834;
        }
    }
    ctx->pc = 0x19482Cu;
label_19482c:
    // 0x19482c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19482cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194830: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x194830u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_194834:
    // 0x194834: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x194834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194838: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x194838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19483c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x19483cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x194840: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x194840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x194844: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x194844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194848: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x194848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19484c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x19484cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x194850: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x194850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x194854: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x194854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194858: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x194858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19485c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x19485cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x194860: 0xc7a1010c  lwc1        $f1, 0x10C($sp)
    ctx->pc = 0x194860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194864: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x194864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194868: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x194868u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19486c: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x19486cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x194870: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x194870u;
    SET_GPR_U32(ctx, 31, 0x194878u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x194870u, 0x194878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194878u;
label_194878:
    // 0x194878: 0x92c20345  lbu         $v0, 0x345($s6)
    ctx->pc = 0x194878u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 837)));
    // 0x19487c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19487cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x194880: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x194880u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x194884: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x194884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x194888: 0xc7a2010c  lwc1        $f2, 0x10C($sp)
    ctx->pc = 0x194888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19488c: 0xc4410ac8  lwc1        $f1, 0xAC8($v0)
    ctx->pc = 0x19488cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194890: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x194890u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x194894: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x194894u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x194898: 0xc6e101b4  lwc1        $f1, 0x1B4($s7)
    ctx->pc = 0x194898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19489c: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x19489cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1948a0: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x1948a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1948a4: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x1948a4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1948a8: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1948a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x1948ac: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1948acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1948b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1948b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1948b4: 0x0  nop
    ctx->pc = 0x1948b4u;
    // NOP
    // 0x1948b8: 0x46020d02  mul.s       $f20, $f1, $f2
    ctx->pc = 0x1948b8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1948bc: 0x92c20345  lbu         $v0, 0x345($s6)
    ctx->pc = 0x1948bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 837)));
    // 0x1948c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1948c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1948c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1948c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1948c8: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1948c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1948cc: 0xc7a20108  lwc1        $f2, 0x108($sp)
    ctx->pc = 0x1948ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1948d0: 0xc4410ac8  lwc1        $f1, 0xAC8($v0)
    ctx->pc = 0x1948d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1948d4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1948d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1948d8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1948d8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1948dc: 0xc6e001b4  lwc1        $f0, 0x1B4($s7)
    ctx->pc = 0x1948dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1948e0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1948e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1948e4: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1948e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1948e8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1948e8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1948ec: 0x3c023eee  lui         $v0, 0x3EEE
    ctx->pc = 0x1948ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16110 << 16));
    // 0x1948f0: 0x3442eeef  ori         $v0, $v0, 0xEEEF
    ctx->pc = 0x1948f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61167);
    // 0x1948f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1948f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1948f8: 0x0  nop
    ctx->pc = 0x1948f8u;
    // NOP
    // 0x1948fc: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x1948fcu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x194900: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x194900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194904: 0x3c0244c7  lui         $v0, 0x44C7
    ctx->pc = 0x194904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17607 << 16));
    // 0x194908: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x194908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19490c: 0x0  nop
    ctx->pc = 0x19490cu;
    // NOP
    // 0x194910: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x194910u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x194914: 0x0  nop
    ctx->pc = 0x194914u;
    // NOP
    // 0x194918: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x194918u;
    {
        const bool branch_taken_0x194918 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x194918) {
            ctx->pc = 0x194944u;
            goto label_194944;
        }
    }
    ctx->pc = 0x194920u;
    // 0x194920: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x194920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194924: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x194924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x194928: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x194928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x19492c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19492cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194930: 0x0  nop
    ctx->pc = 0x194930u;
    // NOP
    // 0x194934: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x194934u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x194938: 0x0  nop
    ctx->pc = 0x194938u;
    // NOP
    // 0x19493c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x19493Cu;
    {
        const bool branch_taken_0x19493c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19493c) {
            ctx->pc = 0x19494Cu;
            goto label_19494c;
        }
    }
    ctx->pc = 0x194944u;
label_194944:
    // 0x194944: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x194944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194948: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x194948u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_19494c:
    // 0x19494c: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x19494cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194950: 0x3c0244d9  lui         $v0, 0x44D9
    ctx->pc = 0x194950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17625 << 16));
    // 0x194954: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x194954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194958: 0x0  nop
    ctx->pc = 0x194958u;
    // NOP
    // 0x19495c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19495cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x194960: 0x0  nop
    ctx->pc = 0x194960u;
    // NOP
    // 0x194964: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x194964u;
    {
        const bool branch_taken_0x194964 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x194964) {
            ctx->pc = 0x194990u;
            goto label_194990;
        }
    }
    ctx->pc = 0x19496Cu;
    // 0x19496c: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x19496cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194970: 0x3c024513  lui         $v0, 0x4513
    ctx->pc = 0x194970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17683 << 16));
    // 0x194974: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x194974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x194978: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x194978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19497c: 0x0  nop
    ctx->pc = 0x19497cu;
    // NOP
    // 0x194980: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x194980u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x194984: 0x0  nop
    ctx->pc = 0x194984u;
    // NOP
    // 0x194988: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x194988u;
    {
        const bool branch_taken_0x194988 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x194988) {
            ctx->pc = 0x194998u;
            goto label_194998;
        }
    }
    ctx->pc = 0x194990u;
label_194990:
    // 0x194990: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x194990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194994: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x194994u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_194998:
    // 0x194998: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x194998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x19499c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19499Cu;
    {
        const bool branch_taken_0x19499c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19499c) {
            ctx->pc = 0x1949ACu;
            goto label_1949ac;
        }
    }
    ctx->pc = 0x1949A4u;
    // 0x1949a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1949a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1949a8: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1949a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_1949ac:
    // 0x1949ac: 0xa2710000  sb          $s1, 0x0($s3)
    ctx->pc = 0x1949acu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x1949b0: 0xa2710001  sb          $s1, 0x1($s3)
    ctx->pc = 0x1949b0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 17));
    // 0x1949b4: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x1949b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1949b8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1949b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1949bc: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x1949bcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x1949c0: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x1949c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1949c4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1949c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1949c8: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x1949c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1949cc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1949ccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1949d0: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1949d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1949d4: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1949d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1949d8: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1949d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1949dc: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1949dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1949e0: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x1949e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x1949e4: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x1949e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1949e8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1949e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1949ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1949ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1949f0: 0x0  nop
    ctx->pc = 0x1949f0u;
    // NOP
    // 0x1949f4: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x1949f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1949f8: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x1949f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1949fc: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1949fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x194a00: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x194a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x194a04: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x194a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194a08: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x194a08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x194a0c: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x194a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x194a10: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x194a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x194a14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x194a14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194a18: 0x0  nop
    ctx->pc = 0x194a18u;
    // NOP
    // 0x194a1c: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x194a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x194a20: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x194a20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194a24: 0x1000013a  b           . + 4 + (0x13A << 2)
    ctx->pc = 0x194A24u;
    {
        const bool branch_taken_0x194a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194a24) {
            ctx->pc = 0x194F10u;
            goto label_194f10;
        }
    }
    ctx->pc = 0x194A2Cu;
label_194a2c:
    // 0x194a2c: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x194a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x194a30: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x194a30u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x194a34: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x194a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x194a38: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x194a38u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x194a3c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x194a3cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x194a40: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x194a40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x194a44: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x194a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x194a48: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x194a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194a4c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x194a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x194a50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x194a50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194a54: 0x0  nop
    ctx->pc = 0x194a54u;
    // NOP
    // 0x194a58: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x194a58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x194a5c: 0x0  nop
    ctx->pc = 0x194a5cu;
    // NOP
    // 0x194a60: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x194A60u;
    {
        const bool branch_taken_0x194a60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x194a60) {
            ctx->pc = 0x194A90u;
            goto label_194a90;
        }
    }
    ctx->pc = 0x194A68u;
    // 0x194a68: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x194a68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x194a6c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x194a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x194a70: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x194a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194a74: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x194a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x194a78: 0xc420fd70  lwc1        $f0, -0x290($at)
    ctx->pc = 0x194a78u;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194a7c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x194a7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x194a80: 0x0  nop
    ctx->pc = 0x194a80u;
    // NOP
    // 0x194a84: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x194A84u;
    {
        const bool branch_taken_0x194a84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x194a84) {
            ctx->pc = 0x194A98u;
            goto label_194a98;
        }
    }
    ctx->pc = 0x194A8Cu;
    // 0x194a8c: 0x0  nop
    ctx->pc = 0x194a8cu;
    // NOP
label_194a90:
    // 0x194a90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x194a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194a94: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x194a94u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_194a98:
    // 0x194a98: 0x92c20348  lbu         $v0, 0x348($s6)
    ctx->pc = 0x194a98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x194a9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x194a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x194aa0: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x194aa0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x194aa4: 0x10200065  beqz        $at, . + 4 + (0x65 << 2)
    ctx->pc = 0x194AA4u;
    {
        const bool branch_taken_0x194aa4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x194aa4) {
            ctx->pc = 0x194C3Cu;
            goto label_194c3c;
        }
    }
    ctx->pc = 0x194AACu;
    // 0x194aac: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x194aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x194ab0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x194ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x194ab4: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x194ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x194ab8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x194ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x194abc: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x194abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x194ac0: 0x24460480  addiu       $a2, $v0, 0x480
    ctx->pc = 0x194ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x194ac4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x194AC4u;
    SET_GPR_U32(ctx, 31, 0x194ACCu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x194ACCu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x194ACCu) { return; }
    ctx->pc = 0x194ACCu;
label_194acc:
    // 0x194acc: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x194accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194ad0: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x194ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x194ad4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x194ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x194ad8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x194ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x194adc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x194adcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x194ae0: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x194ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x194ae4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x194ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x194ae8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x194ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x194aec: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x194aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x194af0: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x194af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x194af4: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x194af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x194af8: 0xc040c60  jal         func_103180
    ctx->pc = 0x194AF8u;
    SET_GPR_U32(ctx, 31, 0x194B00u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x194B00u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x194B00u) { return; }
    ctx->pc = 0x194B00u;
label_194b00:
    // 0x194b00: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x194b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194b04: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x194b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194b08: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x194b08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x194b0c: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x194b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x194b10: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x194b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194b14: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x194b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194b18: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x194b18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x194b1c: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x194b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x194b20: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x194b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194b24: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x194b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194b28: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x194b28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x194b2c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x194b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x194b30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x194b30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194b34: 0x0  nop
    ctx->pc = 0x194b34u;
    // NOP
    // 0x194b38: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x194b38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x194b3c: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x194b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x194b40: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x194b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194b44: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x194b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194b48: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x194b48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x194b4c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x194b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x194b50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x194b50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194b54: 0x0  nop
    ctx->pc = 0x194b54u;
    // NOP
    // 0x194b58: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x194b58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x194b5c: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x194b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x194b60: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x194b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194b64: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x194b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194b68: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x194b68u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x194b6c: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x194b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194b70: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x194b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194b74: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x194b74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x194b78: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x194b78u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x194b7c: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x194B7Cu;
    SET_GPR_U32(ctx, 31, 0x194B84u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x194B7Cu, 0x194B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194B84u;
label_194b84:
    // 0x194b84: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x194b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194b88: 0xe7a10108  swc1        $f1, 0x108($sp)
    ctx->pc = 0x194b88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x194b8c: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x194b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194b90: 0xe7a1010c  swc1        $f1, 0x10C($sp)
    ctx->pc = 0x194b90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x194b94: 0x92c20345  lbu         $v0, 0x345($s6)
    ctx->pc = 0x194b94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 837)));
    // 0x194b98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x194b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x194b9c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x194b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x194ba0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x194ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x194ba4: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x194ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x194ba8: 0xc7a20104  lwc1        $f2, 0x104($sp)
    ctx->pc = 0x194ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x194bac: 0xc4410ac8  lwc1        $f1, 0xAC8($v0)
    ctx->pc = 0x194bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194bb0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x194bb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x194bb4: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x194bb4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x194bb8: 0xc6e101b4  lwc1        $f1, 0x1B4($s7)
    ctx->pc = 0x194bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194bbc: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x194bbcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x194bc0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x194bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x194bc4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x194bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x194bc8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x194bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194bcc: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x194bccu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x194bd0: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x194bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x194bd4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x194bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x194bd8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x194bd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x194bdc: 0x0  nop
    ctx->pc = 0x194bdcu;
    // NOP
    // 0x194be0: 0x46020d02  mul.s       $f20, $f1, $f2
    ctx->pc = 0x194be0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x194be4: 0x92c20345  lbu         $v0, 0x345($s6)
    ctx->pc = 0x194be4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 837)));
    // 0x194be8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x194be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x194bec: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x194becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x194bf0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x194bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x194bf4: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x194bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x194bf8: 0xc7a20100  lwc1        $f2, 0x100($sp)
    ctx->pc = 0x194bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x194bfc: 0xc4410ac8  lwc1        $f1, 0xAC8($v0)
    ctx->pc = 0x194bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194c00: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x194c00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x194c04: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x194c04u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x194c08: 0xc6e001b4  lwc1        $f0, 0x1B4($s7)
    ctx->pc = 0x194c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194c0c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x194c0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x194c10: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x194c10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x194c14: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x194c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x194c18: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x194c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194c1c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x194c1cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x194c20: 0x3c023eee  lui         $v0, 0x3EEE
    ctx->pc = 0x194c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16110 << 16));
    // 0x194c24: 0x3442eeef  ori         $v0, $v0, 0xEEEF
    ctx->pc = 0x194c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61167);
    // 0x194c28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x194c28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194c2c: 0x0  nop
    ctx->pc = 0x194c2cu;
    // NOP
    // 0x194c30: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x194c30u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x194c34: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x194C34u;
    {
        const bool branch_taken_0x194c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194c34) {
            ctx->pc = 0x194D30u;
            goto label_194d30;
        }
    }
    ctx->pc = 0x194C3Cu;
label_194c3c:
    // 0x194c3c: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x194c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194c40: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x194c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194c44: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x194c44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x194c48: 0xc7a1010c  lwc1        $f1, 0x10C($sp)
    ctx->pc = 0x194c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194c4c: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x194c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194c50: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x194c50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x194c54: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x194c54u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x194c58: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x194C58u;
    SET_GPR_U32(ctx, 31, 0x194C60u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x194C58u, 0x194C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194C60u;
label_194c60:
    // 0x194c60: 0x92c20345  lbu         $v0, 0x345($s6)
    ctx->pc = 0x194c60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 837)));
    // 0x194c64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x194c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x194c68: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x194c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x194c6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x194c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x194c70: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x194c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x194c74: 0xc7a2010c  lwc1        $f2, 0x10C($sp)
    ctx->pc = 0x194c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x194c78: 0xc4410ac8  lwc1        $f1, 0xAC8($v0)
    ctx->pc = 0x194c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194c7c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x194c7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x194c80: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x194c80u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x194c84: 0xc6e101b4  lwc1        $f1, 0x1B4($s7)
    ctx->pc = 0x194c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194c88: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x194c88u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x194c8c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x194c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x194c90: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x194c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x194c94: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x194c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194c98: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x194c98u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x194c9c: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x194c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x194ca0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x194ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x194ca4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x194ca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x194ca8: 0x0  nop
    ctx->pc = 0x194ca8u;
    // NOP
    // 0x194cac: 0x46020d02  mul.s       $f20, $f1, $f2
    ctx->pc = 0x194cacu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x194cb0: 0x92c20345  lbu         $v0, 0x345($s6)
    ctx->pc = 0x194cb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 837)));
    // 0x194cb4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x194cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x194cb8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x194cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x194cbc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x194cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x194cc0: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x194cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x194cc4: 0xc7a20108  lwc1        $f2, 0x108($sp)
    ctx->pc = 0x194cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x194cc8: 0xc4410ac8  lwc1        $f1, 0xAC8($v0)
    ctx->pc = 0x194cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194ccc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x194cccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x194cd0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x194cd0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x194cd4: 0xc6e001b4  lwc1        $f0, 0x1B4($s7)
    ctx->pc = 0x194cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194cd8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x194cd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x194cdc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x194cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x194ce0: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x194ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x194ce4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x194ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194ce8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x194ce8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x194cec: 0x3c023eee  lui         $v0, 0x3EEE
    ctx->pc = 0x194cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16110 << 16));
    // 0x194cf0: 0x3442eeef  ori         $v0, $v0, 0xEEEF
    ctx->pc = 0x194cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61167);
    // 0x194cf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x194cf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194cf8: 0x0  nop
    ctx->pc = 0x194cf8u;
    // NOP
    // 0x194cfc: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x194cfcu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x194d00: 0xc7ac00fc  lwc1        $f12, 0xFC($sp)
    ctx->pc = 0x194d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x194d04: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x194D04u;
    SET_GPR_U32(ctx, 31, 0x194D0Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x194D04u, 0x194D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194D0Cu;
label_194d0c:
    // 0x194d0c: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x194d0cu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x194d10: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x194d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x194d14: 0x3c2102b  sltu        $v0, $fp, $v0
    ctx->pc = 0x194d14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x194d18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x194D18u;
    {
        const bool branch_taken_0x194d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194d18) {
            ctx->pc = 0x194D28u;
            goto label_194d28;
        }
    }
    ctx->pc = 0x194D20u;
    // 0x194d20: 0x341effff  ori         $fp, $zero, 0xFFFF
    ctx->pc = 0x194d20u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x194d24: 0x0  nop
    ctx->pc = 0x194d24u;
    // NOP
label_194d28:
    // 0x194d28: 0x1ef182  srl         $fp, $fp, 6
    ctx->pc = 0x194d28u;
    SET_GPR_S32(ctx, 30, (int32_t)SRL32(GPR_U32(ctx, 30), 6));
    // 0x194d2c: 0x0  nop
    ctx->pc = 0x194d2cu;
    // NOP
label_194d30:
    // 0x194d30: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x194d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194d34: 0x3c0244c7  lui         $v0, 0x44C7
    ctx->pc = 0x194d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17607 << 16));
    // 0x194d38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x194d38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194d3c: 0x0  nop
    ctx->pc = 0x194d3cu;
    // NOP
    // 0x194d40: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x194d40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x194d44: 0x0  nop
    ctx->pc = 0x194d44u;
    // NOP
    // 0x194d48: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x194D48u;
    {
        const bool branch_taken_0x194d48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x194d48) {
            ctx->pc = 0x194D78u;
            goto label_194d78;
        }
    }
    ctx->pc = 0x194D50u;
    // 0x194d50: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x194d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194d54: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x194d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x194d58: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x194d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x194d5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x194d5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194d60: 0x0  nop
    ctx->pc = 0x194d60u;
    // NOP
    // 0x194d64: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x194d64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x194d68: 0x0  nop
    ctx->pc = 0x194d68u;
    // NOP
    // 0x194d6c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x194D6Cu;
    {
        const bool branch_taken_0x194d6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x194d6c) {
            ctx->pc = 0x194D80u;
            goto label_194d80;
        }
    }
    ctx->pc = 0x194D74u;
    // 0x194d74: 0x0  nop
    ctx->pc = 0x194d74u;
    // NOP
label_194d78:
    // 0x194d78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x194d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194d7c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x194d7cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_194d80:
    // 0x194d80: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x194d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194d84: 0x3c0244d9  lui         $v0, 0x44D9
    ctx->pc = 0x194d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17625 << 16));
    // 0x194d88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x194d88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194d8c: 0x0  nop
    ctx->pc = 0x194d8cu;
    // NOP
    // 0x194d90: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x194d90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x194d94: 0x0  nop
    ctx->pc = 0x194d94u;
    // NOP
    // 0x194d98: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x194D98u;
    {
        const bool branch_taken_0x194d98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x194d98) {
            ctx->pc = 0x194DC8u;
            goto label_194dc8;
        }
    }
    ctx->pc = 0x194DA0u;
    // 0x194da0: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x194da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194da4: 0x3c024513  lui         $v0, 0x4513
    ctx->pc = 0x194da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17683 << 16));
    // 0x194da8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x194da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x194dac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x194dacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194db0: 0x0  nop
    ctx->pc = 0x194db0u;
    // NOP
    // 0x194db4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x194db4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x194db8: 0x0  nop
    ctx->pc = 0x194db8u;
    // NOP
    // 0x194dbc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x194DBCu;
    {
        const bool branch_taken_0x194dbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x194dbc) {
            ctx->pc = 0x194DD0u;
            goto label_194dd0;
        }
    }
    ctx->pc = 0x194DC4u;
    // 0x194dc4: 0x0  nop
    ctx->pc = 0x194dc4u;
    // NOP
label_194dc8:
    // 0x194dc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x194dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194dcc: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x194dccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_194dd0:
    // 0x194dd0: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x194dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x194dd4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x194DD4u;
    {
        const bool branch_taken_0x194dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194dd4) {
            ctx->pc = 0x194DE8u;
            goto label_194de8;
        }
    }
    ctx->pc = 0x194DDCu;
    // 0x194ddc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x194ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194de0: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x194de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x194de4: 0x0  nop
    ctx->pc = 0x194de4u;
    // NOP
label_194de8:
    // 0x194de8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x194de8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x194dec: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x194decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x194df0: 0xa0510000  sb          $s1, 0x0($v0)
    ctx->pc = 0x194df0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x194df4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x194df4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x194df8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x194df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x194dfc: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x194dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x194e00: 0xa0510000  sb          $s1, 0x0($v0)
    ctx->pc = 0x194e00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x194e04: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x194e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x194e08: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x194e08u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x194e0c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x194e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x194e10: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x194e10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x194e14: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x194e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x194e18: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x194e18u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x194e1c: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x194e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x194e20: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x194e20u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x194e24: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x194e24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x194e28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x194e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x194e2c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x194e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x194e30: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x194e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x194e34: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x194e34u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x194e38: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x194e38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x194e3c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x194e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x194e40: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x194e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x194e44: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x194e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194e48: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x194e48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x194e4c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x194e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x194e50: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x194e50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x194e54: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x194e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x194e58: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x194e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x194e5c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x194e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x194e60: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x194e60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x194e64: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x194e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x194e68: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x194e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194e6c: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x194e6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x194e70: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x194e70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x194e74: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x194e74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x194e78: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x194e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x194e7c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x194e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x194e80: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x194e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x194e84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x194e84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194e88: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x194e88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x194e8c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x194e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x194e90: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x194e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x194e94: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x194e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x194e98: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x194e98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x194e9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x194e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x194ea0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x194ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x194ea4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x194ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x194ea8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x194ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194eac: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x194eacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x194eb0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x194eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x194eb4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x194eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x194eb8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x194eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x194ebc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x194ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x194ec0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x194ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x194ec4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x194ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x194ec8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x194ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x194ecc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x194eccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x194ed0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x194ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x194ed4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x194ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194ed8: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x194ed8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x194edc: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x194edcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x194ee0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x194ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x194ee4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x194ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x194ee8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x194ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x194eec: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x194eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x194ef0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x194ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x194ef4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x194ef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194ef8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x194ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x194efc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x194efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x194f00: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x194f00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x194f04: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x194f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x194f08: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x194f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x194f0c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x194f0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_194f10:
    // 0x194f10: 0x92c20348  lbu         $v0, 0x348($s6)
    ctx->pc = 0x194f10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x194f14: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x194f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x194f18: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x194f18u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x194f1c: 0x1020fec3  beqz        $at, . + 4 + (-0x13D << 2)
    ctx->pc = 0x194F1Cu;
    {
        const bool branch_taken_0x194f1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x194f1c) {
            ctx->pc = 0x194A2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194a2c;
        }
    }
    ctx->pc = 0x194F24u;
    // 0x194f24: 0x96c20340  lhu         $v0, 0x340($s6)
    ctx->pc = 0x194f24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 832)));
    // 0x194f28: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x194f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x194f2c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x194f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x194f30: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x194F30u;
    {
        const bool branch_taken_0x194f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194f30) {
            ctx->pc = 0x194F50u;
            goto label_194f50;
        }
    }
    ctx->pc = 0x194F38u;
    // 0x194f38: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x194f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x194f3c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x194F3Cu;
    {
        const bool branch_taken_0x194f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194f3c) {
            ctx->pc = 0x194F50u;
            goto label_194f50;
        }
    }
    ctx->pc = 0x194F44u;
    // 0x194f44: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x194f44u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x194f48: 0x10000118  b           . + 4 + (0x118 << 2)
    ctx->pc = 0x194F48u;
    {
        const bool branch_taken_0x194f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194f48) {
            ctx->pc = 0x1953ACu;
            goto label_1953ac;
        }
    }
    ctx->pc = 0x194F50u;
label_194f50:
    // 0x194f50: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x194f50u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x194f54: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x194f54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x194f58: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x194f58u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x194f5c: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x194F5Cu;
    {
        const bool branch_taken_0x194f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194f5c) {
            ctx->pc = 0x195200u;
            goto label_195200;
        }
    }
    ctx->pc = 0x194F64u;
label_194f64:
    // 0x194f64: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x194f64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x194f68: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x194f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x194f6c: 0x246505b0  addiu       $a1, $v1, 0x5B0
    ctx->pc = 0x194f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1456));
    // 0x194f70: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x194f70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x194f74: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x194f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x194f78: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x194f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194f7c: 0x26c602d0  addiu       $a2, $s6, 0x2D0
    ctx->pc = 0x194f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 720));
    // 0x194f80: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x194f80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x194f84: 0x2433821  addu        $a3, $s2, $v1
    ctx->pc = 0x194f84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x194f88: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x194f88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x194f8c: 0x0  nop
    ctx->pc = 0x194f8cu;
    // NOP
    // 0x194f90: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x194f90u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x194f94: 0x4a6203bc  vdiv        $Q, $vf0w, $vf2x
    ctx->pc = 0x194f94u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x194f98: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x194f98u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x194f9c: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x194f9cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x194fa0: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x194fa0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x194fa4: 0x4be5197c  vftoi0.xyzw $vf5, $vf3
    ctx->pc = 0x194fa4u;
    { __m128 src = ctx->vu0_vf[3]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x194fa8: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x194fa8u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x194fac: 0xfaa50010  sqc2        $vf5, 0x10($s5)
    ctx->pc = 0x194facu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x194fb0: 0xfaa60020  sqc2        $vf6, 0x20($s5)
    ctx->pc = 0x194fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x194fb4: 0x4a0003bf  vwaitq
    ctx->pc = 0x194fb4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x194fb8: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x194fb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x194fbc: 0xfaa70000  sqc2        $vf7, 0x0($s5)
    ctx->pc = 0x194fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x194fc0: 0xfaa50040  sqc2        $vf5, 0x40($s5)
    ctx->pc = 0x194fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 64), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x194fc4: 0xfaa50070  sqc2        $vf5, 0x70($s5)
    ctx->pc = 0x194fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 112), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x194fc8: 0xfaa500a0  sqc2        $vf5, 0xA0($s5)
    ctx->pc = 0x194fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 160), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x194fcc: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x194fccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x194fd0: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x194fd0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x194fd4: 0xdea50000  ld          $a1, 0x0($s5)
    ctx->pc = 0x194fd4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x194fd8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x194fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x194fdc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x194fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x194fe0: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x194fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x194fe4: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x194fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
    // 0x194fe8: 0x2701821  addu        $v1, $s3, $s0
    ctx->pc = 0x194fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x194fec: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x194fecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x194ff0: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x194ff0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x194ff4: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x194ff4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x194ff8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x194ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x194ffc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x194ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x195000: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x195000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x195004: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x195004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x195008: 0x246605b0  addiu       $a2, $v1, 0x5B0
    ctx->pc = 0x195008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1456));
    // 0x19500c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x19500cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x195010: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x195010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x195014: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x195014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195018: 0x26c302d0  addiu       $v1, $s6, 0x2D0
    ctx->pc = 0x195018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 720));
    // 0x19501c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x19501cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x195020: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x195020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x195024: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x195024u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x195028: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x195028u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19502c: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x19502cu;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x195030: 0xfaa60020  sqc2        $vf6, 0x20($s5)
    ctx->pc = 0x195030u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x195034: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x195034u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x195038: 0xfaa70000  sqc2        $vf7, 0x0($s5)
    ctx->pc = 0x195038u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x19503c: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x19503cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x195040: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x195040u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x195044: 0xdea60000  ld          $a2, 0x0($s5)
    ctx->pc = 0x195044u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x195048: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x195048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x19504c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x19504cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x195050: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x195050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x195054: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x195054u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
    // 0x195058: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x195058u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x19505c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x19505cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x195060: 0x2701821  addu        $v1, $s3, $s0
    ctx->pc = 0x195060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x195064: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x195064u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x195068: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x195068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x19506c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x19506cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x195070: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x195070u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x195074: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x195074u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x195078: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x195078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19507c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x19507cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x195080: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x195080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x195084: 0x246605b0  addiu       $a2, $v1, 0x5B0
    ctx->pc = 0x195084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1456));
    // 0x195088: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x195088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19508c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19508cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x195090: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x195090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x195094: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x195094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195098: 0x26c302d0  addiu       $v1, $s6, 0x2D0
    ctx->pc = 0x195098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 720));
    // 0x19509c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x19509cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1950a0: 0x2433821  addu        $a3, $s2, $v1
    ctx->pc = 0x1950a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1950a4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1950a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1950a8: 0x0  nop
    ctx->pc = 0x1950a8u;
    // NOP
    // 0x1950ac: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1950acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1950b0: 0x4a6203bc  vdiv        $Q, $vf0w, $vf2x
    ctx->pc = 0x1950b0u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x1950b4: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x1950b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1950b8: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1950b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1950bc: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x1950bcu;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1950c0: 0xfaa60020  sqc2        $vf6, 0x20($s5)
    ctx->pc = 0x1950c0u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1950c4: 0x4a0003bf  vwaitq
    ctx->pc = 0x1950c4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1950c8: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x1950c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1950cc: 0xfaa70000  sqc2        $vf7, 0x0($s5)
    ctx->pc = 0x1950ccu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1950d0: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x1950d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x1950d4: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x1950d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x1950d8: 0x2701821  addu        $v1, $s3, $s0
    ctx->pc = 0x1950d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1950dc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1950dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1950e0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1950E0u;
    {
        const bool branch_taken_0x1950e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1950e0) {
            ctx->pc = 0x1950F8u;
            goto label_1950f8;
        }
    }
    ctx->pc = 0x1950E8u;
    // 0x1950e8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1950e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1950ec: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x1950ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1950f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1950F0u;
    {
        const bool branch_taken_0x1950f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1950f0) {
            ctx->pc = 0x195100u;
            goto label_195100;
        }
    }
    ctx->pc = 0x1950F8u;
label_1950f8:
    // 0x1950f8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1950f8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1950fc: 0x0  nop
    ctx->pc = 0x1950fcu;
    // NOP
label_195100:
    // 0x195100: 0xdea30000  ld          $v1, 0x0($s5)
    ctx->pc = 0x195100u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x195104: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x195104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x195108: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x195108u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
    // 0x19510c: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x19510cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x195110: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x195110u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x195114: 0x2701821  addu        $v1, $s3, $s0
    ctx->pc = 0x195114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x195118: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x195118u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19511c: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x19511cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x195120: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x195120u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x195124: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x195124u;
    {
        const bool branch_taken_0x195124 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x195124) {
            ctx->pc = 0x19513Cu;
            goto label_19513c;
        }
    }
    ctx->pc = 0x19512Cu;
    // 0x19512c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x19512cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x195130: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x195130u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x195134: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x195134u;
    {
        const bool branch_taken_0x195134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195134) {
            ctx->pc = 0x195140u;
            goto label_195140;
        }
    }
    ctx->pc = 0x19513Cu;
label_19513c:
    // 0x19513c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x19513cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_195140:
    // 0x195140: 0xdea30000  ld          $v1, 0x0($s5)
    ctx->pc = 0x195140u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x195144: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x195144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x195148: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x195148u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
    // 0x19514c: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x19514cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x195150: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x195150u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x195154: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x195154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x195158: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x195158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x19515c: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x19515cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x195160: 0x246605b0  addiu       $a2, $v1, 0x5B0
    ctx->pc = 0x195160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1456));
    // 0x195164: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x195164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x195168: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x195168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19516c: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x19516cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x195170: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x195170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195174: 0x26c302d0  addiu       $v1, $s6, 0x2D0
    ctx->pc = 0x195174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 720));
    // 0x195178: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x195178u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x19517c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x19517cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x195180: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x195180u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x195184: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x195184u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x195188: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x195188u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x19518c: 0xfaa60020  sqc2        $vf6, 0x20($s5)
    ctx->pc = 0x19518cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x195190: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x195190u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x195194: 0xfaa70000  sqc2        $vf7, 0x0($s5)
    ctx->pc = 0x195194u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x195198: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x195198u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x19519c: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x19519cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x1951a0: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1951a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1951a4: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1951a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1951a8: 0x30a30007  andi        $v1, $a1, 0x7
    ctx->pc = 0x1951a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x1951ac: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1951acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1951b0: 0x2701821  addu        $v1, $s3, $s0
    ctx->pc = 0x1951b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1951b4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1951b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1951b8: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x1951b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1951bc: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1951bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1951c0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1951C0u;
    {
        const bool branch_taken_0x1951c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1951c0) {
            ctx->pc = 0x1951D8u;
            goto label_1951d8;
        }
    }
    ctx->pc = 0x1951C8u;
    // 0x1951c8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1951c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1951cc: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x1951ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1951d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1951D0u;
    {
        const bool branch_taken_0x1951d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1951d0) {
            ctx->pc = 0x1951E0u;
            goto label_1951e0;
        }
    }
    ctx->pc = 0x1951D8u;
label_1951d8:
    // 0x1951d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1951d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1951dc: 0x0  nop
    ctx->pc = 0x1951dcu;
    // NOP
label_1951e0:
    // 0x1951e0: 0xdea30000  ld          $v1, 0x0($s5)
    ctx->pc = 0x1951e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1951e4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1951e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1951e8: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x1951e8u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
    // 0x1951ec: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x1951ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x1951f0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1951f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1951f4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1951f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1951f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1951f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1951fc: 0x0  nop
    ctx->pc = 0x1951fcu;
    // NOP
label_195200:
    // 0x195200: 0x92c30348  lbu         $v1, 0x348($s6)
    ctx->pc = 0x195200u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x195204: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x195204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x195208: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x195208u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x19520c: 0x1460ff55  bnez        $v1, . + 4 + (-0xAB << 2)
    ctx->pc = 0x19520Cu;
    {
        const bool branch_taken_0x19520c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19520c) {
            ctx->pc = 0x194F64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194f64;
        }
    }
    ctx->pc = 0x195214u;
    // 0x195214: 0x96c20340  lhu         $v0, 0x340($s6)
    ctx->pc = 0x195214u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 832)));
    // 0x195218: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x195218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19521c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x19521cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x195220: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x195220u;
    {
        const bool branch_taken_0x195220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x195220) {
            ctx->pc = 0x1952DCu;
            goto label_1952dc;
        }
    }
    ctx->pc = 0x195228u;
    // 0x195228: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x195228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19522c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x19522Cu;
    {
        const bool branch_taken_0x19522c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19522c) {
            ctx->pc = 0x195284u;
            goto label_195284;
        }
    }
    ctx->pc = 0x195234u;
    // 0x195234: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x195234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x195238: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x195238u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x19523c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19523cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x195240: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x195240u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x195244: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x195244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x195248: 0x8c55036c  lw          $s5, 0x36C($v0)
    ctx->pc = 0x195248u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x19524c: 0xdea30000  ld          $v1, 0x0($s5)
    ctx->pc = 0x19524cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x195250: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x195250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x195254: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x195254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x195258: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x195258u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x19525c: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x19525cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x195260: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x195260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x195264: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x195264u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x195268: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x195268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x19526c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x19526cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x195270: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x195270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x195274: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x195274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x195278: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x195278u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x19527c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x19527Cu;
    {
        const bool branch_taken_0x19527c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19527c) {
            ctx->pc = 0x1952D0u;
            goto label_1952d0;
        }
    }
    ctx->pc = 0x195284u;
label_195284:
    // 0x195284: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x195284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x195288: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x195288u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x19528c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19528cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x195290: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x195290u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x195294: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x195294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x195298: 0x8c42036c  lw          $v0, 0x36C($v0)
    ctx->pc = 0x195298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x19529c: 0x2a28023  subu        $s0, $s5, $v0
    ctx->pc = 0x19529cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1952a0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1952a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1952a4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1952a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1952a8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1952a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1952ac: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1952acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1952b0: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1952b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1952b4: 0x2603fff0  addiu       $v1, $s0, -0x10
    ctx->pc = 0x1952b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x1952b8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1952b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1952bc: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1952bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1952c0: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x1952c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x1952c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1952c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1952c8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1952c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1952cc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1952ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1952d0:
    // 0x1952d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1952d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1952d4: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1952D4u;
    {
        const bool branch_taken_0x1952d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1952d4) {
            ctx->pc = 0x1953ACu;
            goto label_1953ac;
        }
    }
    ctx->pc = 0x1952DCu;
label_1952dc:
    // 0x1952dc: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1952dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x1952e0: 0x8c222580  lw          $v0, 0x2580($at)
    ctx->pc = 0x1952e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532580u));
    // 0x1952e4: 0x2a28023  subu        $s0, $s5, $v0
    ctx->pc = 0x1952e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1952e8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1952e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1952ec: 0x101082  srl         $v0, $s0, 2
    ctx->pc = 0x1952ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
    // 0x1952f0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1952f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1952f4: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1952f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x1952f8: 0x8c222580  lw          $v0, 0x2580($at)
    ctx->pc = 0x1952f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532580u));
    // 0x1952fc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1952fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x195300: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x195300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x195304: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x195304u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x195308: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x195308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19530c: 0x21c80  sll         $v1, $v0, 18
    ctx->pc = 0x19530cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 18));
    // 0x195310: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x195310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x195314: 0x24422580  addiu       $v0, $v0, 0x2580
    ctx->pc = 0x195314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9600));
    // 0x195318: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x195318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19531c: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x19531cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
    // 0x195320: 0x3421fffc  ori         $at, $at, 0xFFFC
    ctx->pc = 0x195320u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65532);
    // 0x195324: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x195324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x195328: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x195328u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x19532c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19532Cu;
    {
        const bool branch_taken_0x19532c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19532c) {
            ctx->pc = 0x195340u;
            goto label_195340;
        }
    }
    ctx->pc = 0x195334u;
    // 0x195334: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x195334u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x195338: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x195338u;
    {
        const bool branch_taken_0x195338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195338) {
            ctx->pc = 0x1953ACu;
            goto label_1953ac;
        }
    }
    ctx->pc = 0x195340u;
label_195340:
    // 0x195340: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x195340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x195344: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x195344u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x195348: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x195348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x19534c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x19534cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x195350: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x195350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x195354: 0x2603fff0  addiu       $v1, $s0, -0x10
    ctx->pc = 0x195354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x195358: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x195358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x19535c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x19535cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x195360: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x195360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x195364: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x195364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x195368: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x195368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x19536c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x19536cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x195370: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x195370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x195374: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x195374u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x195378: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x195378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19537c: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x19537cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x195380: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x195380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x195384: 0x8c242580  lw          $a0, 0x2580($at)
    ctx->pc = 0x195384u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x532580u));
    // 0x195388: 0x73c02e28  paddub      $a1, $fp, $zero
    ctx->pc = 0x195388u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x19538c: 0xc06af20  jal         func_1ABC80
    ctx->pc = 0x19538Cu;
    SET_GPR_U32(ctx, 31, 0x195394u);
    ctx->pc = 0x1ABC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABC80u, 0x19538Cu, 0x195394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195394u;
label_195394:
    // 0x195394: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x195394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x195398: 0x8c222580  lw          $v0, 0x2580($at)
    ctx->pc = 0x195398u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532580u));
    // 0x19539c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x19539cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1953a0: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1953a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x1953a4: 0xac222580  sw          $v0, 0x2580($at)
    ctx->pc = 0x1953a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x532580u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x532580u, _value); } while (0);
    // 0x1953a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1953a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1953ac:
    // 0x1953ac: 0x7bbf00a0  lq          $ra, 0xA0($sp)
    ctx->pc = 0x1953acu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1953b0: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1953b0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1953b4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1953b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1953b8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1953b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1953bc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1953bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1953c0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1953c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1953c4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1953c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1953c8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1953c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1953cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1953ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1953d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1953d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1953d4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1953d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1953d8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1953d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1953dc: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x1953dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1953e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1953E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1953E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1953E8u;
}
