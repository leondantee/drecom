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

// Function: entry_002a1488
// Address: 0x2a1488 - 0x2a14fc
void entry_002a1488_0x2a1488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a1488_0x2a1488");
#endif

    switch (ctx->pc) {
        case 0x2a1494u: goto label_2a1494;
        case 0x2a14acu: goto label_2a14ac;
        case 0x2a14c4u: goto label_2a14c4;
        case 0x2a14dcu: goto label_2a14dc;
        case 0x2a14f4u: goto label_2a14f4;
        default: break;
    }

    ctx->pc = 0x2a1488u;

    // 0x2a1488: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2a1488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2a148c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A148Cu;
    SET_GPR_U32(ctx, 31, 0x2A1494u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A148Cu, 0x2A1494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1494u;
label_2a1494:
    // 0x2a1494: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a1494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1498: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2a1498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a149c: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2a149cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2a14a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a14a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a14a4: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A14A4u;
    SET_GPR_U32(ctx, 31, 0x2A14ACu);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A14A4u, 0x2A14ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A14ACu;
label_2a14ac:
    // 0x2a14ac: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a14acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a14b0: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2a14b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a14b4: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2a14b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2a14b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a14b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a14bc: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A14BCu;
    SET_GPR_U32(ctx, 31, 0x2A14C4u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A14BCu, 0x2A14C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A14C4u;
label_2a14c4:
    // 0x2a14c4: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a14c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a14c8: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2a14c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a14cc: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2a14ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2a14d0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a14d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a14d4: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A14D4u;
    SET_GPR_U32(ctx, 31, 0x2A14DCu);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A14D4u, 0x2A14DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A14DCu;
label_2a14dc:
    // 0x2a14dc: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a14dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a14e0: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2a14e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a14e4: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2a14e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2a14e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a14e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a14ec: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A14ECu;
    SET_GPR_U32(ctx, 31, 0x2A14F4u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A14ECu, 0x2A14F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A14F4u;
label_2a14f4:
    // 0x2a14f4: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x2A14F4u;
    {
        const bool branch_taken_0x2a14f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a14f4) {
            ctx->pc = 0x2A16A4u;
            return;
        }
    }
    ctx->pc = 0x2A14FCu;
}
