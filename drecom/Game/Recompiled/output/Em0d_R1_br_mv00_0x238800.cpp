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

// Function: Em0d_R1_br_mv00
// Address: 0x238800 - 0x2388e8
void Em0d_R1_br_mv00_0x238800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0d_R1_br_mv00_0x238800");
#endif

    switch (ctx->pc) {
        case 0x23887cu: goto label_23887c;
        default: break;
    }

    ctx->pc = 0x238800u;

    // 0x238800: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x238800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x238804: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x238804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x238808: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x238808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23880c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x23880cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x238810: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x238810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x238814: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x238814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x238818: 0x24703b60  addiu       $s0, $v1, 0x3B60
    ctx->pc = 0x238818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 15200));
    // 0x23881c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23881cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x238820: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x238820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238824: 0x3c034509  lui         $v1, 0x4509
    ctx->pc = 0x238824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17673 << 16));
    // 0x238828: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x238828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x23882c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23882cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238830: 0x0  nop
    ctx->pc = 0x238830u;
    // NOP
    // 0x238834: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x238834u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x238838: 0x0  nop
    ctx->pc = 0x238838u;
    // NOP
    // 0x23883c: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x23883Cu;
    {
        const bool branch_taken_0x23883c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23883c) {
            ctx->pc = 0x2388D4u;
            goto label_2388d4;
        }
    }
    ctx->pc = 0x238844u;
    // 0x238844: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x238844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238848: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x238848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23884c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x23884cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x238850: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x238850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238854: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x238854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x238858: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x238858u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x23885c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23885cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x238860: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x238860u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x238864: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x238864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x238868: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x238868u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x23886c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23886cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x238870: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x238870u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x238874: 0xc067694  jal         func_19DA50
    ctx->pc = 0x238874u;
    SET_GPR_U32(ctx, 31, 0x23887Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x238874u, 0x23887Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23887Cu;
label_23887c:
    // 0x23887c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x23887cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x238880: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x238880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x238884: 0x246300c8  addiu       $v1, $v1, 0xC8
    ctx->pc = 0x238884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 200));
    // 0x238888: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x238888u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x23888c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x23888cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x238890: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x238890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x238894: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x238894u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x238898: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x238898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23889c: 0x8c83121c  lw          $v1, 0x121C($a0)
    ctx->pc = 0x23889cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4636)));
    // 0x2388a0: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x2388a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x2388a4: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x2388a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x2388a8: 0xac83121c  sw          $v1, 0x121C($a0)
    ctx->pc = 0x2388a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4636), GPR_U32(ctx, 3));
    // 0x2388ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2388acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2388b0: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x2388b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2388b4: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x2388b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2388b8: 0x2403f7ff  addiu       $v1, $zero, -0x801
    ctx->pc = 0x2388b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x2388bc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2388bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2388c0: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x2388c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    // 0x2388c4: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2388c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2388c8: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x2388c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x2388cc: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x2388ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x2388d0: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x2388d0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
label_2388d4:
    // 0x2388d4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2388d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2388d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2388d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2388dc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2388dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2388e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2388E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2388E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2388E8u;
}
