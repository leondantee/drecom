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

// Function: entry_00186c1c
// Address: 0x186c1c - 0x186c64
void entry_00186c1c_0x186c1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186c1c_0x186c1c");
#endif

    switch (ctx->pc) {
        case 0x186c34u: goto label_186c34;
        case 0x186c4cu: goto label_186c4c;
        case 0x186c5cu: goto label_186c5c;
        default: break;
    }

    ctx->pc = 0x186c1cu;

    // 0x186c1c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x186c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x186c20: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x186c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x186c24: 0xc7ac0098  lwc1        $f12, 0x98($sp)
    ctx->pc = 0x186c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x186c28: 0xc7ad009c  lwc1        $f13, 0x9C($sp)
    ctx->pc = 0x186c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x186c2c: 0xc061bc0  jal         func_186F00
    ctx->pc = 0x186C2Cu;
    SET_GPR_U32(ctx, 31, 0x186C34u);
    ctx->pc = 0x186F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186F00u, 0x186C2Cu, 0x186C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186C34u;
label_186c34:
    // 0x186c34: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x186C34u;
    {
        const bool branch_taken_0x186c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186c34) {
            ctx->pc = 0x186C64u;
            return;
        }
    }
    ctx->pc = 0x186C3Cu;
    // 0x186c3c: 0x262401a0  addiu       $a0, $s1, 0x1A0
    ctx->pc = 0x186c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
    // 0x186c40: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x186c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x186c44: 0xc040c9e  jal         func_103278
    ctx->pc = 0x186C44u;
    SET_GPR_U32(ctx, 31, 0x186C4Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x186C4Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x186C4Cu) { return; }
    ctx->pc = 0x186C4Cu;
label_186c4c:
    // 0x186c4c: 0x26240190  addiu       $a0, $s1, 0x190
    ctx->pc = 0x186c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
    // 0x186c50: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x186c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x186c54: 0xc040c9e  jal         func_103278
    ctx->pc = 0x186C54u;
    SET_GPR_U32(ctx, 31, 0x186C5Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x186C5Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x186C5Cu) { return; }
    ctx->pc = 0x186C5Cu;
label_186c5c:
    // 0x186c5c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x186C5Cu;
    {
        const bool branch_taken_0x186c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186c5c) {
            ctx->pc = 0x186CACu;
            return;
        }
    }
    ctx->pc = 0x186C64u;
}
