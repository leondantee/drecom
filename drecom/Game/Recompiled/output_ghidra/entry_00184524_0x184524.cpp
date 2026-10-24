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

// Function: entry_00184524
// Address: 0x184524 - 0x184574
void entry_00184524_0x184524(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184524_0x184524");
#endif

    switch (ctx->pc) {
        case 0x18453cu: goto label_18453c;
        case 0x184554u: goto label_184554;
        default: break;
    }

    ctx->pc = 0x184524u;

    // 0x184524: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x184524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x184528: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x184528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18452c: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x18452cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x184530: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x184530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x184534: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x184534u;
    SET_GPR_U32(ctx, 31, 0x18453Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x184534u, 0x18453Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18453Cu;
label_18453c:
    // 0x18453c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x18453cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x184540: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x184540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x184544: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x184544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x184548: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x184548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18454c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x18454Cu;
    SET_GPR_U32(ctx, 31, 0x184554u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x18454Cu, 0x184554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184554u;
label_184554:
    // 0x184554: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x184554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x184558: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x184558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18455c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x18455cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x184560: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x184560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x184564: 0xc4400054  lwc1        $f0, 0x54($v0)
    ctx->pc = 0x184564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184568: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x184568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x18456c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x18456Cu;
    {
        const bool branch_taken_0x18456c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18456c) {
            ctx->pc = 0x18459Cu;
            return;
        }
    }
    ctx->pc = 0x184574u;
}
