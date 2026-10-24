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

// Function: entry_003213a8
// Address: 0x3213a8 - 0x3213bc
void entry_003213a8_0x3213a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003213a8_0x3213a8");
#endif

    ctx->pc = 0x3213a8u;

    // 0x3213a8: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x3213a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3213ac: 0x90c20344  lbu         $v0, 0x344($a2)
    ctx->pc = 0x3213acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 836)));
    // 0x3213b0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x3213b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3213b4: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x3213B4u;
    {
        const bool branch_taken_0x3213b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3213b4) {
            ctx->pc = 0x321528u;
            return;
        }
    }
    ctx->pc = 0x3213BCu;
}
