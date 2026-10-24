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

// Function: entry_0034a3ac
// Address: 0x34a3ac - 0x34a448
void entry_0034a3ac_0x34a3ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034a3ac_0x34a3ac");
#endif

    switch (ctx->pc) {
        case 0x34a408u: goto label_34a408;
        default: break;
    }

    ctx->pc = 0x34a3acu;

    // 0x34a3ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a3b0: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x34a3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34a3b4: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x34a3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x34a3b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34a3b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34a3bc: 0x0  nop
    ctx->pc = 0x34a3bcu;
    // NOP
    // 0x34a3c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34a3c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a3c4: 0x0  nop
    ctx->pc = 0x34a3c4u;
    // NOP
    // 0x34a3c8: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x34A3C8u;
    {
        const bool branch_taken_0x34a3c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a3c8) {
            ctx->pc = 0x34A448u;
            return;
        }
    }
    ctx->pc = 0x34A3D0u;
    // 0x34a3d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34a3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a3d4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34a3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a3d8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x34a3d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x34a3dc: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x34a3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x34a3e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34a3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a3e4: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x34a3e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x34a3e8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34a3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a3ec: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x34a3ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a3f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34a3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a3f4: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x34a3f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a3f8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34a3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a3fc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x34a3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x34a400: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34A400u;
    SET_GPR_U32(ctx, 31, 0x34A408u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34A400u, 0x34A408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A408u;
label_34a408:
    // 0x34a408: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x34a408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34a40c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x34a40cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x34a410: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x34A410u;
    {
        const bool branch_taken_0x34a410 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a410) {
            ctx->pc = 0x34A448u;
            return;
        }
    }
    ctx->pc = 0x34A418u;
    // 0x34a418: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34a418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a41c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a420: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x34a420u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x34a424: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x34a424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34a428: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a42c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x34a42cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x34a430: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a434: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x34a434u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a438: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a43c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34a43cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a440: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a444: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x34a444u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x34a448u;
}
