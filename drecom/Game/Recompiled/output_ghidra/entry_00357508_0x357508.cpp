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

// Function: entry_00357508
// Address: 0x357508 - 0x35750c
void entry_00357508_0x357508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00357508_0x357508");
#endif

    ctx->pc = 0x357508u;

    // 0x357508: 0x24457540  addiu       $a1, $v0, 0x7540
    ctx->pc = 0x357508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 30016));
    ctx->pc = 0x35750cu;
}
