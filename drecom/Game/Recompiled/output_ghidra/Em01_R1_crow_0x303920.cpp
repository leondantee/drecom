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

// Function: Em01_R1_crow
// Address: 0x303920 - 0x303d9c
void Em01_R1_crow_0x303920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01_R1_crow_0x303920");
#endif

    switch (ctx->pc) {
        case 0x303980u: goto label_303980;
        case 0x3039b8u: goto label_3039b8;
        case 0x3039c4u: goto label_3039c4;
        case 0x3039d4u: goto label_3039d4;
        case 0x3039e0u: goto label_3039e0;
        case 0x303abcu: goto label_303abc;
        case 0x303adcu: goto label_303adc;
        case 0x303afcu: goto label_303afc;
        default: break;
    }

    ctx->pc = 0x303920u;

    // 0x303920: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x303920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x303924: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x303924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x303928: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x303928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30392c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30392cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x303930: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x303930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x303934: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x303934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x303938: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x303938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x30393c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x30393cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x303940: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x303940u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x303944: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x303944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303948: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x303948u;
    {
        const bool branch_taken_0x303948 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x303948) {
            ctx->pc = 0x303998u;
            goto label_303998;
        }
    }
    ctx->pc = 0x303950u;
    // 0x303950: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x303950u;
    {
        const bool branch_taken_0x303950 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x303950) {
            ctx->pc = 0x303960u;
            goto label_303960;
        }
    }
    ctx->pc = 0x303958u;
    // 0x303958: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x303958u;
    {
        const bool branch_taken_0x303958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x303958) {
            ctx->pc = 0x303A20u;
            goto label_303a20;
        }
    }
    ctx->pc = 0x303960u;
