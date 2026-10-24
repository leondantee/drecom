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

// Function: entry_0017a498
// Address: 0x17a498 - 0x17a4c8
void entry_0017a498_0x17a498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a498_0x17a498");
#endif

    ctx->pc = 0x17a498u;

    // 0x17a498: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x17a498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x17a49c: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x17a49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x17a4a0: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x17a4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x17a4a4: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x17a4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x17a4a8: 0x24540010  addiu       $s4, $v0, 0x10
    ctx->pc = 0x17a4a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x17a4ac: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x17a4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x17a4b0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x17a4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x17a4b4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x17a4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17a4b8: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x17a4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x17a4bc: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x17a4bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x17a4c0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x17a4c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x17a4c4: 0x0  nop
    ctx->pc = 0x17a4c4u;
    // NOP
    ctx->pc = 0x17a4c8u;
}
