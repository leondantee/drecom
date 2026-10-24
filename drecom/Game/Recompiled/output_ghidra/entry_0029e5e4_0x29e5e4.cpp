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

// Function: entry_0029e5e4
// Address: 0x29e5e4 - 0x29e620
void entry_0029e5e4_0x29e5e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029e5e4_0x29e5e4");
#endif

    switch (ctx->pc) {
        case 0x29e5ecu: goto label_29e5ec;
        default: break;
    }

    ctx->pc = 0x29e5e4u;

    // 0x29e5e4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29E5E4u;
    SET_GPR_U32(ctx, 31, 0x29E5ECu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29E5E4u, 0x29E5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E5ECu;
label_29e5ec:
    // 0x29e5ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29e5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29e5f0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x29e5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x29e5f4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x29e5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x29e5f8: 0x90420040  lbu         $v0, 0x40($v0)
    ctx->pc = 0x29e5f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x29e5fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29e5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29e600: 0x34460800  ori         $a2, $v0, 0x800
    ctx->pc = 0x29e600u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x29e604: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29e604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e608: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29e608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e60c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x29e60cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x29e610: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x29e610u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e614: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x29e614u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x29e618: 0xc0965d0  jal         func_259740
    ctx->pc = 0x29E618u;
    SET_GPR_U32(ctx, 31, 0x29E620u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x29E618u, 0x29E620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E620u;
}
