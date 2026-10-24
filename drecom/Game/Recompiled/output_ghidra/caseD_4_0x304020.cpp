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

// Function: caseD_4
// Address: 0x304020 - 0x304060
void caseD_4_0x304020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x304020");
#endif

    switch (ctx->pc) {
        case 0x304040u: goto label_304040;
        default: break;
    }

    ctx->pc = 0x304020u;

    // 0x304020: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x304020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304024: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x304024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304028: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x304028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x30402c: 0x24061431  addiu       $a2, $zero, 0x1431
    ctx->pc = 0x30402cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5169));
    // 0x304030: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x304030u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304034: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x304034u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x304038: 0xc0965d0  jal         func_259740
    ctx->pc = 0x304038u;
    SET_GPR_U32(ctx, 31, 0x304040u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x304038u, 0x304040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304040u;
label_304040:
    // 0x304040: 0x3c02c320  lui         $v0, 0xC320
    ctx->pc = 0x304040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49952 << 16));
    // 0x304044: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x304044u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304048: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x304048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30404c: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x30404cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x304050: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x304050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x304054: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x304054u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x304058: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x304058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30405c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x30405cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x304060u;
}
