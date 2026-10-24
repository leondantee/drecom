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

// Function: entry_00186758
// Address: 0x186758 - 0x1867a0
void entry_00186758_0x186758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186758_0x186758");
#endif

    switch (ctx->pc) {
        case 0x186770u: goto label_186770;
        case 0x186788u: goto label_186788;
        case 0x186798u: goto label_186798;
        default: break;
    }

    ctx->pc = 0x186758u;

    // 0x186758: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x186758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x18675c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x18675cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x186760: 0xc7ac0098  lwc1        $f12, 0x98($sp)
    ctx->pc = 0x186760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x186764: 0xc7ad009c  lwc1        $f13, 0x9C($sp)
    ctx->pc = 0x186764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x186768: 0xc061bc0  jal         func_186F00
    ctx->pc = 0x186768u;
    SET_GPR_U32(ctx, 31, 0x186770u);
    ctx->pc = 0x186F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186F00u, 0x186768u, 0x186770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186770u;
label_186770:
    // 0x186770: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x186770u;
    {
        const bool branch_taken_0x186770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186770) {
            ctx->pc = 0x1867A0u;
            return;
        }
    }
    ctx->pc = 0x186778u;
    // 0x186778: 0x262401a0  addiu       $a0, $s1, 0x1A0
    ctx->pc = 0x186778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
    // 0x18677c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x18677cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x186780: 0xc040c9e  jal         func_103278
    ctx->pc = 0x186780u;
    SET_GPR_U32(ctx, 31, 0x186788u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x186788u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x186788u) { return; }
    ctx->pc = 0x186788u;
label_186788:
    // 0x186788: 0x26240190  addiu       $a0, $s1, 0x190
    ctx->pc = 0x186788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
    // 0x18678c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x18678cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x186790: 0xc040c9e  jal         func_103278
    ctx->pc = 0x186790u;
    SET_GPR_U32(ctx, 31, 0x186798u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x186798u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x186798u) { return; }
    ctx->pc = 0x186798u;
label_186798:
    // 0x186798: 0x10000144  b           . + 4 + (0x144 << 2)
    ctx->pc = 0x186798u;
    {
        const bool branch_taken_0x186798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186798) {
            ctx->pc = 0x186CACu;
            return;
        }
    }
    ctx->pc = 0x1867A0u;
}
