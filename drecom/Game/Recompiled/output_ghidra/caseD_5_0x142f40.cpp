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

// Function: caseD_5
// Address: 0x142f40 - 0x142f84
void caseD_5_0x142f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x142f40");
#endif

    ctx->pc = 0x142f40u;

    // 0x142f40: 0x2673fffe  addiu       $s3, $s3, -0x2
    ctx->pc = 0x142f40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967294));
    // 0x142f44: 0x72801628  paddub      $v0, $s4, $zero
    ctx->pc = 0x142f44u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x142f48: 0x2454ffff  addiu       $s4, $v0, -0x1
    ctx->pc = 0x142f48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x142f4c: 0x14400072  bnez        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x142F4Cu;
    {
        const bool branch_taken_0x142f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x142f4c) {
            ctx->pc = 0x143118u;
            return;
        }
    }
    ctx->pc = 0x142F54u;
    // 0x142f54: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x142f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x142f58: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x142f58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x142f5c: 0x2107c  dsll32      $v0, $v0, 1
    ctx->pc = 0x142f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 1));
    // 0x142f60: 0x2107e  dsrl32      $v0, $v0, 1
    ctx->pc = 0x142f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 1));
    // 0x142f64: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x142f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x142f68: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x142f68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x142f6c: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x142f6cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x142f70: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x142f70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x142f74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x142f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x142f78: 0xa2420008  sb          $v0, 0x8($s2)
    ctx->pc = 0x142f78u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x142f7c: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x142F7Cu;
    {
        const bool branch_taken_0x142f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142f7c) {
            ctx->pc = 0x143118u;
            return;
        }
    }
    ctx->pc = 0x142F84u;
}
