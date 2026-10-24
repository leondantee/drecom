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

// Function: entry_001de520
// Address: 0x1de520 - 0x1de540
void entry_001de520_0x1de520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de520_0x1de520");
#endif

    ctx->pc = 0x1de520u;

    // 0x1de520: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x1de520u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1de524: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1de524u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1de528: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1de528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1de52c: 0x9423cc8e  lhu         $v1, -0x3372($at)
    ctx->pc = 0x1de52cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x47CC8Eu));
    // 0x1de530: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x1de530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1de534: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1de534u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1de538: 0x1440ff80  bnez        $v0, . + 4 + (-0x80 << 2)
    ctx->pc = 0x1DE538u;
    {
        const bool branch_taken_0x1de538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de538) {
            ctx->pc = 0x1DE33Cu;
            return;
        }
    }
    ctx->pc = 0x1DE540u;
}
