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

// Function: entry_003656e0
// Address: 0x3656e0 - 0x365754
void entry_003656e0_0x3656e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003656e0_0x3656e0");
#endif

    switch (ctx->pc) {
        case 0x3656f0u: goto label_3656f0;
        case 0x3656fcu: goto label_3656fc;
        case 0x36570cu: goto label_36570c;
        case 0x365718u: goto label_365718;
        default: break;
    }

    ctx->pc = 0x3656e0u;

    // 0x3656e0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3656e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3656e4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3656e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3656e8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3656E8u;
    SET_GPR_U32(ctx, 31, 0x3656F0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3656E8u, 0x3656F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3656F0u;
label_3656f0:
    // 0x3656f0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3656f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3656f4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x3656F4u;
    SET_GPR_U32(ctx, 31, 0x3656FCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x3656F4u, 0x3656FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3656FCu;
label_3656fc:
    // 0x3656fc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3656fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365700: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x365700u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x365704: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x365704u;
    SET_GPR_U32(ctx, 31, 0x36570Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x365704u, 0x36570Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36570Cu;
label_36570c:
    // 0x36570c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36570cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365710: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x365710u;
    SET_GPR_U32(ctx, 31, 0x365718u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x365710u, 0x365718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365718u;
label_365718:
    // 0x365718: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x365718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36571c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x36571cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x365720: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x365720u;
    {
        const bool branch_taken_0x365720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x365720) {
            ctx->pc = 0x365754u;
            return;
        }
    }
    ctx->pc = 0x365728u;
    // 0x365728: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x365728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36572c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36572cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365730: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x365730u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x365734: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x365734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365738: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x365738u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x36573c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36573cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365740: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x365740u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x365744: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x365744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365748: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x365748u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36574c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36574cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365750: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x365750u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x365754u;
}
