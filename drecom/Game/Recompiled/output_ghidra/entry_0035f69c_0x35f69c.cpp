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

// Function: entry_0035f69c
// Address: 0x35f69c - 0x35f6d8
void entry_0035f69c_0x35f69c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035f69c_0x35f69c");
#endif

    ctx->pc = 0x35f69cu;

    // 0x35f69c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35f69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f6a0: 0x8c621290  lw          $v0, 0x1290($v1)
    ctx->pc = 0x35f6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4752)));
    // 0x35f6a4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x35f6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x35f6a8: 0xac621290  sw          $v0, 0x1290($v1)
    ctx->pc = 0x35f6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4752), GPR_U32(ctx, 2));
    // 0x35f6ac: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f6b0: 0x8c421290  lw          $v0, 0x1290($v0)
    ctx->pc = 0x35f6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4752)));
    // 0x35f6b4: 0x2c410061  sltiu       $at, $v0, 0x61
    ctx->pc = 0x35f6b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)97) ? 1 : 0);
    // 0x35f6b8: 0x14200020  bnez        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x35F6B8u;
    {
        const bool branch_taken_0x35f6b8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x35f6b8) {
            ctx->pc = 0x35F73Cu;
            return;
        }
    }
    ctx->pc = 0x35F6C0u;
    // 0x35f6c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35f6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f6c4: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x35f6c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x35f6c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x35f6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35f6cc: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x35f6ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x35f6d0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x35F6D0u;
    {
        const bool branch_taken_0x35f6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f6d0) {
            ctx->pc = 0x35F73Cu;
            return;
        }
    }
    ctx->pc = 0x35F6D8u;
}
