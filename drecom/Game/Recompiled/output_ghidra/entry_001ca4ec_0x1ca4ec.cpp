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

// Function: entry_001ca4ec
// Address: 0x1ca4ec - 0x1ca514
void entry_001ca4ec_0x1ca4ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca4ec_0x1ca4ec");
#endif

    switch (ctx->pc) {
        case 0x1ca50cu: goto label_1ca50c;
        default: break;
    }

    ctx->pc = 0x1ca4ecu;

    // 0x1ca4ec: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca4f0: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x1ca4f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x1ca4f4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ca4f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ca4f8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1ca4f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1ca4fc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CA4FCu;
    {
        const bool branch_taken_0x1ca4fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca4fc) {
            ctx->pc = 0x1CA514u;
            return;
        }
    }
    ctx->pc = 0x1CA504u;
    // 0x1ca504: 0xc058608  jal         func_161820
    ctx->pc = 0x1CA504u;
    SET_GPR_U32(ctx, 31, 0x1CA50Cu);
    ctx->pc = 0x161820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161820u, 0x1CA504u, 0x1CA50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA50Cu;
label_1ca50c:
    // 0x1ca50c: 0xc0586b0  jal         func_161AC0
    ctx->pc = 0x1CA50Cu;
    SET_GPR_U32(ctx, 31, 0x1CA514u);
    ctx->pc = 0x161AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161AC0u, 0x1CA50Cu, 0x1CA514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA514u;
}
