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

// Function: caseD_5
// Address: 0x141478 - 0x1414b8
void caseD_5_0x141478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x141478");
#endif

    switch (ctx->pc) {
        case 0x141484u: goto label_141484;
        case 0x1414b4u: goto label_1414b4;
        default: break;
    }

    ctx->pc = 0x141478u;

    // 0x141478: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x141478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14147c: 0xc0592ec  jal         func_164BB0
    ctx->pc = 0x14147Cu;
    SET_GPR_U32(ctx, 31, 0x141484u);
    ctx->pc = 0x164BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164BB0u, 0x14147Cu, 0x141484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141484u;
label_141484:
    // 0x141484: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x141484u;
    {
        const bool branch_taken_0x141484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141484) {
            ctx->pc = 0x1414B8u;
            return;
        }
    }
    ctx->pc = 0x14148Cu;
    // 0x14148c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14148cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141490: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x141490u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x141494: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x141494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
    // 0x141498: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x141498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x14149c: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x14149cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1414a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1414a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1414a4: 0xac241a3c  sw          $a0, 0x1A3C($at)
    ctx->pc = 0x1414a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5D1A3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A3Cu, _value); } while (0);
    // 0x1414a8: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x1414a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x1414ac: 0xc0674dc  jal         func_19D370
    ctx->pc = 0x1414ACu;
    SET_GPR_U32(ctx, 31, 0x1414B4u);
    ctx->pc = 0x19D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D370u, 0x1414ACu, 0x1414B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1414B4u;
label_1414b4:
    // 0x1414b4: 0x0  nop
    ctx->pc = 0x1414b4u;
    // NOP
    ctx->pc = 0x1414b8u;
}
