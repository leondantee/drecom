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

// Function: entry_00195870
// Address: 0x195870 - 0x195898
void entry_00195870_0x195870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195870_0x195870");
#endif

    ctx->pc = 0x195870u;

    // 0x195870: 0x920200e2  lbu         $v0, 0xE2($s0)
    ctx->pc = 0x195870u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 226)));
    // 0x195874: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x195874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x195878: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x195878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19587c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19587Cu;
    {
        const bool branch_taken_0x19587c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19587c) {
            ctx->pc = 0x195898u;
            return;
        }
    }
    ctx->pc = 0x195884u;
    // 0x195884: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x195884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x195888: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x195888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x19588c: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x19588Cu;
    {
        const bool branch_taken_0x19588c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19588c) {
            ctx->pc = 0x1958D4u;
            return;
        }
    }
    ctx->pc = 0x195894u;
    // 0x195894: 0x0  nop
    ctx->pc = 0x195894u;
    // NOP
    ctx->pc = 0x195898u;
}
