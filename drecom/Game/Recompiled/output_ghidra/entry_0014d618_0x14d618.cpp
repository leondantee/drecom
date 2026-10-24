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

// Function: entry_0014d618
// Address: 0x14d618 - 0x14d64c
void entry_0014d618_0x14d618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d618_0x14d618");
#endif

    ctx->pc = 0x14d618u;

    // 0x14d618: 0xa3808098  sb          $zero, -0x7F68($gp)
    ctx->pc = 0x14d618u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934680), (uint8_t)GPR_U32(ctx, 0));
    // 0x14d61c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14d61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d620: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x14d620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14d624: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x14d624u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14d628: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14d628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d62c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14d62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14d630: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14d630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x14d634: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14d634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14d638: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14D638u;
    {
        const bool branch_taken_0x14d638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d638) {
            ctx->pc = 0x14D64Cu;
            return;
        }
    }
    ctx->pc = 0x14D640u;
    // 0x14d640: 0x93828098  lbu         $v0, -0x7F68($gp)
    ctx->pc = 0x14d640u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934680)));
    // 0x14d644: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x14d644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x14d648: 0xa3828098  sb          $v0, -0x7F68($gp)
    ctx->pc = 0x14d648u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934680), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x14d64cu;
}
