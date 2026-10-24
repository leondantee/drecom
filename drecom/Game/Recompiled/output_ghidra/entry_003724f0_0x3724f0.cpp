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

// Function: entry_003724f0
// Address: 0x3724f0 - 0x372564
void entry_003724f0_0x3724f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003724f0_0x3724f0");
#endif

    switch (ctx->pc) {
        case 0x37251cu: goto label_37251c;
        case 0x372524u: goto label_372524;
        case 0x372548u: goto label_372548;
        default: break;
    }

    ctx->pc = 0x3724f0u;

    // 0x3724f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3724f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3724f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3724f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3724f8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x3724f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3724fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3724fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372500: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x372500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372504: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x372504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x372508: 0x3406b401  ori         $a2, $zero, 0xB401
    ctx->pc = 0x372508u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)46081);
    // 0x37250c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x37250cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x372510: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x372510u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x372514: 0xc0965d0  jal         func_259740
    ctx->pc = 0x372514u;
    SET_GPR_U32(ctx, 31, 0x37251Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x372514u, 0x37251Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37251Cu;
label_37251c:
    // 0x37251c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x37251Cu;
    SET_GPR_U32(ctx, 31, 0x372524u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x37251Cu, 0x372524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372524u;
label_372524:
    // 0x372524: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x372524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x372528: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x372528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x37252c: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x37252cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x372530: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x372530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x372534: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x372534u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x372538: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x372538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37253c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x37253cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x372540: 0xc067694  jal         func_19DA50
    ctx->pc = 0x372540u;
    SET_GPR_U32(ctx, 31, 0x372548u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x372540u, 0x372548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372548u;
label_372548:
    // 0x372548: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x372548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x37254c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x37254cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x372550: 0x2442001e  addiu       $v0, $v0, 0x1E
    ctx->pc = 0x372550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    // 0x372554: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x372554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x372558: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x372558u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x37255c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x37255cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372560: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x372560u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x372564u;
}
