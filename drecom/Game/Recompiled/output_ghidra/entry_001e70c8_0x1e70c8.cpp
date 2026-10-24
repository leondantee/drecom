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

// Function: entry_001e70c8
// Address: 0x1e70c8 - 0x1e7128
void entry_001e70c8_0x1e70c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e70c8_0x1e70c8");
#endif

    ctx->pc = 0x1e70c8u;

    // 0x1e70c8: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x1e70c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1e70cc: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x1e70ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1e70d0: 0x43a023  subu        $s4, $v0, $v1
    ctx->pc = 0x1e70d0u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e70d4: 0x8fa401d4  lw          $a0, 0x1D4($sp)
    ctx->pc = 0x1e70d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x1e70d8: 0x8fa301c4  lw          $v1, 0x1C4($sp)
    ctx->pc = 0x1e70d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x1e70dc: 0x83a823  subu        $s5, $a0, $v1
    ctx->pc = 0x1e70dcu;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e70e0: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x1e70e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1e70e4: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x1e70e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1e70e8: 0x83b023  subu        $s6, $a0, $v1
    ctx->pc = 0x1e70e8u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e70ec: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x1e70ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x1e70f0: 0x8fa301c4  lw          $v1, 0x1C4($sp)
    ctx->pc = 0x1e70f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x1e70f4: 0x83b823  subu        $s7, $a0, $v1
    ctx->pc = 0x1e70f4u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e70f8: 0x2b62018  mult        $a0, $s5, $s6
    ctx->pc = 0x1e70f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1e70fc: 0x2971818  mult        $v1, $s4, $s7
    ctx->pc = 0x1e70fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e7100: 0x83a023  subu        $s4, $a0, $v1
    ctx->pc = 0x1e7100u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e7104: 0x6810008  bgez        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E7104u;
    {
        const bool branch_taken_0x1e7104 = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x1e7104) {
            ctx->pc = 0x1E7128u;
            return;
        }
    }
    ctx->pc = 0x1E710Cu;
    // 0x1e710c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1e710cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e7110: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1e7110u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e7114: 0x240300a1  addiu       $v1, $zero, 0xA1
    ctx->pc = 0x1e7114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x1e7118: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1e7118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1e711c: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1e711cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1e7120: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E7120u;
    {
        const bool branch_taken_0x1e7120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7120) {
            ctx->pc = 0x1E7140u;
            return;
        }
    }
    ctx->pc = 0x1E7128u;
}
