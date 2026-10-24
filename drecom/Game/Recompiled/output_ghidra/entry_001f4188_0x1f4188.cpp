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

// Function: entry_001f4188
// Address: 0x1f4188 - 0x1f41e0
void entry_001f4188_0x1f4188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f4188_0x1f4188");
#endif

    ctx->pc = 0x1f4188u;

    // 0x1f4188: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f418c: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x1f418cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x1f4190: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1f4190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f4194: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f4194u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f4198: 0x2402019a  addiu       $v0, $zero, 0x19A
    ctx->pc = 0x1f4198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 410));
    // 0x1f419c: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F419Cu;
    {
        const bool branch_taken_0x1f419c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f419c) {
            ctx->pc = 0x1F41E0u;
            return;
        }
    }
    ctx->pc = 0x1F41A4u;
    // 0x1f41a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f41a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f41a8: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1f41a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1f41ac: 0x24500480  addiu       $s0, $v0, 0x480
    ctx->pc = 0x1f41acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x1f41b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f41b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f41b4: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1f41b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f41b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f41b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f41bc: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1f41bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1f41c0: 0x24500510  addiu       $s0, $v0, 0x510
    ctx->pc = 0x1f41c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1296));
    // 0x1f41c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f41c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f41c8: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1f41c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f41cc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f41ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f41d0: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1f41d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1f41d4: 0x245005a0  addiu       $s0, $v0, 0x5A0
    ctx->pc = 0x1f41d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
    // 0x1f41d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f41d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f41dc: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1f41dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1f41e0u;
}
