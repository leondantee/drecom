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

// Function: entry_001c6970
// Address: 0x1c6970 - 0x1c69c8
void entry_001c6970_0x1c6970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6970_0x1c6970");
#endif

    switch (ctx->pc) {
        case 0x1c6980u: goto label_1c6980;
        case 0x1c698cu: goto label_1c698c;
        case 0x1c69a0u: goto label_1c69a0;
        case 0x1c69acu: goto label_1c69ac;
        default: break;
    }

    ctx->pc = 0x1c6970u;

    // 0x1c6970: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c6970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c6974: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c6974u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c6978: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C6978u;
    SET_GPR_U32(ctx, 31, 0x1C6980u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C6978u, 0x1C6980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6980u;
label_1c6980:
    // 0x1c6980: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c6980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c6984: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C6984u;
    SET_GPR_U32(ctx, 31, 0x1C698Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C6984u, 0x1C698Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C698Cu;
label_1c698c:
    // 0x1c698c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c698cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c6990: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c6990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c6994: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c6994u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c6998: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C6998u;
    SET_GPR_U32(ctx, 31, 0x1C69A0u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C6998u, 0x1C69A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C69A0u;
label_1c69a0:
    // 0x1c69a0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c69a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c69a4: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C69A4u;
    SET_GPR_U32(ctx, 31, 0x1C69ACu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C69A4u, 0x1C69ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C69ACu;
label_1c69ac:
    // 0x1c69ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c69acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c69b0: 0x90631085  lbu         $v1, 0x1085($v1)
    ctx->pc = 0x1c69b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4229)));
    // 0x1c69b4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C69B4u;
    {
        const bool branch_taken_0x1c69b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c69b4) {
            ctx->pc = 0x1C69C8u;
            return;
        }
    }
    ctx->pc = 0x1C69BCu;
    // 0x1c69bc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c69bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c69c0: 0xc06d340  jal         func_1B4D00
    ctx->pc = 0x1C69C0u;
    SET_GPR_U32(ctx, 31, 0x1C69C8u);
    ctx->pc = 0x1B4D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4D00u, 0x1C69C0u, 0x1C69C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C69C8u;
}
