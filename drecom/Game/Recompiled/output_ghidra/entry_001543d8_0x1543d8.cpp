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

// Function: entry_001543d8
// Address: 0x1543d8 - 0x1543fc
void entry_001543d8_0x1543d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001543d8_0x1543d8");
#endif

    ctx->pc = 0x1543d8u;

    // 0x1543d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1543d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1543dc: 0x8c251a98  lw          $a1, 0x1A98($at)
    ctx->pc = 0x1543dcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1543e0: 0x30a48000  andi        $a0, $a1, 0x8000
    ctx->pc = 0x1543e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x1543e4: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1543E4u;
    {
        const bool branch_taken_0x1543e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1543e4) {
            ctx->pc = 0x154460u;
            return;
        }
    }
    ctx->pc = 0x1543ECu;
    // 0x1543ec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1543ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1543f0: 0xa203157c  sb          $v1, 0x157C($s0)
    ctx->pc = 0x1543f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5500), (uint8_t)GPR_U32(ctx, 3));
    // 0x1543f4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1543F4u;
    {
        const bool branch_taken_0x1543f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1543f4) {
            ctx->pc = 0x154460u;
            return;
        }
    }
    ctx->pc = 0x1543FCu;
}
