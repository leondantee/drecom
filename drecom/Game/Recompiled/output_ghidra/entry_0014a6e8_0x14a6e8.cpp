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

// Function: entry_0014a6e8
// Address: 0x14a6e8 - 0x14a718
void entry_0014a6e8_0x14a6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a6e8_0x14a6e8");
#endif

    switch (ctx->pc) {
        case 0x14a6f4u: goto label_14a6f4;
        default: break;
    }

    ctx->pc = 0x14a6e8u;

    // 0x14a6e8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14a6e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14a6ec: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x14A6ECu;
    SET_GPR_U32(ctx, 31, 0x14A6F4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14A6ECu, 0x14A6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A6F4u;
label_14a6f4:
    // 0x14a6f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a6f8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x14a6f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x14a6fc: 0x10600043  beqz        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x14A6FCu;
    {
        const bool branch_taken_0x14a6fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a6fc) {
            ctx->pc = 0x14A80Cu;
            return;
        }
    }
    ctx->pc = 0x14A704u;
    // 0x14a704: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x14a704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14a708: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a70c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x14a70cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x14a710: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x14A710u;
    {
        const bool branch_taken_0x14a710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a710) {
            ctx->pc = 0x14A80Cu;
            return;
        }
    }
    ctx->pc = 0x14A718u;
}
