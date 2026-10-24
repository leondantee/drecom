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

// Function: entry_0023b97c
// Address: 0x23b97c - 0x23b9b8
void entry_0023b97c_0x23b97c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023b97c_0x23b97c");
#endif

    switch (ctx->pc) {
        case 0x23b9a4u: goto label_23b9a4;
        default: break;
    }

    ctx->pc = 0x23b97cu;

    // 0x23b97c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23b97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23b980: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x23b980u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x23b984: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23b984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23b988: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x23b988u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x23b98c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23b98cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b990: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23b990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23b994: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x23b994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x23b998: 0x24100020  addiu       $s0, $zero, 0x20
    ctx->pc = 0x23b998u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x23b99c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23B99Cu;
    SET_GPR_U32(ctx, 31, 0x23B9A4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23B99Cu, 0x23B9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B9A4u;
label_23b9a4:
    // 0x23b9a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23b9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23b9a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23b9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23b9ac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23B9ACu;
    {
        const bool branch_taken_0x23b9ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b9ac) {
            ctx->pc = 0x23B9B8u;
            return;
        }
    }
    ctx->pc = 0x23B9B4u;
    // 0x23b9b4: 0x24100021  addiu       $s0, $zero, 0x21
    ctx->pc = 0x23b9b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->pc = 0x23b9b8u;
}
