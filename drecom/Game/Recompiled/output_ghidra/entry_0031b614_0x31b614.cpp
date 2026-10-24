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

// Function: entry_0031b614
// Address: 0x31b614 - 0x31b66c
void entry_0031b614_0x31b614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031b614_0x31b614");
#endif

    switch (ctx->pc) {
        case 0x31b630u: goto label_31b630;
        case 0x31b648u: goto label_31b648;
        case 0x31b664u: goto label_31b664;
        default: break;
    }

    ctx->pc = 0x31b614u;

    // 0x31b614: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31b614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b618: 0x8c4412ac  lw          $a0, 0x12AC($v0)
    ctx->pc = 0x31b618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
    // 0x31b61c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31b61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b620: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x31b620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x31b624: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x31b624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31b628: 0xc05db20  jal         func_176C80
    ctx->pc = 0x31B628u;
    SET_GPR_U32(ctx, 31, 0x31B630u);
    ctx->pc = 0x176C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C80u, 0x31B628u, 0x31B630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B630u;
label_31b630:
    // 0x31b630: 0x3c02457a  lui         $v0, 0x457A
    ctx->pc = 0x31b630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17786 << 16));
    // 0x31b634: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x31b634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31b638: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31b638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b63c: 0x8c4412ac  lw          $a0, 0x12AC($v0)
    ctx->pc = 0x31b63cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
    // 0x31b640: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x31B640u;
    SET_GPR_U32(ctx, 31, 0x31B648u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x31B640u, 0x31B648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B648u;
label_31b648:
    // 0x31b648: 0x3c02463b  lui         $v0, 0x463B
    ctx->pc = 0x31b648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17979 << 16));
    // 0x31b64c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x31b64cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x31b650: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x31b650u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31b654: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31b654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b658: 0x8c4412ac  lw          $a0, 0x12AC($v0)
    ctx->pc = 0x31b658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
    // 0x31b65c: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x31B65Cu;
    SET_GPR_U32(ctx, 31, 0x31B664u);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x31B65Cu, 0x31B664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B664u;
label_31b664:
    // 0x31b664: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x31B664u;
    {
        const bool branch_taken_0x31b664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b664) {
            ctx->pc = 0x31B94Cu;
            return;
        }
    }
    ctx->pc = 0x31B66Cu;
}
