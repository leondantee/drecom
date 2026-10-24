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

// Function: entry_00173cc8
// Address: 0x173cc8 - 0x173cdc
void entry_00173cc8_0x173cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173cc8_0x173cc8");
#endif

    ctx->pc = 0x173cc8u;

    // 0x173cc8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x173cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173ccc: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x173cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x173cd0: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x173cd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x173cd4: 0xc05a400  jal         func_169000
    ctx->pc = 0x173CD4u;
    SET_GPR_U32(ctx, 31, 0x173CDCu);
    ctx->pc = 0x169000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169000u, 0x173CD4u, 0x173CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173CDCu;
}
