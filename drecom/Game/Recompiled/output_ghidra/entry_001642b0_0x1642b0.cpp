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

// Function: entry_001642b0
// Address: 0x1642b0 - 0x1642d0
void entry_001642b0_0x1642b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001642b0_0x1642b0");
#endif

    ctx->pc = 0x1642b0u;

    // 0x1642b0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1642b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1642b4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1642b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1642b8: 0xac401a24  sw          $zero, 0x1A24($v0)
    ctx->pc = 0x1642b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6692), GPR_U32(ctx, 0));
    // 0x1642bc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1642bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1642c0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1642c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1642c4: 0xac401a44  sw          $zero, 0x1A44($v0)
    ctx->pc = 0x1642c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6724), GPR_U32(ctx, 0));
    // 0x1642c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1642c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1642cc: 0x0  nop
    ctx->pc = 0x1642ccu;
    // NOP
    ctx->pc = 0x1642d0u;
}
