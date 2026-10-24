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

// Function: entry_003185d8
// Address: 0x3185d8 - 0x3185f4
void entry_003185d8_0x3185d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003185d8_0x3185d8");
#endif

    ctx->pc = 0x3185d8u;

    // 0x3185d8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3185d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3185dc: 0x9022edae  lbu         $v0, -0x1252($at)
    ctx->pc = 0x3185dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3EEDAEu));
    // 0x3185e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3185E0u;
    {
        const bool branch_taken_0x3185e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3185e0) {
            ctx->pc = 0x3185F4u;
            return;
        }
    }
    ctx->pc = 0x3185E8u;
    // 0x3185e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3185e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3185ec: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3185ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3185f0: 0xac431294  sw          $v1, 0x1294($v0)
    ctx->pc = 0x3185f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4756), GPR_U32(ctx, 3));
    ctx->pc = 0x3185f4u;
}
