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

// Function: Oma1_dm_ck
// Address: 0x3795b0 - 0x379618
void Oma1_dm_ck_0x3795b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Oma1_dm_ck_0x3795b0");
#endif

    ctx->pc = 0x3795b0u;

    // 0x3795b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3795b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3795b4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x3795b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x3795b8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x3795b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3795bc: 0x904211ee  lbu         $v0, 0x11EE($v0)
    ctx->pc = 0x3795bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4590)));
    // 0x3795c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3795C0u;
    {
        const bool branch_taken_0x3795c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3795c0) {
            ctx->pc = 0x3795E0u;
            goto label_3795e0;
        }
    }
    ctx->pc = 0x3795C8u;
    // 0x3795c8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x3795c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3795cc: 0x8c431210  lw          $v1, 0x1210($v0)
    ctx->pc = 0x3795ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4624)));
    // 0x3795d0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x3795d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x3795d4: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x3795d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x3795d8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3795D8u;
    {
        const bool branch_taken_0x3795d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3795d8) {
            ctx->pc = 0x3795ECu;
            goto label_3795ec;
        }
    }
    ctx->pc = 0x3795E0u;
label_3795e0:
    // 0x3795e0: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x3795e0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3795e4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3795E4u;
    {
        const bool branch_taken_0x3795e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3795e4) {
            ctx->pc = 0x37960Cu;
            goto label_37960c;
        }
    }
    ctx->pc = 0x3795ECu;
label_3795ec:
    // 0x3795ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3795ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3795f0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x3795f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3795f4: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x3795f4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x3795f8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x3795f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3795fc: 0xa04011ee  sb          $zero, 0x11EE($v0)
    ctx->pc = 0x3795fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x379600: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x379600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x379604: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x379604u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x379608: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x379608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37960c:
    // 0x37960c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x37960cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x379610: 0x3e00008  jr          $ra
    ctx->pc = 0x379610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x379618u;
}
