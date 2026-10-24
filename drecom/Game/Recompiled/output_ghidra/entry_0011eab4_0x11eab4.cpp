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

// Function: entry_0011eab4
// Address: 0x11eab4 - 0x11eac4
void entry_0011eab4_0x11eab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011eab4_0x11eab4");
#endif

    ctx->pc = 0x11eab4u;

    // 0x11eab4: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x11eab4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x11eab8: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x11eab8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x11eabc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11eabcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eac0: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x11eac0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    ctx->pc = 0x11eac4u;
}
