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

// Function: entry_001c5af0
// Address: 0x1c5af0 - 0x1c5b44
void entry_001c5af0_0x1c5af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5af0_0x1c5af0");
#endif

    switch (ctx->pc) {
        case 0x1c5b10u: goto label_1c5b10;
        case 0x1c5b28u: goto label_1c5b28;
        default: break;
    }

    ctx->pc = 0x1c5af0u;

    // 0x1c5af0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c5af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5af4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c5af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5af8: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c5af8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c5afc: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1c5afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c5b00: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c5b00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5b04: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c5b04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c5b08: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C5B08u;
    SET_GPR_U32(ctx, 31, 0x1C5B10u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C5B08u, 0x1C5B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5B10u;
label_1c5b10:
    // 0x1c5b10: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c5b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5b14: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1c5b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c5b18: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1c5b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1c5b1c: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x1c5b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1c5b20: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1C5B20u;
    SET_GPR_U32(ctx, 31, 0x1C5B28u);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1C5B20u, 0x1C5B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5B28u;
label_1c5b28:
    // 0x1c5b28: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1c5b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c5b2c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c5b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5b30: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1c5b30u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c5b34: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c5b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5b38: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c5b38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c5b3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c5b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c5b40: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c5b40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1c5b44u;
}
