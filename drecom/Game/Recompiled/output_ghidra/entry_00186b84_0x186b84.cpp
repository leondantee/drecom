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

// Function: entry_00186b84
// Address: 0x186b84 - 0x186bcc
void entry_00186b84_0x186b84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186b84_0x186b84");
#endif

    switch (ctx->pc) {
        case 0x186b9cu: goto label_186b9c;
        case 0x186bb4u: goto label_186bb4;
        case 0x186bc4u: goto label_186bc4;
        default: break;
    }

    ctx->pc = 0x186b84u;

    // 0x186b84: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x186b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x186b88: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x186b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x186b8c: 0xc7ac0098  lwc1        $f12, 0x98($sp)
    ctx->pc = 0x186b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x186b90: 0xc7ad009c  lwc1        $f13, 0x9C($sp)
    ctx->pc = 0x186b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x186b94: 0xc061bc0  jal         func_186F00
    ctx->pc = 0x186B94u;
    SET_GPR_U32(ctx, 31, 0x186B9Cu);
    ctx->pc = 0x186F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186F00u, 0x186B94u, 0x186B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186B9Cu;
label_186b9c:
    // 0x186b9c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x186B9Cu;
    {
        const bool branch_taken_0x186b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186b9c) {
            ctx->pc = 0x186BCCu;
            return;
        }
    }
    ctx->pc = 0x186BA4u;
    // 0x186ba4: 0x262401a0  addiu       $a0, $s1, 0x1A0
    ctx->pc = 0x186ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
    // 0x186ba8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x186ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x186bac: 0xc040c9e  jal         func_103278
    ctx->pc = 0x186BACu;
    SET_GPR_U32(ctx, 31, 0x186BB4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x186BB4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x186BB4u) { return; }
    ctx->pc = 0x186BB4u;
label_186bb4:
    // 0x186bb4: 0x26240190  addiu       $a0, $s1, 0x190
    ctx->pc = 0x186bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
    // 0x186bb8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x186bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x186bbc: 0xc040c9e  jal         func_103278
    ctx->pc = 0x186BBCu;
    SET_GPR_U32(ctx, 31, 0x186BC4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x186BC4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x186BC4u) { return; }
    ctx->pc = 0x186BC4u;
label_186bc4:
    // 0x186bc4: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x186BC4u;
    {
        const bool branch_taken_0x186bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186bc4) {
            ctx->pc = 0x186CACu;
            return;
        }
    }
    ctx->pc = 0x186BCCu;
}