label_303960:
    // 0x303960: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x303960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x303964: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x303964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x303968: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x303968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x30396c: 0x24061e3e  addiu       $a2, $zero, 0x1E3E
    ctx->pc = 0x30396cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7742));
    // 0x303970: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x303970u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303974: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x303974u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x303978: 0xc0965d0  jal         func_259740
    ctx->pc = 0x303978u;
    SET_GPR_U32(ctx, 31, 0x303980u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x303978u, 0x303980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303980u;
label_303980:
    // 0x303980: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x303980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x303984: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x303984u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x303988: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x303988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x30398c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x30398cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x303990: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x303990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x303994: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x303994u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_303998:
    // 0x303998: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x303998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x30399c: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x30399cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x3039a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3039a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3039a4: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x3039a4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x3039a8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3039a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3039ac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3039acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3039b0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3039B0u;
    SET_GPR_U32(ctx, 31, 0x3039B8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3039B0u, 0x3039B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3039B8u;
label_3039b8:
    // 0x3039b8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3039b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3039bc: 0xc05cd10  jal         func_173440
    ctx->pc = 0x3039BCu;
    SET_GPR_U32(ctx, 31, 0x3039C4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x3039BCu, 0x3039C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3039C4u;
label_3039c4:
    // 0x3039c4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3039c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3039c8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3039c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3039cc: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x3039CCu;
    SET_GPR_U32(ctx, 31, 0x3039D4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x3039CCu, 0x3039D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3039D4u;
label_3039d4:
    // 0x3039d4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3039d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3039d8: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x3039D8u;
    SET_GPR_U32(ctx, 31, 0x3039E0u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x3039D8u, 0x3039E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3039E0u;
label_3039e0:
    // 0x3039e0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3039e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3039e4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x3039e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3039e8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3039E8u;
    {
        const bool branch_taken_0x3039e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3039e8) {
            ctx->pc = 0x303A20u;
            goto label_303a20;
        }
    }
    ctx->pc = 0x3039F0u;
    // 0x3039f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3039f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3039f4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3039f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3039f8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3039f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3039fc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3039fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x303a00: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x303a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x303a04: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x303a04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x303a08: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x303a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x303a0c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x303a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x303a10: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x303a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x303a14: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x303a14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x303a18: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x303a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x303a1c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x303a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_303a20:
    // 0x303a20: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x303a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x303a24: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x303a24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x303a28: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x303a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x303a2c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x303a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x303a30: 0x106000d3  beqz        $v1, . + 4 + (0xD3 << 2)
    ctx->pc = 0x303A30u;
    {
        const bool branch_taken_0x303a30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x303a30) {
            ctx->pc = 0x303D80u;
            goto label_303d80;
        }
    }
    ctx->pc = 0x303A38u;
    // 0x303a38: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x303a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x303a3c: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x303a3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x303a40: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x303a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x303a44: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x303a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x303a48: 0x10600073  beqz        $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x303A48u;
    {
        const bool branch_taken_0x303a48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x303a48) {
            ctx->pc = 0x303C18u;
            goto label_303c18;
        }
    }
    ctx->pc = 0x303A50u;
    // 0x303a50: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x303a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x303a54: 0x24429500  addiu       $v0, $v0, -0x6B00
    ctx->pc = 0x303a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939904));
    // 0x303a58: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x303a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x303a5c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x303a5cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399500u));
    // 0x303a60: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x303a60u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x303a64: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x303a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x303a68: 0x24429510  addiu       $v0, $v0, -0x6AF0
    ctx->pc = 0x303a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939920));
    // 0x303a6c: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x303a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x303a70: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x303a70u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399510u));
    // 0x303a74: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x303a74u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x303a78: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x303a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x303a7c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x303a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x303a80: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x303a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x303a84: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x303a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x303a88: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x303a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x303a8c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x303a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x303a90: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x303a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x303a94: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x303a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x303a98: 0x34440106  ori         $a0, $v0, 0x106
    ctx->pc = 0x303a98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x303a9c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x303a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x303aa0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x303aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x303aa4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x303aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x303aa8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x303aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x303aac: 0x24470300  addiu       $a3, $v0, 0x300
    ctx->pc = 0x303aacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x303ab0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x303ab0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x303ab4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x303AB4u;
    SET_GPR_U32(ctx, 31, 0x303ABCu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x303AB4u, 0x303ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303ABCu;
label_303abc:
    // 0x303abc: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x303abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x303ac0: 0x8ca41338  lw          $a0, 0x1338($a1)
    ctx->pc = 0x303ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x303ac4: 0x2403ffe1  addiu       $v1, $zero, -0x1F
    ctx->pc = 0x303ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967265));
    // 0x303ac8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x303ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x303acc: 0xaca31338  sw          $v1, 0x1338($a1)
    ctx->pc = 0x303accu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4920), GPR_U32(ctx, 3));
    // 0x303ad0: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x303ad0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x303ad4: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x303AD4u;
    {
        const bool branch_taken_0x303ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x303ad4) {
            ctx->pc = 0x303BF8u;
            goto label_303bf8;
        }
    }
    ctx->pc = 0x303ADCu;
label_303adc:
    // 0x303adc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x303adcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x303ae0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x303ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x303ae4: 0x244292c0  addiu       $v0, $v0, -0x6D40
    ctx->pc = 0x303ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x303ae8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x303ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x303aec: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x303aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x303af0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x303af0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x303af4: 0xc096cc8  jal         func_25B320
    ctx->pc = 0x303AF4u;
    SET_GPR_U32(ctx, 31, 0x303AFCu);
    ctx->pc = 0x25B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B320u, 0x303AF4u, 0x303AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303AFCu;
