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

// Function: entry_00344f48
// Address: 0x344f48 - 0x344ff8
void entry_00344f48_0x344f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00344f48_0x344f48");
#endif

    switch (ctx->pc) {
        case 0x344facu: goto label_344fac;
        default: break;
    }

    ctx->pc = 0x344f48u;

    // 0x344f48: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344f4c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x344f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x344f50: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x344f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x344f54: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x344f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x344f58: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x344F58u;
    {
        const bool branch_taken_0x344f58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x344f58) {
            ctx->pc = 0x344FF8u;
            return;
        }
    }
    ctx->pc = 0x344F60u;
    // 0x344f60: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344f64: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x344f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x344f68: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x344f68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x344f6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x344f6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x344f70: 0x0  nop
    ctx->pc = 0x344f70u;
    // NOP
    // 0x344f74: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x344f74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x344f78: 0x0  nop
    ctx->pc = 0x344f78u;
    // NOP
    // 0x344f7c: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x344F7Cu;
    {
        const bool branch_taken_0x344f7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x344f7c) {
            ctx->pc = 0x344FF8u;
            return;
        }
    }
    ctx->pc = 0x344F84u;
    // 0x344f84: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x344f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x344f88: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x344f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x344f8c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x344f8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x344f90: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344f94: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x344f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344f98: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x344f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x344f9c: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x344f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x344fa0: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x344fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x344fa4: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x344FA4u;
    SET_GPR_U32(ctx, 31, 0x344FACu);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x344FA4u, 0x344FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344FACu;
label_344fac:
    // 0x344fac: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x344FACu;
    {
        const bool branch_taken_0x344fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x344fac) {
            ctx->pc = 0x344FF8u;
            return;
        }
    }
    ctx->pc = 0x344FB4u;
    // 0x344fb4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344fb8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x344fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x344fbc: 0x846300c0  lh          $v1, 0xC0($v1)
    ctx->pc = 0x344fbcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x344fc0: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x344FC0u;
    {
        const bool branch_taken_0x344fc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x344fc0) {
            ctx->pc = 0x344FF8u;
            return;
        }
    }
    ctx->pc = 0x344FC8u;
    // 0x344fc8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x344fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344fcc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344fd0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x344fd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x344fd4: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x344fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x344fd8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344fdc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x344fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x344fe0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344fe4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x344fe4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x344fe8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344fec: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x344fecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x344ff0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344ff4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x344ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x344ff8u;
}
