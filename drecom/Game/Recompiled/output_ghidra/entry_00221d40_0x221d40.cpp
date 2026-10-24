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

// Function: entry_00221d40
// Address: 0x221d40 - 0x221d6c
void entry_00221d40_0x221d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00221d40_0x221d40");
#endif

    ctx->pc = 0x221d40u;

    // 0x221d40: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x221d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221d44: 0x948611f6  lhu         $a2, 0x11F6($a0)
    ctx->pc = 0x221d44u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4598)));
    // 0x221d48: 0x30c5ffff  andi        $a1, $a2, 0xFFFF
    ctx->pc = 0x221d48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x221d4c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x221d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x221d50: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x221D50u;
    {
        const bool branch_taken_0x221d50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x221d50) {
            ctx->pc = 0x221DA0u;
            return;
        }
    }
    ctx->pc = 0x221D58u;
    // 0x221d58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x221d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x221d5c: 0x10a40003  beq         $a1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x221D5Cu;
    {
        const bool branch_taken_0x221d5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x221d5c) {
            ctx->pc = 0x221D6Cu;
            return;
        }
    }
    ctx->pc = 0x221D64u;
    // 0x221d64: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x221D64u;
    {
        const bool branch_taken_0x221d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x221d64) {
            ctx->pc = 0x221D6Cu;
            return;
        }
    }
    ctx->pc = 0x221D6Cu;
}
