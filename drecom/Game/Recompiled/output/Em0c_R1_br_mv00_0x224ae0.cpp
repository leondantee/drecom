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

// Function: Em0c_R1_br_mv00
// Address: 0x224ae0 - 0x224b78
void Em0c_R1_br_mv00_0x224ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0c_R1_br_mv00_0x224ae0");
#endif

    switch (ctx->pc) {
        case 0x224b4cu: goto label_224b4c;
        default: break;
    }

    ctx->pc = 0x224ae0u;

    // 0x224ae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x224ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x224ae4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x224ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x224ae8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x224ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x224aec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x224aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x224af0: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x224af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224af4: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x224af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
    // 0x224af8: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x224af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x224afc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x224afcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224b00: 0x0  nop
    ctx->pc = 0x224b00u;
    // NOP
    // 0x224b04: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x224b04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224b08: 0x0  nop
    ctx->pc = 0x224b08u;
    // NOP
    // 0x224b0c: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x224B0Cu;
    {
        const bool branch_taken_0x224b0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x224b0c) {
            ctx->pc = 0x224B68u;
            goto label_224b68;
        }
    }
    ctx->pc = 0x224B14u;
    // 0x224b14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x224b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224b18: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x224b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x224b1c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x224b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x224b20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x224b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224b24: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x224b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x224b28: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x224b28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x224b2c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x224b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x224b30: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x224b30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x224b34: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x224b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x224b38: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x224b38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x224b3c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x224b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x224b40: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x224b40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x224b44: 0xc067694  jal         func_19DA50
    ctx->pc = 0x224B44u;
    SET_GPR_U32(ctx, 31, 0x224B4Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x224B44u, 0x224B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224B4Cu;
label_224b4c:
    // 0x224b4c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x224b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x224b50: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x224b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x224b54: 0x2463003c  addiu       $v1, $v1, 0x3C
    ctx->pc = 0x224b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x224b58: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x224b58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x224b5c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x224b5cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x224b60: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x224b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x224b64: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x224b64u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
label_224b68:
    // 0x224b68: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x224b68u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224b6c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x224b6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x224b70: 0x3e00008  jr          $ra
    ctx->pc = 0x224B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224B78u;
}
