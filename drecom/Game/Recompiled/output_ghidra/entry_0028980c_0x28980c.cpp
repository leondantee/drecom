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

// Function: entry_0028980c
// Address: 0x28980c - 0x289980
void entry_0028980c_0x28980c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028980c_0x28980c");
#endif

    switch (ctx->pc) {
        case 0x2898ecu: goto label_2898ec;
        case 0x289974u: goto label_289974;
        default: break;
    }

    ctx->pc = 0x28980cu;

    // 0x28980c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x28980cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x289810: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x289810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x289814: 0x8e2a0008  lw          $t2, 0x8($s1)
    ctx->pc = 0x289814u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x289818: 0xa3100  sll         $a2, $t2, 4
    ctx->pc = 0x289818u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x28981c: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x28981cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x289820: 0x434025  or          $t0, $v0, $v1
    ctx->pc = 0x289820u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x289824: 0x26070014  addiu       $a3, $s0, 0x14
    ctx->pc = 0x289824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x289828: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x289828u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    // 0x28982c: 0x8e2b0004  lw          $t3, 0x4($s1)
    ctx->pc = 0x28982cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x289830: 0xb1100  sll         $v0, $t3, 4
    ctx->pc = 0x289830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x289834: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x289834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x289838: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x289838u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x28983c: 0x64c00  sll         $t1, $a2, 16
    ctx->pc = 0x28983cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x289840: 0x491825  or          $v1, $v0, $t1
    ctx->pc = 0x289840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x289844: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x289844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x289848: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x289848u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28984c: 0x134100  sll         $t0, $s3, 4
    ctx->pc = 0x28984cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x289850: 0x25077000  addiu       $a3, $t0, 0x7000
    ctx->pc = 0x289850u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 28672));
    // 0x289854: 0x30e3ffff  andi        $v1, $a3, 0xFFFF
    ctx->pc = 0x289854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x289858: 0x1e30c0  sll         $a2, $fp, 3
    ctx->pc = 0x289858u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x28985c: 0x24c67900  addiu       $a2, $a2, 0x7900
    ctx->pc = 0x28985cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30976));
    // 0x289860: 0x65400  sll         $t2, $a2, 16
    ctx->pc = 0x289860u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x289864: 0x6a4825  or          $t1, $v1, $t2
    ctx->pc = 0x289864u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x289868: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x289868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x28986c: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x28986cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x289870: 0x3402fffa  ori         $v0, $zero, 0xFFFA
    ctx->pc = 0x289870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x289874: 0x2605001c  addiu       $a1, $s0, 0x1C
    ctx->pc = 0x289874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x289878: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x289878u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x28987c: 0x152100  sll         $a0, $s5, 4
    ctx->pc = 0x28987cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x289880: 0x24837000  addiu       $v1, $a0, 0x7000
    ctx->pc = 0x289880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 28672));
    // 0x289884: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x289884u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x289888: 0x8fa50130  lw          $a1, 0x130($sp)
    ctx->pc = 0x289888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x28988c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x28988cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x289890: 0x24867900  addiu       $a2, $a0, 0x7900
    ctx->pc = 0x289890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
    // 0x289894: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x289894u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x289898: 0xe31025  or          $v0, $a3, $v1
    ctx->pc = 0x289898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x28989c: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x28989cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x2898a0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2898a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2898a4: 0x3406fffa  ori         $a2, $zero, 0xFFFA
    ctx->pc = 0x2898a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x2898a8: 0x26020028  addiu       $v0, $s0, 0x28
    ctx->pc = 0x2898a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x2898ac: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x2898acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x2898b0: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x2898b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2898b4: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x2898b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2898b8: 0x24e500a6  addiu       $a1, $a3, 0xA6
    ctx->pc = 0x2898b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 166));
    // 0x2898bc: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x2898bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2898c0: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x2898c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2898c4: 0x448c0  sll         $t1, $a0, 3
    ctx->pc = 0x2898c4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2898c8: 0x3c080048  lui         $t0, 0x48
    ctx->pc = 0x2898c8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)72 << 16));
    // 0x2898cc: 0x2504cca0  addiu       $a0, $t0, -0x3360
    ctx->pc = 0x2898ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954144));
    // 0x2898d0: 0x893821  addu        $a3, $a0, $t1
    ctx->pc = 0x2898d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x2898d4: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x2898d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    // 0x2898d8: 0x2645001c  addiu       $a1, $s2, 0x1C
    ctx->pc = 0x2898d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x2898dc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2898dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2898e0: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x2898e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2898e4: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x2898E4u;
    SET_GPR_U32(ctx, 31, 0x2898ECu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x2898E4u, 0x2898ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2898ECu;
label_2898ec:
    // 0x2898ec: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2898ecu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2898f0: 0x2602002c  addiu       $v0, $s0, 0x2C
    ctx->pc = 0x2898f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x2898f4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2898f4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2898f8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2898f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2898fc: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x2898fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x289900: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x289900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x289904: 0x34671009  ori         $a3, $v1, 0x1009
    ctx->pc = 0x289904u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4105);
    // 0x289908: 0xae870004  sw          $a3, 0x4($s4)
    ctx->pc = 0x289908u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 7));
    // 0x28990c: 0x8e2a0004  lw          $t2, 0x4($s1)
    ctx->pc = 0x28990cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x289910: 0xa303c  dsll32      $a2, $t2, 0
    ctx->pc = 0x289910u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) << (32 + 0));
    // 0x289914: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x289914u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x289918: 0x61138  dsll        $v0, $a2, 4
    ctx->pc = 0x289918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 4);
    // 0x28991c: 0x344b000a  ori         $t3, $v0, 0xA
    ctx->pc = 0x28991cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x289920: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x289920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x289924: 0x5483c  dsll32      $t1, $a1, 0
    ctx->pc = 0x289924u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) << (32 + 0));
    // 0x289928: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x289928u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x28992c: 0x933b8  dsll        $a2, $t1, 14
    ctx->pc = 0x28992cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) << 14);
    // 0x289930: 0x1662025  or          $a0, $t3, $a2
    ctx->pc = 0x289930u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) | GPR_U64(ctx, 6));
    // 0x289934: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x289934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x289938: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x289938u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28993c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x28993cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x289940: 0x64638  dsll        $t0, $a2, 24
    ctx->pc = 0x289940u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) << 24);
    // 0x289944: 0x1041825  or          $v1, $t0, $a0
    ctx->pc = 0x289944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x289948: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x289948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x28994c: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x28994cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x289950: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x289950u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x289954: 0x640bc  dsll32      $t0, $a2, 2
    ctx->pc = 0x289954u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) << (32 + 2));
    // 0x289958: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x289958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x28995c: 0xfe830008  sd          $v1, 0x8($s4)
    ctx->pc = 0x28995cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 3));
    // 0x289960: 0x2649001c  addiu       $t1, $s2, 0x1C
    ctx->pc = 0x289960u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x289964: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x289964u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x289968: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x289968u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x28996c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28996Cu;
    SET_GPR_U32(ctx, 31, 0x289974u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28996Cu, 0x289974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289974u;
label_289974:
    // 0x289974: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x289974u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x289978: 0x26860010  addiu       $a2, $s4, 0x10
    ctx->pc = 0x289978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x28997c: 0x70c0a628  paddub      $s4, $a2, $zero
    ctx->pc = 0x28997cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    ctx->pc = 0x289980u;
}
