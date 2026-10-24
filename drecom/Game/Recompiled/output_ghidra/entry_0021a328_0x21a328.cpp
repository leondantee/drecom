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

// Function: entry_0021a328
// Address: 0x21a328 - 0x21a340
void entry_0021a328_0x21a328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021a328_0x21a328");
#endif

    ctx->pc = 0x21a328u;

    // 0x21a328: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x21a328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x21a32c: 0x2463a610  addiu       $v1, $v1, -0x59F0
    ctx->pc = 0x21a32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x21a330: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x21a330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    // 0x21a334: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x21a334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x21a338: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x21a338u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21a33c: 0x0  nop
    ctx->pc = 0x21a33cu;
    // NOP
    ctx->pc = 0x21a340u;
}
