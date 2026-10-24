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

// Function: entry_001d9898
// Address: 0x1d9898 - 0x1d98d4
void entry_001d9898_0x1d9898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9898_0x1d9898");
#endif

    switch (ctx->pc) {
        case 0x1d98c4u: goto label_1d98c4;
        case 0x1d98ccu: goto label_1d98cc;
        default: break;
    }

    ctx->pc = 0x1d9898u;

    // 0x1d9898: 0x8e021a14  lw          $v0, 0x1A14($s0)
    ctx->pc = 0x1d9898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6676)));
    // 0x1d989c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1d989cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d98a0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D98A0u;
    {
        const bool branch_taken_0x1d98a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d98a0) {
            ctx->pc = 0x1D98D4u;
            return;
        }
    }
    ctx->pc = 0x1D98A8u;
    // 0x1d98a8: 0x8e031a14  lw          $v1, 0x1A14($s0)
    ctx->pc = 0x1d98a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6676)));
    // 0x1d98ac: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1d98acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1d98b0: 0x2444fce0  addiu       $a0, $v0, -0x320
    ctx->pc = 0x1d98b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966496));
    // 0x1d98b4: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1d98b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d98b8: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1d98b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d98bc: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x1D98BCu;
    SET_GPR_U32(ctx, 31, 0x1D98C4u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x1D98C4u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D98C4u) { return; }
    ctx->pc = 0x1D98C4u;
label_1d98c4:
    // 0x1d98c4: 0xc076740  jal         func_1D9D00
    ctx->pc = 0x1D98C4u;
    SET_GPR_U32(ctx, 31, 0x1D98CCu);
    ctx->pc = 0x1D9D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9D00u, 0x1D98C4u, 0x1D98CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D98CCu;
label_1d98cc:
    // 0x1d98cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D98CCu;
    {
        const bool branch_taken_0x1d98cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d98cc) {
            ctx->pc = 0x1D98DCu;
            return;
        }
    }
    ctx->pc = 0x1D98D4u;
}
