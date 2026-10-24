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

// Function: entry_001cd110
// Address: 0x1cd110 - 0x1cd16c
void entry_001cd110_0x1cd110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd110_0x1cd110");
#endif

    ctx->pc = 0x1cd110u;

    // 0x1cd110: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd114: 0x8c831b6c  lw          $v1, 0x1B6C($a0)
    ctx->pc = 0x1cd114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7020)));
    // 0x1cd118: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CD118u;
    {
        const bool branch_taken_0x1cd118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd118) {
            ctx->pc = 0x1CD16Cu;
            return;
        }
    }
    ctx->pc = 0x1CD120u;
    // 0x1cd120: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cd120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd124: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd128: 0xac641b6c  sw          $a0, 0x1B6C($v1)
    ctx->pc = 0x1cd128u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7020), GPR_U32(ctx, 4));
    // 0x1cd12c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd130: 0x846215ec  lh          $v0, 0x15EC($v1)
    ctx->pc = 0x1cd130u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
    // 0x1cd134: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CD134u;
    {
        const bool branch_taken_0x1cd134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd134) {
            ctx->pc = 0x1CD16Cu;
            return;
        }
    }
    ctx->pc = 0x1CD13Cu;
    // 0x1cd13c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd140: 0x848215ec  lh          $v0, 0x15EC($a0)
    ctx->pc = 0x1cd140u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 5612)));
    // 0x1cd144: 0x2442ff6a  addiu       $v0, $v0, -0x96
    ctx->pc = 0x1cd144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967146));
    // 0x1cd148: 0xa48215ec  sh          $v0, 0x15EC($a0)
    ctx->pc = 0x1cd148u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5612), (uint16_t)GPR_U32(ctx, 2));
    // 0x1cd14c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd150: 0x846215ec  lh          $v0, 0x15EC($v1)
    ctx->pc = 0x1cd150u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
    // 0x1cd154: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1cd154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1cd158: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1cd158u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1cd15c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CD15Cu;
    {
        const bool branch_taken_0x1cd15c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1cd15c) {
            ctx->pc = 0x1CD16Cu;
            return;
        }
    }
    ctx->pc = 0x1CD164u;
    // 0x1cd164: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cd164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd168: 0xa44015ec  sh          $zero, 0x15EC($v0)
    ctx->pc = 0x1cd168u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5612), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1cd16cu;
}
