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

// Function: entry_00337124
// Address: 0x337124 - 0x337148
void entry_00337124_0x337124(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00337124_0x337124");
#endif

    ctx->pc = 0x337124u;

    // 0x337124: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x337124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x337128: 0x8c23011c  lw          $v1, 0x11C($at)
    ctx->pc = 0x337128u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x33712c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x33712cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x337130: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x337130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x337134: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x337134u;
    {
        const bool branch_taken_0x337134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x337134) {
            ctx->pc = 0x337148u;
            return;
        }
    }
    ctx->pc = 0x33713Cu;
    // 0x33713c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33713cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x337140: 0xae225dc8  sw          $v0, 0x5DC8($s1)
    ctx->pc = 0x337140u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24008), GPR_U32(ctx, 2));
    // 0x337144: 0xae205dd4  sw          $zero, 0x5DD4($s1)
    ctx->pc = 0x337144u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24020), GPR_U32(ctx, 0));
    ctx->pc = 0x337148u;
}
