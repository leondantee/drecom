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

// Function: entry_001c2f64
// Address: 0x1c2f64 - 0x1c2fdc
void entry_001c2f64_0x1c2f64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2f64_0x1c2f64");
#endif

    switch (ctx->pc) {
        case 0x1c2f74u: goto label_1c2f74;
        case 0x1c2f80u: goto label_1c2f80;
        case 0x1c2f94u: goto label_1c2f94;
        case 0x1c2fa0u: goto label_1c2fa0;
        default: break;
    }

    ctx->pc = 0x1c2f64u;

    // 0x1c2f64: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c2f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2f68: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c2f68u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c2f6c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C2F6Cu;
    SET_GPR_U32(ctx, 31, 0x1C2F74u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C2F6Cu, 0x1C2F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2F74u;
label_1c2f74:
    // 0x1c2f74: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c2f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2f78: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C2F78u;
    SET_GPR_U32(ctx, 31, 0x1C2F80u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C2F78u, 0x1C2F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2F80u;
label_1c2f80:
    // 0x1c2f80: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c2f80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c2f84: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c2f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2f88: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c2f88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c2f8c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C2F8Cu;
    SET_GPR_U32(ctx, 31, 0x1C2F94u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C2F8Cu, 0x1C2F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2F94u;
label_1c2f94:
    // 0x1c2f94: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c2f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c2f98: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C2F98u;
    SET_GPR_U32(ctx, 31, 0x1C2FA0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C2F98u, 0x1C2FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2FA0u;
label_1c2fa0:
    // 0x1c2fa0: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x1c2fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c2fa4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c2fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c2fa8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C2FA8u;
    {
        const bool branch_taken_0x1c2fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2fa8) {
            ctx->pc = 0x1C2FDCu;
            return;
        }
    }
    ctx->pc = 0x1C2FB0u;
    // 0x1c2fb0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c2fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2fb4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c2fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c2fb8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1c2fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1c2fbc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c2fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c2fc0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C2FC0u;
    {
        const bool branch_taken_0x1c2fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2fc0) {
            ctx->pc = 0x1C2FDCu;
            return;
        }
    }
    ctx->pc = 0x1C2FC8u;
    // 0x1c2fc8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c2fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2fcc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c2fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c2fd0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c2fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c2fd4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1c2fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c2fd8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c2fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1c2fdcu;
}
