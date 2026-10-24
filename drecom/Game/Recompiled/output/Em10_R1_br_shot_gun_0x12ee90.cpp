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

// Function: Em10_R1_br_shot_gun
// Address: 0x12ee90 - 0x12ef90
void Em10_R1_br_shot_gun_0x12ee90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_R1_br_shot_gun_0x12ee90");
#endif

    ctx->pc = 0x12ee90u;

    // 0x12ee90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12ee90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12ee94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12ee94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12ee98: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x12ee98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x12ee9c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12ee9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12eea0: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x12eea0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x12eea4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12eea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12eea8: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x12eea8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x12eeac: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x12eeacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x12eeb0: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x12eeb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x12eeb4: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x12EEB4u;
    {
        const bool branch_taken_0x12eeb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12eeb4) {
            ctx->pc = 0x12EF0Cu;
            goto label_12ef0c;
        }
    }
    ctx->pc = 0x12EEBCu;
    // 0x12eebc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x12eebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x12eec0: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x12eec0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x12eec4: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x12eec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x12eec8: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x12EEC8u;
    {
        const bool branch_taken_0x12eec8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12eec8) {
            ctx->pc = 0x12EF0Cu;
            goto label_12ef0c;
        }
    }
    ctx->pc = 0x12EED0u;
    // 0x12eed0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12eed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12eed4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12eed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12eed8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12eed8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12eedc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x12eedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12eee0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12eee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12eee4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12eee4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12eee8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12eee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12eeec: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12eeecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12eef0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12eef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12eef4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12eef4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12eef8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12eef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12eefc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12eefcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12ef00: 0xa600007c  sh          $zero, 0x7C($s0)
    ctx->pc = 0x12ef00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
    // 0x12ef04: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x12EF04u;
    {
        const bool branch_taken_0x12ef04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ef04) {
            ctx->pc = 0x12EF80u;
            goto label_12ef80;
        }
    }
    ctx->pc = 0x12EF0Cu;
label_12ef0c:
    // 0x12ef0c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12ef0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ef10: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x12ef10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x12ef14: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x12ef14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x12ef18: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x12ef18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x12ef1c: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x12EF1Cu;
    {
        const bool branch_taken_0x12ef1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ef1c) {
            ctx->pc = 0x12EF80u;
            goto label_12ef80;
        }
    }
    ctx->pc = 0x12EF24u;
    // 0x12ef24: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12ef24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ef28: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x12ef28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12ef2c: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x12ef2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x12ef30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12ef30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12ef34: 0x0  nop
    ctx->pc = 0x12ef34u;
    // NOP
    // 0x12ef38: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12ef38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12ef3c: 0x0  nop
    ctx->pc = 0x12ef3cu;
    // NOP
    // 0x12ef40: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x12EF40u;
    {
        const bool branch_taken_0x12ef40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12ef40) {
            ctx->pc = 0x12EF80u;
            goto label_12ef80;
        }
    }
    ctx->pc = 0x12EF48u;
    // 0x12ef48: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12ef48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ef4c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12ef4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ef50: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12ef50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12ef54: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x12ef54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12ef58: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12ef58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ef5c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12ef5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12ef60: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12ef60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ef64: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12ef64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12ef68: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12ef68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ef6c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12ef6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12ef70: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12ef70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ef74: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12ef74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12ef78: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x12EF78u;
    {
        const bool branch_taken_0x12ef78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ef78) {
            ctx->pc = 0x12EF80u;
            goto label_12ef80;
        }
    }
    ctx->pc = 0x12EF80u;
label_12ef80:
    // 0x12ef80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12ef80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ef84: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x12ef84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12ef88: 0x3e00008  jr          $ra
    ctx->pc = 0x12EF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EF88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12EF90u;
}
