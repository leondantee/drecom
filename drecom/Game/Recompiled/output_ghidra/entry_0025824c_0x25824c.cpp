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

// Function: entry_0025824c
// Address: 0x25824c - 0x2582a0
void entry_0025824c_0x25824c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025824c_0x25824c");
#endif

    ctx->pc = 0x25824cu;

    // 0x25824c: 0xde220008  ld          $v0, 0x8($s1)
    ctx->pc = 0x25824cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x258250: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x258250u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x258254: 0xde220000  ld          $v0, 0x0($s1)
    ctx->pc = 0x258254u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x258258: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x258258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x25825c: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x25825cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x258260: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x258260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x258264: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x258264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x258268: 0x3c05fc00  lui         $a1, 0xFC00
    ctx->pc = 0x258268u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64512 << 16));
    // 0x25826c: 0x34a57fff  ori         $a1, $a1, 0x7FFF
    ctx->pc = 0x25826cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32767);
    // 0x258270: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x258270u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x258274: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x258274u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x258278: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x258278u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x25827c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x25827cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x258280: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x258280u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x258284: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x258284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x258288: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x258288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x25828c: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x25828cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x258290: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x258290u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x258294: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x258294u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x258298: 0xc095bc4  jal         func_256F10
    ctx->pc = 0x258298u;
    SET_GPR_U32(ctx, 31, 0x2582A0u);
    ctx->pc = 0x256F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256F10u, 0x258298u, 0x2582A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2582A0u;
}
