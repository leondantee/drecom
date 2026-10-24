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

// Function: entry_00156194
// Address: 0x156194 - 0x1561c8
void entry_00156194_0x156194(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156194_0x156194");
#endif

    ctx->pc = 0x156194u;

    // 0x156194: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x156194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x156198: 0x2447ec80  addiu       $a3, $v0, -0x1380
    ctx->pc = 0x156198u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962304));
    // 0x15619c: 0x260654e0  addiu       $a2, $s0, 0x54E0
    ctx->pc = 0x15619cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 21728));
    // 0x1561a0: 0xdce50000  ld          $a1, 0x0($a3)
    ctx->pc = 0x1561a0u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x47EC80u));
    // 0x1561a4: 0xdce40008  ld          $a0, 0x8($a3)
    ctx->pc = 0x1561a4u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x47EC88u));
    // 0x1561a8: 0xdce30010  ld          $v1, 0x10($a3)
    ctx->pc = 0x1561a8u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x47EC90u));
    // 0x1561ac: 0xdce20018  ld          $v0, 0x18($a3)
    ctx->pc = 0x1561acu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x47EC98u));
    // 0x1561b0: 0xfcc50000  sd          $a1, 0x0($a2)
    ctx->pc = 0x1561b0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
    // 0x1561b4: 0xfcc40008  sd          $a0, 0x8($a2)
    ctx->pc = 0x1561b4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 4));
    // 0x1561b8: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x1561b8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x1561bc: 0xfcc20018  sd          $v0, 0x18($a2)
    ctx->pc = 0x1561bcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 2));
    // 0x1561c0: 0xdce20020  ld          $v0, 0x20($a3)
    ctx->pc = 0x1561c0u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x47ECA0u));
    // 0x1561c4: 0xfcc20020  sd          $v0, 0x20($a2)
    ctx->pc = 0x1561c4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 32), GPR_U64(ctx, 2));
    ctx->pc = 0x1561c8u;
}
