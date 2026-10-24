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
// Address: 0x367958 - 0x3679a8
void caseD_4_0x367958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x367958");
#endif

    switch (ctx->pc) {
        case 0x367978u: goto label_367978;
        case 0x367980u: goto label_367980;
        default: break;
    }

    ctx->pc = 0x367958u;

    // 0x367958: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x367958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36795c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36795cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367960: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x367960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x367964: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x367964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x367968: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x367968u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36796c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36796cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x367970: 0xc0965d0  jal         func_259740
    ctx->pc = 0x367970u;
    SET_GPR_U32(ctx, 31, 0x367978u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x367970u, 0x367978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367978u;
label_367978:
    // 0x367978: 0xc067694  jal         func_19DA50
    ctx->pc = 0x367978u;
    SET_GPR_U32(ctx, 31, 0x367980u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x367978u, 0x367980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367980u;
label_367980:
    // 0x367980: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x367980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x367984: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x367984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x367988: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x367988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x36798c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x36798cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x367990: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x367990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367994: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x367994u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x367998: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x367998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36799c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x36799cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3679a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3679a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3679a4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x3679a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x3679a8u;
}
