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

// Function: entry_0015c0b8
// Address: 0x15c0b8 - 0x15c0e8
void entry_0015c0b8_0x15c0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c0b8_0x15c0b8");
#endif

    ctx->pc = 0x15c0b8u;

    // 0x15c0b8: 0x216102b  sltu        $v0, $s0, $s6
    ctx->pc = 0x15c0b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x15c0bc: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x15C0BCu;
    {
        const bool branch_taken_0x15c0bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c0bc) {
            ctx->pc = 0x15BFF0u;
            return;
        }
    }
    ctx->pc = 0x15C0C4u;
    // 0x15c0c4: 0x6a00008  bltz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x15C0C4u;
    {
        const bool branch_taken_0x15c0c4 = (GPR_S32(ctx, 21) < 0);
        if (branch_taken_0x15c0c4) {
            ctx->pc = 0x15C0E8u;
            return;
        }
    }
    ctx->pc = 0x15C0CCu;
    // 0x15c0cc: 0x151140  sll         $v0, $s5, 5
    ctx->pc = 0x15c0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 5));
    // 0x15c0d0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x15c0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x15c0d4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x15c0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15c0d8: 0xae6213ec  sw          $v0, 0x13EC($s3)
    ctx->pc = 0x15c0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 5100), GPR_U32(ctx, 2));
    // 0x15c0dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15c0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15c0e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15C0E0u;
    {
        const bool branch_taken_0x15c0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c0e0) {
            ctx->pc = 0x15C0F0u;
            return;
        }
    }
    ctx->pc = 0x15C0E8u;
}
