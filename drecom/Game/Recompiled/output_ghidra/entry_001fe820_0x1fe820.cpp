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

// Function: entry_001fe820
// Address: 0x1fe820 - 0x1fe838
void entry_001fe820_0x1fe820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe820_0x1fe820");
#endif

    ctx->pc = 0x1fe820u;

    // 0x1fe820: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe824: 0x906302a8  lbu         $v1, 0x2A8($v1)
    ctx->pc = 0x1fe824u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 680)));
    // 0x1fe828: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fe828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe82c: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x1fe82cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fe830: 0x1460fe62  bnez        $v1, . + 4 + (-0x19E << 2)
    ctx->pc = 0x1FE830u;
    {
        const bool branch_taken_0x1fe830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe830) {
            ctx->pc = 0x1FE1BCu;
            return;
        }
    }
    ctx->pc = 0x1FE838u;
}
