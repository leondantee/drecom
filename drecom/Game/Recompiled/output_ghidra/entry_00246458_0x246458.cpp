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

// Function: entry_00246458
// Address: 0x246458 - 0x2464c0
void entry_00246458_0x246458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00246458_0x246458");
#endif

    switch (ctx->pc) {
        case 0x246468u: goto label_246468;
        case 0x246478u: goto label_246478;
        case 0x2464acu: goto label_2464ac;
        default: break;
    }

    ctx->pc = 0x246458u;

    // 0x246458: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x246458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24645c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x24645cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x246460: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x246460u;
    SET_GPR_U32(ctx, 31, 0x246468u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x246460u, 0x246468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246468u;
label_246468:
    // 0x246468: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x246468u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24646c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x24646cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x246470: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x246470u;
    SET_GPR_U32(ctx, 31, 0x246478u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x246470u, 0x246478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246478u;
label_246478:
    // 0x246478: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x246478u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24647c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24647cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x246480: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x246480u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x246484: 0x106000f1  beqz        $v1, . + 4 + (0xF1 << 2)
    ctx->pc = 0x246484u;
    {
        const bool branch_taken_0x246484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x246484) {
            ctx->pc = 0x24684Cu;
            return;
        }
    }
    ctx->pc = 0x24648Cu;
    // 0x24648c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24648cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x246490: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x246490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x246494: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x246494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x246498: 0x24060a24  addiu       $a2, $zero, 0xA24
    ctx->pc = 0x246498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2596));
    // 0x24649c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x24649cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2464a0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2464a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2464a4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2464A4u;
    SET_GPR_U32(ctx, 31, 0x2464ACu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2464A4u, 0x2464ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2464ACu;
label_2464ac:
    // 0x2464ac: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2464acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2464b0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2464b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2464b4: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2464b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2464b8: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x2464B8u;
    {
        const bool branch_taken_0x2464b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2464b8) {
            ctx->pc = 0x24684Cu;
            return;
        }
    }
    ctx->pc = 0x2464C0u;
}
