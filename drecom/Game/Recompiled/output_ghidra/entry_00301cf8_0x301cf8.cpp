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

// Function: entry_00301cf8
// Address: 0x301cf8 - 0x301dac
void entry_00301cf8_0x301cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00301cf8_0x301cf8");
#endif

    switch (ctx->pc) {
        case 0x301d74u: goto label_301d74;
        default: break;
    }

    ctx->pc = 0x301cf8u;

    // 0x301cf8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301cfc: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x301cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301d00: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x301d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x301d04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x301d04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x301d08: 0x0  nop
    ctx->pc = 0x301d08u;
    // NOP
    // 0x301d0c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x301d0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x301d10: 0x0  nop
    ctx->pc = 0x301d10u;
    // NOP
    // 0x301d14: 0x45010025  bc1t        . + 4 + (0x25 << 2)
    ctx->pc = 0x301D14u;
    {
        const bool branch_taken_0x301d14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x301d14) {
            ctx->pc = 0x301DACu;
            return;
        }
    }
    ctx->pc = 0x301D1Cu;
    // 0x301d1c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301d20: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x301d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301d24: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x301d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x301d28: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x301d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x301d2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x301d2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x301d30: 0x0  nop
    ctx->pc = 0x301d30u;
    // NOP
    // 0x301d34: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x301d34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x301d38: 0x0  nop
    ctx->pc = 0x301d38u;
    // NOP
    // 0x301d3c: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x301D3Cu;
    {
        const bool branch_taken_0x301d3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x301d3c) {
            ctx->pc = 0x301DACu;
            return;
        }
    }
    ctx->pc = 0x301D44u;
    // 0x301d44: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x301d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x301d48: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x301d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x301d4c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x301d4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x301d50: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x301d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301d54: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x301d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x301d58: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x301d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301d5c: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x301d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x301d60: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x301d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x301d64: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x301d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x301d68: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x301d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x301d6c: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x301D6Cu;
    SET_GPR_U32(ctx, 31, 0x301D74u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x301D6Cu, 0x301D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301D74u;
label_301d74:
    // 0x301d74: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x301D74u;
    {
        const bool branch_taken_0x301d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x301d74) {
            ctx->pc = 0x301DACu;
            return;
        }
    }
    ctx->pc = 0x301D7Cu;
    // 0x301d7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x301d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x301d80: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301d84: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x301d84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x301d88: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x301d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x301d8c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301d90: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x301d90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x301d94: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301d98: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x301d98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x301d9c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301da0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x301da0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x301da4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301da8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x301da8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x301dacu;
}
