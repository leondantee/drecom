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

// Function: entry_0025a70c
// Address: 0x25a70c - 0x25a730
void entry_0025a70c_0x25a70c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025a70c_0x25a70c");
#endif

    ctx->pc = 0x25a70cu;

    // 0x25a70c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x25a70cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25a710: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x25a710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a714: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x25a714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25a718: 0xaca00370  sw          $zero, 0x370($a1)
    ctx->pc = 0x25a718u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 880), GPR_U32(ctx, 0));
    // 0x25a71c: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x25a71cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25a720: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a724: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x25a724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x25a728: 0xac4004b0  sw          $zero, 0x4B0($v0)
    ctx->pc = 0x25a728u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1200), GPR_U32(ctx, 0));
    // 0x25a72c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x25a72cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x25a730u;
}
