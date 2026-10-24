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

// Function: entry_00372830
// Address: 0x372830 - 0x3728a4
void entry_00372830_0x372830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00372830_0x372830");
#endif

    switch (ctx->pc) {
        case 0x37285cu: goto label_37285c;
        case 0x372864u: goto label_372864;
        case 0x372888u: goto label_372888;
        default: break;
    }

    ctx->pc = 0x372830u;

    // 0x372830: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x372830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x372834: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x372834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372838: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x372838u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x37283c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x37283cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372840: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x372840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372844: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x372844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x372848: 0x3406b402  ori         $a2, $zero, 0xB402
    ctx->pc = 0x372848u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)46082);
    // 0x37284c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x37284cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x372850: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x372850u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x372854: 0xc0965d0  jal         func_259740
    ctx->pc = 0x372854u;
    SET_GPR_U32(ctx, 31, 0x37285Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x372854u, 0x37285Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37285Cu;
label_37285c:
    // 0x37285c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x37285Cu;
    SET_GPR_U32(ctx, 31, 0x372864u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x37285Cu, 0x372864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372864u;
label_372864:
    // 0x372864: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x372864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x372868: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x372868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x37286c: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x37286cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x372870: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x372870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x372874: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x372874u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x372878: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x372878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37287c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x37287cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x372880: 0xc067694  jal         func_19DA50
    ctx->pc = 0x372880u;
    SET_GPR_U32(ctx, 31, 0x372888u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x372880u, 0x372888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372888u;
label_372888:
    // 0x372888: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x372888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x37288c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x37288cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x372890: 0x2442001e  addiu       $v0, $v0, 0x1E
    ctx->pc = 0x372890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    // 0x372894: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x372894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x372898: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x372898u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x37289c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x37289cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3728a0: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x3728a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x3728a4u;
}
