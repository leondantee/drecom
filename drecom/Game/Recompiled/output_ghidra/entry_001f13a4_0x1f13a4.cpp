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

// Function: entry_001f13a4
// Address: 0x1f13a4 - 0x1f1430
void entry_001f13a4_0x1f13a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f13a4_0x1f13a4");
#endif

    switch (ctx->pc) {
        case 0x1f13b4u: goto label_1f13b4;
        case 0x1f13c0u: goto label_1f13c0;
        default: break;
    }

    ctx->pc = 0x1f13a4u;

    // 0x1f13a4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1f13a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f13a8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f13a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f13ac: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1F13ACu;
    SET_GPR_U32(ctx, 31, 0x1F13B4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1F13ACu, 0x1F13B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F13B4u;
label_1f13b4:
    // 0x1f13b4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1f13b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f13b8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F13B8u;
    SET_GPR_U32(ctx, 31, 0x1F13C0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F13B8u, 0x1F13C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F13C0u;
label_1f13c0:
    // 0x1f13c0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f13c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f13c4: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x1f13c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x1f13c8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1f13c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f13cc: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x1f13ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1f13d0: 0x1060009a  beqz        $v1, . + 4 + (0x9A << 2)
    ctx->pc = 0x1F13D0u;
    {
        const bool branch_taken_0x1f13d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f13d0) {
            ctx->pc = 0x1F163Cu;
            return;
        }
    }
    ctx->pc = 0x1F13D8u;
    // 0x1f13d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f13d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f13dc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f13dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f13e0: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x1f13e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f13e4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f13e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f13e8: 0x944209ea  lhu         $v0, 0x9EA($v0)
    ctx->pc = 0x1f13e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2538)));
    // 0x1f13ec: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1f13ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f13f0: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x1f13f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x1f13f4: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F13F4u;
    {
        const bool branch_taken_0x1f13f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f13f4) {
            ctx->pc = 0x1F1430u;
            return;
        }
    }
    ctx->pc = 0x1F13FCu;
    // 0x1f13fc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f13fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1400: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f1400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f1404: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1f1404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1408: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x1f1408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x1f140c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f140cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1410: 0x0  nop
    ctx->pc = 0x1f1410u;
    // NOP
    // 0x1f1414: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f1414u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f1418: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x1f1418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x1f141c: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x1f141cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x1f1420: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f1420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1424: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f1424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1428: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f1428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f142c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1f142cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    ctx->pc = 0x1f1430u;
}
