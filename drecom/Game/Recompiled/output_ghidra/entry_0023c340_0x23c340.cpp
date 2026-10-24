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

// Function: entry_0023c340
// Address: 0x23c340 - 0x23c424
void entry_0023c340_0x23c340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023c340_0x23c340");
#endif

    switch (ctx->pc) {
        case 0x23c368u: goto label_23c368;
        case 0x23c41cu: goto label_23c41c;
        default: break;
    }

    ctx->pc = 0x23c340u;

    // 0x23c340: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x23c340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x23c344: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x23c344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x23c348: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x23c348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x23c34c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c350: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c354: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x23c354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x23c358: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x23c358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23c35c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x23c35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23c360: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x23C360u;
    SET_GPR_U32(ctx, 31, 0x23C368u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x23C360u, 0x23C368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C368u;
label_23c368:
    // 0x23c368: 0x104000f6  beqz        $v0, . + 4 + (0xF6 << 2)
    ctx->pc = 0x23C368u;
    {
        const bool branch_taken_0x23c368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c368) {
            ctx->pc = 0x23C744u;
            return;
        }
    }
    ctx->pc = 0x23C370u;
    // 0x23c370: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23c370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23c374: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c378: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x23c378u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x23c37c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23c37cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c380: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c384: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c388: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x23c388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x23c38c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x23c38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x23c390: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23c390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c394: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c398: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c39c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23c39cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23c3a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23c3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23c3a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23c3a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c3a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c3ac: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c3b0: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x23c3b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x23c3b4: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x23c3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x23c3b8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x23c3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x23c3bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23c3bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c3c0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c3c4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c3c8: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x23c3c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x23c3cc: 0x3c023b0e  lui         $v0, 0x3B0E
    ctx->pc = 0x23c3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15118 << 16));
    // 0x23c3d0: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x23c3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x23c3d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23c3d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c3d8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c3dc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c3e0: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x23c3e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x23c3e4: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x23c3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x23c3e8: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x23c3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x23c3ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23c3ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c3f0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c3f4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c3f8: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x23c3f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x23c3fc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c400: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x23c400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c404: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x23c404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x23c408: 0x3406b405  ori         $a2, $zero, 0xB405
    ctx->pc = 0x23c408u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)46085);
    // 0x23c40c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23c40cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c410: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23c410u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23c414: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23C414u;
    SET_GPR_U32(ctx, 31, 0x23C41Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23C414u, 0x23C41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C41Cu;
label_23c41c:
    // 0x23c41c: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x23C41Cu;
    {
        const bool branch_taken_0x23c41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c41c) {
            ctx->pc = 0x23C744u;
            return;
        }
    }
    ctx->pc = 0x23C424u;
}
