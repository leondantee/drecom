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

// Function: Em0b_R1_br_mv00
// Address: 0x1ec6f0 - 0x1ec788
void Em0b_R1_br_mv00_0x1ec6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0b_R1_br_mv00_0x1ec6f0");
#endif

    switch (ctx->pc) {
        case 0x1ec75cu: goto label_1ec75c;
        default: break;
    }

    ctx->pc = 0x1ec6f0u;

    // 0x1ec6f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ec6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ec6f4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1ec6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1ec6f8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1ec6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1ec6fc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1ec6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ec700: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x1ec700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec704: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x1ec704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
    // 0x1ec708: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1ec708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1ec70c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ec70cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec710: 0x0  nop
    ctx->pc = 0x1ec710u;
    // NOP
    // 0x1ec714: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ec714u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec718: 0x0  nop
    ctx->pc = 0x1ec718u;
    // NOP
    // 0x1ec71c: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x1EC71Cu;
    {
        const bool branch_taken_0x1ec71c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec71c) {
            ctx->pc = 0x1EC778u;
            goto label_1ec778;
        }
    }
    ctx->pc = 0x1EC724u;
    // 0x1ec724: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ec724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ec728: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1ec728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ec72c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1ec72cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ec730: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ec730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ec734: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1ec734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ec738: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1ec738u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ec73c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1ec73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ec740: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1ec740u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ec744: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1ec744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ec748: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1ec748u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ec74c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1ec74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ec750: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1ec750u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1ec754: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EC754u;
    SET_GPR_U32(ctx, 31, 0x1EC75Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EC754u, 0x1EC75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC75Cu;
label_1ec75c:
    // 0x1ec75c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1ec75cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ec760: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x1ec760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1ec764: 0x2463003c  addiu       $v1, $v1, 0x3C
    ctx->pc = 0x1ec764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x1ec768: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1ec768u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ec76c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1ec76cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1ec770: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1ec770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ec774: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x1ec774u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
label_1ec778:
    // 0x1ec778: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1ec778u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec77c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1ec77cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ec780: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC788u;
}
