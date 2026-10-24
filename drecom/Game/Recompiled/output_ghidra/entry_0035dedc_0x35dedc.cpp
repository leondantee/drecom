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

// Function: entry_0035dedc
// Address: 0x35dedc - 0x35e0b8
void entry_0035dedc_0x35dedc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035dedc_0x35dedc");
#endif

    ctx->pc = 0x35dedcu;

    // 0x35dedc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35dedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35dee0: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x35dee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x35dee4: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x35dee4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x35dee8: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x35dee8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    // 0x35deec: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x35deecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x35def0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35def0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35def4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x35def4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35def8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x35def8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35defc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x35defcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x35df00: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x35df00u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x35df04: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x35df04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x35df08: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x35df08u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x35df0c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x35df0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x35df10: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x35df10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
    // 0x35df14: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x35df14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35df18: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x35df18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x35df1c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x35df1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35df20: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x35df20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35df24: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x35df24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x35df28: 0x31183  sra         $v0, $v1, 6
    ctx->pc = 0x35df28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
    // 0x35df2c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x35df2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35df30: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x35df30u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x35df34: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x35df34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35df38: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x35df38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x35df3c: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x35df3cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x35df40: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x35df40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x35df44: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x35df44u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x35df48: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x35df48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x35df4c: 0xfe000000  sd          $zero, 0x0($s0)
    ctx->pc = 0x35df4cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 0));
    // 0x35df50: 0x24020051  addiu       $v0, $zero, 0x51
    ctx->pc = 0x35df50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x35df54: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x35df54u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x35df58: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x35df58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x35df5c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x35df5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35df60: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x35df60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35df64: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x35df64u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x35df68: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x35df68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35df6c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x35df6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35df70: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x35df70u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x35df74: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x35df74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35df78: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x35df78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35df7c: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x35df7cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x35df80: 0x24020052  addiu       $v0, $zero, 0x52
    ctx->pc = 0x35df80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x35df84: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x35df84u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x35df88: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x35df88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x35df8c: 0xfe000000  sd          $zero, 0x0($s0)
    ctx->pc = 0x35df8cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 0));
    // 0x35df90: 0x24020053  addiu       $v0, $zero, 0x53
    ctx->pc = 0x35df90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x35df94: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x35df94u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x35df98: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x35df98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x35df9c: 0x12400046  beqz        $s2, . + 4 + (0x46 << 2)
    ctx->pc = 0x35DF9Cu;
    {
        const bool branch_taken_0x35df9c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x35df9c) {
            ctx->pc = 0x35E0B8u;
            return;
        }
    }
    ctx->pc = 0x35DFA4u;
    // 0x35dfa4: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x35dfa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x35dfa8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x35dfa8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x35dfac: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x35dfacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x35dfb0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x35dfb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35dfb4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x35dfb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35dfb8: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x35dfb8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x35dfbc: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x35dfbcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    // 0x35dfc0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x35dfc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x35dfc4: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x35dfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x35dfc8: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x35dfc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x35dfcc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x35dfccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35dfd0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x35dfd0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x35dfd4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35dfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35dfd8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x35dfd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35dfdc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x35dfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x35dfe0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x35dfe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35dfe4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x35dfe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35dfe8: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x35dfe8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x35dfec: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x35dfecu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    // 0x35dff0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x35dff0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x35dff4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35dff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35dff8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x35dff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x35dffc: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x35dffcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x35e000: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x35e000u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    // 0x35e004: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x35e004u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x35e008: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x35e008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x35e00c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x35e00cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x35e010: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x35e010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x35e014: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x35e014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35e018: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x35e018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35e01c: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x35e01cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x35e020: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x35e020u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    // 0x35e024: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x35e024u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x35e028: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x35e028u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x35e02c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35e02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35e030: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35e030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35e034: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x35e034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35e038: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x35e038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x35e03c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x35e03cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35e040: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x35e040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x35e044: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x35e044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x35e048: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x35e048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35e04c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x35e04cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x35e050: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x35e050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x35e054: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x35e054u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x35e058: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x35e058u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    // 0x35e05c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x35e05cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x35e060: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35e060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35e064: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x35e064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x35e068: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x35e068u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x35e06c: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x35e06cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    // 0x35e070: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x35e070u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x35e074: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35e074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35e078: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x35e078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35e07c: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x35e07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x35e080: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x35e080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x35e084: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x35e084u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x35e088: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x35e088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x35e08c: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x35e08cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x35e090: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x35e090u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x35e094: 0xfe000000  sd          $zero, 0x0($s0)
    ctx->pc = 0x35e094u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 0));
    // 0x35e098: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x35e098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x35e09c: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x35e09cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x35e0a0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x35e0a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x35e0a4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x35e0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x35e0a8: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x35e0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x35e0ac: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x35e0acu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    // 0x35e0b0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x35E0B0u;
    {
        const bool branch_taken_0x35e0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e0b0) {
            ctx->pc = 0x35E158u;
            return;
        }
    }
    ctx->pc = 0x35E0B8u;
}
