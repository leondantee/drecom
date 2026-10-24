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

// Function: entry_0014dc44
// Address: 0x14dc44 - 0x14dc68
void entry_0014dc44_0x14dc44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014dc44_0x14dc44");
#endif

    ctx->pc = 0x14dc44u;

    // 0x14dc44: 0x860213ac  lh          $v0, 0x13AC($s0)
    ctx->pc = 0x14dc44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5036)));
    // 0x14dc48: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x14dc48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x14dc4c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x14dc4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x14dc50: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14DC50u;
    {
        const bool branch_taken_0x14dc50 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x14dc50) {
            ctx->pc = 0x14DC68u;
            return;
        }
    }
    ctx->pc = 0x14DC58u;
    // 0x14dc58: 0x8e25009c  lw          $a1, 0x9C($s1)
    ctx->pc = 0x14dc58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x14dc5c: 0x30a20080  andi        $v0, $a1, 0x80
    ctx->pc = 0x14dc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x14dc60: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x14DC60u;
    {
        const bool branch_taken_0x14dc60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dc60) {
            ctx->pc = 0x14DD80u;
            return;
        }
    }
    ctx->pc = 0x14DC68u;
}
