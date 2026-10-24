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

// Function: entry_00281934
// Address: 0x281934 - 0x281a14
void entry_00281934_0x281934(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00281934_0x281934");
#endif

    switch (ctx->pc) {
        case 0x281958u: goto label_281958;
        case 0x2819e8u: goto label_2819e8;
        default: break;
    }

    ctx->pc = 0x281934u;

    // 0x281934: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x281934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x281938: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x281938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x28193c: 0x24423700  addiu       $v0, $v0, 0x3700
    ctx->pc = 0x28193cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14080));
    // 0x281940: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x281940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x281944: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x281944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x281948: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x281948u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28194c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x28194cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281950: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x281950u;
    SET_GPR_U32(ctx, 31, 0x281958u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x281950u, 0x281958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281958u;
label_281958:
    // 0x281958: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x28195c: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x28195cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x281960: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281964: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x281964u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x281968: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x281968u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x28196c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x28196cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281970: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x281970u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x281974: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x281974u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x281978: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x28197c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x28197cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x281980: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x281980u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x281984: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281988: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x281988u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x28198c: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x28198cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x281990: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x281990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x281994: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x281994u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x281998: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x281998u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x28199c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x28199cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2819a0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2819a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2819a4: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2819a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2819a8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2819a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2819ac: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2819acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2819b0: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2819b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2819b4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2819b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2819b8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2819b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2819bc: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2819bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2819c0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2819c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2819c4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2819c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2819c8: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2819c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2819cc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2819ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2819d0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2819d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2819d4: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2819d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2819d8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2819d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2819dc: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2819dcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2819e0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2819E0u;
    SET_GPR_U32(ctx, 31, 0x2819E8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2819E0u, 0x2819E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2819E8u;
label_2819e8:
    // 0x2819e8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2819e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2819ec: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2819ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2819f0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2819f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2819f4: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2819f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2819f8: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x2819f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x2819fc: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x2819fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x281a00: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x281A00u;
    {
        const bool branch_taken_0x281a00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x281a00) {
            ctx->pc = 0x281A14u;
            return;
        }
    }
    ctx->pc = 0x281A08u;
    // 0x281a08: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x281a08u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x281a0c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x281A0Cu;
    {
        const bool branch_taken_0x281a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x281a0c) {
            ctx->pc = 0x281A30u;
            return;
        }
    }
    ctx->pc = 0x281A14u;
}
