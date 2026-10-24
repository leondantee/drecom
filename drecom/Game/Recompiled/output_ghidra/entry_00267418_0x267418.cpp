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

// Function: entry_00267418
// Address: 0x267418 - 0x267458
void entry_00267418_0x267418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00267418_0x267418");
#endif

    ctx->pc = 0x267418u;

    // 0x267418: 0x8e021338  lw          $v0, 0x1338($s0)
    ctx->pc = 0x267418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
    // 0x26741c: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x26741cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x267420: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x267420u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x267424: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x267424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x267428: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x267428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x26742c: 0x2442bbf0  addiu       $v0, $v0, -0x4410
    ctx->pc = 0x26742cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949872));
    // 0x267430: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x267430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x267434: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x267434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x267438: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x267438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x26743c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26743cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x267440: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x267440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x267444: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x267444u;
    {
        const bool branch_taken_0x267444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x267444) {
            ctx->pc = 0x267458u;
            return;
        }
    }
    ctx->pc = 0x26744Cu;
    // 0x26744c: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x26744cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x267450: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x267450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x267454: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x267454u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x267458u;
}
