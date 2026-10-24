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

// Function: entry_00212368
// Address: 0x212368 - 0x212380
void entry_00212368_0x212368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00212368_0x212368");
#endif

    ctx->pc = 0x212368u;

    // 0x212368: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x212368u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x21236c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x21236cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x212370: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x212370u;
    {
        const bool branch_taken_0x212370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x212370) {
            ctx->pc = 0x2123ACu;
            return;
        }
    }
    ctx->pc = 0x212378u;
    // 0x212378: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x212378u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x21237c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21237cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x212380u;
}
