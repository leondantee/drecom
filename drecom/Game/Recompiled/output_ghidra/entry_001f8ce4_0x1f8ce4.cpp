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

// Function: entry_001f8ce4
// Address: 0x1f8ce4 - 0x1f8d44
void entry_001f8ce4_0x1f8ce4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f8ce4_0x1f8ce4");
#endif

    switch (ctx->pc) {
        case 0x1f8d04u: goto label_1f8d04;
        case 0x1f8d10u: goto label_1f8d10;
        default: break;
    }

    ctx->pc = 0x1f8ce4u;

    // 0x1f8ce4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f8ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8ce8: 0x8462127a  lh          $v0, 0x127A($v1)
    ctx->pc = 0x1f8ce8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x1f8cec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f8cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f8cf0: 0xa462127a  sh          $v0, 0x127A($v1)
    ctx->pc = 0x1f8cf0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f8cf4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f8cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8cf8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1f8cf8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f8cfc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1F8CFCu;
    SET_GPR_U32(ctx, 31, 0x1F8D04u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1F8CFCu, 0x1F8D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8D04u;
label_1f8d04:
    // 0x1f8d04: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f8d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8d08: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F8D08u;
    SET_GPR_U32(ctx, 31, 0x1F8D10u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F8D08u, 0x1F8D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8D10u;
label_1f8d10:
    // 0x1f8d10: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f8d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8d14: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1f8d14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1f8d18: 0x10600062  beqz        $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x1F8D18u;
    {
        const bool branch_taken_0x1f8d18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8d18) {
            ctx->pc = 0x1F8EA4u;
            return;
        }
    }
    ctx->pc = 0x1F8D20u;
    // 0x1f8d20: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1f8d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f8d24: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f8d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8d28: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1f8d28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f8d2c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f8d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8d30: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1f8d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f8d34: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x1f8d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x1f8d38: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1f8d38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1f8d3c: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1F8D3Cu;
    {
        const bool branch_taken_0x1f8d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8d3c) {
            ctx->pc = 0x1F8EA4u;
            return;
        }
    }
    ctx->pc = 0x1F8D44u;
}
