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

// Function: entry_001edbc8
// Address: 0x1edbc8 - 0x1edc5c
void entry_001edbc8_0x1edbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001edbc8_0x1edbc8");
#endif

    switch (ctx->pc) {
        case 0x1edc40u: goto label_1edc40;
        default: break;
    }

    ctx->pc = 0x1edbc8u;

    // 0x1edbc8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1edbc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1edbcc: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1edbccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1edbd0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1edbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1edbd4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1edbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1edbd8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1EDBD8u;
    {
        const bool branch_taken_0x1edbd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edbd8) {
            ctx->pc = 0x1EDC5Cu;
            return;
        }
    }
    ctx->pc = 0x1EDBE0u;
    // 0x1edbe0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1edbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edbe4: 0xc441128c  lwc1        $f1, 0x128C($v0)
    ctx->pc = 0x1edbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1edbe8: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x1edbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x1edbec: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1edbecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1edbf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1edbf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1edbf4: 0x0  nop
    ctx->pc = 0x1edbf4u;
    // NOP
    // 0x1edbf8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1edbf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1edbfc: 0x0  nop
    ctx->pc = 0x1edbfcu;
    // NOP
    // 0x1edc00: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x1EDC00u;
    {
        const bool branch_taken_0x1edc00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1edc00) {
            ctx->pc = 0x1EDC5Cu;
            return;
        }
    }
    ctx->pc = 0x1EDC08u;
    // 0x1edc08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1edc08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1edc0c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1edc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edc10: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1edc10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1edc14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1edc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1edc18: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1edc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edc1c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1edc1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1edc20: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1edc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edc24: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1edc24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1edc28: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1edc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edc2c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1edc2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1edc30: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1edc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edc34: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1edc34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1edc38: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EDC38u;
    SET_GPR_U32(ctx, 31, 0x1EDC40u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EDC38u, 0x1EDC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDC40u;
label_1edc40:
    // 0x1edc40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1edc40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1edc44: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1edc44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1edc48: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x1edc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x1edc4c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1edc4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1edc50: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1edc50u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1edc54: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1edc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edc58: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1edc58u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1edc5cu;
}
