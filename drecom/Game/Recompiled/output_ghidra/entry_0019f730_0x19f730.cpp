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

// Function: entry_0019f730
// Address: 0x19f730 - 0x19f758
void entry_0019f730_0x19f730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f730_0x19f730");
#endif

    ctx->pc = 0x19f730u;

    // 0x19f730: 0x32a3ffff  andi        $v1, $s5, 0xFFFF
    ctx->pc = 0x19f730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x19f734: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x19f734u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19f738: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x19f738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19f73c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19F73Cu;
    {
        const bool branch_taken_0x19f73c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19f73c) {
            ctx->pc = 0x19F758u;
            return;
        }
    }
    ctx->pc = 0x19F744u;
    // 0x19f744: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x19f744u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x19f748: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19f748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19f74c: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x19f74cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19f750: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19F750u;
    {
        const bool branch_taken_0x19f750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f750) {
            ctx->pc = 0x19F770u;
            return;
        }
    }
    ctx->pc = 0x19F758u;
}
