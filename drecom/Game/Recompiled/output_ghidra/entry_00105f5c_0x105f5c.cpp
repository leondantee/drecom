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

// Function: entry_00105f5c
// Address: 0x105f5c - 0x105f88
void entry_00105f5c_0x105f5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105f5c_0x105f5c");
#endif

    ctx->pc = 0x105f5cu;

    // 0x105f5c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x105f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x105f60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x105f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x105f64: 0x8c473d28  lw          $a3, 0x3D28($v0)
    ctx->pc = 0x105f64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15656)));
    // 0x105f68: 0x8c663d2c  lw          $a2, 0x3D2C($v1)
    ctx->pc = 0x105f68u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x383D2Cu));
    // 0x105f6c: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x105f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x105f70: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x105f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x105f74: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x105f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x105f78: 0xe68818  mult        $s1, $a3, $a2
    ctx->pc = 0x105f78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x105f7c: 0x3c150038  lui         $s5, 0x38
    ctx->pc = 0x105f7cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)56 << 16));
    // 0x105f80: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x105f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x105f84: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x105f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    ctx->pc = 0x105f88u;
}
