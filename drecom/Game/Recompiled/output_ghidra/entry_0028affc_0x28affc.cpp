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

// Function: entry_0028affc
// Address: 0x28affc - 0x28b0f8
void entry_0028affc_0x28affc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028affc_0x28affc");
#endif

    ctx->pc = 0x28affcu;

    // 0x28affc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x28affcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x28b000: 0x8c2b7508  lw          $t3, 0x7508($at)
    ctx->pc = 0x28b000u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x387508u));
    // 0x28b004: 0x3163ffff  andi        $v1, $t3, 0xFFFF
    ctx->pc = 0x28b004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x28b008: 0x34080  sll         $t0, $v1, 2
    ctx->pc = 0x28b008u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28b00c: 0x1034821  addu        $t1, $t0, $v1
    ctx->pc = 0x28b00cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x28b010: 0x312800ff  andi        $t0, $t1, 0xFF
    ctx->pc = 0x28b010u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x28b014: 0x85200  sll         $t2, $t0, 8
    ctx->pc = 0x28b014u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x28b018: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x28b018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x28b01c: 0x8c2c7508  lw          $t4, 0x7508($at)
    ctx->pc = 0x28b01cu;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x387508u));
    // 0x28b020: 0x3186ffff  andi        $a2, $t4, 0xFFFF
    ctx->pc = 0x28b020u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x28b024: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x28b024u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x28b028: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x28b028u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x28b02c: 0x30e3ff00  andi        $v1, $a3, 0xFF00
    ctx->pc = 0x28b02cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65280);
    // 0x28b030: 0x35a02  srl         $t3, $v1, 8
    ctx->pc = 0x28b030u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x28b034: 0x14b3021  addu        $a2, $t2, $t3
    ctx->pc = 0x28b034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x28b038: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x28b038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x28b03c: 0xac267508  sw          $a2, 0x7508($at)
    ctx->pc = 0x28b03cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x28b040: 0x30c800ff  andi        $t0, $a2, 0xFF
    ctx->pc = 0x28b040u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x28b044: 0x3103000f  andi        $v1, $t0, 0xF
    ctx->pc = 0x28b044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
    // 0x28b048: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x28b048u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b04c: 0x146a00d1  bne         $v1, $t2, . + 4 + (0xD1 << 2)
    ctx->pc = 0x28B04Cu;
    {
        const bool branch_taken_0x28b04c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 10));
        if (branch_taken_0x28b04c) {
            ctx->pc = 0x28B394u;
            return;
        }
    }
    ctx->pc = 0x28B054u;
    // 0x28b054: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x28b054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x28b058: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x28b058u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x28b05c: 0x3049ffff  andi        $t1, $v0, 0xFFFF
    ctx->pc = 0x28b05cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28b060: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x28b060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x28b064: 0x693821  addu        $a3, $v1, $t1
    ctx->pc = 0x28b064u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x28b068: 0x30e900ff  andi        $t1, $a3, 0xFF
    ctx->pc = 0x28b068u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x28b06c: 0x91200  sll         $v0, $t1, 8
    ctx->pc = 0x28b06cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x28b070: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x28b070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x28b074: 0x8c287508  lw          $t0, 0x7508($at)
    ctx->pc = 0x28b074u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x387508u));
    // 0x28b078: 0x3107ffff  andi        $a3, $t0, 0xFFFF
    ctx->pc = 0x28b078u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x28b07c: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x28b07cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x28b080: 0xc74021  addu        $t0, $a2, $a3
    ctx->pc = 0x28b080u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x28b084: 0x3107ff00  andi        $a3, $t0, 0xFF00
    ctx->pc = 0x28b084u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65280);
    // 0x28b088: 0x74a02  srl         $t1, $a3, 8
    ctx->pc = 0x28b088u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x28b08c: 0x493021  addu        $a2, $v0, $t1
    ctx->pc = 0x28b08cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x28b090: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x28b090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x28b094: 0xac267508  sw          $a2, 0x7508($at)
    ctx->pc = 0x28b094u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x28b098: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x28b098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x28b09c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x28b09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28b0a0: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x28b0a0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x28b0a4: 0x0  nop
    ctx->pc = 0x28b0a4u;
    // NOP
    // 0x28b0a8: 0x0  nop
    ctx->pc = 0x28b0a8u;
    // NOP
    // 0x28b0ac: 0x5010  mfhi        $t2
    ctx->pc = 0x28b0acu;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x28b0b0: 0xafaa0148  sw          $t2, 0x148($sp)
    ctx->pc = 0x28b0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 10));
    // 0x28b0b4: 0x82465dea  lb          $a2, 0x5DEA($s2)
    ctx->pc = 0x28b0b4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 24042)));
    // 0x28b0b8: 0x61e3c  dsll32      $v1, $a2, 24
    ctx->pc = 0x28b0b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 24));
    // 0x28b0bc: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x28b0bcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x28b0c0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x28b0c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b0c4: 0x1468003d  bne         $v1, $t0, . + 4 + (0x3D << 2)
    ctx->pc = 0x28B0C4u;
    {
        const bool branch_taken_0x28b0c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x28b0c4) {
            ctx->pc = 0x28B1BCu;
            return;
        }
    }
    ctx->pc = 0x28B0CCu;
    // 0x28b0cc: 0x8fa70148  lw          $a3, 0x148($sp)
    ctx->pc = 0x28b0ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x28b0d0: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x28b0d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28b0d4: 0x10eb0029  beq         $a3, $t3, . + 4 + (0x29 << 2)
    ctx->pc = 0x28B0D4u;
    {
        const bool branch_taken_0x28b0d4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 11));
        if (branch_taken_0x28b0d4) {
            ctx->pc = 0x28B17Cu;
            return;
        }
    }
    ctx->pc = 0x28B0DCu;
    // 0x28b0dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28b0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b0e0: 0x10e20015  beq         $a3, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x28B0E0u;
    {
        const bool branch_taken_0x28b0e0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x28b0e0) {
            ctx->pc = 0x28B138u;
            return;
        }
    }
    ctx->pc = 0x28B0E8u;
    // 0x28b0e8: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B0E8u;
    {
        const bool branch_taken_0x28b0e8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b0e8) {
            ctx->pc = 0x28B0F8u;
            return;
        }
    }
    ctx->pc = 0x28B0F0u;
    // 0x28b0f0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x28B0F0u;
    {
        const bool branch_taken_0x28b0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b0f0) {
            ctx->pc = 0x28B17Cu;
            return;
        }
    }
    ctx->pc = 0x28B0F8u;
}
