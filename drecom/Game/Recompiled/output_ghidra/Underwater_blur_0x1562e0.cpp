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

// Function: Underwater_blur
// Address: 0x1562e0 - 0x157134
void Underwater_blur_0x1562e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Underwater_blur_0x1562e0");
#endif

    switch (ctx->pc) {
        case 0x156344u: goto label_156344;
        case 0x156370u: goto label_156370;
        case 0x1564e4u: goto label_1564e4;
        case 0x15657cu: goto label_15657c;
        case 0x15662cu: goto label_15662c;
        case 0x156674u: goto label_156674;
        case 0x156e48u: goto label_156e48;
        case 0x156e58u: goto label_156e58;
        case 0x156ef4u: goto label_156ef4;
        case 0x156f48u: goto label_156f48;
        case 0x157028u: goto label_157028;
        case 0x157044u: goto label_157044;
        case 0x157098u: goto label_157098;
        case 0x1570d8u: goto label_1570d8;
        case 0x157108u: goto label_157108;
        default: break;
    }

    ctx->pc = 0x1562e0u;

    // 0x1562e0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1562e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1562e4: 0x7fbf0070  sq          $ra, 0x70($sp)
    ctx->pc = 0x1562e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x1562e8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1562e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1562ec: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1562ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1562f0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1562f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1562f4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1562f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1562f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1562f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1562fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1562fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x156300: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x156300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x156304: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x156304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x156308: 0x2442f9e0  addiu       $v0, $v0, -0x620
    ctx->pc = 0x156308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965728));
    // 0x15630c: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x15630cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x156310: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x156310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x156314: 0xae620050  sw          $v0, 0x50($s3)
    ctx->pc = 0x156314u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 2));
    // 0x156318: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x156318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x15631c: 0x3442104f  ori         $v0, $v0, 0x104F
    ctx->pc = 0x15631cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4175);
    // 0x156320: 0xae620054  sw          $v0, 0x54($s3)
    ctx->pc = 0x156320u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
    // 0x156324: 0x3c020a00  lui         $v0, 0xA00
    ctx->pc = 0x156324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2560 << 16));
    // 0x156328: 0x34430070  ori         $v1, $v0, 0x70
    ctx->pc = 0x156328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x15632c: 0xfe630058  sd          $v1, 0x58($s3)
    ctx->pc = 0x15632cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 88), GPR_U64(ctx, 3));
    // 0x156330: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x156330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x156334: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x156334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x156338: 0x26650050  addiu       $a1, $s3, 0x50
    ctx->pc = 0x156338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x15633c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x15633Cu;
    SET_GPR_U32(ctx, 31, 0x156344u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x15633Cu, 0x156344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156344u;
label_156344:
    // 0x156344: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x156344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x156348: 0xae620030  sw          $v0, 0x30($s3)
    ctx->pc = 0x156348u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
    // 0x15634c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x15634cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x156350: 0x34431015  ori         $v1, $v0, 0x1015
    ctx->pc = 0x156350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4117);
    // 0x156354: 0xae630034  sw          $v1, 0x34($s3)
    ctx->pc = 0x156354u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 3));
    // 0x156358: 0xfe600038  sd          $zero, 0x38($s3)
    ctx->pc = 0x156358u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 56), GPR_U64(ctx, 0));
    // 0x15635c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x15635cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x156360: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x156360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x156364: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x156364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x156368: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x156368u;
    SET_GPR_U32(ctx, 31, 0x156370u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x156368u, 0x156370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156370u;
label_156370:
    // 0x156370: 0x267500b0  addiu       $s5, $s3, 0xB0
    ctx->pc = 0x156370u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
    // 0x156374: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x156374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x156378: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x156378u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x15637c: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x15637cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x156380: 0x34422b16  ori         $v0, $v0, 0x2B16
    ctx->pc = 0x156380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x156384: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x156384u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x156388: 0xaea0000c  sw          $zero, 0xC($s5)
    ctx->pc = 0x156388u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 0));
    // 0x15638c: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x15638cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x156390: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x156390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x156394: 0xaea30004  sw          $v1, 0x4($s5)
    ctx->pc = 0x156394u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
    // 0x156398: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x156398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x15639c: 0x90224f10  lbu         $v0, 0x4F10($at)
    ctx->pc = 0x15639cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3F4F10u));
    // 0x1563a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1563a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1563a4: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1563a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1563a8: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x1563a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x1563ac: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x1563acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1563b0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1563b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1563b4: 0x26a20010  addiu       $v0, $s5, 0x10
    ctx->pc = 0x1563b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x1563b8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1563b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1563bc: 0x26a20014  addiu       $v0, $s5, 0x14
    ctx->pc = 0x1563bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
    // 0x1563c0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1563c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1563c4: 0x3c020df0  lui         $v0, 0xDF0
    ctx->pc = 0x1563c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3568 << 16));
    // 0x1563c8: 0x34431ff0  ori         $v1, $v0, 0x1FF0
    ctx->pc = 0x1563c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8176);
    // 0x1563cc: 0x26a20020  addiu       $v0, $s5, 0x20
    ctx->pc = 0x1563ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x1563d0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1563d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1563d4: 0x3c0278fb  lui         $v0, 0x78FB
    ctx->pc = 0x1563d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30971 << 16));
    // 0x1563d8: 0x34436ff7  ori         $v1, $v0, 0x6FF7
    ctx->pc = 0x1563d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28663);
    // 0x1563dc: 0x26a20018  addiu       $v0, $s5, 0x18
    ctx->pc = 0x1563dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
    // 0x1563e0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1563e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1563e4: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x1563e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1563e8: 0x26a2001c  addiu       $v0, $s5, 0x1C
    ctx->pc = 0x1563e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 28));
    // 0x1563ec: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1563ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1563f0: 0x3c0286eb  lui         $v0, 0x86EB
    ctx->pc = 0x1563f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34539 << 16));
    // 0x1563f4: 0x34438fe7  ori         $v1, $v0, 0x8FE7
    ctx->pc = 0x1563f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36839);
    // 0x1563f8: 0x26a20024  addiu       $v0, $s5, 0x24
    ctx->pc = 0x1563f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 36));
    // 0x1563fc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1563fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x156400: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x156400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x156404: 0x26a20028  addiu       $v0, $s5, 0x28
    ctx->pc = 0x156404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 40));
    // 0x156408: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x156408u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x15640c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15640cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x156410: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x156410u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x156414: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x156414u;
    {
        const bool branch_taken_0x156414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x156414) {
            ctx->pc = 0x156458u;
            goto label_156458;
        }
    }
    ctx->pc = 0x15641Cu;
    // 0x15641c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x15641cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x156420: 0x2447ec58  addiu       $a3, $v0, -0x13A8
    ctx->pc = 0x156420u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962264));
    // 0x156424: 0x26665508  addiu       $a2, $s3, 0x5508
    ctx->pc = 0x156424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 21768));
    // 0x156428: 0xdce50000  ld          $a1, 0x0($a3)
    ctx->pc = 0x156428u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x47EC58u));
    // 0x15642c: 0xdce40008  ld          $a0, 0x8($a3)
    ctx->pc = 0x15642cu;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x47EC60u));
    // 0x156430: 0xdce30010  ld          $v1, 0x10($a3)
    ctx->pc = 0x156430u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x47EC68u));
    // 0x156434: 0xdce20018  ld          $v0, 0x18($a3)
    ctx->pc = 0x156434u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x47EC70u));
    // 0x156438: 0xfcc50000  sd          $a1, 0x0($a2)
    ctx->pc = 0x156438u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
    // 0x15643c: 0xfcc40008  sd          $a0, 0x8($a2)
    ctx->pc = 0x15643cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 4));
    // 0x156440: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x156440u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x156444: 0xfcc20018  sd          $v0, 0x18($a2)
    ctx->pc = 0x156444u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 2));
    // 0x156448: 0xdce20020  ld          $v0, 0x20($a3)
    ctx->pc = 0x156448u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x47EC78u));
    // 0x15644c: 0xfcc20020  sd          $v0, 0x20($a2)
    ctx->pc = 0x15644cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 32), GPR_U64(ctx, 2));
    // 0x156450: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x156450u;
    {
        const bool branch_taken_0x156450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156450) {
            ctx->pc = 0x15648Cu;
            goto label_15648c;
        }
    }
    ctx->pc = 0x156458u;
