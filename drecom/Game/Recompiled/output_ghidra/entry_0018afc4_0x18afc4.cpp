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

// Function: entry_0018afc4
// Address: 0x18afc4 - 0x18b034
void entry_0018afc4_0x18afc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018afc4_0x18afc4");
#endif

    switch (ctx->pc) {
        case 0x18afe8u: goto label_18afe8;
        case 0x18aff8u: goto label_18aff8;
        default: break;
    }

    ctx->pc = 0x18afc4u;

    // 0x18afc4: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x18afc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18afc8: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18afc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18afcc: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x18afccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18afd0: 0x9202000d  lbu         $v0, 0xD($s0)
    ctx->pc = 0x18afd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x18afd4: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x18afd4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18afd8: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x18afd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x18afdc: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x18afdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18afe0: 0xc05e858  jal         func_17A160
    ctx->pc = 0x18AFE0u;
    SET_GPR_U32(ctx, 31, 0x18AFE8u);
    ctx->pc = 0x17A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A160u, 0x18AFE0u, 0x18AFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AFE8u;
label_18afe8:
    // 0x18afe8: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x18afe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18afec: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18afecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18aff0: 0xc05e964  jal         func_17A590
    ctx->pc = 0x18AFF0u;
    SET_GPR_U32(ctx, 31, 0x18AFF8u);
    ctx->pc = 0x17A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A590u, 0x18AFF0u, 0x18AFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AFF8u;
label_18aff8:
    // 0x18aff8: 0x9203000c  lbu         $v1, 0xC($s0)
    ctx->pc = 0x18aff8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18affc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x18affcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x18b000: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x18b000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18b004: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18b004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18b008: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x18b008u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18b00c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x18b00cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x18b010: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x18b010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x18b014: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18b014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18b018: 0x94630012  lhu         $v1, 0x12($v1)
    ctx->pc = 0x18b018u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x18b01c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x18b01cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x18b020: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x18b020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x18b024: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18b024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18b028: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x18b028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x18b02c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x18B02Cu;
    {
        const bool branch_taken_0x18b02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b02c) {
            ctx->pc = 0x18B05Cu;
            return;
        }
    }
    ctx->pc = 0x18B034u;
}
