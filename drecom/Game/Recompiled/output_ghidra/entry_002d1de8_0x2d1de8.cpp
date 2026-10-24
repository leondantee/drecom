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

// Function: entry_002d1de8
// Address: 0x2d1de8 - 0x2d1f08
void entry_002d1de8_0x2d1de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d1de8_0x2d1de8");
#endif

    switch (ctx->pc) {
        case 0x2d1ed0u: goto label_2d1ed0;
        default: break;
    }

    ctx->pc = 0x2d1de8u;

    // 0x2d1de8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1dec: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x2d1decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d1df0: 0x3c03457a  lui         $v1, 0x457A
    ctx->pc = 0x2d1df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17786 << 16));
    // 0x2d1df4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d1df4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d1df8: 0x0  nop
    ctx->pc = 0x2d1df8u;
    // NOP
    // 0x2d1dfc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2d1dfcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d1e00: 0x0  nop
    ctx->pc = 0x2d1e00u;
    // NOP
    // 0x2d1e04: 0x45010040  bc1t        . + 4 + (0x40 << 2)
    ctx->pc = 0x2D1E04u;
    {
        const bool branch_taken_0x2d1e04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d1e04) {
            ctx->pc = 0x2D1F08u;
            return;
        }
    }
    ctx->pc = 0x2D1E0Cu;
    // 0x2d1e0c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2d1e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1e10: 0x8ca41334  lw          $a0, 0x1334($a1)
    ctx->pc = 0x2d1e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4916)));
    // 0x2d1e14: 0x2403ff85  addiu       $v1, $zero, -0x7B
    ctx->pc = 0x2d1e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967173));
    // 0x2d1e18: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d1e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d1e1c: 0xaca31334  sw          $v1, 0x1334($a1)
    ctx->pc = 0x2d1e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4916), GPR_U32(ctx, 3));
    // 0x2d1e20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d1e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1e24: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1e28: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d1e28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d1e2c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d1e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d1e30: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1e34: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d1e34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d1e38: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1e3c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d1e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1e40: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1e44: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d1e44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1e48: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1e4c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d1e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d1e50: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1e54: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x2d1e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d1e58: 0x3c03459c  lui         $v1, 0x459C
    ctx->pc = 0x2d1e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17820 << 16));
    // 0x2d1e5c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x2d1e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2d1e60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d1e60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d1e64: 0x0  nop
    ctx->pc = 0x2d1e64u;
    // NOP
    // 0x2d1e68: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2d1e68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d1e6c: 0x0  nop
    ctx->pc = 0x2d1e6cu;
    // NOP
    // 0x2d1e70: 0x45010025  bc1t        . + 4 + (0x25 << 2)
    ctx->pc = 0x2D1E70u;
    {
        const bool branch_taken_0x2d1e70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d1e70) {
            ctx->pc = 0x2D1F08u;
            return;
        }
    }
    ctx->pc = 0x2D1E78u;
    // 0x2d1e78: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1e7c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x2d1e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d1e80: 0x3c0345bb  lui         $v1, 0x45BB
    ctx->pc = 0x2d1e80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17851 << 16));
    // 0x2d1e84: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2d1e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2d1e88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d1e88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d1e8c: 0x0  nop
    ctx->pc = 0x2d1e8cu;
    // NOP
    // 0x2d1e90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d1e90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d1e94: 0x0  nop
    ctx->pc = 0x2d1e94u;
    // NOP
    // 0x2d1e98: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x2D1E98u;
    {
        const bool branch_taken_0x2d1e98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d1e98) {
            ctx->pc = 0x2D1F08u;
            return;
        }
    }
    ctx->pc = 0x2D1EA0u;
    // 0x2d1ea0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1ea4: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x2d1ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d1ea8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1eac: 0x3c023ea0  lui         $v0, 0x3EA0
    ctx->pc = 0x2d1eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16032 << 16));
    // 0x2d1eb0: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x2d1eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
    // 0x2d1eb4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d1eb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d1eb8: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x2d1eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2d1ebc: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2d1ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d1ec0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d1ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d1ec4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2d1ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2d1ec8: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x2D1EC8u;
    SET_GPR_U32(ctx, 31, 0x2D1ED0u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x2D1EC8u, 0x2D1ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1ED0u;
label_2d1ed0:
    // 0x2d1ed0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D1ED0u;
    {
        const bool branch_taken_0x2d1ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1ed0) {
            ctx->pc = 0x2D1F08u;
            return;
        }
    }
    ctx->pc = 0x2D1ED8u;
    // 0x2d1ed8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d1ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1edc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1ee0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d1ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d1ee4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2d1ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d1ee8: 0x8fb00028  lw          $s0, 0x28($sp)
    ctx->pc = 0x2d1ee8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1eec: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x2d1eecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d1ef0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1ef4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d1ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1ef8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1efc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d1efcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1f00: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1f04: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d1f04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2d1f08u;
}