label_156458:
    // 0x156458: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x156458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x15645c: 0x2447ec80  addiu       $a3, $v0, -0x1380
    ctx->pc = 0x15645cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962304));
    // 0x156460: 0x26665508  addiu       $a2, $s3, 0x5508
    ctx->pc = 0x156460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 21768));
    // 0x156464: 0xdce50000  ld          $a1, 0x0($a3)
    ctx->pc = 0x156464u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x47EC80u));
    // 0x156468: 0xdce40008  ld          $a0, 0x8($a3)
    ctx->pc = 0x156468u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x47EC88u));
    // 0x15646c: 0xdce30010  ld          $v1, 0x10($a3)
    ctx->pc = 0x15646cu;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x47EC90u));
    // 0x156470: 0xdce20018  ld          $v0, 0x18($a3)
    ctx->pc = 0x156470u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x47EC98u));
    // 0x156474: 0xfcc50000  sd          $a1, 0x0($a2)
    ctx->pc = 0x156474u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
    // 0x156478: 0xfcc40008  sd          $a0, 0x8($a2)
    ctx->pc = 0x156478u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 4));
    // 0x15647c: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x15647cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x156480: 0xfcc20018  sd          $v0, 0x18($a2)
    ctx->pc = 0x156480u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 2));
    // 0x156484: 0xdce20020  ld          $v0, 0x20($a3)
    ctx->pc = 0x156484u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x47ECA0u));
    // 0x156488: 0xfcc20020  sd          $v0, 0x20($a2)
    ctx->pc = 0x156488u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 32), GPR_U64(ctx, 2));
label_15648c:
    // 0x15648c: 0x92655524  lbu         $a1, 0x5524($s3)
    ctx->pc = 0x15648cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 21796)));
    // 0x156490: 0x30030001  andi        $v1, $zero, 0x1
    ctx->pc = 0x156490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x156494: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x156494u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x156498: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x156498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x15649c: 0xa21824  and         $v1, $a1, $v0
    ctx->pc = 0x15649cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1564a0: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x1564a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1564a4: 0xa2625524  sb          $v0, 0x5524($s3)
    ctx->pc = 0x1564a4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 21796), (uint8_t)GPR_U32(ctx, 2));
    // 0x1564a8: 0x92645524  lbu         $a0, 0x5524($s3)
    ctx->pc = 0x1564a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 21796)));
    // 0x1564ac: 0x30020003  andi        $v0, $zero, 0x3
    ctx->pc = 0x1564acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x1564b0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1564b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1564b4: 0x2402ffe7  addiu       $v0, $zero, -0x19
    ctx->pc = 0x1564b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x1564b8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x1564b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1564bc: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x1564bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1564c0: 0xa2655524  sb          $a1, 0x5524($s3)
    ctx->pc = 0x1564c0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 21796), (uint8_t)GPR_U32(ctx, 5));
    // 0x1564c4: 0x26625508  addiu       $v0, $s3, 0x5508
    ctx->pc = 0x1564c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 21768));
    // 0x1564c8: 0xaea20008  sw          $v0, 0x8($s5)
    ctx->pc = 0x1564c8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
    // 0x1564cc: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1564ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x1564d0: 0x24851614  addiu       $a1, $a0, 0x1614
    ctx->pc = 0x1564d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 5652));
    // 0x1564d4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1564d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1564d8: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x1564d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1564dc: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1564DCu;
    SET_GPR_U32(ctx, 31, 0x1564E4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1564DCu, 0x1564E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1564E4u;
label_1564e4:
    // 0x1564e4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1564e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1564e8: 0x2447ecd0  addiu       $a3, $v0, -0x1330
    ctx->pc = 0x1564e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962384));
    // 0x1564ec: 0x266654e0  addiu       $a2, $s3, 0x54E0
    ctx->pc = 0x1564ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 21728));
    // 0x1564f0: 0xdce50000  ld          $a1, 0x0($a3)
    ctx->pc = 0x1564f0u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x47ECD0u));
    // 0x1564f4: 0xdce40008  ld          $a0, 0x8($a3)
    ctx->pc = 0x1564f4u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x47ECD8u));
    // 0x1564f8: 0xdce30010  ld          $v1, 0x10($a3)
    ctx->pc = 0x1564f8u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x47ECE0u));
    // 0x1564fc: 0xdce20018  ld          $v0, 0x18($a3)
    ctx->pc = 0x1564fcu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x47ECE8u));
    // 0x156500: 0xfcc50000  sd          $a1, 0x0($a2)
    ctx->pc = 0x156500u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
    // 0x156504: 0xfcc40008  sd          $a0, 0x8($a2)
    ctx->pc = 0x156504u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 4));
    // 0x156508: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x156508u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x15650c: 0xfcc20018  sd          $v0, 0x18($a2)
    ctx->pc = 0x15650cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 2));
    // 0x156510: 0xdce20020  ld          $v0, 0x20($a3)
    ctx->pc = 0x156510u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x47ECF0u));
    // 0x156514: 0xfcc20020  sd          $v0, 0x20($a2)
    ctx->pc = 0x156514u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 32), GPR_U64(ctx, 2));
    // 0x156518: 0x926454fc  lbu         $a0, 0x54FC($s3)
    ctx->pc = 0x156518u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 21756)));
    // 0x15651c: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x15651cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x156520: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x156520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x156524: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x156524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x156528: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x156528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x15652c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x15652cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x156530: 0xa26254fc  sb          $v0, 0x54FC($s3)
    ctx->pc = 0x156530u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 21756), (uint8_t)GPR_U32(ctx, 2));
    // 0x156534: 0x926454fc  lbu         $a0, 0x54FC($s3)
    ctx->pc = 0x156534u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 21756)));
    // 0x156538: 0x30020003  andi        $v0, $zero, 0x3
    ctx->pc = 0x156538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x15653c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x15653cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x156540: 0x2402ffe7  addiu       $v0, $zero, -0x19
    ctx->pc = 0x156540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x156544: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x156544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x156548: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x156548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x15654c: 0xa26254fc  sb          $v0, 0x54FC($s3)
    ctx->pc = 0x15654cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 21756), (uint8_t)GPR_U32(ctx, 2));
    // 0x156550: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x156550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x156554: 0x8c22f740  lw          $v0, -0x8C0($at)
    ctx->pc = 0x156554u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EF740u));
    // 0x156558: 0x441000e  bgez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x156558u;
    {
        const bool branch_taken_0x156558 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x156558) {
            ctx->pc = 0x156594u;
            goto label_156594;
        }
    }
    ctx->pc = 0x156560u;
    // 0x156560: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x156560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x156564: 0x8c22f748  lw          $v0, -0x8B8($at)
    ctx->pc = 0x156564u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EF748u));
    // 0x156568: 0x38440001  xori        $a0, $v0, 0x1
    ctx->pc = 0x156568u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x15656c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15656cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x156570: 0xac24f748  sw          $a0, -0x8B8($at)
    ctx->pc = 0x156570u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3EF748u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF748u, _value); } while (0);
    // 0x156574: 0xc067694  jal         func_19DA50
    ctx->pc = 0x156574u;
    SET_GPR_U32(ctx, 31, 0x15657Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x156574u, 0x15657Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15657Cu;
label_15657c:
    // 0x15657c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x15657cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x156580: 0x109043  sra         $s2, $s0, 1
    ctx->pc = 0x156580u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 16), 1));
    // 0x156584: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x156584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x156588: 0xac32f740  sw          $s2, -0x8C0($at)
    ctx->pc = 0x156588u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x3EF740u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF740u, _value); } while (0);
    // 0x15658c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15658Cu;
    {
        const bool branch_taken_0x15658c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15658c) {
            ctx->pc = 0x1565B4u;
            goto label_1565b4;
        }
    }
    ctx->pc = 0x156594u;
