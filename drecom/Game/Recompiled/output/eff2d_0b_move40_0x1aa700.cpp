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

// Function: eff2d_0b_move40
// Address: 0x1aa700 - 0x1aa850
void eff2d_0b_move40_0x1aa700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eff2d_0b_move40_0x1aa700");
#endif

    ctx->pc = 0x1aa700u;

    // 0x1aa700: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aa700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1aa704: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1aa704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1aa708: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1aa708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1aa70c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1aa70cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1aa710: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x1aa710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x1aa714: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1aa714u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aa718: 0x0  nop
    ctx->pc = 0x1aa718u;
    // NOP
    // 0x1aa71c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1aa71cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1aa720: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1aa720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1aa724: 0xc4610090  lwc1        $f1, 0x90($v1)
    ctx->pc = 0x1aa724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa728: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1aa728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa72c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1aa72cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa730: 0x0  nop
    ctx->pc = 0x1aa730u;
    // NOP
    // 0x1aa734: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1AA734u;
    {
        const bool branch_taken_0x1aa734 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aa734) {
            ctx->pc = 0x1AA75Cu;
            goto label_1aa75c;
        }
    }
    ctx->pc = 0x1AA73Cu;
    // 0x1aa73c: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1aa73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa740: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1aa740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1aa744: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x1aa744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x1aa748: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1aa748u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1aa74c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1aa74cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1aa750: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1aa750u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aa754: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1aa754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1aa758: 0xe46000a0  swc1        $f0, 0xA0($v1)
    ctx->pc = 0x1aa758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
label_1aa75c:
    // 0x1aa75c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1aa75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1aa760: 0xc4610094  lwc1        $f1, 0x94($v1)
    ctx->pc = 0x1aa760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa764: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1aa764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa768: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1aa768u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa76c: 0x0  nop
    ctx->pc = 0x1aa76cu;
    // NOP
    // 0x1aa770: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1AA770u;
    {
        const bool branch_taken_0x1aa770 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aa770) {
            ctx->pc = 0x1AA798u;
            goto label_1aa798;
        }
    }
    ctx->pc = 0x1AA778u;
    // 0x1aa778: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1aa778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa77c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1aa77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1aa780: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x1aa780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x1aa784: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1aa784u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1aa788: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1aa788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1aa78c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1aa78cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aa790: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1aa790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1aa794: 0xe46000a4  swc1        $f0, 0xA4($v1)
    ctx->pc = 0x1aa794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 164), bits); }
label_1aa798:
    // 0x1aa798: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1aa798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1aa79c: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x1aa79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa7a0: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1aa7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa7a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1aa7a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa7a8: 0x0  nop
    ctx->pc = 0x1aa7a8u;
    // NOP
    // 0x1aa7ac: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1AA7ACu;
    {
        const bool branch_taken_0x1aa7ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aa7ac) {
            ctx->pc = 0x1AA7D4u;
            goto label_1aa7d4;
        }
    }
    ctx->pc = 0x1AA7B4u;
    // 0x1aa7b4: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1aa7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa7b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1aa7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1aa7bc: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x1aa7bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x1aa7c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1aa7c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1aa7c4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1aa7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1aa7c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1aa7c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aa7cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1aa7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1aa7d0: 0xe46000a8  swc1        $f0, 0xA8($v1)
    ctx->pc = 0x1aa7d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 168), bits); }
label_1aa7d4:
    // 0x1aa7d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1aa7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1aa7d8: 0xc461009c  lwc1        $f1, 0x9C($v1)
    ctx->pc = 0x1aa7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa7dc: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1aa7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa7e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1aa7e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa7e4: 0x0  nop
    ctx->pc = 0x1aa7e4u;
    // NOP
    // 0x1aa7e8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1AA7E8u;
    {
        const bool branch_taken_0x1aa7e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aa7e8) {
            ctx->pc = 0x1AA810u;
            goto label_1aa810;
        }
    }
    ctx->pc = 0x1AA7F0u;
    // 0x1aa7f0: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1aa7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa7f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1aa7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1aa7f8: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x1aa7f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x1aa7fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1aa7fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1aa800: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1aa800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1aa804: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1aa804u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aa808: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1aa808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1aa80c: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x1aa80cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
label_1aa810:
    // 0x1aa810: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1aa810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1aa814: 0x1603000a  bne         $s0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1AA814u;
    {
        const bool branch_taken_0x1aa814 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1aa814) {
            ctx->pc = 0x1AA840u;
            goto label_1aa840;
        }
    }
    ctx->pc = 0x1AA81Cu;
    // 0x1aa81c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1aa81cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1aa820: 0x8c83020c  lw          $v1, 0x20C($a0)
    ctx->pc = 0x1aa820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x1aa824: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x1aa824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x1aa828: 0xac83020c  sw          $v1, 0x20C($a0)
    ctx->pc = 0x1aa828u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 524), GPR_U32(ctx, 3));
    // 0x1aa82c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1aa82cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1aa830: 0x8ca4020c  lw          $a0, 0x20C($a1)
    ctx->pc = 0x1aa830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x1aa834: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x1aa834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1aa838: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1aa838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1aa83c: 0xaca3020c  sw          $v1, 0x20C($a1)
    ctx->pc = 0x1aa83cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 524), GPR_U32(ctx, 3));
label_1aa840:
    // 0x1aa840: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1aa840u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa844: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1aa844u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1aa848: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA850u;
}
