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

// Function: entry_001bfb44
// Address: 0x1bfb44 - 0x1bfbbc
void entry_001bfb44_0x1bfb44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bfb44_0x1bfb44");
#endif

    switch (ctx->pc) {
        case 0x1bfb54u: goto label_1bfb54;
        case 0x1bfb60u: goto label_1bfb60;
        case 0x1bfb74u: goto label_1bfb74;
        case 0x1bfb80u: goto label_1bfb80;
        default: break;
    }

    ctx->pc = 0x1bfb44u;

    // 0x1bfb44: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bfb44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfb48: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bfb48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bfb4c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1BFB4Cu;
    SET_GPR_U32(ctx, 31, 0x1BFB54u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BFB4Cu, 0x1BFB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFB54u;
label_1bfb54:
    // 0x1bfb54: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bfb54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfb58: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1BFB58u;
    SET_GPR_U32(ctx, 31, 0x1BFB60u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1BFB58u, 0x1BFB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFB60u;
label_1bfb60:
    // 0x1bfb60: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bfb60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bfb64: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bfb64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfb68: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bfb68u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bfb6c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1BFB6Cu;
    SET_GPR_U32(ctx, 31, 0x1BFB74u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1BFB6Cu, 0x1BFB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFB74u;
label_1bfb74:
    // 0x1bfb74: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1bfb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bfb78: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1BFB78u;
    SET_GPR_U32(ctx, 31, 0x1BFB80u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BFB78u, 0x1BFB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFB80u;
label_1bfb80:
    // 0x1bfb80: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x1bfb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1bfb84: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1bfb84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1bfb88: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1BFB88u;
    {
        const bool branch_taken_0x1bfb88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfb88) {
            ctx->pc = 0x1BFBBCu;
            return;
        }
    }
    ctx->pc = 0x1BFB90u;
    // 0x1bfb90: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bfb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfb94: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1bfb94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1bfb98: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1bfb98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1bfb9c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1bfb9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1bfba0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BFBA0u;
    {
        const bool branch_taken_0x1bfba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfba0) {
            ctx->pc = 0x1BFBBCu;
            return;
        }
    }
    ctx->pc = 0x1BFBA8u;
    // 0x1bfba8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bfba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfbac: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1bfbacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1bfbb0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1bfbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1bfbb4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1bfbb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1bfbb8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1bfbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1bfbbcu;
}