label_156594:
    // 0x156594: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x156594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x156598: 0x8c22f748  lw          $v0, -0x8B8($at)
    ctx->pc = 0x156598u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EF748u));
    // 0x15659c: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x15659cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1565a0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1565a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1565a4: 0x8c22f740  lw          $v0, -0x8C0($at)
    ctx->pc = 0x1565a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EF740u));
    // 0x1565a8: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1565a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1565ac: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1565acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1565b0: 0xac22f740  sw          $v0, -0x8C0($at)
    ctx->pc = 0x1565b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EF740u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF740u, _value); } while (0);
label_1565b4:
    // 0x1565b4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1565b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1565b8: 0x8c22f748  lw          $v0, -0x8B8($at)
    ctx->pc = 0x1565b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EF748u));
    // 0x1565bc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1565BCu;
    {
        const bool branch_taken_0x1565bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1565bc) {
            ctx->pc = 0x1565F4u;
            goto label_1565f4;
        }
    }
    ctx->pc = 0x1565C4u;
    // 0x1565c4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1565c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1565c8: 0x8c225520  lw          $v0, 0x5520($at)
    ctx->pc = 0x1565c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x385520u));
    // 0x1565cc: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1565ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1565d0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1565d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1565d4: 0xac225520  sw          $v0, 0x5520($at)
    ctx->pc = 0x1565d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x385520u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x385520u, _value); } while (0);
    // 0x1565d8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1565d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1565dc: 0x8c245528  lw          $a0, 0x5528($at)
    ctx->pc = 0x1565dcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x385528u));
    // 0x1565e0: 0x2485fffe  addiu       $a1, $a0, -0x2
    ctx->pc = 0x1565e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x1565e4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1565e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1565e8: 0xac255528  sw          $a1, 0x5528($at)
    ctx->pc = 0x1565e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x385528u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x385528u, _value); } while (0);
    // 0x1565ec: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1565ECu;
    {
        const bool branch_taken_0x1565ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1565ec) {
            ctx->pc = 0x15661Cu;
            goto label_15661c;
        }
    }
    ctx->pc = 0x1565F4u;
label_1565f4:
    // 0x1565f4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1565f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1565f8: 0x8c225520  lw          $v0, 0x5520($at)
    ctx->pc = 0x1565f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x385520u));
    // 0x1565fc: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1565fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x156600: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x156600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x156604: 0xac225520  sw          $v0, 0x5520($at)
    ctx->pc = 0x156604u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x385520u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x385520u, _value); } while (0);
    // 0x156608: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x156608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x15660c: 0x8c225528  lw          $v0, 0x5528($at)
    ctx->pc = 0x15660cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x385528u));
    // 0x156610: 0x2456ffff  addiu       $s6, $v0, -0x1
    ctx->pc = 0x156610u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x156614: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x156614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x156618: 0xac365528  sw          $s6, 0x5528($at)
    ctx->pc = 0x156618u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 22)); ps2TraceGuestWrite(rdram, 0x385528u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x385528u, _value); } while (0);
label_15661c:
    // 0x15661c: 0x267000dc  addiu       $s0, $s3, 0xDC
    ctx->pc = 0x15661cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 220));
    // 0x156620: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x156620u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x156624: 0x1000023a  b           . + 4 + (0x23A << 2)
    ctx->pc = 0x156624u;
    {
        const bool branch_taken_0x156624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156624) {
            ctx->pc = 0x156F10u;
            goto label_156f10;
        }
    }
    ctx->pc = 0x15662Cu;
label_15662c:
    // 0x15662c: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15662Cu;
    {
        const bool branch_taken_0x15662c = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x15662c) {
            ctx->pc = 0x156648u;
            goto label_156648;
        }
    }
    ctx->pc = 0x156634u;
    // 0x156634: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x156634u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156638: 0x0  nop
    ctx->pc = 0x156638u;
    // NOP
    // 0x15663c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15663cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x156640: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x156640u;
    {
        const bool branch_taken_0x156640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156640) {
            ctx->pc = 0x156664u;
            goto label_156664;
        }
    }
    ctx->pc = 0x156648u;
label_156648:
    // 0x156648: 0x11b042  srl         $s6, $s1, 1
    ctx->pc = 0x156648u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x15664c: 0x32340001  andi        $s4, $s1, 0x1
    ctx->pc = 0x15664cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x156650: 0x2d4b025  or          $s6, $s6, $s4
    ctx->pc = 0x156650u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 20));
    // 0x156654: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x156654u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156658: 0x0  nop
    ctx->pc = 0x156658u;
    // NOP
    // 0x15665c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15665cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x156660: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x156660u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_156664:
    // 0x156664: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x156664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x156668: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x156668u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15666c: 0x10000224  b           . + 4 + (0x224 << 2)
    ctx->pc = 0x15666Cu;
    {
        const bool branch_taken_0x15666c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15666c) {
            ctx->pc = 0x156F00u;
            goto label_156f00;
        }
    }
    ctx->pc = 0x156674u;
