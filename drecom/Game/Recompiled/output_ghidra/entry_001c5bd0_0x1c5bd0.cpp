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

// Function: entry_001c5bd0
// Address: 0x1c5bd0 - 0x1c5c28
void entry_001c5bd0_0x1c5bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5bd0_0x1c5bd0");
#endif

    switch (ctx->pc) {
        case 0x1c5be0u: goto label_1c5be0;
        case 0x1c5becu: goto label_1c5bec;
        case 0x1c5c00u: goto label_1c5c00;
        case 0x1c5c0cu: goto label_1c5c0c;
        default: break;
    }

    ctx->pc = 0x1c5bd0u;

    // 0x1c5bd0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c5bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5bd4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c5bd4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c5bd8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C5BD8u;
    SET_GPR_U32(ctx, 31, 0x1C5BE0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C5BD8u, 0x1C5BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5BE0u;
label_1c5be0:
    // 0x1c5be0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c5be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5be4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C5BE4u;
    SET_GPR_U32(ctx, 31, 0x1C5BECu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C5BE4u, 0x1C5BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5BECu;
label_1c5bec:
    // 0x1c5bec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c5becu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c5bf0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c5bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5bf4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c5bf4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c5bf8: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C5BF8u;
    SET_GPR_U32(ctx, 31, 0x1C5C00u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C5BF8u, 0x1C5C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5C00u;
label_1c5c00:
    // 0x1c5c00: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c5c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c5c04: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C5C04u;
    SET_GPR_U32(ctx, 31, 0x1C5C0Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C5C04u, 0x1C5C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5C0Cu;
label_1c5c0c:
    // 0x1c5c0c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c5c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5c10: 0x90631085  lbu         $v1, 0x1085($v1)
    ctx->pc = 0x1c5c10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4229)));
    // 0x1c5c14: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5C14u;
    {
        const bool branch_taken_0x1c5c14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5c14) {
            ctx->pc = 0x1C5C28u;
            return;
        }
    }
    ctx->pc = 0x1C5C1Cu;
    // 0x1c5c1c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c5c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5c20: 0xc06d340  jal         func_1B4D00
    ctx->pc = 0x1C5C20u;
    SET_GPR_U32(ctx, 31, 0x1C5C28u);
    ctx->pc = 0x1B4D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4D00u, 0x1C5C20u, 0x1C5C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5C28u;
}
