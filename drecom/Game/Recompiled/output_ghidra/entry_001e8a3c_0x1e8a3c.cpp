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

// Function: entry_001e8a3c
// Address: 0x1e8a3c - 0x1e8a88
void entry_001e8a3c_0x1e8a3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8a3c_0x1e8a3c");
#endif

    switch (ctx->pc) {
        case 0x1e8a84u: goto label_1e8a84;
        default: break;
    }

    ctx->pc = 0x1e8a3cu;

    // 0x1e8a3c: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e8a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8a40: 0x8c511210  lw          $s1, 0x1210($v0)
    ctx->pc = 0x1e8a40u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4624)));
    // 0x1e8a44: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e8a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8a48: 0x904211f0  lbu         $v0, 0x11F0($v0)
    ctx->pc = 0x1e8a48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4592)));
    // 0x1e8a4c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e8a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e8a50: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1e8a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1e8a54: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1E8A54u;
    {
        const bool branch_taken_0x1e8a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8a54) {
            ctx->pc = 0x1E8A88u;
            return;
        }
    }
    ctx->pc = 0x1E8A5Cu;
    // 0x1e8a5c: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e8a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8a60: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1e8a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1e8a64: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1e8a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1e8a68: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1e8a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1e8a6c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e8a6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e8a70: 0x2404030a  addiu       $a0, $zero, 0x30A
    ctx->pc = 0x1e8a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 778));
    // 0x1e8a74: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x1e8a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1e8a78: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1e8a78u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e8a7c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1E8A7Cu;
    SET_GPR_U32(ctx, 31, 0x1E8A84u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1E8A7Cu, 0x1E8A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8A84u;
label_1e8a84:
    // 0x1e8a84: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e8a84u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1e8a88u;
}
