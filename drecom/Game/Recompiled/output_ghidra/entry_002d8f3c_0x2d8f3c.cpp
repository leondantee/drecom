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

// Function: entry_002d8f3c
// Address: 0x2d8f3c - 0x2d8f80
void entry_002d8f3c_0x2d8f3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d8f3c_0x2d8f3c");
#endif

    switch (ctx->pc) {
        case 0x2d8f48u: goto label_2d8f48;
        default: break;
    }

    ctx->pc = 0x2d8f3cu;

    // 0x2d8f3c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8f40: 0xc0b63e8  jal         func_2D8FA0
    ctx->pc = 0x2D8F40u;
    SET_GPR_U32(ctx, 31, 0x2D8F48u);
    ctx->pc = 0x2D8FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FA0u, 0x2D8F40u, 0x2D8F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8F48u;
label_2d8f48:
    // 0x2d8f48: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2d8f48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2d8f4c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d8f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8f50: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2d8f50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8f54: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x2d8f54u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d8f58: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d8f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d8f5c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8f60: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d8f60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d8f64: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d8f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8f68: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d8f68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8f6c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2d8f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8f70: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x2d8f70u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8f74: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d8f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d8f78: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2d8f78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2d8f7c: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x2d8f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x2d8f80u;
}
