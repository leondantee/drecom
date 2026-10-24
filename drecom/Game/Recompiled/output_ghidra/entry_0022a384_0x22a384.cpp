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

// Function: entry_0022a384
// Address: 0x22a384 - 0x22a410
void entry_0022a384_0x22a384(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022a384_0x22a384");
#endif

    switch (ctx->pc) {
        case 0x22a3b0u: goto label_22a3b0;
        case 0x22a3ccu: goto label_22a3cc;
        case 0x22a3e4u: goto label_22a3e4;
        case 0x22a3f0u: goto label_22a3f0;
        default: break;
    }

    ctx->pc = 0x22a384u;

    // 0x22a384: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22a384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a388: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x22a388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a38c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a390: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22a390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22a394: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x22a394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x22a398: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x22a398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22a39c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x22a39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x22a3a0: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x22a3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x22a3a4: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x22a3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x22a3a8: 0xc05c848  jal         func_172120
    ctx->pc = 0x22A3A8u;
    SET_GPR_U32(ctx, 31, 0x22A3B0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x22A3A8u, 0x22A3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A3B0u;
label_22a3b0:
    // 0x22a3b0: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x22a3b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x22a3b4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a3b8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x22a3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22a3bc: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x22a3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a3c0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x22a3c0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22a3c4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x22A3C4u;
    SET_GPR_U32(ctx, 31, 0x22A3CCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x22A3C4u, 0x22A3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A3CCu;
label_22a3cc:
    // 0x22a3cc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22a3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a3d0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x22a3d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x22a3d4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22a3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a3d8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22a3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x22a3dc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x22A3DCu;
    SET_GPR_U32(ctx, 31, 0x22A3E4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x22A3DCu, 0x22A3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A3E4u;
label_22a3e4:
    // 0x22a3e4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22a3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a3e8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x22A3E8u;
    SET_GPR_U32(ctx, 31, 0x22A3F0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x22A3E8u, 0x22A3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A3F0u;
label_22a3f0:
    // 0x22a3f0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22a3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a3f4: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x22a3f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x22a3f8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22A3F8u;
    {
        const bool branch_taken_0x22a3f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a3f8) {
            ctx->pc = 0x22A410u;
            return;
        }
    }
    ctx->pc = 0x22A400u;
    // 0x22a400: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22a400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22a404: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x22a404u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
    // 0x22a408: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x22a408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x22a40c: 0xa483127a  sh          $v1, 0x127A($a0)
    ctx->pc = 0x22a40cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x22a410u;
}
