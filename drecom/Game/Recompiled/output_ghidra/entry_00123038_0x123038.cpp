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

// Function: entry_00123038
// Address: 0x123038 - 0x123050
void entry_00123038_0x123038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123038_0x123038");
#endif

    ctx->pc = 0x123038u;

    // 0x123038: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x123038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12303c: 0x8ca4121c  lw          $a0, 0x121C($a1)
    ctx->pc = 0x12303cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4636)));
    // 0x123040: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x123040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
    // 0x123044: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x123044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x123048: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x123048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x12304c: 0xaca3121c  sw          $v1, 0x121C($a1)
    ctx->pc = 0x12304cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4636), GPR_U32(ctx, 3));
    ctx->pc = 0x123050u;
}
