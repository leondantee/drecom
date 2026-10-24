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

// Function: Em08_R1_br_mv02
// Address: 0x375910 - 0x3759c8
void Em08_R1_br_mv02_0x375910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em08_R1_br_mv02_0x375910");
#endif

    switch (ctx->pc) {
        case 0x375978u: goto label_375978;
        default: break;
    }

    ctx->pc = 0x375910u;

    // 0x375910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x375910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x375914: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x375914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x375918: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x375918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x37591c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x37591cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x375920: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x375920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375924: 0x3c034496  lui         $v1, 0x4496
    ctx->pc = 0x375924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17558 << 16));
    // 0x375928: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x375928u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37592c: 0x0  nop
    ctx->pc = 0x37592cu;
    // NOP
    // 0x375930: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x375930u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x375934: 0x0  nop
    ctx->pc = 0x375934u;
    // NOP
    // 0x375938: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x375938u;
    {
        const bool branch_taken_0x375938 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x375938) {
            ctx->pc = 0x3759B8u;
            goto label_3759b8;
        }
    }
    ctx->pc = 0x375940u;
    // 0x375940: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x375940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x375944: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x375944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x375948: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x375948u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x37594c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37594cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x375950: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x375950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x375954: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x375954u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x375958: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x375958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37595c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x37595cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x375960: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x375960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x375964: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x375964u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x375968: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x375968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37596c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x37596cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x375970: 0xc067694  jal         func_19DA50
    ctx->pc = 0x375970u;
    SET_GPR_U32(ctx, 31, 0x375978u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x375970u, 0x375978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375978u;
label_375978:
    // 0x375978: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x375978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x37597c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x37597cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x375980: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x375980u;
    {
        const bool branch_taken_0x375980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x375980) {
            ctx->pc = 0x3759B8u;
            goto label_3759b8;
        }
    }
    ctx->pc = 0x375988u;
    // 0x375988: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x375988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37598c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x37598cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x375990: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x375990u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x375994: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x375994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x375998: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x375998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37599c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x37599cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3759a0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3759a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3759a4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3759a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3759a8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3759a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3759ac: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3759acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3759b0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3759b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3759b4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3759b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_3759b8:
    // 0x3759b8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x3759b8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3759bc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3759bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3759c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3759C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3759C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3759C8u;
}
