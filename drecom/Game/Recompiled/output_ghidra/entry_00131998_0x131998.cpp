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

// Function: entry_00131998
// Address: 0x131998 - 0x1319cc
void entry_00131998_0x131998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131998_0x131998");
#endif

    switch (ctx->pc) {
        case 0x1319a4u: goto label_1319a4;
        default: break;
    }

    ctx->pc = 0x131998u;

    // 0x131998: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x131998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13199c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x13199Cu;
    SET_GPR_U32(ctx, 31, 0x1319A4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x13199Cu, 0x1319A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1319A4u;
label_1319a4:
    // 0x1319a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1319a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1319a8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1319a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1319ac: 0x10600063  beqz        $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x1319ACu;
    {
        const bool branch_taken_0x1319ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1319ac) {
            ctx->pc = 0x131B3Cu;
            return;
        }
    }
    ctx->pc = 0x1319B4u;
    // 0x1319b4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1319b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1319b8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1319b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1319bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1319bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1319c0: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1319c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1319c4: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x1319C4u;
    {
        const bool branch_taken_0x1319c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1319c4) {
            ctx->pc = 0x131B3Cu;
            return;
        }
    }
    ctx->pc = 0x1319CCu;
}
