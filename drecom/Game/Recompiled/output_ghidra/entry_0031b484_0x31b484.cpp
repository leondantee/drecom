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

// Function: entry_0031b484
// Address: 0x31b484 - 0x31b4c4
void entry_0031b484_0x31b484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031b484_0x31b484");
#endif

    switch (ctx->pc) {
        case 0x31b490u: goto label_31b490;
        default: break;
    }

    ctx->pc = 0x31b484u;

    // 0x31b484: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x31b484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31b488: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x31B488u;
    SET_GPR_U32(ctx, 31, 0x31B490u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x31B488u, 0x31B490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B490u;
label_31b490:
    // 0x31b490: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31b490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b494: 0x8c6412ac  lw          $a0, 0x12AC($v1)
    ctx->pc = 0x31b494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4780)));
    // 0x31b498: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x31b498u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x31b49c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31b49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31b4a0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x31b4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x31b4a4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x31b4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x31b4a8: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x31b4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x31b4ac: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x31b4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31b4b0: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x31b4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x31b4b4: 0x34630007  ori         $v1, $v1, 0x7
    ctx->pc = 0x31b4b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)7);
    // 0x31b4b8: 0xac83007c  sw          $v1, 0x7C($a0)
    ctx->pc = 0x31b4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 3));
    // 0x31b4bc: 0x10000123  b           . + 4 + (0x123 << 2)
    ctx->pc = 0x31B4BCu;
    {
        const bool branch_taken_0x31b4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b4bc) {
            ctx->pc = 0x31B94Cu;
            return;
        }
    }
    ctx->pc = 0x31B4C4u;
}
