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

// Function: entry_001dac78
// Address: 0x1dac78 - 0x1dacd0
void entry_001dac78_0x1dac78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dac78_0x1dac78");
#endif

    switch (ctx->pc) {
        case 0x1dac8cu: goto label_1dac8c;
        default: break;
    }

    ctx->pc = 0x1dac78u;

    // 0x1dac78: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1dac78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1dac7c: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x1dac7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1dac80: 0x72803628  paddub      $a2, $s4, $zero
    ctx->pc = 0x1dac80u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1dac84: 0xc076824  jal         func_1DA090
    ctx->pc = 0x1DAC84u;
    SET_GPR_U32(ctx, 31, 0x1DAC8Cu);
    ctx->pc = 0x1DA090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA090u, 0x1DAC84u, 0x1DAC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAC8Cu;
label_1dac8c:
    // 0x1dac8c: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x1dac8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x1dac90: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1dac90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1dac94: 0xafa300c4  sw          $v1, 0xC4($sp)
    ctx->pc = 0x1dac94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
    // 0x1dac98: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x1dac98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1dac9c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1dac9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1daca0: 0xafa300b4  sw          $v1, 0xB4($sp)
    ctx->pc = 0x1daca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 3));
    // 0x1daca4: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1daca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1daca8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1daca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1dacac: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x1dacacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    // 0x1dacb0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1dacb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1dacb4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1dacb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dacb8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1dacb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dacbc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1dacbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1dacc0: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x1dacc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1dacc4: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x1dacc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1dacc8: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x1dacc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x1daccc: 0x0  nop
    ctx->pc = 0x1dacccu;
    // NOP
    ctx->pc = 0x1dacd0u;
}
