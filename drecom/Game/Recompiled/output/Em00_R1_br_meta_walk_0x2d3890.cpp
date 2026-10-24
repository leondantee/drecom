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

// Function: Em00_R1_br_meta_walk
// Address: 0x2d3890 - 0x2d393c
void Em00_R1_br_meta_walk_0x2d3890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em00_R1_br_meta_walk_0x2d3890");
#endif

    switch (ctx->pc) {
        case 0x2d38ccu: goto label_2d38cc;
        default: break;
    }

    ctx->pc = 0x2d3890u;

    // 0x2d3890: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d3890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d3894: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2d3894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2d3898: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2d3898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2d389c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d389cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d38a0: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x2d38a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d38a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d38a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d38a8: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x2d38a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x2d38ac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2d38acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2d38b0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d38b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d38b4: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x2d38b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2d38b8: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2d38b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d38bc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d38bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d38c0: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2d38c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2d38c4: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x2D38C4u;
    SET_GPR_U32(ctx, 31, 0x2D38CCu);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x2D38C4u, 0x2D38CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D38CCu;
label_2d38cc:
    // 0x2d38cc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2D38CCu;
    {
        const bool branch_taken_0x2d38cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d38cc) {
            ctx->pc = 0x2D392Cu;
            goto label_2d392c;
        }
    }
    ctx->pc = 0x2D38D4u;
    // 0x2d38d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d38d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d38d8: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x2d38d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d38dc: 0x3c03451c  lui         $v1, 0x451C
    ctx->pc = 0x2d38dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17692 << 16));
    // 0x2d38e0: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x2d38e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2d38e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d38e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d38e8: 0x0  nop
    ctx->pc = 0x2d38e8u;
    // NOP
    // 0x2d38ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d38ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d38f0: 0x0  nop
    ctx->pc = 0x2d38f0u;
    // NOP
    // 0x2d38f4: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2D38F4u;
    {
        const bool branch_taken_0x2d38f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d38f4) {
            ctx->pc = 0x2D392Cu;
            goto label_2d392c;
        }
    }
    ctx->pc = 0x2D38FCu;
    // 0x2d38fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d38fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3900: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3904: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d3904u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d3908: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x2d3908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2d390c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d390cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3910: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d3910u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d3914: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3918: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d3918u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d391c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d391cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3920: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d3920u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d3924: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3928: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d3928u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2d392c:
    // 0x2d392c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2d392cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3930: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d3930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d3934: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D393Cu;
}
