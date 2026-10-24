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

// Function: Oma8_R1_mv00
// Address: 0x37cd80 - 0x37ce9c
void Oma8_R1_mv00_0x37cd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Oma8_R1_mv00_0x37cd80");
#endif

    ctx->pc = 0x37cd80u;

    // 0x37cd80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37cd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37cd84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37cd84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37cd88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37cd88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37cd8c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x37cd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x37cd90: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x37cd90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37cd94: 0x8c710058  lw          $s1, 0x58($v1)
    ctx->pc = 0x37cd94u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x37cd98: 0x8e300034  lw          $s0, 0x34($s1)
    ctx->pc = 0x37cd98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x37cd9c: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x37cd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x37cda0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x37cda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37cda4: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x37cda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x37cda8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x37cda8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x37cdac: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x37cdacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x37cdb0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x37cdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37cdb4: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x37cdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x37cdb8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x37cdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x37cdbc: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x37cdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x37cdc0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x37cdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37cdc4: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x37cdc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x37cdc8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x37cdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x37cdcc: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x37cdccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x37cdd0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x37cdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37cdd4: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x37cdd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x37cdd8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x37cdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x37cddc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x37cddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37cde0: 0xc48100d4  lwc1        $f1, 0xD4($a0)
    ctx->pc = 0x37cde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37cde4: 0x3c033b44  lui         $v1, 0x3B44
    ctx->pc = 0x37cde4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15172 << 16));
    // 0x37cde8: 0x34639ba6  ori         $v1, $v1, 0x9BA6
    ctx->pc = 0x37cde8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39846);
    // 0x37cdec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37cdecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37cdf0: 0x0  nop
    ctx->pc = 0x37cdf0u;
    // NOP
    // 0x37cdf4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x37cdf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x37cdf8: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x37cdf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    // 0x37cdfc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x37cdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37ce00: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x37ce00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37ce04: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x37ce04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x37ce08: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x37ce08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x37ce0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37ce0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37ce10: 0x0  nop
    ctx->pc = 0x37ce10u;
    // NOP
    // 0x37ce14: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x37ce14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37ce18: 0x0  nop
    ctx->pc = 0x37ce18u;
    // NOP
    // 0x37ce1c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x37CE1Cu;
    {
        const bool branch_taken_0x37ce1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37ce1c) {
            ctx->pc = 0x37CE38u;
            goto label_37ce38;
        }
    }
    ctx->pc = 0x37CE24u;
    // 0x37ce24: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x37ce24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x37ce28: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x37ce28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x37ce2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37ce2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37ce30: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x37ce30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37ce34: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x37ce34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
label_37ce38:
    // 0x37ce38: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x37ce38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37ce3c: 0x8c65128c  lw          $a1, 0x128C($v1)
    ctx->pc = 0x37ce3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4748)));
    // 0x37ce40: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x37ce40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x37ce44: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x37ce44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x37ce48: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x37ce48u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x37ce4c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x37ce4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x37ce50: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x37ce50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37ce54: 0x8c65128c  lw          $a1, 0x128C($v1)
    ctx->pc = 0x37ce54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4748)));
    // 0x37ce58: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x37ce58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x37ce5c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x37ce5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x37ce60: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x37ce60u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x37ce64: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x37ce64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x37ce68: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x37ce68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x37ce6c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x37ce6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x37ce70: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x37ce70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x37ce74: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x37ce74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x37ce78: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x37ce78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x37ce7c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x37ce7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x37ce80: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x37ce80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x37ce84: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x37ce84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x37ce88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37ce88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37ce8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37ce8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37ce90: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x37ce90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x37ce94: 0x3e00008  jr          $ra
    ctx->pc = 0x37CE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37CE94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37CE9Cu;
}
