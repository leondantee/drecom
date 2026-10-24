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

// Function: entry_0034b858
// Address: 0x34b858 - 0x34b8c0
void entry_0034b858_0x34b858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034b858_0x34b858");
#endif

    switch (ctx->pc) {
        case 0x34b89cu: goto label_34b89c;
        case 0x34b8b8u: goto label_34b8b8;
        default: break;
    }

    ctx->pc = 0x34b858u;

    // 0x34b858: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x34b858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b85c: 0x908309db  lbu         $v1, 0x9DB($a0)
    ctx->pc = 0x34b85cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2523)));
    // 0x34b860: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x34b860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x34b864: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x34b864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x34b868: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x34B868u;
    {
        const bool branch_taken_0x34b868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b868) {
            ctx->pc = 0x34B8C0u;
            return;
        }
    }
    ctx->pc = 0x34B870u;
    // 0x34b870: 0x3c033dd6  lui         $v1, 0x3DD6
    ctx->pc = 0x34b870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15830 << 16));
    // 0x34b874: 0x34637750  ori         $v1, $v1, 0x7750
    ctx->pc = 0x34b874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)30544);
    // 0x34b878: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x34b878u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34b87c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34b87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b880: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34b880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b884: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x34b884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x34b888: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x34b888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34b88c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x34b88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x34b890: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x34b890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x34b894: 0xc05c848  jal         func_172120
    ctx->pc = 0x34B894u;
    SET_GPR_U32(ctx, 31, 0x34B89Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x34B894u, 0x34B89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B89Cu;
label_34b89c:
    // 0x34b89c: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x34b89cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x34b8a0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34b8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b8a4: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x34b8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34b8a8: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x34b8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b8ac: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x34b8acu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34b8b0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x34B8B0u;
    SET_GPR_U32(ctx, 31, 0x34B8B8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x34B8B0u, 0x34B8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B8B8u;
label_34b8b8:
    // 0x34b8b8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x34b8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34b8bc: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x34b8bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    ctx->pc = 0x34b8c0u;
}
