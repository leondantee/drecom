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

// Function: entry_0013282c
// Address: 0x13282c - 0x132878
void entry_0013282c_0x13282c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013282c_0x13282c");
#endif

    switch (ctx->pc) {
        case 0x132850u: goto label_132850;
        default: break;
    }

    ctx->pc = 0x13282cu;

    // 0x13282c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x13282cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132830: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x132830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132834: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132838: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x132838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13283c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x13283cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x132840: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x132840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x132844: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132848: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x132848u;
    SET_GPR_U32(ctx, 31, 0x132850u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x132848u, 0x132850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132850u;
label_132850:
    // 0x132850: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132854: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x132854u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x132858: 0x106000c7  beqz        $v1, . + 4 + (0xC7 << 2)
    ctx->pc = 0x132858u;
    {
        const bool branch_taken_0x132858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x132858) {
            ctx->pc = 0x132B78u;
            return;
        }
    }
    ctx->pc = 0x132860u;
    // 0x132860: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132864: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x132864u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x132868: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x132868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13286c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x13286cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x132870: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x132870u;
    {
        const bool branch_taken_0x132870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132870) {
            ctx->pc = 0x132B78u;
            return;
        }
    }
    ctx->pc = 0x132878u;
}
