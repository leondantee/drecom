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

// Function: entry_0022c46c
// Address: 0x22c46c - 0x22c4cc
void entry_0022c46c_0x22c46c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022c46c_0x22c46c");
#endif

    switch (ctx->pc) {
        case 0x22c47cu: goto label_22c47c;
        case 0x22c488u: goto label_22c488;
        case 0x22c4b8u: goto label_22c4b8;
        default: break;
    }

    ctx->pc = 0x22c46cu;

    // 0x22c46c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x22c46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c470: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22c470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x22c474: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x22C474u;
    SET_GPR_U32(ctx, 31, 0x22C47Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x22C474u, 0x22C47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C47Cu;
label_22c47c:
    // 0x22c47c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x22c47cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c480: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x22C480u;
    SET_GPR_U32(ctx, 31, 0x22C488u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x22C480u, 0x22C488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C488u;
label_22c488:
    // 0x22c488: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x22c488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c48c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x22c48cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x22c490: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x22C490u;
    {
        const bool branch_taken_0x22c490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c490) {
            ctx->pc = 0x22C58Cu;
            return;
        }
    }
    ctx->pc = 0x22C498u;
    // 0x22c498: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22c498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c49c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x22c49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c4a0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x22c4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x22c4a4: 0x24060a24  addiu       $a2, $zero, 0xA24
    ctx->pc = 0x22c4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2596));
    // 0x22c4a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22c4a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c4ac: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22c4acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22c4b0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x22C4B0u;
    SET_GPR_U32(ctx, 31, 0x22C4B8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22C4B0u, 0x22C4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C4B8u;
label_22c4b8:
    // 0x22c4b8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x22c4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22c4bc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x22c4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c4c0: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x22c4c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x22c4c4: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x22C4C4u;
    {
        const bool branch_taken_0x22c4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c4c4) {
            ctx->pc = 0x22C58Cu;
            return;
        }
    }
    ctx->pc = 0x22C4CCu;
}
