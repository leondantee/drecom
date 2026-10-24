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

// Function: entry_0021534c
// Address: 0x21534c - 0x215360
void entry_0021534c_0x21534c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021534c_0x21534c");
#endif

    ctx->pc = 0x21534cu;

    // 0x21534c: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x21534cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x215350: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x215350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x215354: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x215354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x215358: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x215358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x21535c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21535cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x215360u;
}
