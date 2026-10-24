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

// Function: entry_001573dc
// Address: 0x1573dc - 0x157410
void entry_001573dc_0x1573dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001573dc_0x1573dc");
#endif

    ctx->pc = 0x1573dcu;

    // 0x1573dc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1573dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1573e0: 0x2447ec80  addiu       $a3, $v0, -0x1380
    ctx->pc = 0x1573e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962304));
    // 0x1573e4: 0x26865508  addiu       $a2, $s4, 0x5508
    ctx->pc = 0x1573e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 21768));
    // 0x1573e8: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x1573e8u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x47EC80u));
    // 0x1573ec: 0xdce40008  ld          $a0, 0x8($a3)
    ctx->pc = 0x1573ecu;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x47EC88u));
    // 0x1573f0: 0xdce50010  ld          $a1, 0x10($a3)
    ctx->pc = 0x1573f0u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x47EC90u));
    // 0x1573f4: 0xdce20018  ld          $v0, 0x18($a3)
    ctx->pc = 0x1573f4u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x47EC98u));
    // 0x1573f8: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x1573f8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x1573fc: 0xfcc40008  sd          $a0, 0x8($a2)
    ctx->pc = 0x1573fcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 4));
    // 0x157400: 0xfcc50010  sd          $a1, 0x10($a2)
    ctx->pc = 0x157400u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 5));
    // 0x157404: 0xfcc20018  sd          $v0, 0x18($a2)
    ctx->pc = 0x157404u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 2));
    // 0x157408: 0xdcf20020  ld          $s2, 0x20($a3)
    ctx->pc = 0x157408u;
    SET_GPR_U64(ctx, 18, FAST_READ64(0x47ECA0u));
    // 0x15740c: 0xfcd20020  sd          $s2, 0x20($a2)
    ctx->pc = 0x15740cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 32), GPR_U64(ctx, 18));
    ctx->pc = 0x157410u;
}
