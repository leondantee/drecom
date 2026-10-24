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

// Function: entry_00119584
// Address: 0x119584 - 0x11958c
void entry_00119584_0x119584(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119584_0x119584");
#endif

    ctx->pc = 0x119584u;

    // 0x119584: 0x30d3001f  andi        $s3, $a2, 0x1F
    ctx->pc = 0x119584u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x119588: 0x26320014  addiu       $s2, $s1, 0x14
    ctx->pc = 0x119588u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    ctx->pc = 0x11958cu;
}
