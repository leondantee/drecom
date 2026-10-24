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

// Function: caseD_3
// Address: 0x230728 - 0x230784
void caseD_3_0x230728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x230728");
#endif

    switch (ctx->pc) {
        case 0x230758u: goto label_230758;
        default: break;
    }

    ctx->pc = 0x230728u;

    // 0x230728: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x230728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x23072c: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x23072cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230730: 0x3c0246ea  lui         $v0, 0x46EA
    ctx->pc = 0x230730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18154 << 16));
    // 0x230734: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x230734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x230738: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23073c: 0x0  nop
    ctx->pc = 0x23073cu;
    // NOP
    // 0x230740: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x230740u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x230744: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x230744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x230748: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x230748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x23074c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x23074cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x230750: 0xc097b94  jal         func_25EE50
    ctx->pc = 0x230750u;
    SET_GPR_U32(ctx, 31, 0x230758u);
    ctx->pc = 0x25EE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EE50u, 0x230750u, 0x230758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230758u;
label_230758:
    // 0x230758: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x230758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23075c: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x23075cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x230760: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x230760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x230764: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x230764u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x230768: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x230768u;
    {
        const bool branch_taken_0x230768 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x230768) {
            ctx->pc = 0x230794u;
            return;
        }
    }
    ctx->pc = 0x230770u;
    // 0x230770: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x230770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x230774: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x230774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x230778: 0xa0650002  sb          $a1, 0x2($v1)
    ctx->pc = 0x230778u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x23077c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23077Cu;
    {
        const bool branch_taken_0x23077c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23077c) {
            ctx->pc = 0x230794u;
            return;
        }
    }
    ctx->pc = 0x230784u;
}
