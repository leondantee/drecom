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

// Function: entry_00186abc
// Address: 0x186abc - 0x186b04
void entry_00186abc_0x186abc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186abc_0x186abc");
#endif

    switch (ctx->pc) {
        case 0x186ad4u: goto label_186ad4;
        case 0x186aecu: goto label_186aec;
        case 0x186afcu: goto label_186afc;
        default: break;
    }

    ctx->pc = 0x186abcu;

    // 0x186abc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x186abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x186ac0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x186ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x186ac4: 0xc7ac0098  lwc1        $f12, 0x98($sp)
    ctx->pc = 0x186ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x186ac8: 0xc7ad009c  lwc1        $f13, 0x9C($sp)
    ctx->pc = 0x186ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x186acc: 0xc061bc0  jal         func_186F00
    ctx->pc = 0x186ACCu;
    SET_GPR_U32(ctx, 31, 0x186AD4u);
    ctx->pc = 0x186F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186F00u, 0x186ACCu, 0x186AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186AD4u;
label_186ad4:
    // 0x186ad4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x186AD4u;
    {
        const bool branch_taken_0x186ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186ad4) {
            ctx->pc = 0x186B04u;
            return;
        }
    }
    ctx->pc = 0x186ADCu;
    // 0x186adc: 0x262401a0  addiu       $a0, $s1, 0x1A0
    ctx->pc = 0x186adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
    // 0x186ae0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x186ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x186ae4: 0xc040c9e  jal         func_103278
    ctx->pc = 0x186AE4u;
    SET_GPR_U32(ctx, 31, 0x186AECu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x186AECu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x186AECu) { return; }
    ctx->pc = 0x186AECu;
label_186aec:
    // 0x186aec: 0x26240190  addiu       $a0, $s1, 0x190
    ctx->pc = 0x186aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
    // 0x186af0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x186af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x186af4: 0xc040c9e  jal         func_103278
    ctx->pc = 0x186AF4u;
    SET_GPR_U32(ctx, 31, 0x186AFCu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x186AFCu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x186AFCu) { return; }
    ctx->pc = 0x186AFCu;
label_186afc:
    // 0x186afc: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x186AFCu;
    {
        const bool branch_taken_0x186afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186afc) {
            ctx->pc = 0x186CACu;
            return;
        }
    }
    ctx->pc = 0x186B04u;
}
