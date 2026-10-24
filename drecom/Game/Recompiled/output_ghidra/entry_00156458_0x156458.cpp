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

// Function: entry_00156458
// Address: 0x156458 - 0x15648c
void entry_00156458_0x156458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156458_0x156458");
#endif

    ctx->pc = 0x156458u;

    // 0x156458: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x156458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x15645c: 0x2447ec80  addiu       $a3, $v0, -0x1380
    ctx->pc = 0x15645cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962304));
    // 0x156460: 0x26665508  addiu       $a2, $s3, 0x5508
    ctx->pc = 0x156460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 21768));
    // 0x156464: 0xdce50000  ld          $a1, 0x0($a3)
    ctx->pc = 0x156464u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x47EC80u));
    // 0x156468: 0xdce40008  ld          $a0, 0x8($a3)
    ctx->pc = 0x156468u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x47EC88u));
    // 0x15646c: 0xdce30010  ld          $v1, 0x10($a3)
    ctx->pc = 0x15646cu;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x47EC90u));
    // 0x156470: 0xdce20018  ld          $v0, 0x18($a3)
    ctx->pc = 0x156470u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x47EC98u));
    // 0x156474: 0xfcc50000  sd          $a1, 0x0($a2)
    ctx->pc = 0x156474u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
    // 0x156478: 0xfcc40008  sd          $a0, 0x8($a2)
    ctx->pc = 0x156478u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 4));
    // 0x15647c: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x15647cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x156480: 0xfcc20018  sd          $v0, 0x18($a2)
    ctx->pc = 0x156480u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 2));
    // 0x156484: 0xdce20020  ld          $v0, 0x20($a3)
    ctx->pc = 0x156484u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x47ECA0u));
    // 0x156488: 0xfcc20020  sd          $v0, 0x20($a2)
    ctx->pc = 0x156488u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 32), GPR_U64(ctx, 2));
    ctx->pc = 0x15648cu;
}
