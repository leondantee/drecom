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

// Function: entry_002568f8
// Address: 0x2568f8 - 0x256910
void entry_002568f8_0x2568f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002568f8_0x2568f8");
#endif

    ctx->pc = 0x2568f8u;

    // 0x2568f8: 0x32420e00  andi        $v0, $s2, 0xE00
    ctx->pc = 0x2568f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3584);
    // 0x2568fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2568FCu;
    {
        const bool branch_taken_0x2568fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2568fc) {
            ctx->pc = 0x256910u;
            return;
        }
    }
    ctx->pc = 0x256904u;
    // 0x256904: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x256904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x256908: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x256908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x25690c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x25690cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x256910u;
}
