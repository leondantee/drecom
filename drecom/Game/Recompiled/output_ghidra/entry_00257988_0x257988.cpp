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

// Function: entry_00257988
// Address: 0x257988 - 0x2579a0
void entry_00257988_0x257988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00257988_0x257988");
#endif

    ctx->pc = 0x257988u;

    // 0x257988: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x257988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x25798c: 0x90631218  lbu         $v1, 0x1218($v1)
    ctx->pc = 0x25798cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4632)));
    // 0x257990: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x257990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x257994: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x257994u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x257998: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x257998u;
    {
        const bool branch_taken_0x257998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x257998) {
            ctx->pc = 0x257924u;
            return;
        }
    }
    ctx->pc = 0x2579A0u;
}
