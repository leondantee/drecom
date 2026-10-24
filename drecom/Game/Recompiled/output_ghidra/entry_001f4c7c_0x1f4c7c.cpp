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

// Function: entry_001f4c7c
// Address: 0x1f4c7c - 0x1f4cdc
void entry_001f4c7c_0x1f4c7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f4c7c_0x1f4c7c");
#endif

    switch (ctx->pc) {
        case 0x1f4c9cu: goto label_1f4c9c;
        case 0x1f4ca8u: goto label_1f4ca8;
        default: break;
    }

    ctx->pc = 0x1f4c7cu;

    // 0x1f4c7c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f4c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4c80: 0x8462127a  lh          $v0, 0x127A($v1)
    ctx->pc = 0x1f4c80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x1f4c84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f4c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f4c88: 0xa462127a  sh          $v0, 0x127A($v1)
    ctx->pc = 0x1f4c88u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f4c8c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f4c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4c90: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1f4c90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f4c94: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1F4C94u;
    SET_GPR_U32(ctx, 31, 0x1F4C9Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1F4C94u, 0x1F4C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4C9Cu;
label_1f4c9c:
    // 0x1f4c9c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f4c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4ca0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F4CA0u;
    SET_GPR_U32(ctx, 31, 0x1F4CA8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F4CA0u, 0x1F4CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4CA8u;
label_1f4ca8:
    // 0x1f4ca8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f4ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4cac: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1f4cacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1f4cb0: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x1F4CB0u;
    {
        const bool branch_taken_0x1f4cb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4cb0) {
            ctx->pc = 0x1F4DD0u;
            return;
        }
    }
    ctx->pc = 0x1F4CB8u;
    // 0x1f4cb8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1f4cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f4cbc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f4cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4cc0: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1f4cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f4cc4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f4cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4cc8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1f4cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f4ccc: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x1f4cccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x1f4cd0: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1f4cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1f4cd4: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1F4CD4u;
    {
        const bool branch_taken_0x1f4cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4cd4) {
            ctx->pc = 0x1F4DD0u;
            return;
        }
    }
    ctx->pc = 0x1F4CDCu;
}
