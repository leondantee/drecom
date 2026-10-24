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

// Function: entry_001315a8
// Address: 0x1315a8 - 0x1315dc
void entry_001315a8_0x1315a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001315a8_0x1315a8");
#endif

    switch (ctx->pc) {
        case 0x1315b4u: goto label_1315b4;
        default: break;
    }

    ctx->pc = 0x1315a8u;

    // 0x1315a8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1315a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1315ac: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1315ACu;
    SET_GPR_U32(ctx, 31, 0x1315B4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1315ACu, 0x1315B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1315B4u;
label_1315b4:
    // 0x1315b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1315b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1315b8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1315b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1315bc: 0x10600063  beqz        $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x1315BCu;
    {
        const bool branch_taken_0x1315bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1315bc) {
            ctx->pc = 0x13174Cu;
            return;
        }
    }
    ctx->pc = 0x1315C4u;
    // 0x1315c4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1315c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1315c8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1315c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1315cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1315ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1315d0: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1315d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1315d4: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x1315D4u;
    {
        const bool branch_taken_0x1315d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1315d4) {
            ctx->pc = 0x13174Cu;
            return;
        }
    }
    ctx->pc = 0x1315DCu;
}
