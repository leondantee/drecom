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

// Function: entry_001868b4
// Address: 0x1868b4 - 0x1868fc
void entry_001868b4_0x1868b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001868b4_0x1868b4");
#endif

    switch (ctx->pc) {
        case 0x1868ccu: goto label_1868cc;
        case 0x1868e4u: goto label_1868e4;
        case 0x1868f4u: goto label_1868f4;
        default: break;
    }

    ctx->pc = 0x1868b4u;

    // 0x1868b4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1868b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1868b8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1868b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1868bc: 0xc7ac0098  lwc1        $f12, 0x98($sp)
    ctx->pc = 0x1868bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1868c0: 0xc7ad009c  lwc1        $f13, 0x9C($sp)
    ctx->pc = 0x1868c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1868c4: 0xc061bc0  jal         func_186F00
    ctx->pc = 0x1868C4u;
    SET_GPR_U32(ctx, 31, 0x1868CCu);
    ctx->pc = 0x186F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186F00u, 0x1868C4u, 0x1868CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1868CCu;
label_1868cc:
    // 0x1868cc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1868CCu;
    {
        const bool branch_taken_0x1868cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1868cc) {
            ctx->pc = 0x1868FCu;
            return;
        }
    }
    ctx->pc = 0x1868D4u;
    // 0x1868d4: 0x262401a0  addiu       $a0, $s1, 0x1A0
    ctx->pc = 0x1868d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
    // 0x1868d8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1868d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1868dc: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1868DCu;
    SET_GPR_U32(ctx, 31, 0x1868E4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1868E4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1868E4u) { return; }
    ctx->pc = 0x1868E4u;
label_1868e4:
    // 0x1868e4: 0x26240190  addiu       $a0, $s1, 0x190
    ctx->pc = 0x1868e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
    // 0x1868e8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1868e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1868ec: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1868ECu;
    SET_GPR_U32(ctx, 31, 0x1868F4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1868F4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1868F4u) { return; }
    ctx->pc = 0x1868F4u;
label_1868f4:
    // 0x1868f4: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x1868F4u;
    {
        const bool branch_taken_0x1868f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1868f4) {
            ctx->pc = 0x186CACu;
            return;
        }
    }
    ctx->pc = 0x1868FCu;
}
