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

// Function: entry_001cd7c8
// Address: 0x1cd7c8 - 0x1cd824
void entry_001cd7c8_0x1cd7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd7c8_0x1cd7c8");
#endif

    ctx->pc = 0x1cd7c8u;

    // 0x1cd7c8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd7cc: 0x8c831b6c  lw          $v1, 0x1B6C($a0)
    ctx->pc = 0x1cd7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7020)));
    // 0x1cd7d0: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CD7D0u;
    {
        const bool branch_taken_0x1cd7d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd7d0) {
            ctx->pc = 0x1CD824u;
            return;
        }
    }
    ctx->pc = 0x1CD7D8u;
    // 0x1cd7d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cd7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd7dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd7e0: 0xac641b6c  sw          $a0, 0x1B6C($v1)
    ctx->pc = 0x1cd7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7020), GPR_U32(ctx, 4));
    // 0x1cd7e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd7e8: 0x846215ec  lh          $v0, 0x15EC($v1)
    ctx->pc = 0x1cd7e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
    // 0x1cd7ec: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CD7ECu;
    {
        const bool branch_taken_0x1cd7ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd7ec) {
            ctx->pc = 0x1CD824u;
            return;
        }
    }
    ctx->pc = 0x1CD7F4u;
    // 0x1cd7f4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd7f8: 0x848215ec  lh          $v0, 0x15EC($a0)
    ctx->pc = 0x1cd7f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 5612)));
    // 0x1cd7fc: 0x2442ff6a  addiu       $v0, $v0, -0x96
    ctx->pc = 0x1cd7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967146));
    // 0x1cd800: 0xa48215ec  sh          $v0, 0x15EC($a0)
    ctx->pc = 0x1cd800u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5612), (uint16_t)GPR_U32(ctx, 2));
    // 0x1cd804: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd808: 0x846215ec  lh          $v0, 0x15EC($v1)
    ctx->pc = 0x1cd808u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
    // 0x1cd80c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1cd80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1cd810: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1cd810u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1cd814: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CD814u;
    {
        const bool branch_taken_0x1cd814 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1cd814) {
            ctx->pc = 0x1CD824u;
            return;
        }
    }
    ctx->pc = 0x1CD81Cu;
    // 0x1cd81c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cd81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd820: 0xa44015ec  sh          $zero, 0x15EC($v0)
    ctx->pc = 0x1cd820u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5612), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1cd824u;
}
