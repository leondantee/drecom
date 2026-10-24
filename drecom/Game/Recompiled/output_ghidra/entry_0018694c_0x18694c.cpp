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

// Function: entry_0018694c
// Address: 0x18694c - 0x186994
void entry_0018694c_0x18694c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018694c_0x18694c");
#endif

    switch (ctx->pc) {
        case 0x186964u: goto label_186964;
        case 0x18697cu: goto label_18697c;
        case 0x18698cu: goto label_18698c;
        default: break;
    }

    ctx->pc = 0x18694cu;

    // 0x18694c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x18694cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x186950: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x186950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x186954: 0xc7ac0098  lwc1        $f12, 0x98($sp)
    ctx->pc = 0x186954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x186958: 0xc7ad009c  lwc1        $f13, 0x9C($sp)
    ctx->pc = 0x186958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x18695c: 0xc061bc0  jal         func_186F00
    ctx->pc = 0x18695Cu;
    SET_GPR_U32(ctx, 31, 0x186964u);
    ctx->pc = 0x186F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186F00u, 0x18695Cu, 0x186964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186964u;
label_186964:
    // 0x186964: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x186964u;
    {
        const bool branch_taken_0x186964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186964) {
            ctx->pc = 0x186994u;
            return;
        }
    }
    ctx->pc = 0x18696Cu;
    // 0x18696c: 0x262401a0  addiu       $a0, $s1, 0x1A0
    ctx->pc = 0x18696cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
    // 0x186970: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x186970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x186974: 0xc040c9e  jal         func_103278
    ctx->pc = 0x186974u;
    SET_GPR_U32(ctx, 31, 0x18697Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x18697Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18697Cu) { return; }
    ctx->pc = 0x18697Cu;
label_18697c:
    // 0x18697c: 0x26240190  addiu       $a0, $s1, 0x190
    ctx->pc = 0x18697cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
    // 0x186980: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x186980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x186984: 0xc040c9e  jal         func_103278
    ctx->pc = 0x186984u;
    SET_GPR_U32(ctx, 31, 0x18698Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x18698Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18698Cu) { return; }
    ctx->pc = 0x18698Cu;
label_18698c:
    // 0x18698c: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x18698Cu;
    {
        const bool branch_taken_0x18698c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18698c) {
            ctx->pc = 0x186CACu;
            return;
        }
    }
    ctx->pc = 0x186994u;
}
