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

// Function: entry_001ece3c
// Address: 0x1ece3c - 0x1ecf74
void entry_001ece3c_0x1ece3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ece3c_0x1ece3c");
#endif

    switch (ctx->pc) {
        case 0x1ece5cu: goto label_1ece5c;
        default: break;
    }

    ctx->pc = 0x1ece3cu;

    // 0x1ece3c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ece3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ece40: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1ece40u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ece44: 0x2403cfff  addiu       $v1, $zero, -0x3001
    ctx->pc = 0x1ece44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294955007));
    // 0x1ece48: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1ece48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ece4c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ece4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ece50: 0xac241a58  sw          $a0, 0x1A58($at)
    ctx->pc = 0x1ece50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x1ece54: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1ECE54u;
    SET_GPR_U32(ctx, 31, 0x1ECE5Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1ECE54u, 0x1ECE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECE5Cu;
label_1ece5c:
    // 0x1ece5c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ece5cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ece60: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ece60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ece64: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x1ece64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1ece68: 0x41b00  sll         $v1, $a0, 12
    ctx->pc = 0x1ece68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 12));
    // 0x1ece6c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ece6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ece70: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1ece70u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ece74: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1ece74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ece78: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ece78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ece7c: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x1ece7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x1ece80: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ece80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ece84: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1ece84u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ece88: 0x30633000  andi        $v1, $v1, 0x3000
    ctx->pc = 0x1ece88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12288);
    // 0x1ece8c: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x1ece8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x1ece90: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1ece90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ece94: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ece94u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ece98: 0x3943c  dsll32      $s2, $v1, 16
    ctx->pc = 0x1ece98u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ece9c: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x1ece9cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x1ecea0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ecea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ecea4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ecea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecea8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1ecea8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1eceac: 0x121c3c  dsll32      $v1, $s2, 16
    ctx->pc = 0x1eceacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 16));
    // 0x1eceb0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1eceb0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1eceb4: 0x38040  sll         $s0, $v1, 1
    ctx->pc = 0x1eceb4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1eceb8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1eceb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1ecebc: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1ecebcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ecec0: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1ecec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1ecec4: 0x24639d00  addiu       $v1, $v1, -0x6300
    ctx->pc = 0x1ecec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941952));
    // 0x1ecec8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ecec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ececc: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x1ececcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1eced0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1eced0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1eced4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1eced4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1eced8: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x1eced8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ecedc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ecedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecee0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1ecee0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ecee4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ecee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecee8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ecee8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eceec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1eceecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecef0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ecef0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1ecef4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ecef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ecef8: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1ecef8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ecefc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1ecefcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1ecf00: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1ecf00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ecf04: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ecf04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ecf08: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x1ecf08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x1ecf0c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ecf0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ecf10: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1ecf10u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ecf14: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x1ecf14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x1ecf18: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ecf18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ecf1c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ecf1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ecf20: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x1ecf20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x1ecf24: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ecf24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecf28: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ecf28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ecf2c: 0x8c700068  lw          $s0, 0x68($v1)
    ctx->pc = 0x1ecf2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1ecf30: 0x120000d1  beqz        $s0, . + 4 + (0xD1 << 2)
    ctx->pc = 0x1ECF30u;
    {
        const bool branch_taken_0x1ecf30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecf30) {
            ctx->pc = 0x1ED278u;
            return;
        }
    }
    ctx->pc = 0x1ECF38u;
    // 0x1ecf38: 0x12243c  dsll32      $a0, $s2, 16
    ctx->pc = 0x1ecf38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 16));
    // 0x1ecf3c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1ecf3cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1ecf40: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1ecf40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1ecf44: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ecf44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ecf48: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1ecf48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ecf4c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1ecf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1ecf50: 0x24639d00  addiu       $v1, $v1, -0x6300
    ctx->pc = 0x1ecf50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941952));
    // 0x1ecf54: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ecf54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ecf58: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1ecf58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ecf5c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1ecf5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ecf60: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1ecf60u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1ecf64: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x1ecf64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x1ecf68: 0xa4640078  sh          $a0, 0x78($v1)
    ctx->pc = 0x1ecf68u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 120), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ecf6c: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x1ECF6Cu;
    {
        const bool branch_taken_0x1ecf6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecf6c) {
            ctx->pc = 0x1ED278u;
            return;
        }
    }
    ctx->pc = 0x1ECF74u;
}
