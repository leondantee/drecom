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

// Function: entry_003314b0
// Address: 0x3314b0 - 0x331610
void entry_003314b0_0x3314b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003314b0_0x3314b0");
#endif

    switch (ctx->pc) {
        case 0x33158cu: goto label_33158c;
        case 0x3315f8u: goto label_3315f8;
        default: break;
    }

    ctx->pc = 0x3314b0u;

    // 0x3314b0: 0x8fa20228  lw          $v0, 0x228($sp)
    ctx->pc = 0x3314b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x3314b4: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x3314b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3314b8: 0x8fa30224  lw          $v1, 0x224($sp)
    ctx->pc = 0x3314b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
    // 0x3314bc: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x3314bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3314c0: 0x8fa20220  lw          $v0, 0x220($sp)
    ctx->pc = 0x3314c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x3314c4: 0x453825  or          $a3, $v0, $a1
    ctx->pc = 0x3314c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x3314c8: 0x871825  or          $v1, $a0, $a3
    ctx->pc = 0x3314c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x3314cc: 0x8fa6022c  lw          $a2, 0x22C($sp)
    ctx->pc = 0x3314ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 556)));
    // 0x3314d0: 0x61600  sll         $v0, $a2, 24
    ctx->pc = 0x3314d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x3314d4: 0x433825  or          $a3, $v0, $v1
    ctx->pc = 0x3314d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3314d8: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x3314d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3314dc: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x3314dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x3314e0: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x3314e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x3314e4: 0x7d3021  addu        $a2, $v1, $sp
    ctx->pc = 0x3314e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x3314e8: 0x8cc30230  lw          $v1, 0x230($a2)
    ctx->pc = 0x3314e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 560)));
    // 0x3314ec: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x3314ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3314f0: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x3314f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x3314f4: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x3314f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3314f8: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x3314f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x3314fc: 0x5db821  addu        $s7, $v0, $sp
    ctx->pc = 0x3314fcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x331500: 0x8ee20234  lw          $v0, 0x234($s7)
    ctx->pc = 0x331500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 564)));
    // 0x331504: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x331504u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x331508: 0x24677900  addiu       $a3, $v1, 0x7900
    ctx->pc = 0x331508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x33150c: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x33150cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x331510: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x331510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x331514: 0x26060018  addiu       $a2, $s0, 0x18
    ctx->pc = 0x331514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x331518: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x331518u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x33151c: 0x3403fffa  ori         $v1, $zero, 0xFFFA
    ctx->pc = 0x33151cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x331520: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x331520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x331524: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x331524u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x331528: 0x123100  sll         $a2, $s2, 4
    ctx->pc = 0x331528u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x33152c: 0xdd3821  addu        $a3, $a2, $sp
    ctx->pc = 0x33152cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x331530: 0x8ce20238  lw          $v0, 0x238($a3)
    ctx->pc = 0x331530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 568)));
    // 0x331534: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x331534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x331538: 0x24627000  addiu       $v0, $v1, 0x7000
    ctx->pc = 0x331538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x33153c: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x33153cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x331540: 0x123900  sll         $a3, $s2, 4
    ctx->pc = 0x331540u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x331544: 0xfd1021  addu        $v0, $a3, $sp
    ctx->pc = 0x331544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x331548: 0x8c42023c  lw          $v0, 0x23C($v0)
    ctx->pc = 0x331548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 572)));
    // 0x33154c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x33154cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x331550: 0x24627900  addiu       $v0, $v1, 0x7900
    ctx->pc = 0x331550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x331554: 0x23c00  sll         $a3, $v0, 16
    ctx->pc = 0x331554u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x331558: 0xc71025  or          $v0, $a2, $a3
    ctx->pc = 0x331558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x33155c: 0x26030024  addiu       $v1, $s0, 0x24
    ctx->pc = 0x33155cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x331560: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x331560u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x331564: 0x3408fffa  ori         $t0, $zero, 0xFFFA
    ctx->pc = 0x331564u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x331568: 0x26060028  addiu       $a2, $s0, 0x28
    ctx->pc = 0x331568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x33156c: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x33156cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
    // 0x331570: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x331570u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x331574: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x331574u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x331578: 0x24e2e7a8  addiu       $v0, $a3, -0x1858
    ctx->pc = 0x331578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961064));
    // 0x33157c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x33157cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x331580: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x331580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x331584: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x331584u;
    SET_GPR_U32(ctx, 31, 0x33158Cu);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x33158Cu;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x33158Cu) { return; }
    ctx->pc = 0x33158Cu;
label_33158c:
    // 0x33158c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x33158cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x331590: 0xae150008  sw          $s5, 0x8($s0)
    ctx->pc = 0x331590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 21));
    // 0x331594: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x331594u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x331598: 0x96270002  lhu         $a3, 0x2($s1)
    ctx->pc = 0x331598u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x33159c: 0x30e2ffff  andi        $v0, $a3, 0xFFFF
    ctx->pc = 0x33159cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x3315a0: 0xdcc30018  ld          $v1, 0x18($a2)
    ctx->pc = 0x3315a0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3315a4: 0x31b78  dsll        $v1, $v1, 13
    ctx->pc = 0x3315a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 13);
    // 0x3315a8: 0x33cbe  dsrl32      $a3, $v1, 18
    ctx->pc = 0x3315a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) >> (32 + 18));
    // 0x3315ac: 0xe2382d  daddu       $a3, $a3, $v0
    ctx->pc = 0x3315acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3315b0: 0xdcc20018  ld          $v0, 0x18($a2)
    ctx->pc = 0x3315b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3315b4: 0x30e73fff  andi        $a3, $a3, 0x3FFF
    ctx->pc = 0x3315b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16383);
    // 0x3315b8: 0x7417c  dsll32      $t0, $a3, 5
    ctx->pc = 0x3315b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 5));
    // 0x3315bc: 0x3c07fff8  lui         $a3, 0xFFF8
    ctx->pc = 0x3315bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65528 << 16));
    // 0x3315c0: 0x34e3001f  ori         $v1, $a3, 0x1F
    ctx->pc = 0x3315c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)31);
    // 0x3315c4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3315c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3315c8: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x3315c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3315cc: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x3315ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x3315d0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x3315d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x3315d4: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x3315d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x3315d8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3315d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3315dc: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x3315dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x3315e0: 0xfcc20018  sd          $v0, 0x18($a2)
    ctx->pc = 0x3315e0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 2));
    // 0x3315e4: 0x26630018  addiu       $v1, $s3, 0x18
    ctx->pc = 0x3315e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x3315e8: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x3315e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x3315ec: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x3315ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3315f0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x3315F0u;
    SET_GPR_U32(ctx, 31, 0x3315F8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x3315F0u, 0x3315F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3315F8u;
label_3315f8:
    // 0x3315f8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x3315f8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3315fc: 0x2602002c  addiu       $v0, $s0, 0x2C
    ctx->pc = 0x3315fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x331600: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x331600u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x331604: 0x26a30028  addiu       $v1, $s5, 0x28
    ctx->pc = 0x331604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 40));
    // 0x331608: 0x7060ae28  paddub      $s5, $v1, $zero
    ctx->pc = 0x331608u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x33160c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x33160cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x331610u;
}
