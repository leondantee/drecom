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
// Address: 0x1f77ec - 0x1f785c
void caseD_3_0x1f77ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1f77ec");
#endif

    switch (ctx->pc) {
        case 0x1f781cu: goto label_1f781c;
        default: break;
    }

    ctx->pc = 0x1f77ecu;

    // 0x1f77ec: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f77ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f77f0: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x1f77f0u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f77f4: 0x3c0346ea  lui         $v1, 0x46EA
    ctx->pc = 0x1f77f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18154 << 16));
    // 0x1f77f8: 0x34636000  ori         $v1, $v1, 0x6000
    ctx->pc = 0x1f77f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24576);
    // 0x1f77fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f77fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7800: 0x0  nop
    ctx->pc = 0x1f7800u;
    // NOP
    // 0x1f7804: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f7804u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f7808: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1f7808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f780c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1f780cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1f7810: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7814: 0xc097b94  jal         func_25EE50
    ctx->pc = 0x1F7814u;
    SET_GPR_U32(ctx, 31, 0x1F781Cu);
    ctx->pc = 0x25EE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EE50u, 0x1F7814u, 0x1F781Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F781Cu;
label_1f781c:
    // 0x1f781c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f781cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7820: 0x84851278  lh          $a1, 0x1278($a0)
    ctx->pc = 0x1f7820u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x1f7824: 0x24a6ffff  addiu       $a2, $a1, -0x1
    ctx->pc = 0x1f7824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1f7828: 0xa4861278  sh          $a2, 0x1278($a0)
    ctx->pc = 0x1f7828u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 6));
    // 0x1f782c: 0x14a0020b  bnez        $a1, . + 4 + (0x20B << 2)
    ctx->pc = 0x1F782Cu;
    {
        const bool branch_taken_0x1f782c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f782c) {
            ctx->pc = 0x1F805Cu;
            return;
        }
    }
    ctx->pc = 0x1F7834u;
    // 0x1f7834: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1f7834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f7838: 0x8fa800c8  lw          $t0, 0xC8($sp)
    ctx->pc = 0x1f7838u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f783c: 0xa1070002  sb          $a3, 0x2($t0)
    ctx->pc = 0x1f783cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 7));
    // 0x1f7840: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x1f7840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7844: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1f7844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1f7848: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x1f7848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1f784c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f784cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f7850: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1f7850u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1f7854: 0x10000201  b           . + 4 + (0x201 << 2)
    ctx->pc = 0x1F7854u;
    {
        const bool branch_taken_0x1f7854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7854) {
            ctx->pc = 0x1F805Cu;
            return;
        }
    }
    ctx->pc = 0x1F785Cu;
}
