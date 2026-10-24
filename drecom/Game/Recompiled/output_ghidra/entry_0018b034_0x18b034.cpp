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

// Function: entry_0018b034
// Address: 0x18b034 - 0x18b05c
void entry_0018b034_0x18b034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b034_0x18b034");
#endif

    switch (ctx->pc) {
        case 0x18b050u: goto label_18b050;
        default: break;
    }

    ctx->pc = 0x18b034u;

    // 0x18b034: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x18b034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18b038: 0x240400bb  addiu       $a0, $zero, 0xBB
    ctx->pc = 0x18b038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
    // 0x18b03c: 0x24061b00  addiu       $a2, $zero, 0x1B00
    ctx->pc = 0x18b03cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6912));
    // 0x18b040: 0x2407006e  addiu       $a3, $zero, 0x6E
    ctx->pc = 0x18b040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x18b044: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x18b044u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18b048: 0xc05e858  jal         func_17A160
    ctx->pc = 0x18B048u;
    SET_GPR_U32(ctx, 31, 0x18B050u);
    ctx->pc = 0x17A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A160u, 0x18B048u, 0x18B050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B050u;
label_18b050:
    // 0x18b050: 0x240400bb  addiu       $a0, $zero, 0xBB
    ctx->pc = 0x18b050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
    // 0x18b054: 0xc05e964  jal         func_17A590
    ctx->pc = 0x18B054u;
    SET_GPR_U32(ctx, 31, 0x18B05Cu);
    ctx->pc = 0x17A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A590u, 0x18B054u, 0x18B05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B05Cu;
}