label_156674:
    // 0x156674: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x156674u;
    {
        const bool branch_taken_0x156674 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x156674) {
            ctx->pc = 0x156690u;
            goto label_156690;
        }
    }
    ctx->pc = 0x15667Cu;
    // 0x15667c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x15667cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156680: 0x0  nop
    ctx->pc = 0x156680u;
    // NOP
    // 0x156684: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x156684u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x156688: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x156688u;
    {
        const bool branch_taken_0x156688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156688) {
            ctx->pc = 0x1566ACu;
            goto label_1566ac;
        }
    }
    ctx->pc = 0x156690u;
label_156690:
    // 0x156690: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x156690u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x156694: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x156694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x156698: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x156698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15669c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15669cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1566a0: 0x0  nop
    ctx->pc = 0x1566a0u;
    // NOP
    // 0x1566a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1566a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1566a8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1566a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1566ac:
    // 0x1566ac: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1566acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1566b0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1566b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1566b4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1566b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1566b8: 0x3c027400  lui         $v0, 0x7400
    ctx->pc = 0x1566b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29696 << 16));
    // 0x1566bc: 0x34423a14  ori         $v0, $v0, 0x3A14
    ctx->pc = 0x1566bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14868);
    // 0x1566c0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1566c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1566c4: 0x3c038080  lui         $v1, 0x8080
    ctx->pc = 0x1566c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32896 << 16));
    // 0x1566c8: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x1566c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x1566cc: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1566ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1566d0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1566d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1566d4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1566d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1566d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1566d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1566dc: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x1566dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1566e0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1566e0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1566e4: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x1566e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1566e8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1566e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1566ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1566ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1566f0: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x1566f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1566f4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1566f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1566f8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1566f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1566fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1566fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156700: 0x0  nop
    ctx->pc = 0x156700u;
    // NOP
    // 0x156704: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x156704u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x156708: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x156708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x15670c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x15670cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x156710: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x156710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156714: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x156714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156718: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x156718u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x15671c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x15671cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x156720: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x156720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x156724: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x156724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156728: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x156728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15672c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x15672cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x156730: 0x3c144120  lui         $s4, 0x4120
    ctx->pc = 0x156730u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)16672 << 16));
    // 0x156734: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x156734u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156738: 0x0  nop
    ctx->pc = 0x156738u;
    // NOP
    // 0x15673c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x15673cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x156740: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x156740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x156744: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x156744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x156748: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x156748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15674c: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x15674cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156750: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x156750u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x156754: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x156754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x156758: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15675c: 0x0  nop
    ctx->pc = 0x15675cu;
    // NOP
    // 0x156760: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x156760u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x156764: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x156764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x156768: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156768u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15676c: 0x0  nop
    ctx->pc = 0x15676cu;
    // NOP
    // 0x156770: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x156770u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x156774: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x156774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x156778: 0x3c144120  lui         $s4, 0x4120
    ctx->pc = 0x156778u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)16672 << 16));
    // 0x15677c: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x15677cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156780: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x156780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156784: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x156784u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x156788: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x156788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x15678c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15678cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156790: 0x0  nop
    ctx->pc = 0x156790u;
    // NOP
    // 0x156794: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x156794u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x156798: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x156798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x15679c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15679cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1567a0: 0x0  nop
    ctx->pc = 0x1567a0u;
    // NOP
    // 0x1567a4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1567a4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1567a8: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x1567a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x1567ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1567acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1567b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1567b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1567b4: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1567b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1567b8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1567b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1567bc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1567bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1567c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1567c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1567c4: 0x0  nop
    ctx->pc = 0x1567c4u;
    // NOP
    // 0x1567c8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1567c8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1567cc: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x1567ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x1567d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1567d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1567d4: 0x0  nop
    ctx->pc = 0x1567d4u;
    // NOP
    // 0x1567d8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1567d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1567dc: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x1567dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x1567e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1567e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1567e4: 0x0  nop
    ctx->pc = 0x1567e4u;
    // NOP
    // 0x1567e8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1567e8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1567ec: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x1567ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x1567f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1567f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1567f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1567f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1567f8: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1567f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1567fc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1567fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x156800: 0x3c144120  lui         $s4, 0x4120
    ctx->pc = 0x156800u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)16672 << 16));
    // 0x156804: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x156804u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156808: 0x0  nop
    ctx->pc = 0x156808u;
    // NOP
    // 0x15680c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x15680cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x156810: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x156810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x156814: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156814u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156818: 0x0  nop
    ctx->pc = 0x156818u;
    // NOP
    // 0x15681c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x15681cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x156820: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x156820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x156824: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156828: 0x0  nop
    ctx->pc = 0x156828u;
    // NOP
    // 0x15682c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x15682cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x156830: 0x0  nop
    ctx->pc = 0x156830u;
    // NOP
    // 0x156834: 0x0  nop
    ctx->pc = 0x156834u;
    // NOP
    // 0x156838: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x156838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x15683c: 0x1640001d  bnez        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x15683Cu;
    {
        const bool branch_taken_0x15683c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x15683c) {
            ctx->pc = 0x1568B4u;
            goto label_1568b4;
        }
    }
    ctx->pc = 0x156844u;
    // 0x156844: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x156844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x156848: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x156848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15684c: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x15684cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156850: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x156850u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x156854: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x156854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x156858: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15685c: 0x0  nop
    ctx->pc = 0x15685cu;
    // NOP
    // 0x156860: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x156860u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x156864: 0x3c0244e0  lui         $v0, 0x44E0
    ctx->pc = 0x156864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17632 << 16));
    // 0x156868: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15686c: 0x0  nop
    ctx->pc = 0x15686cu;
    // NOP
    // 0x156870: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x156870u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x156874: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x156874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x156878: 0x3c034400  lui         $v1, 0x4400
    ctx->pc = 0x156878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17408 << 16));
    // 0x15687c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x15687cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156880: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x156880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156884: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x156884u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x156888: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x156888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x15688c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15688cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156890: 0x0  nop
    ctx->pc = 0x156890u;
    // NOP
    // 0x156894: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x156894u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x156898: 0x3c0444e0  lui         $a0, 0x44E0
    ctx->pc = 0x156898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17632 << 16));
    // 0x15689c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x15689cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1568a0: 0x0  nop
    ctx->pc = 0x1568a0u;
    // NOP
    // 0x1568a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1568a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1568a8: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x1568a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1568ac: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1568ACu;
    {
        const bool branch_taken_0x1568ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1568ac) {
            ctx->pc = 0x1569A0u;
            goto label_1569a0;
        }
    }
    ctx->pc = 0x1568B4u;
