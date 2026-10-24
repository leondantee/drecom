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

// Function: entry_0030c8f0
// Address: 0x30c8f0 - 0x30c95c
void entry_0030c8f0_0x30c8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030c8f0_0x30c8f0");
#endif

    switch (ctx->pc) {
        case 0x30c910u: goto label_30c910;
        default: break;
    }

    ctx->pc = 0x30c8f0u;

    // 0x30c8f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c8f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c8f8: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x30c8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x30c8fc: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x30c8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30c900: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x30c900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x30c904: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x30c904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x30c908: 0xc05cc90  jal         func_173240
    ctx->pc = 0x30C908u;
    SET_GPR_U32(ctx, 31, 0x30C910u);
    ctx->pc = 0x173240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173240u, 0x30C908u, 0x30C910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C910u;
label_30c910:
    // 0x30c910: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x30c910u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30c914: 0x32030004  andi        $v1, $s0, 0x4
    ctx->pc = 0x30c914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
    // 0x30c918: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x30C918u;
    {
        const bool branch_taken_0x30c918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c918) {
            ctx->pc = 0x30C95Cu;
            return;
        }
    }
    ctx->pc = 0x30C920u;
    // 0x30c920: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x30c920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x30c924: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x30C924u;
    {
        const bool branch_taken_0x30c924 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30c924) {
            ctx->pc = 0x30C95Cu;
            return;
        }
    }
    ctx->pc = 0x30C92Cu;
    // 0x30c92c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30c92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30c930: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c934: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30c934u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30c938: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x30c938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30c93c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c940: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30c940u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30c944: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c948: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30c948u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30c94c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c950: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30c950u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30c954: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c958: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30c958u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x30c95cu;
}
