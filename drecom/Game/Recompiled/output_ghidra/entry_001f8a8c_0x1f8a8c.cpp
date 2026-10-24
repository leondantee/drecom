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

// Function: entry_001f8a8c
// Address: 0x1f8a8c - 0x1f8acc
void entry_001f8a8c_0x1f8a8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f8a8c_0x1f8a8c");
#endif

    switch (ctx->pc) {
        case 0x1f8a9cu: goto label_1f8a9c;
        case 0x1f8aa8u: goto label_1f8aa8;
        default: break;
    }

    ctx->pc = 0x1f8a8cu;

    // 0x1f8a8c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f8a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8a90: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f8a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f8a94: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1F8A94u;
    SET_GPR_U32(ctx, 31, 0x1F8A9Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1F8A94u, 0x1F8A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8A9Cu;
label_1f8a9c:
    // 0x1f8a9c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f8a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8aa0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F8AA0u;
    SET_GPR_U32(ctx, 31, 0x1F8AA8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F8AA0u, 0x1F8AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8AA8u;
label_1f8aa8:
    // 0x1f8aa8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f8aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8aac: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1f8aacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1f8ab0: 0x10600057  beqz        $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x1F8AB0u;
    {
        const bool branch_taken_0x1f8ab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8ab0) {
            ctx->pc = 0x1F8C10u;
            return;
        }
    }
    ctx->pc = 0x1F8AB8u;
    // 0x1f8ab8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1f8ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f8abc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f8abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8ac0: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1f8ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f8ac4: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x1F8AC4u;
    {
        const bool branch_taken_0x1f8ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8ac4) {
            ctx->pc = 0x1F8C10u;
            return;
        }
    }
    ctx->pc = 0x1F8ACCu;
}
