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

// Function: entry_001f29f4
// Address: 0x1f29f4 - 0x1f2a3c
void entry_001f29f4_0x1f29f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f29f4_0x1f29f4");
#endif

    switch (ctx->pc) {
        case 0x1f2a04u: goto label_1f2a04;
        case 0x1f2a10u: goto label_1f2a10;
        default: break;
    }

    ctx->pc = 0x1f29f4u;

    // 0x1f29f4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f29f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f29f8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f29f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f29fc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1F29FCu;
    SET_GPR_U32(ctx, 31, 0x1F2A04u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1F29FCu, 0x1F2A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2A04u;
label_1f2a04:
    // 0x1f2a04: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f2a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2a08: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F2A08u;
    SET_GPR_U32(ctx, 31, 0x1F2A10u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F2A08u, 0x1F2A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2A10u;
label_1f2a10:
    // 0x1f2a10: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f2a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2a14: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1f2a14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1f2a18: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x1F2A18u;
    {
        const bool branch_taken_0x1f2a18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2a18) {
            ctx->pc = 0x1F2B4Cu;
            return;
        }
    }
    ctx->pc = 0x1F2A20u;
    // 0x1f2a20: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1f2a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f2a24: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f2a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2a28: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1f2a28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f2a2c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f2a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2a30: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1f2a30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f2a34: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1F2A34u;
    {
        const bool branch_taken_0x1f2a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2a34) {
            ctx->pc = 0x1F2B4Cu;
            return;
        }
    }
    ctx->pc = 0x1F2A3Cu;
}
