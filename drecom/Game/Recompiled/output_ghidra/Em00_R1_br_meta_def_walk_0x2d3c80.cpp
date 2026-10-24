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

// Function: Em00_R1_br_meta_def_walk
// Address: 0x2d3c80 - 0x2d3d2c
void Em00_R1_br_meta_def_walk_0x2d3c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em00_R1_br_meta_def_walk_0x2d3c80");
#endif

    switch (ctx->pc) {
        case 0x2d3cbcu: goto label_2d3cbc;
        default: break;
    }

    ctx->pc = 0x2d3c80u;

    // 0x2d3c80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d3c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d3c84: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2d3c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2d3c88: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2d3c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2d3c8c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d3c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3c90: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x2d3c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d3c94: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3c98: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x2d3c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x2d3c9c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2d3c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2d3ca0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d3ca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d3ca4: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x2d3ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2d3ca8: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2d3ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d3cac: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d3cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d3cb0: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2d3cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2d3cb4: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x2D3CB4u;
    SET_GPR_U32(ctx, 31, 0x2D3CBCu);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x2D3CB4u, 0x2D3CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3CBCu;
label_2d3cbc:
    // 0x2d3cbc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2D3CBCu;
    {
        const bool branch_taken_0x2d3cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3cbc) {
            ctx->pc = 0x2D3D1Cu;
            goto label_2d3d1c;
        }
    }
    ctx->pc = 0x2D3CC4u;
    // 0x2d3cc4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3cc8: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x2d3cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3ccc: 0x3c03451c  lui         $v1, 0x451C
    ctx->pc = 0x2d3cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17692 << 16));
    // 0x2d3cd0: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x2d3cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2d3cd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d3cd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d3cd8: 0x0  nop
    ctx->pc = 0x2d3cd8u;
    // NOP
    // 0x2d3cdc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d3cdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d3ce0: 0x0  nop
    ctx->pc = 0x2d3ce0u;
    // NOP
    // 0x2d3ce4: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2D3CE4u;
    {
        const bool branch_taken_0x2d3ce4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d3ce4) {
            ctx->pc = 0x2D3D1Cu;
            goto label_2d3d1c;
        }
    }
    ctx->pc = 0x2D3CECu;
    // 0x2d3cec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d3cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3cf0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3cf4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d3cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d3cf8: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x2d3cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2d3cfc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3d00: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d3d00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d3d04: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3d08: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d3d08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d3d0c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3d10: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d3d10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d3d14: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3d18: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d3d18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2d3d1c:
    // 0x2d3d1c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2d3d1cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3d20: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d3d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d3d24: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3D2Cu;
}
