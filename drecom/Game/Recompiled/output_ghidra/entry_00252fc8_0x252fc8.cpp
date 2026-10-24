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

// Function: entry_00252fc8
// Address: 0x252fc8 - 0x252ffc
void entry_00252fc8_0x252fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00252fc8_0x252fc8");
#endif

    switch (ctx->pc) {
        case 0x252fd8u: goto label_252fd8;
        default: break;
    }

    ctx->pc = 0x252fc8u;

    // 0x252fc8: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x252fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x252fcc: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x252fccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x252fd0: 0xc094d64  jal         func_253590
    ctx->pc = 0x252FD0u;
    SET_GPR_U32(ctx, 31, 0x252FD8u);
    ctx->pc = 0x253590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253590u, 0x252FD0u, 0x252FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252FD8u;
label_252fd8:
    // 0x252fd8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x252FD8u;
    {
        const bool branch_taken_0x252fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x252fd8) {
            ctx->pc = 0x252FFCu;
            return;
        }
    }
    ctx->pc = 0x252FE0u;
    // 0x252fe0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x252fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x252fe4: 0xae030128  sw          $v1, 0x128($s0)
    ctx->pc = 0x252fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 3));
    // 0x252fe8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x252fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252fec: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x252fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x252ff0: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x252ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x252ff4: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x252FF4u;
    {
        const bool branch_taken_0x252ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252ff4) {
            ctx->pc = 0x2533CCu;
            return;
        }
    }
    ctx->pc = 0x252FFCu;
}
