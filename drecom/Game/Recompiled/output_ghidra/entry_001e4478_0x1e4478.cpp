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

// Function: entry_001e4478
// Address: 0x1e4478 - 0x1e4498
void entry_001e4478_0x1e4478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4478_0x1e4478");
#endif

    switch (ctx->pc) {
        case 0x1e4494u: goto label_1e4494;
        default: break;
    }

    ctx->pc = 0x1e4478u;

    // 0x1e4478: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x1e4478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e447c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1e447cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1e4480: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1e4480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e4484: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x1e4484u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e4488: 0x72604628  paddub      $t0, $s3, $zero
    ctx->pc = 0x1e4488u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1e448c: 0xc077f60  jal         func_1DFD80
    ctx->pc = 0x1E448Cu;
    SET_GPR_U32(ctx, 31, 0x1E4494u);
    ctx->pc = 0x1DFD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFD80u, 0x1E448Cu, 0x1E4494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4494u;
label_1e4494:
    // 0x1e4494: 0x0  nop
    ctx->pc = 0x1e4494u;
    // NOP
    ctx->pc = 0x1e4498u;
}
