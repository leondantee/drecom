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

// Function: entry_001e61d8
// Address: 0x1e61d8 - 0x1e6238
void entry_001e61d8_0x1e61d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e61d8_0x1e61d8");
#endif

    ctx->pc = 0x1e61d8u;

    // 0x1e61d8: 0x8fa50150  lw          $a1, 0x150($sp)
    ctx->pc = 0x1e61d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1e61dc: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x1e61dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1e61e0: 0xa39023  subu        $s2, $a1, $v1
    ctx->pc = 0x1e61e0u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1e61e4: 0x8fa40154  lw          $a0, 0x154($sp)
    ctx->pc = 0x1e61e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x1e61e8: 0x8fa30174  lw          $v1, 0x174($sp)
    ctx->pc = 0x1e61e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x1e61ec: 0x83a023  subu        $s4, $a0, $v1
    ctx->pc = 0x1e61ecu;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e61f0: 0x8fbe01a0  lw          $fp, 0x1A0($sp)
    ctx->pc = 0x1e61f0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e61f4: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x1e61f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1e61f8: 0x3c3a823  subu        $s5, $fp, $v1
    ctx->pc = 0x1e61f8u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x1e61fc: 0x8fa301a4  lw          $v1, 0x1A4($sp)
    ctx->pc = 0x1e61fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    // 0x1e6200: 0x8fbe0174  lw          $fp, 0x174($sp)
    ctx->pc = 0x1e6200u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x1e6204: 0x7eb023  subu        $s6, $v1, $fp
    ctx->pc = 0x1e6204u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x1e6208: 0x2952018  mult        $a0, $s4, $s5
    ctx->pc = 0x1e6208u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1e620c: 0x2561818  mult        $v1, $s2, $s6
    ctx->pc = 0x1e620cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e6210: 0x839023  subu        $s2, $a0, $v1
    ctx->pc = 0x1e6210u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e6214: 0x6410008  bgez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E6214u;
    {
        const bool branch_taken_0x1e6214 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x1e6214) {
            ctx->pc = 0x1E6238u;
            return;
        }
    }
    ctx->pc = 0x1E621Cu;
    // 0x1e621c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1e621cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e6220: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1e6220u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e6224: 0x240300a1  addiu       $v1, $zero, 0xA1
    ctx->pc = 0x1e6224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x1e6228: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1e6228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1e622c: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1e622cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1e6230: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E6230u;
    {
        const bool branch_taken_0x1e6230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6230) {
            ctx->pc = 0x1E6250u;
            return;
        }
    }
    ctx->pc = 0x1E6238u;
}
