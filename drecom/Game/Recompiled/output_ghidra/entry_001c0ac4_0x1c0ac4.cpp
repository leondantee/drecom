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

// Function: entry_001c0ac4
// Address: 0x1c0ac4 - 0x1c0b3c
void entry_001c0ac4_0x1c0ac4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0ac4_0x1c0ac4");
#endif

    switch (ctx->pc) {
        case 0x1c0ad4u: goto label_1c0ad4;
        case 0x1c0ae0u: goto label_1c0ae0;
        case 0x1c0af4u: goto label_1c0af4;
        case 0x1c0b00u: goto label_1c0b00;
        default: break;
    }

    ctx->pc = 0x1c0ac4u;

    // 0x1c0ac4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c0ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0ac8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c0ac8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c0acc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C0ACCu;
    SET_GPR_U32(ctx, 31, 0x1C0AD4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C0ACCu, 0x1C0AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0AD4u;
label_1c0ad4:
    // 0x1c0ad4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c0ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0ad8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C0AD8u;
    SET_GPR_U32(ctx, 31, 0x1C0AE0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C0AD8u, 0x1C0AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0AE0u;
label_1c0ae0:
    // 0x1c0ae0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c0ae0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c0ae4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c0ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0ae8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c0ae8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c0aec: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C0AECu;
    SET_GPR_U32(ctx, 31, 0x1C0AF4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C0AECu, 0x1C0AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0AF4u;
label_1c0af4:
    // 0x1c0af4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c0af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c0af8: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C0AF8u;
    SET_GPR_U32(ctx, 31, 0x1C0B00u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C0AF8u, 0x1C0B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0B00u;
label_1c0b00:
    // 0x1c0b00: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x1c0b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c0b04: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c0b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c0b08: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C0B08u;
    {
        const bool branch_taken_0x1c0b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0b08) {
            ctx->pc = 0x1C0B3Cu;
            return;
        }
    }
    ctx->pc = 0x1C0B10u;
    // 0x1c0b10: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c0b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0b14: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c0b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c0b18: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1c0b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1c0b1c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c0b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c0b20: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C0B20u;
    {
        const bool branch_taken_0x1c0b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0b20) {
            ctx->pc = 0x1C0B3Cu;
            return;
        }
    }
    ctx->pc = 0x1C0B28u;
    // 0x1c0b28: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c0b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0b2c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c0b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c0b30: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c0b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c0b34: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1c0b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c0b38: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c0b38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1c0b3cu;
}
