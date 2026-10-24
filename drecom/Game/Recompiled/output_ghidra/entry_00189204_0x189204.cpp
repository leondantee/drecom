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

// Function: entry_00189204
// Address: 0x189204 - 0x189240
void entry_00189204_0x189204(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189204_0x189204");
#endif

    ctx->pc = 0x189204u;

    // 0x189204: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x189204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189208: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x189208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    // 0x18920c: 0x8c222504  lw          $v0, 0x2504($at)
    ctx->pc = 0x18920cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4B2504u));
    // 0x189210: 0xac430120  sw          $v1, 0x120($v0)
    ctx->pc = 0x189210u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 3));
    // 0x189214: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x189214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189218: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x189218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    // 0x18921c: 0xac222504  sw          $v0, 0x2504($at)
    ctx->pc = 0x18921cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4B2504u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B2504u, _value); } while (0);
    // 0x189220: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x189220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x189224: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x189224u;
    {
        const bool branch_taken_0x189224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189224) {
            ctx->pc = 0x189240u;
            return;
        }
    }
    ctx->pc = 0x18922Cu;
    // 0x18922c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x18922cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x189230: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x189230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189234: 0xac4300ec  sw          $v1, 0xEC($v0)
    ctx->pc = 0x189234u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 236), GPR_U32(ctx, 3));
    // 0x189238: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x189238u;
    {
        const bool branch_taken_0x189238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189238) {
            ctx->pc = 0x189254u;
            return;
        }
    }
    ctx->pc = 0x189240u;
}
