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

// Function: entry_001c2a80
// Address: 0x1c2a80 - 0x1c2b10
void entry_001c2a80_0x1c2a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2a80_0x1c2a80");
#endif

    switch (ctx->pc) {
        case 0x1c2a90u: goto label_1c2a90;
        case 0x1c2a9cu: goto label_1c2a9c;
        case 0x1c2ab0u: goto label_1c2ab0;
        case 0x1c2abcu: goto label_1c2abc;
        case 0x1c2b08u: goto label_1c2b08;
        default: break;
    }

    ctx->pc = 0x1c2a80u;

    // 0x1c2a80: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c2a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2a84: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c2a84u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c2a88: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C2A88u;
    SET_GPR_U32(ctx, 31, 0x1C2A90u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C2A88u, 0x1C2A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2A90u;
label_1c2a90:
    // 0x1c2a90: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c2a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2a94: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C2A94u;
    SET_GPR_U32(ctx, 31, 0x1C2A9Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C2A94u, 0x1C2A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2A9Cu;
label_1c2a9c:
    // 0x1c2a9c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c2a9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c2aa0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c2aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2aa4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c2aa4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c2aa8: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C2AA8u;
    SET_GPR_U32(ctx, 31, 0x1C2AB0u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C2AA8u, 0x1C2AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2AB0u;
label_1c2ab0:
    // 0x1c2ab0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c2ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c2ab4: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C2AB4u;
    SET_GPR_U32(ctx, 31, 0x1C2ABCu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C2AB4u, 0x1C2ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2ABCu;
label_1c2abc:
    // 0x1c2abc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c2abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2ac0: 0x9063107f  lbu         $v1, 0x107F($v1)
    ctx->pc = 0x1c2ac0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4223)));
    // 0x1c2ac4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c2ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c2ac8: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1c2ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1c2acc: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C2ACCu;
    {
        const bool branch_taken_0x1c2acc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2acc) {
            ctx->pc = 0x1C2B10u;
            return;
        }
    }
    ctx->pc = 0x1C2AD4u;
    // 0x1c2ad4: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1c2ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c2ad8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1c2ad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c2adc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C2ADCu;
    {
        const bool branch_taken_0x1c2adc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2adc) {
            ctx->pc = 0x1C2B10u;
            return;
        }
    }
    ctx->pc = 0x1C2AE4u;
    // 0x1c2ae4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c2ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2ae8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c2ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c2aec: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c2aecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1c2af0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c2af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c2af4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C2AF4u;
    {
        const bool branch_taken_0x1c2af4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2af4) {
            ctx->pc = 0x1C2B10u;
            return;
        }
    }
    ctx->pc = 0x1C2AFCu;
    // 0x1c2afc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c2afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c2b00: 0xc06d30c  jal         func_1B4C30
    ctx->pc = 0x1C2B00u;
    SET_GPR_U32(ctx, 31, 0x1C2B08u);
    ctx->pc = 0x1B4C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4C30u, 0x1C2B00u, 0x1C2B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2B08u;
label_1c2b08:
    // 0x1c2b08: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1C2B08u;
    {
        const bool branch_taken_0x1c2b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2b08) {
            ctx->pc = 0x1C2B64u;
            return;
        }
    }
    ctx->pc = 0x1C2B10u;
}
