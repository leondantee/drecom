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

// Function: entry_00122828
// Address: 0x122828 - 0x12288c
void entry_00122828_0x122828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122828_0x122828");
#endif

    switch (ctx->pc) {
        case 0x12284cu: goto label_12284c;
        default: break;
    }

    ctx->pc = 0x122828u;

    // 0x122828: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12282c: 0xc48111f8  lwc1        $f1, 0x11F8($a0)
    ctx->pc = 0x12282cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x122830: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x122830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x122834: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x122834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x122838: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x122838u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12283c: 0x0  nop
    ctx->pc = 0x12283cu;
    // NOP
    // 0x122840: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x122840u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x122844: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x122844u;
    SET_GPR_U32(ctx, 31, 0x12284Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x122844u, 0x12284Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12284Cu;
label_12284c:
    // 0x12284c: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x12284cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122850: 0xe4a011f8  swc1        $f0, 0x11F8($a1)
    ctx->pc = 0x122850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4600), bits); }
    // 0x122854: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x122854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x122858: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12285c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12285cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x122860: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x122860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x122864: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122868: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x122868u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12286c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12286cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122870: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x122870u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x122874: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x122874u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122878: 0xa0c00003  sb          $zero, 0x3($a2)
    ctx->pc = 0x122878u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12287c: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x12287cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122880: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x122880u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x122884: 0x1000012a  b           . + 4 + (0x12A << 2)
    ctx->pc = 0x122884u;
    {
        const bool branch_taken_0x122884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x122884) {
            ctx->pc = 0x122D30u;
            return;
        }
    }
    ctx->pc = 0x12288Cu;
}
