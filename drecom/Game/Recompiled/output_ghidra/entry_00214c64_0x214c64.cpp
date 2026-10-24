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

// Function: entry_00214c64
// Address: 0x214c64 - 0x214c80
void entry_00214c64_0x214c64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214c64_0x214c64");
#endif

    ctx->pc = 0x214c64u;

    // 0x214c64: 0x3c090039  lui         $t1, 0x39
    ctx->pc = 0x214c64u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)57 << 16));
    // 0x214c68: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x214c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x214c6c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x214c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x214c70: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x214c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x214c74: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x214c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x214c78: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x214c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x214c7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x214c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x214c80u;
}
