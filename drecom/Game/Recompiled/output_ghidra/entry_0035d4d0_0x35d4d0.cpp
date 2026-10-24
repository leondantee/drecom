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

// Function: entry_0035d4d0
// Address: 0x35d4d0 - 0x35d4f4
void entry_0035d4d0_0x35d4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035d4d0_0x35d4d0");
#endif

    ctx->pc = 0x35d4d0u;

    // 0x35d4d0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x35d4d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35d4d4: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x35d4d4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x35d4d8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x35d4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x35d4dc: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x35d4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x35d4e0: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x35d4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x35d4e4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x35d4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x35d4e8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x35d4e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x35d4ec: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
    ctx->pc = 0x35D4ECu;
    {
        const bool branch_taken_0x35d4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d4ec) {
            ctx->pc = 0x35D448u;
            return;
        }
    }
    ctx->pc = 0x35D4F4u;
}
