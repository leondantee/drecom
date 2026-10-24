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

// Function: caseD_4
// Address: 0x367cd4 - 0x367d24
void caseD_4_0x367cd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x367cd4");
#endif

    switch (ctx->pc) {
        case 0x367cf4u: goto label_367cf4;
        case 0x367cfcu: goto label_367cfc;
        default: break;
    }

    ctx->pc = 0x367cd4u;

    // 0x367cd4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x367cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367cd8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367cdc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x367cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x367ce0: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x367ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x367ce4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x367ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x367ce8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x367ce8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x367cec: 0xc0965d0  jal         func_259740
    ctx->pc = 0x367CECu;
    SET_GPR_U32(ctx, 31, 0x367CF4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x367CECu, 0x367CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367CF4u;
label_367cf4:
    // 0x367cf4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x367CF4u;
    SET_GPR_U32(ctx, 31, 0x367CFCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x367CF4u, 0x367CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367CFCu;
label_367cfc:
    // 0x367cfc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x367cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x367d00: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x367d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x367d04: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x367d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x367d08: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x367d08u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x367d0c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x367d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367d10: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x367d10u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x367d14: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x367d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367d18: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x367d18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x367d1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x367d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x367d20: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x367d20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x367d24u;
}
