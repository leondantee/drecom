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

// Function: entry_001175f0
// Address: 0x1175f0 - 0x117600
void entry_001175f0_0x1175f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001175f0_0x1175f0");
#endif

    ctx->pc = 0x1175f0u;

    // 0x1175f0: 0xad48000c  sw          $t0, 0xC($t2)
    ctx->pc = 0x1175f0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 8));
    // 0x1175f4: 0xad470008  sw          $a3, 0x8($t2)
    ctx->pc = 0x1175f4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 7));
    // 0x1175f8: 0xad0a0008  sw          $t2, 0x8($t0)
    ctx->pc = 0x1175f8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 10));
    // 0x1175fc: 0xacea000c  sw          $t2, 0xC($a3)
    ctx->pc = 0x1175fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 10));
    ctx->pc = 0x117600u;
}
