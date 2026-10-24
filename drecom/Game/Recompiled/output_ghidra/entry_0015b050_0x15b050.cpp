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

// Function: entry_0015b050
// Address: 0x15b050 - 0x15b0b0
void entry_0015b050_0x15b050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b050_0x15b050");
#endif

    ctx->pc = 0x15b050u;

label_15b050:
    // 0x15b050: 0x328400ff  andi        $a0, $s4, 0xFF
    ctx->pc = 0x15b050u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_15b054:
    // 0x15b054: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x15b054u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_15b058:
    // 0x15b058: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x15b058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_15b05c:
    // 0x15b05c: 0x1083003a  beq         $a0, $v1, . + 4 + (0x3A << 2)
label_15b060:
    if (ctx->pc == 0x15B060u) {
        ctx->pc = 0x15B064u;
        goto label_15b064;
    }
    ctx->pc = 0x15B05Cu;
    {
        const bool branch_taken_0x15b05c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15b05c) {
            ctx->pc = 0x15B148u;
            return;
        }
    }
    ctx->pc = 0x15B064u;
label_15b064:
    // 0x15b064: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x15b064u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_15b068:
    // 0x15b068: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x15b068u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_15b06c:
    // 0x15b06c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x15b06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_15b070:
    // 0x15b070: 0x14830035  bne         $a0, $v1, . + 4 + (0x35 << 2)
label_15b074:
    if (ctx->pc == 0x15B074u) {
        ctx->pc = 0x15B078u;
        goto label_15b078;
    }
    ctx->pc = 0x15B070u;
    {
        const bool branch_taken_0x15b070 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x15b070) {
            ctx->pc = 0x15B148u;
            return;
        }
    }
    ctx->pc = 0x15B078u;
label_15b078:
    // 0x15b078: 0x92030012  lbu         $v1, 0x12($s0)
    ctx->pc = 0x15b078u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
label_15b07c:
    // 0x15b07c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x15b07cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_15b080:
    // 0x15b080: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x15b080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_15b084:
    // 0x15b084: 0x2065fff5  addi        $a1, $v1, -0xB
    ctx->pc = 0x15b084u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)4294967285, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_15b088:
    // 0x15b088: 0x2ca1000d  sltiu       $at, $a1, 0xD
    ctx->pc = 0x15b088u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
label_15b08c:
    // 0x15b08c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_15b090:
    if (ctx->pc == 0x15B090u) {
        ctx->pc = 0x15B094u;
        goto label_15b094;
    }
    ctx->pc = 0x15B08Cu;
    {
        const bool branch_taken_0x15b08c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b08c) {
            ctx->pc = 0x15B0E0u;
            return;
        }
    }
    ctx->pc = 0x15B094u;
label_15b094:
    // 0x15b094: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x15b094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_15b098:
    // 0x15b098: 0x2464e9e0  addiu       $a0, $v1, -0x1620
    ctx->pc = 0x15b098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961632));
label_15b09c:
    // 0x15b09c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x15b09cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_15b0a0:
    // 0x15b0a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15b0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15b0a4:
    // 0x15b0a4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x15b0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15b0a8:
    // 0x15b0a8: 0x600008  jr          $v1
label_15b0ac:
    if (ctx->pc == 0x15B0ACu) {
        ctx->pc = 0x15B0B0u;
        goto label_fallthrough_0x15b0a8;
    }
    ctx->pc = 0x15B0A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B0A8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x15b0a8:
    ctx->pc = 0x15B0B0u;
}
