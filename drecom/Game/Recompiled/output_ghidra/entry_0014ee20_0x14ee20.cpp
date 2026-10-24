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

// Function: entry_0014ee20
// Address: 0x14ee20 - 0x14ee74
void entry_0014ee20_0x14ee20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ee20_0x14ee20");
#endif

    switch (ctx->pc) {
        case 0x14ee4cu: goto label_14ee4c;
        case 0x14ee64u: goto label_14ee64;
        default: break;
    }

    ctx->pc = 0x14ee20u;

    // 0x14ee20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x14ee20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14ee24: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x14ee24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x14ee28: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x14ee28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x14ee2c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x14EE2Cu;
    {
        const bool branch_taken_0x14ee2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ee2c) {
            ctx->pc = 0x14EE74u;
            return;
        }
    }
    ctx->pc = 0x14EE34u;
    // 0x14ee34: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x14ee34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14ee38: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x14ee38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x14ee3c: 0x24449260  addiu       $a0, $v0, -0x6DA0
    ctx->pc = 0x14ee3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939232));
    // 0x14ee40: 0x24650020  addiu       $a1, $v1, 0x20
    ctx->pc = 0x14ee40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x14ee44: 0xc040c9e  jal         func_103278
    ctx->pc = 0x14EE44u;
    SET_GPR_U32(ctx, 31, 0x14EE4Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x14EE4Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x14EE4Cu) { return; }
    ctx->pc = 0x14EE4Cu;
label_14ee4c:
    // 0x14ee4c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x14ee4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14ee50: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x14ee50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x14ee54: 0x24449360  addiu       $a0, $v0, -0x6CA0
    ctx->pc = 0x14ee54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939488));
    // 0x14ee58: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x14ee58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x14ee5c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x14EE5Cu;
    SET_GPR_U32(ctx, 31, 0x14EE64u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x14EE64u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x14EE64u) { return; }
    ctx->pc = 0x14EE64u;
label_14ee64:
    // 0x14ee64: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x14ee64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x14ee68: 0x24449240  addiu       $a0, $v0, -0x6DC0
    ctx->pc = 0x14ee68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939200));
    // 0x14ee6c: 0xc07932c  jal         func_1E4CB0
    ctx->pc = 0x14EE6Cu;
    SET_GPR_U32(ctx, 31, 0x14EE74u);
    ctx->pc = 0x1E4CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4CB0u, 0x14EE6Cu, 0x14EE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EE74u;
}
