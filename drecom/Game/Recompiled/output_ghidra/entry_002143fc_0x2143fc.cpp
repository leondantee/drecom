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

// Function: entry_002143fc
// Address: 0x2143fc - 0x214400
void entry_002143fc_0x2143fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002143fc_0x2143fc");
#endif

    ctx->pc = 0x2143fcu;

    // 0x2143fc: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2143fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    ctx->pc = 0x214400u;
}
