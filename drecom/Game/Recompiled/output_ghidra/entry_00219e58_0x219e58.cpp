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

// Function: entry_00219e58
// Address: 0x219e58 - 0x219e70
void entry_00219e58_0x219e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00219e58_0x219e58");
#endif

    ctx->pc = 0x219e58u;

    // 0x219e58: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x219e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x219e5c: 0x2463a610  addiu       $v1, $v1, -0x59F0
    ctx->pc = 0x219e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x219e60: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x219e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    // 0x219e64: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x219e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x219e68: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x219e68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x219e6c: 0x0  nop
    ctx->pc = 0x219e6cu;
    // NOP
    ctx->pc = 0x219e70u;
}
