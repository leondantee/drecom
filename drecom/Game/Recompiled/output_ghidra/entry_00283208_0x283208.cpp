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

// Function: entry_00283208
// Address: 0x283208 - 0x283260
void entry_00283208_0x283208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00283208_0x283208");
#endif

    switch (ctx->pc) {
        case 0x28324cu: goto label_28324c;
        case 0x283258u: goto label_283258;
        default: break;
    }

    ctx->pc = 0x283208u;

    // 0x283208: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x283208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x28320c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x28320cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x283210: 0x244250a0  addiu       $v0, $v0, 0x50A0
    ctx->pc = 0x283210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20640));
    // 0x283214: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x283214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x283218: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x283218u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28321c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x28321cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x283220: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x283220u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x283224: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x283224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x283228: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x283228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28322c: 0x0  nop
    ctx->pc = 0x28322cu;
    // NOP
    // 0x283230: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x283230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x283234: 0x24041715  addiu       $a0, $zero, 0x1715
    ctx->pc = 0x283234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5909));
    // 0x283238: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x283238u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28323c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x28323cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x283240: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x283240u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x283244: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x283244u;
    SET_GPR_U32(ctx, 31, 0x28324Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x283244u, 0x28324Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28324Cu;
label_28324c:
    // 0x28324c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28324cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x283250: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x283250u;
    SET_GPR_U32(ctx, 31, 0x283258u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x283250u, 0x283258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283258u;
label_283258:
    // 0x283258: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x283258u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x28325c: 0x0  nop
    ctx->pc = 0x28325cu;
    // NOP
    ctx->pc = 0x283260u;
}
