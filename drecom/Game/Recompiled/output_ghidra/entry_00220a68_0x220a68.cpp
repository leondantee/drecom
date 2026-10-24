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

// Function: entry_00220a68
// Address: 0x220a68 - 0x220ab4
void entry_00220a68_0x220a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00220a68_0x220a68");
#endif

    switch (ctx->pc) {
        case 0x220ab0u: goto label_220ab0;
        default: break;
    }

    ctx->pc = 0x220a68u;

    // 0x220a68: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x220a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220a6c: 0x8c711210  lw          $s1, 0x1210($v1)
    ctx->pc = 0x220a6cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4624)));
    // 0x220a70: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x220a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220a74: 0x906411f0  lbu         $a0, 0x11F0($v1)
    ctx->pc = 0x220a74u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4592)));
    // 0x220a78: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x220a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x220a7c: 0x30640008  andi        $a0, $v1, 0x8
    ctx->pc = 0x220a7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x220a80: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x220A80u;
    {
        const bool branch_taken_0x220a80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x220a80) {
            ctx->pc = 0x220AB4u;
            return;
        }
    }
    ctx->pc = 0x220A88u;
    // 0x220a88: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x220a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220a8c: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x220a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x220a90: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x220a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x220a94: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x220a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x220a98: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x220a98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x220a9c: 0x2404030a  addiu       $a0, $zero, 0x30A
    ctx->pc = 0x220a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 778));
    // 0x220aa0: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x220aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x220aa4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x220aa4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x220aa8: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x220AA8u;
    SET_GPR_U32(ctx, 31, 0x220AB0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x220AA8u, 0x220AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220AB0u;
label_220ab0:
    // 0x220ab0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x220ab0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x220ab4u;
}
