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

// Function: entry_00285974
// Address: 0x285974 - 0x285998
void entry_00285974_0x285974(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00285974_0x285974");
#endif

    ctx->pc = 0x285974u;

    // 0x285974: 0x92236624  lbu         $v1, 0x6624($s1)
    ctx->pc = 0x285974u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26148)));
    // 0x285978: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x285978u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x28597c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28597cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x285980: 0x1085000c  beq         $a0, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x285980u;
    {
        const bool branch_taken_0x285980 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x285980) {
            ctx->pc = 0x2859B4u;
            return;
        }
    }
    ctx->pc = 0x285988u;
    // 0x285988: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x285988u;
    {
        const bool branch_taken_0x285988 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x285988) {
            ctx->pc = 0x285998u;
            return;
        }
    }
    ctx->pc = 0x285990u;
    // 0x285990: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x285990u;
    {
        const bool branch_taken_0x285990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x285990) {
            ctx->pc = 0x2859C0u;
            return;
        }
    }
    ctx->pc = 0x285998u;
}
