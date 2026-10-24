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

// Function: entry_001a765c
// Address: 0x1a765c - 0x1a7734
void entry_001a765c_0x1a765c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a765c_0x1a765c");
#endif

    ctx->pc = 0x1a765cu;

    // 0x1a765c: 0x82020310  lb          $v0, 0x310($s0)
    ctx->pc = 0x1a765cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x1a7660: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x1a7660u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1a7664: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x1a7664u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x1a7668: 0xd11821  addu        $v1, $a2, $s1
    ctx->pc = 0x1a7668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x1a766c: 0x28610010  slti        $at, $v1, 0x10
    ctx->pc = 0x1a766cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1a7670: 0x14200030  bnez        $at, . + 4 + (0x30 << 2)
    ctx->pc = 0x1A7670u;
    {
        const bool branch_taken_0x1a7670 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7670) {
            ctx->pc = 0x1A7734u;
            return;
        }
    }
    ctx->pc = 0x1A7678u;
    // 0x1a7678: 0x9205031c  lbu         $a1, 0x31C($s0)
    ctx->pc = 0x1a7678u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 796)));
    // 0x1a767c: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x1a767cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1a7680: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a7680u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a7684: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a7684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a7688: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x1a7688u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a768c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1a768cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1a7690: 0x2462cca0  addiu       $v0, $v1, -0x3360
    ctx->pc = 0x1a7690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x1a7694: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1a7694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a7698: 0x9062001e  lbu         $v0, 0x1E($v1)
    ctx->pc = 0x1a7698u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 30)));
    // 0x1a769c: 0x21e7c  dsll32      $v1, $v0, 25
    ctx->pc = 0x1a769cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 25));
    // 0x1a76a0: 0x3173e  dsrl32      $v0, $v1, 28
    ctx->pc = 0x1a76a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> (32 + 28));
    // 0x1a76a4: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x1a76a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1a76a8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a76a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a76ac: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x1a76acu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a76b0: 0x820202b0  lb          $v0, 0x2B0($s0)
    ctx->pc = 0x1a76b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 688)));
    // 0x1a76b4: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x1a76b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1a76b8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1a76b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1a76bc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1a76bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a76c0: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1a76c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a76c4: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x1a76c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a76c8: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1a76c8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1a76cc: 0x9204031c  lbu         $a0, 0x31C($s0)
    ctx->pc = 0x1a76ccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 796)));
    // 0x1a76d0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1a76d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1a76d4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a76d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a76d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a76d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a76dc: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1a76dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a76e0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1a76e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1a76e4: 0x2445cca0  addiu       $a1, $v0, -0x3360
    ctx->pc = 0x1a76e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x1a76e8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1a76e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a76ec: 0xdc620018  ld          $v0, 0x18($v1)
    ctx->pc = 0x1a76ecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1a76f0: 0x21b78  dsll        $v1, $v0, 13
    ctx->pc = 0x1a76f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 13);
    // 0x1a76f4: 0x314be  dsrl32      $v0, $v1, 18
    ctx->pc = 0x1a76f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> (32 + 18));
    // 0x1a76f8: 0x46102d  daddu       $v0, $v0, $a2
    ctx->pc = 0x1a76f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 6));
    // 0x1a76fc: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x1a76fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a7700: 0x26230003  addiu       $v1, $s1, 0x3
    ctx->pc = 0x1a7700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7704: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1a7704u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a7708: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1a7708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a770c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1a770cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a7710: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x1a7710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a7714: 0x94c200b0  lhu         $v0, 0xB0($a2)
    ctx->pc = 0x1a7714u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 176)));
    // 0x1a7718: 0x30853fff  andi        $a1, $a0, 0x3FFF
    ctx->pc = 0x1a7718u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16383);
    // 0x1a771c: 0x2404c000  addiu       $a0, $zero, -0x4000
    ctx->pc = 0x1a771cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x1a7720: 0x441824  and         $v1, $v0, $a0
    ctx->pc = 0x1a7720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1a7724: 0x651025  or          $v0, $v1, $a1
    ctx->pc = 0x1a7724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1a7728: 0xa4c200b0  sh          $v0, 0xB0($a2)
    ctx->pc = 0x1a7728u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 176), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a772c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1A772Cu;
    {
        const bool branch_taken_0x1a772c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a772c) {
            ctx->pc = 0x1A77E8u;
            return;
        }
    }
    ctx->pc = 0x1A7734u;
}