label_1568b4:
    // 0x1568b4: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x1568b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1568b8: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x1568b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x1568bc: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1568bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1568c0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1568c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1568c4: 0x8c225520  lw          $v0, 0x5520($at)
    ctx->pc = 0x1568c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x385520u));
    // 0x1568c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1568c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1568cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1568ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1568d0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1568d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1568d4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1568d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1568d8: 0x24427710  addiu       $v0, $v0, 0x7710
    ctx->pc = 0x1568d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30480));
    // 0x1568dc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1568dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1568e0: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1568e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x1568e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1568e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1568e8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1568e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1568ec: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1568ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1568f0: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x1568f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x1568f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1568f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1568f8: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x1568f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1568fc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1568fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x156900: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x156900u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x156904: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x156904u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156908: 0x0  nop
    ctx->pc = 0x156908u;
    // NOP
    // 0x15690c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x15690cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x156910: 0x3c0544e0  lui         $a1, 0x44E0
    ctx->pc = 0x156910u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17632 << 16));
    // 0x156914: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x156914u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156918: 0x0  nop
    ctx->pc = 0x156918u;
    // NOP
    // 0x15691c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15691cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x156920: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x156920u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x156924: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x156924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x156928: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x156928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15692c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x15692cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x156930: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x156930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x156934: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x156934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x156938: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x156938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x15693c: 0x8c225520  lw          $v0, 0x5520($at)
    ctx->pc = 0x15693cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x385520u));
    // 0x156940: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x156940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156944: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x156944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x156948: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x156948u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15694c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x15694cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x156950: 0x24427710  addiu       $v0, $v0, 0x7710
    ctx->pc = 0x156950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30480));
    // 0x156954: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x156954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156958: 0x3c053fc0  lui         $a1, 0x3FC0
    ctx->pc = 0x156958u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16320 << 16));
    // 0x15695c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x15695cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156960: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x156960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156964: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x156964u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x156968: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x156968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x15696c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15696cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156970: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x156970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156974: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x156974u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x156978: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x156978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x15697c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15697cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156980: 0x0  nop
    ctx->pc = 0x156980u;
    // NOP
    // 0x156984: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x156984u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x156988: 0x3c0244e0  lui         $v0, 0x44E0
    ctx->pc = 0x156988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17632 << 16));
    // 0x15698c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15698cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156990: 0x0  nop
    ctx->pc = 0x156990u;
    // NOP
    // 0x156994: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x156994u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x156998: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x156998u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x15699c: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x15699cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_1569a0:
    // 0x1569a0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1569a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1569a4: 0x16420023  bne         $s2, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1569A4u;
    {
        const bool branch_taken_0x1569a4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1569a4) {
            ctx->pc = 0x156A34u;
            goto label_156a34;
        }
    }
    ctx->pc = 0x1569ACu;
    // 0x1569ac: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x1569acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x1569b0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1569b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1569b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1569b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1569b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1569b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1569bc: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x1569bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1569c0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1569c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1569c4: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x1569c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1569c8: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x1569c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x1569cc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1569ccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1569d0: 0x0  nop
    ctx->pc = 0x1569d0u;
    // NOP
    // 0x1569d4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1569d4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1569d8: 0x3c0544e0  lui         $a1, 0x44E0
    ctx->pc = 0x1569d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17632 << 16));
    // 0x1569dc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1569dcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1569e0: 0x0  nop
    ctx->pc = 0x1569e0u;
    // NOP
    // 0x1569e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1569e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1569e8: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1569e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1569ec: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x1569ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x1569f0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1569f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1569f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1569f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1569f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1569f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1569fc: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x1569fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156a00: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x156a00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x156a04: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x156a04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x156a08: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x156a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x156a0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156a0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156a10: 0x0  nop
    ctx->pc = 0x156a10u;
    // NOP
    // 0x156a14: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x156a14u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x156a18: 0x3c0244e0  lui         $v0, 0x44E0
    ctx->pc = 0x156a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17632 << 16));
    // 0x156a1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156a1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156a20: 0x0  nop
    ctx->pc = 0x156a20u;
    // NOP
    // 0x156a24: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x156a24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x156a28: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x156a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x156a2c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x156A2Cu;
    {
        const bool branch_taken_0x156a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156a2c) {
            ctx->pc = 0x156B38u;
            goto label_156b38;
        }
    }
    ctx->pc = 0x156A34u;
label_156a34:
    // 0x156a34: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x156a34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x156a38: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x156a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x156a3c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x156a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x156a40: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x156a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x156a44: 0x8c225520  lw          $v0, 0x5520($at)
    ctx->pc = 0x156a44u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x385520u));
    // 0x156a48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x156a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156a4c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x156a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x156a50: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x156a50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x156a54: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x156a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x156a58: 0x24427710  addiu       $v0, $v0, 0x7710
    ctx->pc = 0x156a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30480));
    // 0x156a5c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x156a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156a60: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x156a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x156a64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x156a64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156a68: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x156a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156a6c: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x156a6cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x156a70: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x156a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x156a74: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x156a74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x156a78: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x156a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x156a7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x156a7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156a80: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x156a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156a84: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x156a84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x156a88: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x156a88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x156a8c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x156a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x156a90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156a90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156a94: 0x0  nop
    ctx->pc = 0x156a94u;
    // NOP
    // 0x156a98: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x156a98u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x156a9c: 0x3c0244e0  lui         $v0, 0x44E0
    ctx->pc = 0x156a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17632 << 16));
    // 0x156aa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156aa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156aa4: 0x0  nop
    ctx->pc = 0x156aa4u;
    // NOP
    // 0x156aa8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x156aa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x156aac: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x156aacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x156ab0: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x156ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x156ab4: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x156ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x156ab8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x156ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x156abc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x156abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156ac0: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x156ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x156ac4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x156ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x156ac8: 0x8c225520  lw          $v0, 0x5520($at)
    ctx->pc = 0x156ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x385520u));
    // 0x156acc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x156accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156ad0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x156ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x156ad4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x156ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x156ad8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x156ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x156adc: 0x24427710  addiu       $v0, $v0, 0x7710
    ctx->pc = 0x156adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30480));
    // 0x156ae0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x156ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156ae4: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x156ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x156ae8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x156ae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156aec: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x156aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156af0: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x156af0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x156af4: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x156af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x156af8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x156af8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x156afc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x156afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x156b00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x156b00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156b04: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x156b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156b08: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x156b08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x156b0c: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x156b0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x156b10: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x156b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x156b14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156b14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156b18: 0x0  nop
    ctx->pc = 0x156b18u;
    // NOP
    // 0x156b1c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x156b1cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x156b20: 0x3c0244e0  lui         $v0, 0x44E0
    ctx->pc = 0x156b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17632 << 16));
    // 0x156b24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156b24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156b28: 0x0  nop
    ctx->pc = 0x156b28u;
    // NOP
    // 0x156b2c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x156b2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x156b30: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x156b30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x156b34: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x156b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_156b38:
    // 0x156b38: 0x1620001d  bnez        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x156B38u;
    {
        const bool branch_taken_0x156b38 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x156b38) {
            ctx->pc = 0x156BB0u;
            goto label_156bb0;
        }
    }
    ctx->pc = 0x156B40u;
    // 0x156b40: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x156b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x156b44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x156b44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156b48: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x156b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156b4c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x156b4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x156b50: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x156b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x156b54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156b54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156b58: 0x0  nop
    ctx->pc = 0x156b58u;
    // NOP
    // 0x156b5c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x156b5cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x156b60: 0x3c0244f2  lui         $v0, 0x44F2
    ctx->pc = 0x156b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17650 << 16));
    // 0x156b64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156b64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156b68: 0x0  nop
    ctx->pc = 0x156b68u;
    // NOP
    // 0x156b6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x156b6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x156b70: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x156b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x156b74: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x156b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x156b78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x156b78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156b7c: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x156b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156b80: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x156b80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x156b84: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x156b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x156b88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156b88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156b8c: 0x0  nop
    ctx->pc = 0x156b8cu;
    // NOP
    // 0x156b90: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x156b90u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x156b94: 0x3c0244f2  lui         $v0, 0x44F2
    ctx->pc = 0x156b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17650 << 16));
    // 0x156b98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156b98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156b9c: 0x0  nop
    ctx->pc = 0x156b9cu;
    // NOP
    // 0x156ba0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x156ba0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x156ba4: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x156ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x156ba8: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x156BA8u;
    {
        const bool branch_taken_0x156ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156ba8) {
            ctx->pc = 0x156C98u;
            goto label_156c98;
        }
    }
    ctx->pc = 0x156BB0u;
