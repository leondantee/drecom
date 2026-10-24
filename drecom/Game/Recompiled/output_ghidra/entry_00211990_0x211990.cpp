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

// Function: entry_00211990
// Address: 0x211990 - 0x2119b0
void entry_00211990_0x211990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00211990_0x211990");
#endif

    ctx->pc = 0x211990u;

    // 0x211990: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x211990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x211994: 0x8c23a2f0  lw          $v1, -0x5D10($at)
    ctx->pc = 0x211994u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x38A2F0u));
    // 0x211998: 0x2463fffa  addiu       $v1, $v1, -0x6
    ctx->pc = 0x211998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x21199c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x21199cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x2119a0: 0xac23a2f0  sw          $v1, -0x5D10($at)
    ctx->pc = 0x2119a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x38A2F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38A2F0u, _value); } while (0);
    // 0x2119a4: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x2119a4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2119a8: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x2119A8u;
    {
        const bool branch_taken_0x2119a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2119a8) {
            ctx->pc = 0x211B48u;
            return;
        }
    }
    ctx->pc = 0x2119B0u;
}