label_303afc:
    // 0x303afc: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x303afcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x303b00: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x303b00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x303b04: 0x246392d0  addiu       $v1, $v1, -0x6D30
    ctx->pc = 0x303b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939344));
    // 0x303b08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x303b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x303b0c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x303b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x303b10: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x303b10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x303b14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x303b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x303b18: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x303b18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x303b1c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x303b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x303b20: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x303b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x303b24: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x303b24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x303b28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x303b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303b2c: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x303b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x303b30: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x303b30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x303b34: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x303b34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x303b38: 0x246392e0  addiu       $v1, $v1, -0x6D20
    ctx->pc = 0x303b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939360));
    // 0x303b3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x303b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x303b40: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x303b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x303b44: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x303b44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x303b48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x303b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x303b4c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x303b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x303b50: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x303b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x303b54: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x303b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x303b58: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x303b58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x303b5c: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x303b5cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x303b60: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x303b60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x303b64: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x303b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x303b68: 0x246392c0  addiu       $v1, $v1, -0x6D40
    ctx->pc = 0x303b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939328));
    // 0x303b6c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x303b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x303b70: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x303b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x303b74: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x303b74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x303b78: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x303b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x303b7c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x303b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x303b80: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x303b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x303b84: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x303b84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x303b88: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x303b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x303b8c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x303b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x303b90: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x303b90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x303b94: 0x92030143  lbu         $v1, 0x143($s0)
    ctx->pc = 0x303b94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 323)));
    // 0x303b98: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x303b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x303b9c: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x303b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x303ba0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x303ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x303ba4: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x303ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x303ba8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x303ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x303bac: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x303bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
    // 0x303bb0: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x303bb0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x303bb4: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x303bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x303bb8: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x303bb8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x303bbc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x303bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x303bc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x303bc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303bc4: 0x0  nop
    ctx->pc = 0x303bc4u;
    // NOP
    // 0x303bc8: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x303bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x303bcc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x303bccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x303bd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x303bd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303bd4: 0x0  nop
    ctx->pc = 0x303bd4u;
    // NOP
    // 0x303bd8: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x303bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x303bdc: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x303bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x303be0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x303be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x303be4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x303be4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303be8: 0x0  nop
    ctx->pc = 0x303be8u;
    // NOP
    // 0x303bec: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x303becu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x303bf0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x303bf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x303bf4: 0x0  nop
    ctx->pc = 0x303bf4u;
    // NOP
label_303bf8:
    // 0x303bf8: 0x2e230004  sltiu       $v1, $s1, 0x4
    ctx->pc = 0x303bf8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x303bfc: 0x1460ffb7  bnez        $v1, . + 4 + (-0x49 << 2)
    ctx->pc = 0x303BFCu;
    {
        const bool branch_taken_0x303bfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x303bfc) {
            ctx->pc = 0x303ADCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303adc;
        }
    }
    ctx->pc = 0x303C04u;
    // 0x303c04: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x303c04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x303c08: 0x8ca41338  lw          $a0, 0x1338($a1)
    ctx->pc = 0x303c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x303c0c: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x303c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x303c10: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x303c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x303c14: 0xaca31338  sw          $v1, 0x1338($a1)
    ctx->pc = 0x303c14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4920), GPR_U32(ctx, 3));
label_303c18:
    // 0x303c18: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x303c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x303c1c: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x303c1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x303c20: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x303c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x303c24: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x303c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x303c28: 0x10600055  beqz        $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x303C28u;
    {
        const bool branch_taken_0x303c28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x303c28) {
            ctx->pc = 0x303D80u;
            goto label_303d80;
        }
    }
    ctx->pc = 0x303C30u;
    // 0x303c30: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x303c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x303c34: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x303c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x303c38: 0x24703200  addiu       $s0, $v1, 0x3200
    ctx->pc = 0x303c38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 12800));
    // 0x303c3c: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x303c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303c40: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x303c40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x303c44: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x303c44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x303c48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x303c48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303c4c: 0x0  nop
    ctx->pc = 0x303c4cu;
    // NOP
    // 0x303c50: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x303c50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x303c54: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x303c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x303c58: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x303c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303c5c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x303c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x303c60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x303c60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303c64: 0x0  nop
    ctx->pc = 0x303c64u;
    // NOP
    // 0x303c68: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x303c68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x303c6c: 0x0  nop
    ctx->pc = 0x303c6cu;
    // NOP
    // 0x303c70: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x303C70u;
    {
        const bool branch_taken_0x303c70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x303c70) {
            ctx->pc = 0x303C84u;
            goto label_303c84;
        }
    }
    ctx->pc = 0x303C78u;
    // 0x303c78: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x303c78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x303c7c: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x303c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
    // 0x303c80: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x303c80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