label_156bb0:
    // 0x156bb0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x156bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x156bb4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x156bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x156bb8: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x156bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x156bbc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x156bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x156bc0: 0x8c225528  lw          $v0, 0x5528($at)
    ctx->pc = 0x156bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x385528u));
    // 0x156bc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x156bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156bc8: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x156bc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x156bcc: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x156bccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x156bd0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x156bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x156bd4: 0x24427710  addiu       $v0, $v0, 0x7710
    ctx->pc = 0x156bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30480));
    // 0x156bd8: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x156bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x156bdc: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x156bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x156be0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x156be0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156be4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x156be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156be8: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x156be8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x156bec: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x156becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x156bf0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x156bf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156bf4: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x156bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156bf8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x156bf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x156bfc: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x156bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x156c00: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x156c00u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156c04: 0x0  nop
    ctx->pc = 0x156c04u;
    // NOP
    // 0x156c08: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x156c08u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x156c0c: 0x3c0544f2  lui         $a1, 0x44F2
    ctx->pc = 0x156c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17650 << 16));
    // 0x156c10: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x156c10u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156c14: 0x0  nop
    ctx->pc = 0x156c14u;
    // NOP
    // 0x156c18: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x156c18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x156c1c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x156c1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x156c20: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x156c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x156c24: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x156c24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x156c28: 0x51a821  addu        $s5, $v0, $s1
    ctx->pc = 0x156c28u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x156c2c: 0x151840  sll         $v1, $s5, 1
    ctx->pc = 0x156c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x156c30: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x156c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x156c34: 0x8c225528  lw          $v0, 0x5528($at)
    ctx->pc = 0x156c34u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x385528u));
    // 0x156c38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x156c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156c3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x156c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x156c40: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x156c40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x156c44: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x156c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x156c48: 0x24427710  addiu       $v0, $v0, 0x7710
    ctx->pc = 0x156c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30480));
    // 0x156c4c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x156c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156c50: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x156c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x156c54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x156c54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156c58: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x156c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156c5c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x156c5cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x156c60: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x156c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x156c64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x156c64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156c68: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x156c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156c6c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x156c6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x156c70: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x156c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x156c74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x156c74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156c78: 0x0  nop
    ctx->pc = 0x156c78u;
    // NOP
    // 0x156c7c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x156c7cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x156c80: 0x3c0244f2  lui         $v0, 0x44F2
    ctx->pc = 0x156c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17650 << 16));
    // 0x156c84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156c84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156c88: 0x0  nop
    ctx->pc = 0x156c88u;
    // NOP
    // 0x156c8c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x156c8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x156c90: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x156c90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x156c94: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x156c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_156c98:
    // 0x156c98: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x156c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x156c9c: 0x16220023  bne         $s1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x156C9Cu;
    {
        const bool branch_taken_0x156c9c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x156c9c) {
            ctx->pc = 0x156D2Cu;
            goto label_156d2c;
        }
    }
    ctx->pc = 0x156CA4u;
    // 0x156ca4: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x156ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x156ca8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x156ca8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x156cac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x156cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x156cb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x156cb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156cb4: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x156cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156cb8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x156cb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x156cbc: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x156cbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x156cc0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x156cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x156cc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156cc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156cc8: 0x0  nop
    ctx->pc = 0x156cc8u;
    // NOP
    // 0x156ccc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x156cccu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x156cd0: 0x3c0344f2  lui         $v1, 0x44F2
    ctx->pc = 0x156cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17650 << 16));
    // 0x156cd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x156cd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156cd8: 0x0  nop
    ctx->pc = 0x156cd8u;
    // NOP
    // 0x156cdc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x156cdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x156ce0: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x156ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x156ce4: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x156ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x156ce8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x156ce8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x156cec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x156cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x156cf0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x156cf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156cf4: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x156cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156cf8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x156cf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x156cfc: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x156cfcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x156d00: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x156d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x156d04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x156d04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156d08: 0x0  nop
    ctx->pc = 0x156d08u;
    // NOP
    // 0x156d0c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x156d0cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x156d10: 0x3c0244f2  lui         $v0, 0x44F2
    ctx->pc = 0x156d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17650 << 16));
    // 0x156d14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156d14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156d18: 0x0  nop
    ctx->pc = 0x156d18u;
    // NOP
    // 0x156d1c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x156d1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x156d20: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x156d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x156d24: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x156D24u;
    {
        const bool branch_taken_0x156d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156d24) {
            ctx->pc = 0x156E38u;
            goto label_156e38;
        }
    }
    ctx->pc = 0x156D2Cu;
label_156d2c:
    // 0x156d2c: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x156d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x156d30: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x156d30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x156d34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x156d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156d38: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x156d38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x156d3c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x156d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x156d40: 0x8c225528  lw          $v0, 0x5528($at)
    ctx->pc = 0x156d40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x385528u));
    // 0x156d44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x156d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156d48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x156d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x156d4c: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x156d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x156d50: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x156d50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x156d54: 0x24c57710  addiu       $a1, $a2, 0x7710
    ctx->pc = 0x156d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 30480));
    // 0x156d58: 0xa72021  addu        $a0, $a1, $a3
    ctx->pc = 0x156d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x156d5c: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x156d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x156d60: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x156d60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156d64: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x156d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156d68: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x156d68u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x156d6c: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x156d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x156d70: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x156d70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x156d74: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x156d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x156d78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x156d78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156d7c: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x156d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156d80: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x156d80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x156d84: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x156d84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x156d88: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x156d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x156d8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156d8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156d90: 0x0  nop
    ctx->pc = 0x156d90u;
    // NOP
    // 0x156d94: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x156d94u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x156d98: 0x3c0744f2  lui         $a3, 0x44F2
    ctx->pc = 0x156d98u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17650 << 16));
    // 0x156d9c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x156d9cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156da0: 0x0  nop
    ctx->pc = 0x156da0u;
    // NOP
    // 0x156da4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x156da4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x156da8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x156da8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x156dac: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x156dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x156db0: 0x26260001  addiu       $a2, $s1, 0x1
    ctx->pc = 0x156db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x156db4: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x156db4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x156db8: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x156db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x156dbc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x156dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x156dc0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x156dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x156dc4: 0x8c225528  lw          $v0, 0x5528($at)
    ctx->pc = 0x156dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x385528u));
    // 0x156dc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x156dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156dcc: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x156dccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x156dd0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x156dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x156dd4: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x156dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x156dd8: 0x24827710  addiu       $v0, $a0, 0x7710
    ctx->pc = 0x156dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 30480));
    // 0x156ddc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x156ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156de0: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x156de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x156de4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x156de4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156de8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x156de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156dec: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x156decu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x156df0: 0x3c044360  lui         $a0, 0x4360
    ctx->pc = 0x156df0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17248 << 16));
    // 0x156df4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x156df4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x156df8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x156df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x156dfc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x156dfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156e00: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x156e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156e04: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x156e04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x156e08: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x156e08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x156e0c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x156e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x156e10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x156e10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156e14: 0x0  nop
    ctx->pc = 0x156e14u;
    // NOP
    // 0x156e18: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x156e18u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x156e1c: 0x3c0244f2  lui         $v0, 0x44F2
    ctx->pc = 0x156e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17650 << 16));
    // 0x156e20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156e20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156e24: 0x0  nop
    ctx->pc = 0x156e24u;
    // NOP
    // 0x156e28: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x156e28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x156e2c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x156e2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x156e30: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x156e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x156e34: 0x0  nop
    ctx->pc = 0x156e34u;
    // NOP
