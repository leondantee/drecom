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

// Function: entry_0019e460
// Address: 0x19e460 - 0x19e4a8
void entry_0019e460_0x19e460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e460_0x19e460");
#endif

    ctx->pc = 0x19e460u;

    // 0x19e460: 0x24057fff  addiu       $a1, $zero, 0x7FFF
    ctx->pc = 0x19e460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x19e464: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x19e464u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x19e468: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e46c: 0x8c238070  lw          $v1, -0x7F90($at)
    ctx->pc = 0x19e46cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x388070u));
    // 0x19e470: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19e470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19e474: 0xac65001c  sw          $a1, 0x1C($v1)
    ctx->pc = 0x19e474u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 5));
    // 0x19e478: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x19e478u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x19e47c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e47cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e480: 0x8c238070  lw          $v1, -0x7F90($at)
    ctx->pc = 0x19e480u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x388070u));
    // 0x19e484: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19e484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19e488: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x19e488u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
    // 0x19e48c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x19e48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x19e490: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x19e490u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x19e494: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e498: 0x8c238070  lw          $v1, -0x7F90($at)
    ctx->pc = 0x19e498u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x388070u));
    // 0x19e49c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19e49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19e4a0: 0xac65002c  sw          $a1, 0x2C($v1)
    ctx->pc = 0x19e4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 5));
    // 0x19e4a4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19e4a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x19e4a8u;
}
