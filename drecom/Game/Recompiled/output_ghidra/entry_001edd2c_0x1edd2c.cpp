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

// Function: entry_001edd2c
// Address: 0x1edd2c - 0x1ede04
void entry_001edd2c_0x1edd2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001edd2c_0x1edd2c");
#endif

    switch (ctx->pc) {
        case 0x1edda4u: goto label_1edda4;
        default: break;
    }

    ctx->pc = 0x1edd2cu;

    // 0x1edd2c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1edd2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1edd30: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1edd30u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1edd34: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1edd34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1edd38: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1edd38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1edd3c: 0x14600036  bnez        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x1EDD3Cu;
    {
        const bool branch_taken_0x1edd3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1edd3c) {
            ctx->pc = 0x1EDE18u;
            return;
        }
    }
    ctx->pc = 0x1EDD44u;
    // 0x1edd44: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edd48: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1edd48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1edd4c: 0x8463005c  lh          $v1, 0x5C($v1)
    ctx->pc = 0x1edd4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x1edd50: 0x1460002c  bnez        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x1EDD50u;
    {
        const bool branch_taken_0x1edd50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1edd50) {
            ctx->pc = 0x1EDE04u;
            return;
        }
    }
    ctx->pc = 0x1EDD58u;
    // 0x1edd58: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edd5c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x1edd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1edd60: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x1edd60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x1edd64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1edd64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1edd68: 0x0  nop
    ctx->pc = 0x1edd68u;
    // NOP
    // 0x1edd6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1edd6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1edd70: 0x0  nop
    ctx->pc = 0x1edd70u;
    // NOP
    // 0x1edd74: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x1EDD74u;
    {
        const bool branch_taken_0x1edd74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1edd74) {
            ctx->pc = 0x1EDE04u;
            return;
        }
    }
    ctx->pc = 0x1EDD7Cu;
    // 0x1edd7c: 0x3c023f32  lui         $v0, 0x3F32
    ctx->pc = 0x1edd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16178 << 16));
    // 0x1edd80: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x1edd80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x1edd84: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1edd84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1edd88: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edd8c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1edd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edd90: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1edd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1edd94: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x1edd94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1edd98: 0x26250120  addiu       $a1, $s1, 0x120
    ctx->pc = 0x1edd98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x1edd9c: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x1EDD9Cu;
    SET_GPR_U32(ctx, 31, 0x1EDDA4u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x1EDD9Cu, 0x1EDDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDDA4u;
label_1edda4:
    // 0x1edda4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1EDDA4u;
    {
        const bool branch_taken_0x1edda4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edda4) {
            ctx->pc = 0x1EDE04u;
            return;
        }
    }
    ctx->pc = 0x1EDDACu;
    // 0x1eddac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1eddacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eddb0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1eddb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1eddb4: 0x84630094  lh          $v1, 0x94($v1)
    ctx->pc = 0x1eddb4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x1eddb8: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1EDDB8u;
    {
        const bool branch_taken_0x1eddb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eddb8) {
            ctx->pc = 0x1EDE04u;
            return;
        }
    }
    ctx->pc = 0x1EDDC0u;
    // 0x1eddc0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1eddc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1eddc4: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1eddc4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1eddc8: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x1eddc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x1eddcc: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1EDDCCu;
    {
        const bool branch_taken_0x1eddcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eddcc) {
            ctx->pc = 0x1EDE04u;
            return;
        }
    }
    ctx->pc = 0x1EDDD4u;
    // 0x1eddd4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1eddd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eddd8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1eddd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edddc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1edddcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1edde0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1edde0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1edde4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edde8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1edde8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1eddec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1eddecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eddf0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1eddf0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eddf4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1eddf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eddf8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1eddf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eddfc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1eddfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ede00: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ede00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x1ede04u;
}
