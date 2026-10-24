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

// Function: caseD_5
// Address: 0x19a234 - 0x19a284
void caseD_5_0x19a234(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x19a234");
#endif

    switch (ctx->pc) {
        case 0x19a244u: goto label_19a244;
        case 0x19a264u: goto label_19a264;
        case 0x19a270u: goto label_19a270;
        case 0x19a27cu: goto label_19a27c;
        default: break;
    }

    ctx->pc = 0x19a234u;

    // 0x19a234: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x19a234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19a238: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19a238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19a23c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x19A23Cu;
    SET_GPR_U32(ctx, 31, 0x19A244u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x19A23Cu, 0x19A244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A244u;
label_19a244:
    // 0x19a244: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x19a244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19a248: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x19a248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19a24c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19a250: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x19a250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x19a254: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x19a254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x19a258: 0xc44c01a8  lwc1        $f12, 0x1A8($v0)
    ctx->pc = 0x19a258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19a25c: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x19A25Cu;
    SET_GPR_U32(ctx, 31, 0x19A264u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x19A264u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19A264u) { return; }
    ctx->pc = 0x19A264u;
label_19a264:
    // 0x19a264: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x19a264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19a268: 0xc05cd10  jal         func_173440
    ctx->pc = 0x19A268u;
    SET_GPR_U32(ctx, 31, 0x19A270u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x19A268u, 0x19A270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A270u;
label_19a270:
    // 0x19a270: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x19a270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19a274: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x19A274u;
    SET_GPR_U32(ctx, 31, 0x19A27Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x19A274u, 0x19A27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A27Cu;
label_19a27c:
    // 0x19a27c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x19a27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19a280: 0x0  nop
    ctx->pc = 0x19a280u;
    // NOP
    ctx->pc = 0x19a284u;
}
