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

// Function: entry_0027e544
// Address: 0x27e544 - 0x27e570
void entry_0027e544_0x27e544(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027e544_0x27e544");
#endif

    switch (ctx->pc) {
        case 0x27e568u: goto label_27e568;
        default: break;
    }

    ctx->pc = 0x27e544u;

    // 0x27e544: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27e544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27e548: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x27e548u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x27e54c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27e54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27e550: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x27e550u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x27e554: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27e554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27e558: 0x244213d0  addiu       $v0, $v0, 0x13D0
    ctx->pc = 0x27e558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5072));
    // 0x27e55c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x27e55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27e560: 0xc0a1030  jal         func_2840C0
    ctx->pc = 0x27E560u;
    SET_GPR_U32(ctx, 31, 0x27E568u);
    ctx->pc = 0x2840C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840C0u, 0x27E560u, 0x27E568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E568u;
label_27e568:
    // 0x27e568: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x27E568u;
    {
        const bool branch_taken_0x27e568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e568) {
            ctx->pc = 0x27E5A8u;
            return;
        }
    }
    ctx->pc = 0x27E570u;
}
