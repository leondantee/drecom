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

// Function: entry_002e2924
// Address: 0x2e2924 - 0x2e2940
void entry_002e2924_0x2e2924(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e2924_0x2e2924");
#endif

    ctx->pc = 0x2e2924u;

    // 0x2e2924: 0x920300dd  lbu         $v1, 0xDD($s0)
    ctx->pc = 0x2e2924u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 221)));
    // 0x2e2928: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e2928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e292c: 0xa20300dd  sb          $v1, 0xDD($s0)
    ctx->pc = 0x2e292cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 221), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e2930: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x2e2930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2e2934: 0xa60300c8  sh          $v1, 0xC8($s0)
    ctx->pc = 0x2e2934u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 200), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e2938: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x2E2938u;
    {
        const bool branch_taken_0x2e2938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2938) {
            ctx->pc = 0x2E2BB8u;
            return;
        }
    }
    ctx->pc = 0x2E2940u;
}
