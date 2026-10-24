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

// Function: caseD_7
// Address: 0x260324 - 0x260360
void caseD_7_0x260324(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x260324");
#endif

    switch (ctx->pc) {
        case 0x260324u: goto label_260324;
        case 0x260328u: goto label_260328;
        case 0x26032cu: goto label_26032c;
        case 0x260330u: goto label_260330;
        case 0x260334u: goto label_260334;
        case 0x260338u: goto label_260338;
        case 0x26033cu: goto label_26033c;
        case 0x260340u: goto label_260340;
        case 0x260344u: goto label_260344;
        case 0x260348u: goto label_260348;
        case 0x26034cu: goto label_26034c;
        case 0x260350u: goto label_260350;
        case 0x260354u: goto label_260354;
        case 0x260358u: goto label_260358;
        case 0x26035cu: goto label_26035c;
        default: break;
    }

    ctx->pc = 0x260324u;

label_260324:
    // 0x260324: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x260324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_260328:
    // 0x260328: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x260328u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26032c:
    // 0x26032c: 0x0  nop
    ctx->pc = 0x26032cu;
    // NOP
label_260330:
    // 0x260330: 0xe7a001dc  swc1        $f0, 0x1DC($sp)
    ctx->pc = 0x260330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 476), bits); }
label_260334:
    // 0x260334: 0x2285fffd  addi        $a1, $s4, -0x3
    ctx->pc = 0x260334u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 20), (int32_t)4294967293, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_260338:
    // 0x260338: 0x2ca10010  sltiu       $at, $a1, 0x10
    ctx->pc = 0x260338u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_26033c:
    // 0x26033c: 0x10200039  beqz        $at, . + 4 + (0x39 << 2)
label_260340:
    if (ctx->pc == 0x260340u) {
        ctx->pc = 0x260344u;
        goto label_260344;
    }
    ctx->pc = 0x26033Cu;
    {
        const bool branch_taken_0x26033c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26033c) {
            ctx->pc = 0x260424u;
            return;
        }
    }
    ctx->pc = 0x260344u;
label_260344:
    // 0x260344: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x260344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_260348:
    // 0x260348: 0x244413f0  addiu       $a0, $v0, 0x13F0
    ctx->pc = 0x260348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5104));
label_26034c:
    // 0x26034c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x26034cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_260350:
    // 0x260350: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x260350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_260354:
    // 0x260354: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x260354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_260358:
    // 0x260358: 0x800008  jr          $a0
label_26035c:
    if (ctx->pc == 0x26035Cu) {
        ctx->pc = 0x260360u;
        goto label_fallthrough_0x260358;
    }
    ctx->pc = 0x260358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260358u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x260358:
    ctx->pc = 0x260360u;
}
