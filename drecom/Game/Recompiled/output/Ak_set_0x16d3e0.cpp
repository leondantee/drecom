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

// Function: Ak_set
// Address: 0x16d3e0 - 0x16d578
void Ak_set_0x16d3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ak_set_0x16d3e0");
#endif

    switch (ctx->pc) {
        case 0x16d484u: goto label_16d484;
        case 0x16d4b8u: goto label_16d4b8;
        case 0x16d4c8u: goto label_16d4c8;
        default: break;
    }

    ctx->pc = 0x16d3e0u;

    // 0x16d3e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x16d3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x16d3e4: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x16d3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x16d3e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16d3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x16d3ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16d3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16d3f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16d3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16d3f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16d3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16d3f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16d3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16d3fc: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x16d3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x16d400: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x16d400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x16d404: 0xafa60078  sw          $a2, 0x78($sp)
    ctx->pc = 0x16d404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 6));
    // 0x16d408: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x16d408u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16d40c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x16d40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x16d410: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16d410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16d414: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16D414u;
    {
        const bool branch_taken_0x16d414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16d414) {
            ctx->pc = 0x16D428u;
            goto label_16d428;
        }
    }
    ctx->pc = 0x16D41Cu;
    // 0x16d41c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x16d41cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16d420: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x16D420u;
    {
        const bool branch_taken_0x16d420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d420) {
            ctx->pc = 0x16D554u;
            goto label_16d554;
        }
    }
    ctx->pc = 0x16D428u;
label_16d428:
    // 0x16d428: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x16d428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x16d42c: 0x24430ae8  addiu       $v1, $v0, 0xAE8
    ctx->pc = 0x16d42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x16d430: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16d430u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x16d434: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x16d434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x16d438: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x16d438u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x16d43c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x16d43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x16d440: 0x24440ae8  addiu       $a0, $v0, 0xAE8
    ctx->pc = 0x16d440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x16d444: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16d444u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x16d448: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x16d448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16d44c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16d44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16d450: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x16d450u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x16d454: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x16d454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16d458: 0x8c330ae8  lw          $s3, 0xAE8($at)
    ctx->pc = 0x16d458u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x16d45c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x16d45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x16d460: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x16d460u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d464: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x16d464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x16d468: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x16d468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x16d46c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x16d46cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x16d470: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x16d470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x16d474: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x16d474u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x16d478: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x16d478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x16d47c: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x16D47Cu;
    SET_GPR_U32(ctx, 31, 0x16D484u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x16D484u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16D484u) { return; }
    ctx->pc = 0x16D484u;
label_16d484:
    // 0x16d484: 0x7260a628  paddub      $s4, $s3, $zero
    ctx->pc = 0x16d484u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x16d488: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x16d488u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x16d48c: 0x72608628  paddub      $s0, $s3, $zero
    ctx->pc = 0x16d48cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x16d490: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x16d490u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x16d494: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16D494u;
    {
        const bool branch_taken_0x16d494 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d494) {
            ctx->pc = 0x16D4A8u;
            goto label_16d4a8;
        }
    }
    ctx->pc = 0x16D49Cu;
    // 0x16d49c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x16d49cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16d4a0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x16D4A0u;
    {
        const bool branch_taken_0x16d4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d4a0) {
            ctx->pc = 0x16D554u;
            goto label_16d554;
        }
    }
    ctx->pc = 0x16D4A8u;
label_16d4a8:
    // 0x16d4a8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x16d4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x16d4ac: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x16d4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x16d4b0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x16d4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x16d4b4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x16d4b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_16d4b8:
    // 0x16d4b8: 0x2610ffb0  addiu       $s0, $s0, -0x50
    ctx->pc = 0x16d4b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967216));
    // 0x16d4bc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x16d4bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16d4c0: 0xc05ae10  jal         func_16B840
    ctx->pc = 0x16D4C0u;
    SET_GPR_U32(ctx, 31, 0x16D4C8u);
    ctx->pc = 0x16B840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B840u, 0x16D4C0u, 0x16D4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D4C8u;
label_16d4c8:
    // 0x16d4c8: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x16d4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x16d4cc: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x16d4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16d4d0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16D4D0u;
    {
        const bool branch_taken_0x16d4d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d4d0) {
            ctx->pc = 0x16D500u;
            goto label_16d500;
        }
    }
    ctx->pc = 0x16D4D8u;
    // 0x16d4d8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x16d4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16d4dc: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x16d4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x16d4e0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x16d4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x16d4e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x16d4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x16d4e8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16D4E8u;
    {
        const bool branch_taken_0x16d4e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d4e8) {
            ctx->pc = 0x16D500u;
            goto label_16d500;
        }
    }
    ctx->pc = 0x16D4F0u;
    // 0x16d4f0: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x16d4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x16d4f4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x16d4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x16d4f8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16d4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16d4fc: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x16d4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
label_16d500:
    // 0x16d500: 0x26520050  addiu       $s2, $s2, 0x50
    ctx->pc = 0x16d500u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x16d504: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x16d504u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x16d508: 0x1620ffeb  bnez        $s1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x16D508u;
    {
        const bool branch_taken_0x16d508 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d508) {
            ctx->pc = 0x16D4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16d4b8;
        }
    }
    ctx->pc = 0x16D510u;
    // 0x16d510: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x16d510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x16d514: 0x24430ae8  addiu       $v1, $v0, 0xAE8
    ctx->pc = 0x16d514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x16d518: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16d518u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x16d51c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x16d51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x16d520: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x16d520u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x16d524: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x16d524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x16d528: 0x24430ae8  addiu       $v1, $v0, 0xAE8
    ctx->pc = 0x16d528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x16d52c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16d52cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x16d530: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x16d530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x16d534: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x16d534u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x16d538: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x16d538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x16d53c: 0x24440ae8  addiu       $a0, $v0, 0xAE8
    ctx->pc = 0x16d53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x16d540: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16d540u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x16d544: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x16d544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16d548: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16d548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16d54c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x16d54cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x16d550: 0x72801628  paddub      $v0, $s4, $zero
    ctx->pc = 0x16d550u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_16d554:
    // 0x16d554: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x16d554u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16d558: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16d558u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16d55c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16d55cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16d560: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16d560u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16d564: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16d564u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d568: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16d568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d56c: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x16d56cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x16d570: 0x3e00008  jr          $ra
    ctx->pc = 0x16D570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D578u;
}
