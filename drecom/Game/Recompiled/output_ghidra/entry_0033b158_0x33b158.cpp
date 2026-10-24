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

// Function: entry_0033b158
// Address: 0x33b158 - 0x33b188
void entry_0033b158_0x33b158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033b158_0x33b158");
#endif

    ctx->pc = 0x33b158u;

    // 0x33b158: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x33b158u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x33b15c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x33b15cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x33b160: 0x8c239a24  lw          $v1, -0x65DC($at)
    ctx->pc = 0x33b160u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A9A24u));
    // 0x33b164: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33b164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33b168: 0xa4600004  sh          $zero, 0x4($v1)
    ctx->pc = 0x33b168u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x33b16c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x33b16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33b170: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x33b170u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x33b174: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x33b174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x33b178: 0x8c239a24  lw          $v1, -0x65DC($at)
    ctx->pc = 0x33b178u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A9A24u));
    // 0x33b17c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33b17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33b180: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x33b180u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x33b184: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x33b184u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x33b188u;
}
