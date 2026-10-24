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

// Function: entry_0031228c
// Address: 0x31228c - 0x3122cc
void entry_0031228c_0x31228c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031228c_0x31228c");
#endif

    switch (ctx->pc) {
        case 0x3122acu: goto label_3122ac;
        default: break;
    }

    ctx->pc = 0x31228cu;

    // 0x31228c: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x31228cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x312290: 0x3442f3b6  ori         $v0, $v0, 0xF3B6
    ctx->pc = 0x312290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62390);
    // 0x312294: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x312294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312298: 0x0  nop
    ctx->pc = 0x312298u;
    // NOP
    // 0x31229c: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x31229cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x3122a0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x3122a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3122a4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3122A4u;
    SET_GPR_U32(ctx, 31, 0x3122ACu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3122A4u, 0x3122ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3122ACu;
label_3122ac:
    // 0x3122ac: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x3122acu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3122b0: 0x72201628  paddub      $v0, $s1, $zero
    ctx->pc = 0x3122b0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x3122b4: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x3122b4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3122b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3122b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3122bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3122bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3122c0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x3122c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3122c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3122C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3122C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3122CCu;
}
