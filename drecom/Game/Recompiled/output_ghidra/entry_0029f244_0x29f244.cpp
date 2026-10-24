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

// Function: entry_0029f244
// Address: 0x29f244 - 0x29f280
void entry_0029f244_0x29f244(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029f244_0x29f244");
#endif

    switch (ctx->pc) {
        case 0x29f24cu: goto label_29f24c;
        default: break;
    }

    ctx->pc = 0x29f244u;

    // 0x29f244: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29F244u;
    SET_GPR_U32(ctx, 31, 0x29F24Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29F244u, 0x29F24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F24Cu;
label_29f24c:
    // 0x29f24c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29f24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29f250: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x29f250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x29f254: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x29f254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x29f258: 0x90420038  lbu         $v0, 0x38($v0)
    ctx->pc = 0x29f258u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x29f25c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29f25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29f260: 0x34460800  ori         $a2, $v0, 0x800
    ctx->pc = 0x29f260u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x29f264: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29f264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f268: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29f268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29f26c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x29f26cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x29f270: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x29f270u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f274: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x29f274u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x29f278: 0xc0965d0  jal         func_259740
    ctx->pc = 0x29F278u;
    SET_GPR_U32(ctx, 31, 0x29F280u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x29F278u, 0x29F280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F280u;
}
