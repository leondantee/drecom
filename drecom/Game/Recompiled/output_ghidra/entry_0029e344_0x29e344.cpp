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

// Function: entry_0029e344
// Address: 0x29e344 - 0x29e400
void entry_0029e344_0x29e344(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029e344_0x29e344");
#endif

    switch (ctx->pc) {
        case 0x29e380u: goto label_29e380;
        case 0x29e3b4u: goto label_29e3b4;
        default: break;
    }

    ctx->pc = 0x29e344u;

    // 0x29e344: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e348: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x29e348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29e34c: 0x3c0344bb  lui         $v1, 0x44BB
    ctx->pc = 0x29e34cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17595 << 16));
    // 0x29e350: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x29e350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x29e354: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29e354u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29e358: 0x0  nop
    ctx->pc = 0x29e358u;
    // NOP
    // 0x29e35c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29e35cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29e360: 0x0  nop
    ctx->pc = 0x29e360u;
    // NOP
    // 0x29e364: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x29E364u;
    {
        const bool branch_taken_0x29e364 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29e364) {
            ctx->pc = 0x29E400u;
            return;
        }
    }
    ctx->pc = 0x29E36Cu;
    // 0x29e36c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x29e36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x29e370: 0x2445dbc0  addiu       $a1, $v0, -0x2440
    ctx->pc = 0x29e370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x29e374: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x29e374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e378: 0xc05cd90  jal         func_173640
    ctx->pc = 0x29E378u;
    SET_GPR_U32(ctx, 31, 0x29E380u);
    ctx->pc = 0x173640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173640u, 0x29E378u, 0x29E380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E380u;
label_29e380:
    // 0x29e380: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x29E380u;
    {
        const bool branch_taken_0x29e380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e380) {
            ctx->pc = 0x29E400u;
            return;
        }
    }
    ctx->pc = 0x29E388u;
    // 0x29e388: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x29e388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e38c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e390: 0x3c023f06  lui         $v0, 0x3F06
    ctx->pc = 0x29e390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16134 << 16));
    // 0x29e394: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x29e394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x29e398: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x29e398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x29e39c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x29e39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x29e3a0: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x29e3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29e3a4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x29e3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x29e3a8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x29e3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x29e3ac: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x29E3ACu;
    SET_GPR_U32(ctx, 31, 0x29E3B4u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x29E3ACu, 0x29E3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E3B4u;
label_29e3b4:
    // 0x29e3b4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x29E3B4u;
    {
        const bool branch_taken_0x29e3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e3b4) {
            ctx->pc = 0x29E400u;
            return;
        }
    }
    ctx->pc = 0x29E3BCu;
    // 0x29e3bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e3c0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29e3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29e3c4: 0x94630044  lhu         $v1, 0x44($v1)
    ctx->pc = 0x29e3c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x29e3c8: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x29E3C8u;
    {
        const bool branch_taken_0x29e3c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e3c8) {
            ctx->pc = 0x29E400u;
            return;
        }
    }
    ctx->pc = 0x29E3D0u;
    // 0x29e3d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29e3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e3d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e3d8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29e3d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29e3dc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x29e3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x29e3e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e3e4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29e3e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29e3e8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e3ec: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29e3ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29e3f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e3f4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29e3f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29e3f8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e3fc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29e3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x29e400u;
}
