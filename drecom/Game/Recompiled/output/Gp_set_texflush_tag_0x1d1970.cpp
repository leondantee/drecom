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

// Function: Gp_set_texflush_tag
// Address: 0x1d1970 - 0x1d19c8
void Gp_set_texflush_tag_0x1d1970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Gp_set_texflush_tag_0x1d1970");
#endif

    ctx->pc = 0x1d1970u;

    // 0x1d1970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d1970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d1974: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x1d1974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x1d1978: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1d1978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1d197c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d197cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d1980: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x1d1980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1d1984: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1d1984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d1988: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1d1988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d198c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1d198cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1d1990: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1d1990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1d1994: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1d1994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d1998: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1d1998u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1d199c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d199cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d19a0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1d19a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d19a4: 0xfc430010  sd          $v1, 0x10($v0)
    ctx->pc = 0x1d19a4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 3));
    // 0x1d19a8: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x1d19a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1d19ac: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1d19acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d19b0: 0xfc430018  sd          $v1, 0x18($v0)
    ctx->pc = 0x1d19b0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 3));
    // 0x1d19b4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1d19b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d19b8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1d19b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1d19bc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1d19bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d19c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D19C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D19C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D19C8u;
}
