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

// Function: caseD_8
// Address: 0x1bb5fc - 0x1bb668
void caseD_8_0x1bb5fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x1bb5fc");
#endif

    switch (ctx->pc) {
        case 0x1bb61cu: goto label_1bb61c;
        default: break;
    }

    ctx->pc = 0x1bb5fcu;

    // 0x1bb5fc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb600: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bb600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb604: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1bb604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1bb608: 0x24060098  addiu       $a2, $zero, 0x98
    ctx->pc = 0x1bb608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x1bb60c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bb60cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb610: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bb610u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bb614: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BB614u;
    SET_GPR_U32(ctx, 31, 0x1BB61Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BB614u, 0x1BB61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB61Cu;
label_1bb61c:
    // 0x1bb61c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb620: 0xac401b60  sw          $zero, 0x1B60($v0)
    ctx->pc = 0x1bb620u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 0));
    // 0x1bb624: 0x3c044040  lui         $a0, 0x4040
    ctx->pc = 0x1bb624u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16448 << 16));
    // 0x1bb628: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1bb628u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb62c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb630: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x1bb630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x1bb634: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb638: 0x8c421b64  lw          $v0, 0x1B64($v0)
    ctx->pc = 0x1bb638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7012)));
    // 0x1bb63c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1BB63Cu;
    {
        const bool branch_taken_0x1bb63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb63c) {
            ctx->pc = 0x1BB668u;
            return;
        }
    }
    ctx->pc = 0x1BB644u;
    // 0x1bb644: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1bb644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x1bb648: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1bb648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1bb64c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bb64cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bb650: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bb650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb654: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb658: 0x24640180  addiu       $a0, $v1, 0x180
    ctx->pc = 0x1bb658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x1bb65c: 0x24450180  addiu       $a1, $v0, 0x180
    ctx->pc = 0x1bb65cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x1bb660: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1BB660u;
    SET_GPR_U32(ctx, 31, 0x1BB668u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1BB668u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1BB668u) { return; }
    ctx->pc = 0x1BB668u;
}
