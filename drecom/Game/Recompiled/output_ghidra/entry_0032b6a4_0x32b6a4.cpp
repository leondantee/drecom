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

// Function: entry_0032b6a4
// Address: 0x32b6a4 - 0x32b6e0
void entry_0032b6a4_0x32b6a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032b6a4_0x32b6a4");
#endif

    switch (ctx->pc) {
        case 0x32b6c0u: goto label_32b6c0;
        default: break;
    }

    ctx->pc = 0x32b6a4u;

    // 0x32b6a4: 0x92c328ba  lbu         $v1, 0x28BA($s6)
    ctx->pc = 0x32b6a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 10426)));
    // 0x32b6a8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x32b6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32b6ac: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x32b6acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32b6b0: 0x2c31021  addu        $v0, $s6, $v1
    ctx->pc = 0x32b6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x32b6b4: 0xc44c28f0  lwc1        $f12, 0x28F0($v0)
    ctx->pc = 0x32b6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32b6b8: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32B6B8u;
    SET_GPR_U32(ctx, 31, 0x32B6C0u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32B6B8u, 0x32B6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B6C0u;
label_32b6c0:
    // 0x32b6c0: 0x26650176  addiu       $a1, $s3, 0x176
    ctx->pc = 0x32b6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 374));
    // 0x32b6c4: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x32b6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x32b6c8: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x32b6c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x32b6cc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x32b6ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x32b6d0: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x32b6d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x32b6d4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x32b6d4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32b6d8: 0xc0ca3d8  jal         func_328F60
    ctx->pc = 0x32B6D8u;
    SET_GPR_U32(ctx, 31, 0x32B6E0u);
    ctx->pc = 0x328F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328F60u, 0x32B6D8u, 0x32B6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B6E0u;
}
