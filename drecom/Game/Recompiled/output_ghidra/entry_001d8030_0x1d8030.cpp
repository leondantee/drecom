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

// Function: entry_001d8030
// Address: 0x1d8030 - 0x1d8038
void entry_001d8030_0x1d8030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8030_0x1d8030");
#endif

    ctx->pc = 0x1d8030u;

    // 0x1d8030: 0x96620006  lhu         $v0, 0x6($s3)
    ctx->pc = 0x1d8030u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x1d8034: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x1d8034u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x1d8038u;
}
