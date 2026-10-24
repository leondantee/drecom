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

// Function: entry_00275618
// Address: 0x275618 - 0x275628
void entry_00275618_0x275618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00275618_0x275618");
#endif

    ctx->pc = 0x275618u;

    // 0x275618: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x275618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x27561c: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x27561cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x275620: 0x10000195  b           . + 4 + (0x195 << 2)
    ctx->pc = 0x275620u;
    {
        const bool branch_taken_0x275620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275620) {
            ctx->pc = 0x275C78u;
            return;
        }
    }
    ctx->pc = 0x275628u;
}
