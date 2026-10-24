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

// Function: Effscr00_set
// Address: 0x219220 - 0x2192d8
void Effscr00_set_0x219220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Effscr00_set_0x219220");
#endif

    switch (ctx->pc) {
        case 0x219260u: goto label_219260;
        default: break;
    }

    ctx->pc = 0x219220u;

    // 0x219220: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x219220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x219224: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x219224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x219228: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x219228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21922c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x21922cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x219230: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x219230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x219234: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x219234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    // 0x219238: 0xe7ac0040  swc1        $f12, 0x40($sp)
    ctx->pc = 0x219238u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x21923c: 0xe7ad0048  swc1        $f13, 0x48($sp)
    ctx->pc = 0x21923cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x219240: 0xe7ae0050  swc1        $f14, 0x50($sp)
    ctx->pc = 0x219240u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x219244: 0xafa70058  sw          $a3, 0x58($sp)
    ctx->pc = 0x219244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 7));
    // 0x219248: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x219248u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21924c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x21924cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x219250: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x219250u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x219254: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x219254u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x219258: 0xc0a632c  jal         func_298CB0
    ctx->pc = 0x219258u;
    SET_GPR_U32(ctx, 31, 0x219260u);
    ctx->pc = 0x298CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298CB0u, 0x219258u, 0x219260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219260u;
label_219260:
    // 0x219260: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x219260u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x219264: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x219264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x219268: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x219268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x21926c: 0x12030015  beq         $s0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x21926Cu;
    {
        const bool branch_taken_0x21926c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x21926c) {
            ctx->pc = 0x2192C4u;
            goto label_2192c4;
        }
    }
    ctx->pc = 0x219274u;
    // 0x219274: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x219274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x219278: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x219278u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21927c: 0x0  nop
    ctx->pc = 0x21927cu;
    // NOP
    // 0x219280: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x219280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x219284: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x219284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x219288: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x219288u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21928c: 0x0  nop
    ctx->pc = 0x21928cu;
    // NOP
    // 0x219290: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x219290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x219294: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x219294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x219298: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x219298u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21929c: 0x0  nop
    ctx->pc = 0x21929cu;
    // NOP
    // 0x2192a0: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x2192a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x2192a4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2192a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2192a8: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x2192a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x2192ac: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2192acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2192b0: 0xe600013c  swc1        $f0, 0x13C($s0)
    ctx->pc = 0x2192b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 316), bits); }
    // 0x2192b4: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2192b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2192b8: 0xe6000188  swc1        $f0, 0x188($s0)
    ctx->pc = 0x2192b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 392), bits); }
    // 0x2192bc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2192bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2192c0: 0xae030198  sw          $v1, 0x198($s0)
    ctx->pc = 0x2192c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 3));
label_2192c4:
    // 0x2192c4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2192c4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2192c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2192c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2192cc: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2192ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2192d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2192D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2192D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2192D8u;
}
