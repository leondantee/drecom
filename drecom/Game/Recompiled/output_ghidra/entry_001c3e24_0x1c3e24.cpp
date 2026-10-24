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

// Function: entry_001c3e24
// Address: 0x1c3e24 - 0x1c3e9c
void entry_001c3e24_0x1c3e24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3e24_0x1c3e24");
#endif

    switch (ctx->pc) {
        case 0x1c3e34u: goto label_1c3e34;
        case 0x1c3e40u: goto label_1c3e40;
        case 0x1c3e54u: goto label_1c3e54;
        case 0x1c3e60u: goto label_1c3e60;
        default: break;
    }

    ctx->pc = 0x1c3e24u;

    // 0x1c3e24: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c3e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3e28: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c3e28u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c3e2c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C3E2Cu;
    SET_GPR_U32(ctx, 31, 0x1C3E34u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C3E2Cu, 0x1C3E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3E34u;
label_1c3e34:
    // 0x1c3e34: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c3e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3e38: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C3E38u;
    SET_GPR_U32(ctx, 31, 0x1C3E40u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C3E38u, 0x1C3E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3E40u;
label_1c3e40:
    // 0x1c3e40: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c3e40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c3e44: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c3e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3e48: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c3e48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c3e4c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C3E4Cu;
    SET_GPR_U32(ctx, 31, 0x1C3E54u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C3E4Cu, 0x1C3E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3E54u;
label_1c3e54:
    // 0x1c3e54: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c3e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c3e58: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C3E58u;
    SET_GPR_U32(ctx, 31, 0x1C3E60u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C3E58u, 0x1C3E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3E60u;
label_1c3e60:
    // 0x1c3e60: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x1c3e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c3e64: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c3e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c3e68: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C3E68u;
    {
        const bool branch_taken_0x1c3e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3e68) {
            ctx->pc = 0x1C3E9Cu;
            return;
        }
    }
    ctx->pc = 0x1C3E70u;
    // 0x1c3e70: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c3e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3e74: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c3e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c3e78: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1c3e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1c3e7c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c3e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c3e80: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C3E80u;
    {
        const bool branch_taken_0x1c3e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3e80) {
            ctx->pc = 0x1C3E9Cu;
            return;
        }
    }
    ctx->pc = 0x1C3E88u;
    // 0x1c3e88: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c3e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3e8c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c3e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c3e90: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c3e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c3e94: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1c3e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c3e98: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c3e98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1c3e9cu;
}
