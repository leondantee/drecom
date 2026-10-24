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

// Function: entry_0029f654
// Address: 0x29f654 - 0x29f6c0
void entry_0029f654_0x29f654(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029f654_0x29f654");
#endif

    switch (ctx->pc) {
        case 0x29f668u: goto label_29f668;
        case 0x29f69cu: goto label_29f69c;
        case 0x29f6a4u: goto label_29f6a4;
        default: break;
    }

    ctx->pc = 0x29f654u;

    // 0x29f654: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29f654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f658: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29f658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f65c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x29f65cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x29f660: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29F660u;
    SET_GPR_U32(ctx, 31, 0x29F668u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29F660u, 0x29F668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F668u;
label_29f668:
    // 0x29f668: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29f668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29f66c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x29f66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x29f670: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x29f670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x29f674: 0x90420028  lbu         $v0, 0x28($v0)
    ctx->pc = 0x29f674u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x29f678: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29f678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29f67c: 0x34460800  ori         $a2, $v0, 0x800
    ctx->pc = 0x29f67cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x29f680: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29f680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f684: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29f684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f688: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x29f688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x29f68c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x29f68cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f690: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x29f690u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x29f694: 0xc0965d0  jal         func_259740
    ctx->pc = 0x29F694u;
    SET_GPR_U32(ctx, 31, 0x29F69Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x29F694u, 0x29F69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F69Cu;
label_29f69c:
    // 0x29f69c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29F69Cu;
    SET_GPR_U32(ctx, 31, 0x29F6A4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29F69Cu, 0x29F6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F6A4u;
label_29f6a4:
    // 0x29f6a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29f6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29f6a8: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x29f6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x29f6ac: 0x2442001e  addiu       $v0, $v0, 0x1E
    ctx->pc = 0x29f6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    // 0x29f6b0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x29f6b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x29f6b4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x29f6b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x29f6b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29f6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f6bc: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x29f6bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x29f6c0u;
}
