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

// Function: entry_002c3fdc
// Address: 0x2c3fdc - 0x2c4084
void entry_002c3fdc_0x2c3fdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c3fdc_0x2c3fdc");
#endif

    switch (ctx->pc) {
        case 0x2c4038u: goto label_2c4038;
        default: break;
    }

    ctx->pc = 0x2c3fdcu;

    // 0x2c3fdc: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x2c3fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c3fe0: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x2c3fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x2c3fe4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2c3fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2c3fe8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c3fe8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3fec: 0x0  nop
    ctx->pc = 0x2c3fecu;
    // NOP
    // 0x2c3ff0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c3ff0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3ff4: 0x0  nop
    ctx->pc = 0x2c3ff4u;
    // NOP
    // 0x2c3ff8: 0x4501008e  bc1t        . + 4 + (0x8E << 2)
    ctx->pc = 0x2C3FF8u;
    {
        const bool branch_taken_0x2c3ff8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c3ff8) {
            ctx->pc = 0x2C4234u;
            return;
        }
    }
    ctx->pc = 0x2C4000u;
    // 0x2c4000: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c4000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c4004: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2c4004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c4008: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2c4008u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c400c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c400cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c4010: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2c4010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c4014: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2c4014u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c4018: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2c4018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c401c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2c401cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c4020: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2c4020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c4024: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2c4024u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c4028: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2c4028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c402c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2c402cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2c4030: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C4030u;
    SET_GPR_U32(ctx, 31, 0x2C4038u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C4030u, 0x2C4038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4038u;
label_2c4038:
    // 0x2c4038: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c4038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c403c: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x2c403cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2c4040: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c4040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4044: 0x1483007b  bne         $a0, $v1, . + 4 + (0x7B << 2)
    ctx->pc = 0x2C4044u;
    {
        const bool branch_taken_0x2c4044 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c4044) {
            ctx->pc = 0x2C4234u;
            return;
        }
    }
    ctx->pc = 0x2C404Cu;
    // 0x2c404c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2c404cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c4050: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c4050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c4054: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c4054u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c4058: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2c4058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c405c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c405cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c4060: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2c4060u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c4064: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c4064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c4068: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2c4068u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c406c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c406cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c4070: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2c4070u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c4074: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c4074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c4078: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c4078u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2c407c: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x2C407Cu;
    {
        const bool branch_taken_0x2c407c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c407c) {
            ctx->pc = 0x2C4234u;
            return;
        }
    }
    ctx->pc = 0x2C4084u;
}
