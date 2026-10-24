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

// Function: entry_0029f110
// Address: 0x29f110 - 0x29f15c
void entry_0029f110_0x29f110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029f110_0x29f110");
#endif

    ctx->pc = 0x29f110u;

    // 0x29f110: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f114: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29f114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29f118: 0x94630048  lhu         $v1, 0x48($v1)
    ctx->pc = 0x29f118u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x29f11c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x29f11cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x29f120: 0x2861012d  slti        $at, $v1, 0x12D
    ctx->pc = 0x29f120u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)301) ? 1 : 0);
    // 0x29f124: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x29F124u;
    {
        const bool branch_taken_0x29f124 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x29f124) {
            ctx->pc = 0x29F15Cu;
            return;
        }
    }
    ctx->pc = 0x29F12Cu;
    // 0x29f12c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29f12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f130: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f134: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29f134u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29f138: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x29f138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x29f13c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f140: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29f140u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29f144: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f148: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29f148u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29f14c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f150: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29f150u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29f154: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f158: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29f158u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x29f15cu;
}
