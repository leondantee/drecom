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

// Function: entry_002199b4
// Address: 0x2199b4 - 0x2199cc
void entry_002199b4_0x2199b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002199b4_0x2199b4");
#endif

    ctx->pc = 0x2199b4u;

    // 0x2199b4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2199b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2199b8: 0x2463a610  addiu       $v1, $v1, -0x59F0
    ctx->pc = 0x2199b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2199bc: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x2199bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    // 0x2199c0: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x2199c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x2199c4: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2199c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2199c8: 0x0  nop
    ctx->pc = 0x2199c8u;
    // NOP
    ctx->pc = 0x2199ccu;
}
