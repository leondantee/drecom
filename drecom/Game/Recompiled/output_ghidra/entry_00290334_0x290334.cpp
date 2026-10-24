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

// Function: entry_00290334
// Address: 0x290334 - 0x29036c
void entry_00290334_0x290334(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00290334_0x290334");
#endif

    switch (ctx->pc) {
        case 0x290350u: goto label_290350;
        default: break;
    }

    ctx->pc = 0x290334u;

    // 0x290334: 0xc6015e00  lwc1        $f1, 0x5E00($s0)
    ctx->pc = 0x290334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290338: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x290338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x29033c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29033cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x290340: 0x0  nop
    ctx->pc = 0x290340u;
    // NOP
    // 0x290344: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x290344u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x290348: 0xc045630  jal         func_1158C0
    ctx->pc = 0x290348u;
    SET_GPR_U32(ctx, 31, 0x290350u);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x290348u, 0x290350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290350u;
label_290350:
    // 0x290350: 0x6600006  bltz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x290350u;
    {
        const bool branch_taken_0x290350 = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x290350) {
            ctx->pc = 0x29036Cu;
            return;
        }
    }
    ctx->pc = 0x290358u;
    // 0x290358: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x290358u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29035c: 0x0  nop
    ctx->pc = 0x29035cu;
    // NOP
    // 0x290360: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x290360u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x290364: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x290364u;
    {
        const bool branch_taken_0x290364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290364) {
            ctx->pc = 0x290388u;
            return;
        }
    }
    ctx->pc = 0x29036Cu;
}
