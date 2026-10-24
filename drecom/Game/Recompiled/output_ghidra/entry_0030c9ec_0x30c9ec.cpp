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

// Function: entry_0030c9ec
// Address: 0x30c9ec - 0x30caa0
void entry_0030c9ec_0x30c9ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030c9ec_0x30c9ec");
#endif

    switch (ctx->pc) {
        case 0x30ca68u: goto label_30ca68;
        default: break;
    }

    ctx->pc = 0x30c9ecu;

    // 0x30c9ec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c9f0: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x30c9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30c9f4: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x30c9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x30c9f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30c9f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30c9fc: 0x0  nop
    ctx->pc = 0x30c9fcu;
    // NOP
    // 0x30ca00: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x30ca00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30ca04: 0x0  nop
    ctx->pc = 0x30ca04u;
    // NOP
    // 0x30ca08: 0x45010025  bc1t        . + 4 + (0x25 << 2)
    ctx->pc = 0x30CA08u;
    {
        const bool branch_taken_0x30ca08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30ca08) {
            ctx->pc = 0x30CAA0u;
            return;
        }
    }
    ctx->pc = 0x30CA10u;
    // 0x30ca10: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30ca10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ca14: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x30ca14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ca18: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x30ca18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x30ca1c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x30ca1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x30ca20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30ca20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30ca24: 0x0  nop
    ctx->pc = 0x30ca24u;
    // NOP
    // 0x30ca28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30ca28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30ca2c: 0x0  nop
    ctx->pc = 0x30ca2cu;
    // NOP
    // 0x30ca30: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x30CA30u;
    {
        const bool branch_taken_0x30ca30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30ca30) {
            ctx->pc = 0x30CAA0u;
            return;
        }
    }
    ctx->pc = 0x30CA38u;
    // 0x30ca38: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30ca38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ca3c: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x30ca3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30ca40: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30ca40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ca44: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x30ca44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x30ca48: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x30ca48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x30ca4c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30ca4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30ca50: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x30ca50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x30ca54: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x30ca54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30ca58: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x30ca58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x30ca5c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x30ca5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x30ca60: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x30CA60u;
    SET_GPR_U32(ctx, 31, 0x30CA68u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x30CA60u, 0x30CA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CA68u;
label_30ca68:
    // 0x30ca68: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30CA68u;
    {
        const bool branch_taken_0x30ca68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ca68) {
            ctx->pc = 0x30CAA0u;
            return;
        }
    }
    ctx->pc = 0x30CA70u;
    // 0x30ca70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30ca70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30ca74: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30ca74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ca78: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30ca78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30ca7c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x30ca7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x30ca80: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30ca80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ca84: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30ca84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30ca88: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30ca88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ca8c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30ca8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30ca90: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30ca90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ca94: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30ca94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30ca98: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30ca98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ca9c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30ca9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x30caa0u;
}