label_156e38:
    // 0x156e38: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x156e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x156e3c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x156e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x156e40: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x156E40u;
    SET_GPR_U32(ctx, 31, 0x156E48u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x156E48u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x156E48u) { return; }
    ctx->pc = 0x156E48u;
label_156e48:
    // 0x156e48: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x156e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x156e4c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x156e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x156e50: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x156E50u;
    SET_GPR_U32(ctx, 31, 0x156E58u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x156E58u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x156E58u) { return; }
    ctx->pc = 0x156E58u;
label_156e58:
    // 0x156e58: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x156e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x156e5c: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x156e5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x156e60: 0xa607001c  sh          $a3, 0x1C($s0)
    ctx->pc = 0x156e60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 7));
    // 0x156e64: 0x8fa600a4  lw          $a2, 0xA4($sp)
    ctx->pc = 0x156e64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x156e68: 0x30c5ffff  andi        $a1, $a2, 0xFFFF
    ctx->pc = 0x156e68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x156e6c: 0xa605002c  sh          $a1, 0x2C($s0)
    ctx->pc = 0x156e6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 44), (uint16_t)GPR_U32(ctx, 5));
    // 0x156e70: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x156e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x156e74: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x156e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x156e78: 0xa603003c  sh          $v1, 0x3C($s0)
    ctx->pc = 0x156e78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 60), (uint16_t)GPR_U32(ctx, 3));
    // 0x156e7c: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x156e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x156e80: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x156e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x156e84: 0xa602004c  sh          $v0, 0x4C($s0)
    ctx->pc = 0x156e84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 76), (uint16_t)GPR_U32(ctx, 2));
    // 0x156e88: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x156e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x156e8c: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x156e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x156e90: 0xa602001e  sh          $v0, 0x1E($s0)
    ctx->pc = 0x156e90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x156e94: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x156e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x156e98: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x156e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x156e9c: 0xa602002e  sh          $v0, 0x2E($s0)
    ctx->pc = 0x156e9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 46), (uint16_t)GPR_U32(ctx, 2));
    // 0x156ea0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x156ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x156ea4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x156ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x156ea8: 0xa602003e  sh          $v0, 0x3E($s0)
    ctx->pc = 0x156ea8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 62), (uint16_t)GPR_U32(ctx, 2));
    // 0x156eac: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x156eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x156eb0: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x156eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x156eb4: 0xa602004e  sh          $v0, 0x4E($s0)
    ctx->pc = 0x156eb4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 78), (uint16_t)GPR_U32(ctx, 2));
    // 0x156eb8: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x156eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x156ebc: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x156ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x156ec0: 0x3402fff8  ori         $v0, $zero, 0xFFF8
    ctx->pc = 0x156ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x156ec4: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x156ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x156ec8: 0x3402fff8  ori         $v0, $zero, 0xFFF8
    ctx->pc = 0x156ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x156ecc: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x156eccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x156ed0: 0x3402fff8  ori         $v0, $zero, 0xFFF8
    ctx->pc = 0x156ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x156ed4: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x156ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x156ed8: 0x266254e0  addiu       $v0, $s3, 0x54E0
    ctx->pc = 0x156ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 21728));
    // 0x156edc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x156edcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x156ee0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x156ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x156ee4: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x156ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x156ee8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x156ee8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x156eec: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x156EECu;
    SET_GPR_U32(ctx, 31, 0x156EF4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x156EECu, 0x156EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156EF4u;
label_156ef4:
    // 0x156ef4: 0x26100054  addiu       $s0, $s0, 0x54
    ctx->pc = 0x156ef4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x156ef8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x156ef8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x156efc: 0x0  nop
    ctx->pc = 0x156efcu;
    // NOP
label_156f00:
    // 0x156f00: 0x2e42000a  sltiu       $v0, $s2, 0xA
    ctx->pc = 0x156f00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x156f04: 0x1440fddb  bnez        $v0, . + 4 + (-0x225 << 2)
    ctx->pc = 0x156F04u;
    {
        const bool branch_taken_0x156f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x156f04) {
            ctx->pc = 0x156674u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156674;
        }
    }
    ctx->pc = 0x156F0Cu;
    // 0x156f0c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x156f0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_156f10:
    // 0x156f10: 0x2e22000a  sltiu       $v0, $s1, 0xA
    ctx->pc = 0x156f10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x156f14: 0x1440fdc5  bnez        $v0, . + 4 + (-0x23B << 2)
    ctx->pc = 0x156F14u;
    {
        const bool branch_taken_0x156f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x156f14) {
            ctx->pc = 0x15662Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15662c;
        }
    }
    ctx->pc = 0x156F1Cu;
    // 0x156f1c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x156f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x156f20: 0xae6200a0  sw          $v0, 0xA0($s3)
    ctx->pc = 0x156f20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 2));
    // 0x156f24: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x156f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x156f28: 0x3442103f  ori         $v0, $v0, 0x103F
    ctx->pc = 0x156f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4159);
    // 0x156f2c: 0xae6200a4  sw          $v0, 0xA4($s3)
    ctx->pc = 0x156f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 2));
    // 0x156f30: 0xfe6000a8  sd          $zero, 0xA8($s3)
    ctx->pc = 0x156f30u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 168), GPR_U64(ctx, 0));
    // 0x156f34: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x156f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x156f38: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x156f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x156f3c: 0x266500a0  addiu       $a1, $s3, 0xA0
    ctx->pc = 0x156f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
    // 0x156f40: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x156F40u;
    SET_GPR_U32(ctx, 31, 0x156F48u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x156F40u, 0x156F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156F48u;
label_156f48:
    // 0x156f48: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x156f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x156f4c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x156f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x156f50: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x156F50u;
    {
        const bool branch_taken_0x156f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x156f50) {
            ctx->pc = 0x156F68u;
            goto label_156f68;
        }
    }
    ctx->pc = 0x156F58u;
    // 0x156f58: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x156f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x156f5c: 0x2456ec80  addiu       $s6, $v0, -0x1380
    ctx->pc = 0x156f5cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962304));
    // 0x156f60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x156F60u;
    {
        const bool branch_taken_0x156f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156f60) {
            ctx->pc = 0x156F70u;
            goto label_156f70;
        }
    }
    ctx->pc = 0x156F68u;
