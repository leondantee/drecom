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

// Function: entry_002dd550
// Address: 0x2dd550 - 0x2dd568
void entry_002dd550_0x2dd550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dd550_0x2dd550");
#endif

    ctx->pc = 0x2dd550u;

    // 0x2dd550: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2dd550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd554: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x2dd554u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2dd558: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x2dd558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2dd55c: 0xa0a40002  sb          $a0, 0x2($a1)
    ctx->pc = 0x2dd55cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dd560: 0x10000219  b           . + 4 + (0x219 << 2)
    ctx->pc = 0x2DD560u;
    {
        const bool branch_taken_0x2dd560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd560) {
            ctx->pc = 0x2DDDC8u;
            return;
        }
    }
    ctx->pc = 0x2DD568u;
}
