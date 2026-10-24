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

// Function: entry_001a9380
// Address: 0x1a9380 - 0x1a93ac
void entry_001a9380_0x1a9380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9380_0x1a9380");
#endif

    ctx->pc = 0x1a9380u;

    // 0x1a9380: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x1a9380u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a9384: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x1a9384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x1a9388: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1a9388u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1a938c: 0xc32025  or          $a0, $a2, $v1
    ctx->pc = 0x1a938cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1a9390: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1a9390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1a9394: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1a9394u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1a9398: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1a9398u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1a939c: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1a939cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x1a93a0: 0x32e00  sll         $a1, $v1, 24
    ctx->pc = 0x1a93a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1a93a4: 0xa41825  or          $v1, $a1, $a0
    ctx->pc = 0x1a93a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1a93a8: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1a93a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1a93acu;
}
