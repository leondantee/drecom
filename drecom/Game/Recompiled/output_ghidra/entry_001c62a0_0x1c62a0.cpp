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

// Function: entry_001c62a0
// Address: 0x1c62a0 - 0x1c62f8
void entry_001c62a0_0x1c62a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c62a0_0x1c62a0");
#endif

    switch (ctx->pc) {
        case 0x1c62b0u: goto label_1c62b0;
        case 0x1c62bcu: goto label_1c62bc;
        case 0x1c62d0u: goto label_1c62d0;
        case 0x1c62dcu: goto label_1c62dc;
        default: break;
    }

    ctx->pc = 0x1c62a0u;

    // 0x1c62a0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c62a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c62a4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c62a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c62a8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C62A8u;
    SET_GPR_U32(ctx, 31, 0x1C62B0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C62A8u, 0x1C62B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C62B0u;
label_1c62b0:
    // 0x1c62b0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c62b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c62b4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C62B4u;
    SET_GPR_U32(ctx, 31, 0x1C62BCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C62B4u, 0x1C62BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C62BCu;
label_1c62bc:
    // 0x1c62bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c62bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c62c0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c62c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c62c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c62c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c62c8: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C62C8u;
    SET_GPR_U32(ctx, 31, 0x1C62D0u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C62C8u, 0x1C62D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C62D0u;
label_1c62d0:
    // 0x1c62d0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c62d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c62d4: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C62D4u;
    SET_GPR_U32(ctx, 31, 0x1C62DCu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C62D4u, 0x1C62DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C62DCu;
label_1c62dc:
    // 0x1c62dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c62dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c62e0: 0x90631085  lbu         $v1, 0x1085($v1)
    ctx->pc = 0x1c62e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4229)));
    // 0x1c62e4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C62E4u;
    {
        const bool branch_taken_0x1c62e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c62e4) {
            ctx->pc = 0x1C62F8u;
            return;
        }
    }
    ctx->pc = 0x1C62ECu;
    // 0x1c62ec: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c62ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c62f0: 0xc06d340  jal         func_1B4D00
    ctx->pc = 0x1C62F0u;
    SET_GPR_U32(ctx, 31, 0x1C62F8u);
    ctx->pc = 0x1B4D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4D00u, 0x1C62F0u, 0x1C62F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C62F8u;
}
