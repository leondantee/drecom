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

// Function: entry_0030e2fc
// Address: 0x30e2fc - 0x30e380
void entry_0030e2fc_0x30e2fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030e2fc_0x30e2fc");
#endif

    switch (ctx->pc) {
        case 0x30e35cu: goto label_30e35c;
        default: break;
    }

    ctx->pc = 0x30e2fcu;

    // 0x30e2fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e300: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x30e300u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x30e304: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x30e304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x30e308: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x30e308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x30e30c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x30E30Cu;
    {
        const bool branch_taken_0x30e30c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e30c) {
            ctx->pc = 0x30E380u;
            return;
        }
    }
    ctx->pc = 0x30E314u;
    // 0x30e314: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e318: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x30e318u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x30e31c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x30E31Cu;
    {
        const bool branch_taken_0x30e31c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30e31c) {
            ctx->pc = 0x30E380u;
            return;
        }
    }
    ctx->pc = 0x30E324u;
    // 0x30e324: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30e324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30e328: 0x24429990  addiu       $v0, $v0, -0x6670
    ctx->pc = 0x30e328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941072));
    // 0x30e32c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x30e32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30e330: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x30e330u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399990u));
    // 0x30e334: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x30e334u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x30e338: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e33c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30e33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30e340: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30e340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e344: 0x24450840  addiu       $a1, $v0, 0x840
    ctx->pc = 0x30e344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
    // 0x30e348: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x30e348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30e34c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x30e34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x30e350: 0x24478d50  addiu       $a3, $v0, -0x72B0
    ctx->pc = 0x30e350u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937936));
    // 0x30e354: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x30E354u;
    SET_GPR_U32(ctx, 31, 0x30E35Cu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x30E354u, 0x30E35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E35Cu;
label_30e35c:
    // 0x30e35c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x30e35cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30e360: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30E360u;
    {
        const bool branch_taken_0x30e360 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e360) {
            ctx->pc = 0x30E380u;
            return;
        }
    }
    ctx->pc = 0x30E368u;
    // 0x30e368: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30e368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e36c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e370: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x30e370u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x30e374: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30e374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e378: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e37c: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x30e37cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x30e380u;
}
