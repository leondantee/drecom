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

// Function: entry_0021a3e4
// Address: 0x21a3e4 - 0x21a404
void entry_0021a3e4_0x21a3e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021a3e4_0x21a3e4");
#endif

    ctx->pc = 0x21a3e4u;

    // 0x21a3e4: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x21a3e4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21a3e8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x21a3e8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21a3ec: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x21a3ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21a3f0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x21a3f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21a3f4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x21a3f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21a3f8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x21a3f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21a3fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21a3fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21a400: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21a400u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x21a404u;
}
