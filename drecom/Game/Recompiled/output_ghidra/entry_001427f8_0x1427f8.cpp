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

// Function: entry_001427f8
// Address: 0x1427f8 - 0x142a18
void entry_001427f8_0x1427f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001427f8_0x1427f8");
#endif

    switch (ctx->pc) {
        case 0x14280cu: goto label_14280c;
        case 0x142824u: goto label_142824;
        case 0x142830u: goto label_142830;
        case 0x142848u: goto label_142848;
        case 0x1428f4u: goto label_1428f4;
        case 0x142930u: goto label_142930;
        case 0x142974u: goto label_142974;
        case 0x142a14u: goto label_142a14;
        default: break;
    }

    ctx->pc = 0x1427f8u;

    // 0x1427f8: 0x12a00087  beqz        $s5, . + 4 + (0x87 << 2)
    ctx->pc = 0x1427F8u;
    {
        const bool branch_taken_0x1427f8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1427f8) {
            ctx->pc = 0x142A18u;
            return;
        }
    }
    ctx->pc = 0x142800u;
    // 0x142800: 0x2404008e  addiu       $a0, $zero, 0x8E
    ctx->pc = 0x142800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x142804: 0xc05e990  jal         func_17A640
    ctx->pc = 0x142804u;
    SET_GPR_U32(ctx, 31, 0x14280Cu);
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x142804u, 0x14280Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14280Cu;
label_14280c:
    // 0x14280c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14280cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x142810: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x142810u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x142814: 0x24063600  addiu       $a2, $zero, 0x3600
    ctx->pc = 0x142814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13824));
    // 0x142818: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x142818u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x14281c: 0xc05e2e0  jal         func_178B80
    ctx->pc = 0x14281Cu;
    SET_GPR_U32(ctx, 31, 0x142824u);
    ctx->pc = 0x178B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178B80u, 0x14281Cu, 0x142824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142824u;
label_142824:
    // 0x142824: 0x2404008f  addiu       $a0, $zero, 0x8F
    ctx->pc = 0x142824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
    // 0x142828: 0xc05e990  jal         func_17A640
    ctx->pc = 0x142828u;
    SET_GPR_U32(ctx, 31, 0x142830u);
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x142828u, 0x142830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142830u;
label_142830:
    // 0x142830: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x142830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142834: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x142834u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x142838: 0x24063b00  addiu       $a2, $zero, 0x3B00
    ctx->pc = 0x142838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15104));
    // 0x14283c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x14283cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x142840: 0xc05e2e0  jal         func_178B80
    ctx->pc = 0x142840u;
    SET_GPR_U32(ctx, 31, 0x142848u);
    ctx->pc = 0x178B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178B80u, 0x142840u, 0x142848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142848u;
