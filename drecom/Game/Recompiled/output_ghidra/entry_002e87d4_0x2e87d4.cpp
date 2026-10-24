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

// Function: entry_002e87d4
// Address: 0x2e87d4 - 0x2e88dc
void entry_002e87d4_0x2e87d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e87d4_0x2e87d4");
#endif

    switch (ctx->pc) {
        case 0x2e8814u: goto label_2e8814;
        case 0x2e88b0u: goto label_2e88b0;
        default: break;
    }

    ctx->pc = 0x2e87d4u;

    // 0x2e87d4: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x2e87d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e87d8: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x2e87d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2e87dc: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2e87dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2e87e0: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x2e87e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2e87e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e87e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e87e8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2e87e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e87ec: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2e87ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2e87f0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2e87f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2e87f4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e87f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e87f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e87f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2e87fc: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2e87fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e8800: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x2e8800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x2e8804: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e8804u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e8808: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2e8808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e880c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2E880Cu;
    SET_GPR_U32(ctx, 31, 0x2E8814u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2E880Cu, 0x2E8814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8814u;
label_2e8814:
    // 0x2e8814: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e8814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e8818: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2e8818u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2e881c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e881cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e8820: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e8820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e8824: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e8824u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e8828: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2e8828u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e882c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e882cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e8830: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e8830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e8834: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e8834u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e8838: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2e8838u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e883c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e883cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e8840: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e8840u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e8844: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2e8844u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e8848: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e8848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e884c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e884cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e8850: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e8850u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e8854: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x2e8854u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e8858: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e8858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e885c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e885cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e8860: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2e8860u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e8864: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e8864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e8868: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e8868u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e886c: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2e886cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e8870: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e8870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e8874: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e8874u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e8878: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2e8878u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e887c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e887cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e8880: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e8880u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e8884: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2e8884u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e8888: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e8888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e888c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e888cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e8890: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2e8890u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e8894: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e8894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e8898: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e8898u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e889c: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2e889cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e88a0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e88a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e88a4: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2e88a4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e88a8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2E88A8u;
    SET_GPR_U32(ctx, 31, 0x2E88B0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2E88A8u, 0x2E88B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E88B0u;
label_2e88b0:
    // 0x2e88b0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e88b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e88b4: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2e88b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2e88b8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e88b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e88bc: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2e88bcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2e88c0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2e88c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2e88c4: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2e88c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2e88c8: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E88C8u;
    {
        const bool branch_taken_0x2e88c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e88c8) {
            ctx->pc = 0x2E88DCu;
            return;
        }
    }
    ctx->pc = 0x2E88D0u;
    // 0x2e88d0: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x2e88d0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e88d4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E88D4u;
    {
        const bool branch_taken_0x2e88d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e88d4) {
            ctx->pc = 0x2E8900u;
            return;
        }
    }
    ctx->pc = 0x2E88DCu;
}