label_303c84:
    // 0x303c84: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x303c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x303c88: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x303c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x303c8c: 0x24703390  addiu       $s0, $v1, 0x3390
    ctx->pc = 0x303c8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 13200));
    // 0x303c90: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x303c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303c94: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x303c94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x303c98: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x303c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x303c9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x303c9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303ca0: 0x0  nop
    ctx->pc = 0x303ca0u;
    // NOP
    // 0x303ca4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x303ca4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x303ca8: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x303ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x303cac: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x303cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303cb0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x303cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x303cb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x303cb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303cb8: 0x0  nop
    ctx->pc = 0x303cb8u;
    // NOP
    // 0x303cbc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x303cbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x303cc0: 0x0  nop
    ctx->pc = 0x303cc0u;
    // NOP
    // 0x303cc4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x303CC4u;
    {
        const bool branch_taken_0x303cc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x303cc4) {
            ctx->pc = 0x303CD8u;
            goto label_303cd8;
        }
    }
    ctx->pc = 0x303CCCu;
    // 0x303ccc: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x303cccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x303cd0: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x303cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
    // 0x303cd4: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x303cd4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
label_303cd8:
    // 0x303cd8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x303cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x303cdc: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x303cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x303ce0: 0x24703520  addiu       $s0, $v1, 0x3520
    ctx->pc = 0x303ce0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 13600));
    // 0x303ce4: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x303ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303ce8: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x303ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x303cec: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x303cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x303cf0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x303cf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303cf4: 0x0  nop
    ctx->pc = 0x303cf4u;
    // NOP
    // 0x303cf8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x303cf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x303cfc: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x303cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x303d00: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x303d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303d04: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x303d04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x303d08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x303d08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303d0c: 0x0  nop
    ctx->pc = 0x303d0cu;
    // NOP
    // 0x303d10: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x303d10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x303d14: 0x0  nop
    ctx->pc = 0x303d14u;
    // NOP
    // 0x303d18: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x303D18u;
    {
        const bool branch_taken_0x303d18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x303d18) {
            ctx->pc = 0x303D2Cu;
            goto label_303d2c;
        }
    }
    ctx->pc = 0x303D20u;
    // 0x303d20: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x303d20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x303d24: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x303d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
    // 0x303d28: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x303d28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
label_303d2c:
    // 0x303d2c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x303d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x303d30: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x303d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x303d34: 0x24703070  addiu       $s0, $v1, 0x3070
    ctx->pc = 0x303d34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 12400));
    // 0x303d38: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x303d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303d3c: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x303d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x303d40: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x303d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x303d44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x303d44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303d48: 0x0  nop
    ctx->pc = 0x303d48u;
    // NOP
    // 0x303d4c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x303d4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x303d50: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x303d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x303d54: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x303d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303d58: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x303d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x303d5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x303d5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303d60: 0x0  nop
    ctx->pc = 0x303d60u;
    // NOP
    // 0x303d64: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x303d64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x303d68: 0x0  nop
    ctx->pc = 0x303d68u;
    // NOP
    // 0x303d6c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x303D6Cu;
    {
        const bool branch_taken_0x303d6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x303d6c) {
            ctx->pc = 0x303D80u;
            goto label_303d80;
        }
    }
    ctx->pc = 0x303D74u;
    // 0x303d74: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x303d74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x303d78: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x303d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
    // 0x303d7c: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x303d7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
label_303d80:
    // 0x303d80: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x303d80u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x303d84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x303d84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x303d88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x303d88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x303d8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x303d8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x303d90: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x303d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x303d94: 0x3e00008  jr          $ra
    ctx->pc = 0x303D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x303D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x303D9Cu;
}
