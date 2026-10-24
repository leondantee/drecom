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

// Function: entry_00303388
// Address: 0x303388 - 0x3033d8
void entry_00303388_0x303388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00303388_0x303388");
#endif

    switch (ctx->pc) {
        case 0x3033b4u: goto label_3033b4;
        default: break;
    }

    ctx->pc = 0x303388u;

    // 0x303388: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x303388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x30338c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30338cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303390: 0xac43136c  sw          $v1, 0x136C($v0)
    ctx->pc = 0x303390u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4972), GPR_U32(ctx, 3));
    // 0x303394: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x303394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303398: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x303398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30339c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30339cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3033a0: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x3033a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x3033a4: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x3033a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3033a8: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x3033a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x3033ac: 0xc05cc90  jal         func_173240
    ctx->pc = 0x3033ACu;
    SET_GPR_U32(ctx, 31, 0x3033B4u);
    ctx->pc = 0x173240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173240u, 0x3033ACu, 0x3033B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3033B4u;
label_3033b4:
    // 0x3033b4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x3033b4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3033b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3033b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3033bc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3033bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3033c0: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x3033c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x3033c4: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x3033c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x3033c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3033C8u;
    {
        const bool branch_taken_0x3033c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3033c8) {
            ctx->pc = 0x3033D8u;
            return;
        }
    }
    ctx->pc = 0x3033D0u;
    // 0x3033d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3033d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3033d4: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x3033d4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x3033d8u;
}
