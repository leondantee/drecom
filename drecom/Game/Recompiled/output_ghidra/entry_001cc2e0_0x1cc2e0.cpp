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

// Function: entry_001cc2e0
// Address: 0x1cc2e0 - 0x1cc340
void entry_001cc2e0_0x1cc2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc2e0_0x1cc2e0");
#endif

    switch (ctx->pc) {
        case 0x1cc320u: goto label_1cc320;
        default: break;
    }

    ctx->pc = 0x1cc2e0u;

    // 0x1cc2e0: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x1cc2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x1cc2e4: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x1cc2e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x1cc2e8: 0x1060010a  beqz        $v1, . + 4 + (0x10A << 2)
    ctx->pc = 0x1CC2E8u;
    {
        const bool branch_taken_0x1cc2e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc2e8) {
            ctx->pc = 0x1CC714u;
            return;
        }
    }
    ctx->pc = 0x1CC2F0u;
    // 0x1cc2f0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1cc2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cc2f4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1cc2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc2f8: 0xaca41b60  sw          $a0, 0x1B60($a1)
    ctx->pc = 0x1cc2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7008), GPR_U32(ctx, 4));
    // 0x1cc2fc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc300: 0xac401b68  sw          $zero, 0x1B68($v0)
    ctx->pc = 0x1cc300u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7016), GPR_U32(ctx, 0));
    // 0x1cc304: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cc304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc308: 0xac8013e8  sw          $zero, 0x13E8($a0)
    ctx->pc = 0x1cc308u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5096), GPR_U32(ctx, 0));
    // 0x1cc30c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc310: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x1cc310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cc314: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cc314u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cc318: 0xc056f24  jal         func_15BC90
    ctx->pc = 0x1CC318u;
    SET_GPR_U32(ctx, 31, 0x1CC320u);
    ctx->pc = 0x15BC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BC90u, 0x1CC318u, 0x1CC320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC320u;
label_1cc320:
    // 0x1cc320: 0x104000fc  beqz        $v0, . + 4 + (0xFC << 2)
    ctx->pc = 0x1CC320u;
    {
        const bool branch_taken_0x1cc320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc320) {
            ctx->pc = 0x1CC714u;
            return;
        }
    }
    ctx->pc = 0x1CC328u;
    // 0x1cc328: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cc328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc32c: 0x8c8413ec  lw          $a0, 0x13EC($a0)
    ctx->pc = 0x1cc32cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5100)));
    // 0x1cc330: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc334: 0xac6413e8  sw          $a0, 0x13E8($v1)
    ctx->pc = 0x1cc334u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5096), GPR_U32(ctx, 4));
    // 0x1cc338: 0x100000f6  b           . + 4 + (0xF6 << 2)
    ctx->pc = 0x1CC338u;
    {
        const bool branch_taken_0x1cc338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc338) {
            ctx->pc = 0x1CC714u;
            return;
        }
    }
    ctx->pc = 0x1CC340u;
}
