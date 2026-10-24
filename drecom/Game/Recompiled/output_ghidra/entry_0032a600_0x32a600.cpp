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

// Function: entry_0032a600
// Address: 0x32a600 - 0x32a634
void entry_0032a600_0x32a600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032a600_0x32a600");
#endif

    switch (ctx->pc) {
        case 0x32a60cu: goto label_32a60c;
        default: break;
    }

    ctx->pc = 0x32a600u;

    // 0x32a600: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x32a600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32a604: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32A604u;
    SET_GPR_U32(ctx, 31, 0x32A60Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32A604u, 0x32A60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A60Cu;
label_32a60c:
    // 0x32a60c: 0x24540001  addiu       $s4, $v0, 0x1
    ctx->pc = 0x32a60cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32a610: 0x82032820  lb          $v1, 0x2820($s0)
    ctx->pc = 0x32a610u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 10272)));
    // 0x32a614: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x32a614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x32a618: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x32a618u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x32a61c: 0x74082a  slt         $at, $v1, $s4
    ctx->pc = 0x32a61cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x32a620: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x32A620u;
    {
        const bool branch_taken_0x32a620 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a620) {
            ctx->pc = 0x32A634u;
            return;
        }
    }
    ctx->pc = 0x32A628u;
    // 0x32a628: 0x82032820  lb          $v1, 0x2820($s0)
    ctx->pc = 0x32a628u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 10272)));
    // 0x32a62c: 0x3a63c  dsll32      $s4, $v1, 24
    ctx->pc = 0x32a62cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) << (32 + 24));
    // 0x32a630: 0x14a63f  dsra32      $s4, $s4, 24
    ctx->pc = 0x32a630u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 24));
    ctx->pc = 0x32a634u;
}
