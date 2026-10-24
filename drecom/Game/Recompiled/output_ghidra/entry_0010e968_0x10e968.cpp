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

// Function: entry_0010e968
// Address: 0x10e968 - 0x10e970
void entry_0010e968_0x10e968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e968_0x10e968");
#endif

    ctx->pc = 0x10e968u;

    // 0x10e968: 0x24844fe0  addiu       $a0, $a0, 0x4FE0
    ctx->pc = 0x10e968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20448));
    // 0x10e96c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10e96cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x10e970u;
}
