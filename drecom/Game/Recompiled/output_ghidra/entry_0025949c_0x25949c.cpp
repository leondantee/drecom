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

// Function: entry_0025949c
// Address: 0x25949c - 0x2594f0
void entry_0025949c_0x25949c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025949c_0x25949c");
#endif

    ctx->pc = 0x25949cu;

    // 0x25949c: 0xde220008  ld          $v0, 0x8($s1)
    ctx->pc = 0x25949cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2594a0: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x2594a0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x2594a4: 0xde220000  ld          $v0, 0x0($s1)
    ctx->pc = 0x2594a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2594a8: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x2594a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2594ac: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x2594acu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2594b0: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x2594b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x2594b4: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x2594b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x2594b8: 0x3c05fc00  lui         $a1, 0xFC00
    ctx->pc = 0x2594b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64512 << 16));
    // 0x2594bc: 0x34a57fff  ori         $a1, $a1, 0x7FFF
    ctx->pc = 0x2594bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32767);
    // 0x2594c0: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x2594c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2594c4: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x2594c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2594c8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2594c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x2594cc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2594ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2594d0: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x2594d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x2594d4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2594d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2594d8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2594d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2594dc: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x2594dcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x2594e0: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x2594e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x2594e4: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x2594e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x2594e8: 0xc095bc4  jal         func_256F10
    ctx->pc = 0x2594E8u;
    SET_GPR_U32(ctx, 31, 0x2594F0u);
    ctx->pc = 0x256F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256F10u, 0x2594E8u, 0x2594F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2594F0u;
}
