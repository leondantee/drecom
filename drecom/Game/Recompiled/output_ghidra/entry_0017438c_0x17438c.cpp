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

// Function: entry_0017438c
// Address: 0x17438c - 0x1743cc
void entry_0017438c_0x17438c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017438c_0x17438c");
#endif

    switch (ctx->pc) {
        case 0x17439cu: goto label_17439c;
        default: break;
    }

    ctx->pc = 0x17438cu;

    // 0x17438c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x17438cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x174390: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x174390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x174394: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x174394u;
    SET_GPR_U32(ctx, 31, 0x17439Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x174394u, 0x17439Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17439Cu;
label_17439c:
    // 0x17439c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x17439cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1743a0: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1743a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1743a4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1743a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1743a8: 0x1460002a  bnez        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x1743A8u;
    {
        const bool branch_taken_0x1743a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1743a8) {
            ctx->pc = 0x174454u;
            return;
        }
    }
    ctx->pc = 0x1743B0u;
    // 0x1743b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1743b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1743b4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1743b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1743b8: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1743b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1743bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1743bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1743c0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1743c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1743c4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1743C4u;
    {
        const bool branch_taken_0x1743c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1743c4) {
            ctx->pc = 0x174454u;
            return;
        }
    }
    ctx->pc = 0x1743CCu;
}
