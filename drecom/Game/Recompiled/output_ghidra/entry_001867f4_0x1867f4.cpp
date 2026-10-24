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

// Function: entry_001867f4
// Address: 0x1867f4 - 0x18683c
void entry_001867f4_0x1867f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001867f4_0x1867f4");
#endif

    switch (ctx->pc) {
        case 0x18680cu: goto label_18680c;
        case 0x186824u: goto label_186824;
        case 0x186834u: goto label_186834;
        default: break;
    }

    ctx->pc = 0x1867f4u;

    // 0x1867f4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1867f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1867f8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1867f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1867fc: 0xc7ac0098  lwc1        $f12, 0x98($sp)
    ctx->pc = 0x1867fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x186800: 0xc7ad009c  lwc1        $f13, 0x9C($sp)
    ctx->pc = 0x186800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x186804: 0xc061bc0  jal         func_186F00
    ctx->pc = 0x186804u;
    SET_GPR_U32(ctx, 31, 0x18680Cu);
    ctx->pc = 0x186F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186F00u, 0x186804u, 0x18680Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18680Cu;
label_18680c:
    // 0x18680c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18680Cu;
    {
        const bool branch_taken_0x18680c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18680c) {
            ctx->pc = 0x18683Cu;
            return;
        }
    }
    ctx->pc = 0x186814u;
    // 0x186814: 0x262401a0  addiu       $a0, $s1, 0x1A0
    ctx->pc = 0x186814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
    // 0x186818: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x186818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x18681c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x18681Cu;
    SET_GPR_U32(ctx, 31, 0x186824u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x186824u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x186824u) { return; }
    ctx->pc = 0x186824u;
label_186824:
    // 0x186824: 0x26240190  addiu       $a0, $s1, 0x190
    ctx->pc = 0x186824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
    // 0x186828: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x186828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x18682c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x18682Cu;
    SET_GPR_U32(ctx, 31, 0x186834u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x186834u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x186834u) { return; }
    ctx->pc = 0x186834u;
label_186834:
    // 0x186834: 0x1000011d  b           . + 4 + (0x11D << 2)
    ctx->pc = 0x186834u;
    {
        const bool branch_taken_0x186834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186834) {
            ctx->pc = 0x186CACu;
            return;
        }
    }
    ctx->pc = 0x18683Cu;
}
