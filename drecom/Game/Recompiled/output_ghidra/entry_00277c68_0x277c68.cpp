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

// Function: entry_00277c68
// Address: 0x277c68 - 0x277c94
void entry_00277c68_0x277c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00277c68_0x277c68");
#endif

    ctx->pc = 0x277c68u;

    // 0x277c68: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x277c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x277c6c: 0x8c221a28  lw          $v0, 0x1A28($at)
    ctx->pc = 0x277c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x621A28u));
    // 0x277c70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x277c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x277c74: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x277c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x277c78: 0xac221a28  sw          $v0, 0x1A28($at)
    ctx->pc = 0x277c78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621A28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621A28u, _value); } while (0);
    // 0x277c7c: 0x2c410097  sltiu       $at, $v0, 0x97
    ctx->pc = 0x277c7cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)151) ? 1 : 0);
    // 0x277c80: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x277C80u;
    {
        const bool branch_taken_0x277c80 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x277c80) {
            ctx->pc = 0x277C94u;
            return;
        }
    }
    ctx->pc = 0x277C88u;
    // 0x277c88: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x277c88u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277c8c: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x277C8Cu;
    {
        const bool branch_taken_0x277c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277c8c) {
            ctx->pc = 0x2780E4u;
            return;
        }
    }
    ctx->pc = 0x277C94u;
}