label_142848:
    // 0x142848: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x142848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x14284c: 0x2450913c  addiu       $s0, $v0, -0x6EC4
    ctx->pc = 0x14284cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938940));
    // 0x142850: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x142850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x142854: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x142854u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E913Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E913Cu, _value); } while (0);
    // 0x142858: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x142858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x14285c: 0x34422b16  ori         $v0, $v0, 0x2B16
    ctx->pc = 0x14285cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x142860: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x142860u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E9140u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9140u, _value); } while (0);
    // 0x142864: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x142864u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3E9148u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9148u, _value); } while (0);
    // 0x142868: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x142868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x14286c: 0x34438080  ori         $v1, $v0, 0x8080
    ctx->pc = 0x14286cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x142870: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x142870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x142874: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x142874u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3E914Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E914Cu, _value); } while (0);
    // 0x142878: 0x3c027d30  lui         $v0, 0x7D30
    ctx->pc = 0x142878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32048 << 16));
    // 0x14287c: 0x34437000  ori         $v1, $v0, 0x7000
    ctx->pc = 0x14287cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x142880: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x142880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x142884: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x142884u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3E9154u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9154u, _value); } while (0);
    // 0x142888: 0x3403fffe  ori         $v1, $zero, 0xFFFE
    ctx->pc = 0x142888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    // 0x14288c: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x14288cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x142890: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x142890u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3E9158u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9158u, _value); } while (0);
    // 0x142894: 0x3c0282d0  lui         $v0, 0x82D0
    ctx->pc = 0x142894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33488 << 16));
    // 0x142898: 0x34439000  ori         $v1, $v0, 0x9000
    ctx->pc = 0x142898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x14289c: 0x26020024  addiu       $v0, $s0, 0x24
    ctx->pc = 0x14289cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x1428a0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1428a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3E9160u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9160u, _value); } while (0);
    // 0x1428a4: 0x3403fffe  ori         $v1, $zero, 0xFFFE
    ctx->pc = 0x1428a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    // 0x1428a8: 0x26020028  addiu       $v0, $s0, 0x28
    ctx->pc = 0x1428a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x1428ac: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1428acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3E9164u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9164u, _value); } while (0);
    // 0x1428b0: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x1428b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1428b4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1428b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3E9150u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9150u, _value); } while (0);
    // 0x1428b8: 0x3c020b40  lui         $v0, 0xB40
    ctx->pc = 0x1428b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2880 << 16));
    // 0x1428bc: 0x34432000  ori         $v1, $v0, 0x2000
    ctx->pc = 0x1428bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1428c0: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x1428c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1428c4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1428c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3E915Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E915Cu, _value); } while (0);
    // 0x1428c8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1428c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1428cc: 0x2442ccc8  addiu       $v0, $v0, -0x3338
    ctx->pc = 0x1428ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954184));
    // 0x1428d0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1428d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E9144u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9144u, _value); } while (0);
    // 0x1428d4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1428d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3E9140u));
    // 0x1428d8: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x1428d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1428dc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1428dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E9140u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9140u, _value); } while (0);
    // 0x1428e0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1428e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1428e4: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1428e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1428e8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1428e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1428ec: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1428ECu;
    SET_GPR_U32(ctx, 31, 0x1428F4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1428ECu, 0x1428F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1428F4u;
label_1428f4:
    // 0x1428f4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1428f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1428f8: 0x24519100  addiu       $s1, $v0, -0x6F00
    ctx->pc = 0x1428f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938880));
    // 0x1428fc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1428fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x142900: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x142900u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E9100u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9100u, _value); } while (0);
    // 0x142904: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x142904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x142908: 0x34421048  ori         $v0, $v0, 0x1048
    ctx->pc = 0x142908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4168);
    // 0x14290c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x14290cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E9104u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9104u, _value); } while (0);
    // 0x142910: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x142910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x142914: 0x3442001b  ori         $v0, $v0, 0x1B
    ctx->pc = 0x142914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27);
    // 0x142918: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x142918u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E9108u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3E9108u, _value); } while (0);
    // 0x14291c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x14291cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x142920: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x142920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x142924: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x142924u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x142928: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x142928u;
    SET_GPR_U32(ctx, 31, 0x142930u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x142928u, 0x142930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142930u;
label_142930:
    // 0x142930: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x142930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x142934: 0x245190f0  addiu       $s1, $v0, -0x6F10
    ctx->pc = 0x142934u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938864));
    // 0x142938: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x142938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x14293c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x14293cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E90F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E90F0u, _value); } while (0);
    // 0x142940: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x142940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x142944: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x142944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x142948: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x142948u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E90F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E90F4u, _value); } while (0);
    // 0x14294c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x14294cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x142950: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x142950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x142954: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x142954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x142958: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x142958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x14295c: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x14295cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
    // 0x142960: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x142960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x142964: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x142964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x142968: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x142968u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x14296c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x14296Cu;
    SET_GPR_U32(ctx, 31, 0x142974u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x14296Cu, 0x142974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142974u;
label_142974:
    // 0x142974: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x142974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x142978: 0x24509110  addiu       $s0, $v0, -0x6EF0
    ctx->pc = 0x142978u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938896));
    // 0x14297c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14297cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x142980: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x142980u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E9110u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9110u, _value); } while (0);
    // 0x142984: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x142984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x142988: 0x34422b16  ori         $v0, $v0, 0x2B16
    ctx->pc = 0x142988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x14298c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x14298cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E9114u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9114u, _value); } while (0);
    // 0x142990: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x142990u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3E911Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E911Cu, _value); } while (0);
    // 0x142994: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x142994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x142998: 0x34438080  ori         $v1, $v0, 0x8080
    ctx->pc = 0x142998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x14299c: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x14299cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1429a0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1429a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3E9120u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9120u, _value); } while (0);
    // 0x1429a4: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1429a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1429a8: 0x34437000  ori         $v1, $v0, 0x7000
    ctx->pc = 0x1429a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1429ac: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x1429acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1429b0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1429b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3E9128u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9128u, _value); } while (0);
    // 0x1429b4: 0x3403fffd  ori         $v1, $zero, 0xFFFD
    ctx->pc = 0x1429b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
    // 0x1429b8: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x1429b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1429bc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1429bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3E912Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E912Cu, _value); } while (0);
    // 0x1429c0: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x1429c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x1429c4: 0x34439000  ori         $v1, $v0, 0x9000
    ctx->pc = 0x1429c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1429c8: 0x26020024  addiu       $v0, $s0, 0x24
    ctx->pc = 0x1429c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x1429cc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1429ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3E9134u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9134u, _value); } while (0);
    // 0x1429d0: 0x3403fffd  ori         $v1, $zero, 0xFFFD
    ctx->pc = 0x1429d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
    // 0x1429d4: 0x26020028  addiu       $v0, $s0, 0x28
    ctx->pc = 0x1429d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x1429d8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1429d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3E9138u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9138u, _value); } while (0);
    // 0x1429dc: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x1429dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1429e0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1429e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3E9124u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9124u, _value); } while (0);
    // 0x1429e4: 0x3c021e00  lui         $v0, 0x1E00
    ctx->pc = 0x1429e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7680 << 16));
    // 0x1429e8: 0x34432800  ori         $v1, $v0, 0x2800
    ctx->pc = 0x1429e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10240);
    // 0x1429ec: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x1429ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1429f0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1429f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3E9130u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9130u, _value); } while (0);
    // 0x1429f4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1429f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1429f8: 0x2442cca0  addiu       $v0, $v0, -0x3360
    ctx->pc = 0x1429f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x1429fc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1429fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E9118u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9118u, _value); } while (0);
    // 0x142a00: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x142a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x142a04: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x142a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x142a08: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x142a08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x142a0c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x142A0Cu;
    SET_GPR_U32(ctx, 31, 0x142A14u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x142A0Cu, 0x142A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142A14u;
label_142a14:
    // 0x142a14: 0x0  nop
    ctx->pc = 0x142a14u;
    // NOP
    ctx->pc = 0x142a18u;
}
