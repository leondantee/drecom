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

// Function: entry_0025720c
// Address: 0x25720c - 0x257228
void entry_0025720c_0x25720c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025720c_0x25720c");
#endif

    switch (ctx->pc) {
        case 0x25721cu: goto label_25721c;
        default: break;
    }

    ctx->pc = 0x25720cu;

    // 0x25720c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x25720cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x257210: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x257210u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x257214: 0xc095c94  jal         func_257250
    ctx->pc = 0x257214u;
    SET_GPR_U32(ctx, 31, 0x25721Cu);
    ctx->pc = 0x257250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257250u, 0x257214u, 0x25721Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25721Cu;
label_25721c:
    // 0x25721c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x25721cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x257220: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x257220u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x257224: 0x0  nop
    ctx->pc = 0x257224u;
    // NOP
    ctx->pc = 0x257228u;
}
