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

// Function: entry_001c4e20
// Address: 0x1c4e20 - 0x1c4e88
void entry_001c4e20_0x1c4e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4e20_0x1c4e20");
#endif

    switch (ctx->pc) {
        case 0x1c4e40u: goto label_1c4e40;
        case 0x1c4e4cu: goto label_1c4e4c;
        case 0x1c4e60u: goto label_1c4e60;
        case 0x1c4e6cu: goto label_1c4e6c;
        default: break;
    }

    ctx->pc = 0x1c4e20u;

    // 0x1c4e20: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c4e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4e24: 0xc4401568  lwc1        $f0, 0x1568($v0)
    ctx->pc = 0x1c4e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4e28: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c4e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4e2c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1c4e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1c4e30: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c4e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4e34: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c4e34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c4e38: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C4E38u;
    SET_GPR_U32(ctx, 31, 0x1C4E40u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C4E38u, 0x1C4E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4E40u;
label_1c4e40:
    // 0x1c4e40: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c4e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4e44: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C4E44u;
    SET_GPR_U32(ctx, 31, 0x1C4E4Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C4E44u, 0x1C4E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4E4Cu;
label_1c4e4c:
    // 0x1c4e4c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c4e4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c4e50: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c4e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4e54: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c4e54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c4e58: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C4E58u;
    SET_GPR_U32(ctx, 31, 0x1C4E60u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C4E58u, 0x1C4E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4E60u;
label_1c4e60:
    // 0x1c4e60: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c4e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c4e64: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C4E64u;
    SET_GPR_U32(ctx, 31, 0x1C4E6Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C4E64u, 0x1C4E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4E6Cu;
label_1c4e6c:
    // 0x1c4e6c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c4e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4e70: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1c4e70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1c4e74: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4E74u;
    {
        const bool branch_taken_0x1c4e74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4e74) {
            ctx->pc = 0x1C4E88u;
            return;
        }
    }
    ctx->pc = 0x1C4E7Cu;
    // 0x1c4e7c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c4e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4e80: 0xc06d340  jal         func_1B4D00
    ctx->pc = 0x1C4E80u;
    SET_GPR_U32(ctx, 31, 0x1C4E88u);
    ctx->pc = 0x1B4D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4D00u, 0x1C4E80u, 0x1C4E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4E88u;
}
