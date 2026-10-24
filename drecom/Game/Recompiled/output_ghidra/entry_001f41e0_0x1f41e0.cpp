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

// Function: entry_001f41e0
// Address: 0x1f41e0 - 0x1f4220
void entry_001f41e0_0x1f41e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f41e0_0x1f41e0");
#endif

    switch (ctx->pc) {
        case 0x1f41f0u: goto label_1f41f0;
        case 0x1f41fcu: goto label_1f41fc;
        default: break;
    }

    ctx->pc = 0x1f41e0u;

    // 0x1f41e0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f41e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f41e4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1f41e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f41e8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1F41E8u;
    SET_GPR_U32(ctx, 31, 0x1F41F0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1F41E8u, 0x1F41F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F41F0u;
label_1f41f0:
    // 0x1f41f0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f41f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f41f4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F41F4u;
    SET_GPR_U32(ctx, 31, 0x1F41FCu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F41F4u, 0x1F41FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F41FCu;
label_1f41fc:
    // 0x1f41fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f41fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4200: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1f4200u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1f4204: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x1F4204u;
    {
        const bool branch_taken_0x1f4204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4204) {
            ctx->pc = 0x1F4338u;
            return;
        }
    }
    ctx->pc = 0x1F420Cu;
    // 0x1f420c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1f420cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f4210: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f4210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4214: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1f4214u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f4218: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1F4218u;
    {
        const bool branch_taken_0x1f4218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4218) {
            ctx->pc = 0x1F4338u;
            return;
        }
    }
    ctx->pc = 0x1F4220u;
}
