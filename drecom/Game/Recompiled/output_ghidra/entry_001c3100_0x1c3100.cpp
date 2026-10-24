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

// Function: entry_001c3100
// Address: 0x1c3100 - 0x1c3154
void entry_001c3100_0x1c3100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3100_0x1c3100");
#endif

    switch (ctx->pc) {
        case 0x1c3120u: goto label_1c3120;
        case 0x1c3138u: goto label_1c3138;
        default: break;
    }

    ctx->pc = 0x1c3100u;

    // 0x1c3100: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c3100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3104: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c3104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3108: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c3108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c310c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1c310cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c3110: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c3110u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3114: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c3114u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c3118: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C3118u;
    SET_GPR_U32(ctx, 31, 0x1C3120u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C3118u, 0x1C3120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3120u;
label_1c3120:
    // 0x1c3120: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c3120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3124: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1c3124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c3128: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1c3128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1c312c: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x1c312cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1c3130: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1C3130u;
    SET_GPR_U32(ctx, 31, 0x1C3138u);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1C3130u, 0x1C3138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3138u;
label_1c3138:
    // 0x1c3138: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1c3138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c313c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c313cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3140: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1c3140u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c3144: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c3144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3148: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c3148u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c314c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c314cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c3150: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c3150u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1c3154u;
}