label_156f68:
    // 0x156f68: 0x3c100048  lui         $s0, 0x48
    ctx->pc = 0x156f68u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    // 0x156f6c: 0x2616ec58  addiu       $s6, $s0, -0x13A8
    ctx->pc = 0x156f6cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962264));
label_156f70:
    // 0x156f70: 0x26740090  addiu       $s4, $s3, 0x90
    ctx->pc = 0x156f70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    // 0x156f74: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x156f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x156f78: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x156f78u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x156f7c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x156f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x156f80: 0x34421050  ori         $v0, $v0, 0x1050
    ctx->pc = 0x156f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4176);
    // 0x156f84: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x156f84u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x156f88: 0x96c20018  lhu         $v0, 0x18($s6)
    ctx->pc = 0x156f88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x156f8c: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x156f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x156f90: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x156f90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x156f94: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x156f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x156f98: 0x24021400  addiu       $v0, $zero, 0x1400
    ctx->pc = 0x156f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5120));
    // 0x156f9c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x156f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x156fa0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x156fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x156fa4: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x156fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x156fa8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x156fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x156fac: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x156facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x156fb0: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x156fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x156fb4: 0x2694fff0  addiu       $s4, $s4, -0x10
    ctx->pc = 0x156fb4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967280));
    // 0x156fb8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x156fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x156fbc: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x156fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x156fc0: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x156fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x156fc4: 0x34421051  ori         $v0, $v0, 0x1051
    ctx->pc = 0x156fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4177);
    // 0x156fc8: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x156fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x156fcc: 0xfe800008  sd          $zero, 0x8($s4)
    ctx->pc = 0x156fccu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 0));
    // 0x156fd0: 0x2694fff0  addiu       $s4, $s4, -0x10
    ctx->pc = 0x156fd0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967280));
    // 0x156fd4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x156fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x156fd8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x156fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x156fdc: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x156fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x156fe0: 0x34421052  ori         $v0, $v0, 0x1052
    ctx->pc = 0x156fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4178);
    // 0x156fe4: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x156fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x156fe8: 0x240200e0  addiu       $v0, $zero, 0xE0
    ctx->pc = 0x156fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x156fec: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x156fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x156ff0: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x156ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x156ff4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x156ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x156ff8: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x156ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x156ffc: 0x2694fff0  addiu       $s4, $s4, -0x10
    ctx->pc = 0x156ffcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967280));
    // 0x157000: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x157000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x157004: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x157004u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x157008: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x157008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x15700c: 0x34421053  ori         $v0, $v0, 0x1053
    ctx->pc = 0x15700cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4179);
    // 0x157010: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x157010u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x157014: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x157014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x157018: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x157018u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x15701c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x15701cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x157020: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x157020u;
    {
        const bool branch_taken_0x157020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157020) {
            ctx->pc = 0x157050u;
            goto label_157050;
        }
    }
    ctx->pc = 0x157028u;
label_157028:
    // 0x157028: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x157028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x15702c: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x15702cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x157030: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x157030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x157034: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x157034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x157038: 0x24650060  addiu       $a1, $v1, 0x60
    ctx->pc = 0x157038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x15703c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x15703Cu;
    SET_GPR_U32(ctx, 31, 0x157044u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x15703Cu, 0x157044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157044u;
label_157044:
    // 0x157044: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x157044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x157048: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x157048u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x15704c: 0x0  nop
    ctx->pc = 0x15704cu;
    // NOP
label_157050:
    // 0x157050: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x157050u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x157054: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x157054u;
    {
        const bool branch_taken_0x157054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157054) {
            ctx->pc = 0x157028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157028;
        }
    }
    ctx->pc = 0x15705Cu;
    // 0x15705c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x15705cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x157060: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x157060u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    // 0x157064: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x157064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x157068: 0x34621043  ori         $v0, $v1, 0x1043
    ctx->pc = 0x157068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4163);
    // 0x15706c: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x15706cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
    // 0x157070: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x157070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x157074: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x157074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x157078: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x157078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x15707c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x15707cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x157080: 0xfe620018  sd          $v0, 0x18($s3)
    ctx->pc = 0x157080u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 2));
    // 0x157084: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x157084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x157088: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x157088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x15708c: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x15708cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x157090: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x157090u;
    SET_GPR_U32(ctx, 31, 0x157098u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x157090u, 0x157098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157098u;
label_157098:
    // 0x157098: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x157098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x15709c: 0xae630040  sw          $v1, 0x40($s3)
    ctx->pc = 0x15709cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 3));
    // 0x1570a0: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1570a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1570a4: 0x3462104f  ori         $v0, $v1, 0x104F
    ctx->pc = 0x1570a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4175);
    // 0x1570a8: 0xae620044  sw          $v0, 0x44($s3)
    ctx->pc = 0x1570a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
    // 0x1570ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1570acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1570b0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1570b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1570b4: 0x3c030a00  lui         $v1, 0xA00
    ctx->pc = 0x1570b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2560 << 16));
    // 0x1570b8: 0x34620070  ori         $v0, $v1, 0x70
    ctx->pc = 0x1570b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)112);
    // 0x1570bc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1570bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1570c0: 0xfe620048  sd          $v0, 0x48($s3)
    ctx->pc = 0x1570c0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 72), GPR_U64(ctx, 2));
    // 0x1570c4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1570c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1570c8: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1570c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1570cc: 0x26650040  addiu       $a1, $s3, 0x40
    ctx->pc = 0x1570ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x1570d0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1570D0u;
    SET_GPR_U32(ctx, 31, 0x1570D8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1570D0u, 0x1570D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1570D8u;
label_1570d8:
    // 0x1570d8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1570d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1570dc: 0xae620020  sw          $v0, 0x20($s3)
    ctx->pc = 0x1570dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
    // 0x1570e0: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1570e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1570e4: 0x34421015  ori         $v0, $v0, 0x1015
    ctx->pc = 0x1570e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4117);
    // 0x1570e8: 0xae620024  sw          $v0, 0x24($s3)
    ctx->pc = 0x1570e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 2));
    // 0x1570ec: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x1570ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1570f0: 0xfe620028  sd          $v0, 0x28($s3)
    ctx->pc = 0x1570f0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 40), GPR_U64(ctx, 2));
    // 0x1570f4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1570f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1570f8: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1570f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1570fc: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x1570fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x157100: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x157100u;
    SET_GPR_U32(ctx, 31, 0x157108u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x157100u, 0x157108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157108u;
label_157108:
    // 0x157108: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x157108u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15710c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15710cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x157110: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x157110u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x157114: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x157114u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x157118: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x157118u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15711c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15711cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x157120: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x157120u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x157124: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x157124u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157128: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x157128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x15712c: 0x3e00008  jr          $ra
    ctx->pc = 0x15712Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15712Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157134u;
}
