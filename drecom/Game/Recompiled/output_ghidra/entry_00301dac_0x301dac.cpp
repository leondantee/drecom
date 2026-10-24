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

// Function: entry_00301dac
// Address: 0x301dac - 0x301e3c
void entry_00301dac_0x301dac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00301dac_0x301dac");
#endif

    switch (ctx->pc) {
        case 0x301e04u: goto label_301e04;
        default: break;
    }

    ctx->pc = 0x301dacu;

    // 0x301dac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301db0: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x301db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301db4: 0x3c034489  lui         $v1, 0x4489
    ctx->pc = 0x301db4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17545 << 16));
    // 0x301db8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x301db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x301dbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x301dbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x301dc0: 0x0  nop
    ctx->pc = 0x301dc0u;
    // NOP
    // 0x301dc4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x301dc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x301dc8: 0x0  nop
    ctx->pc = 0x301dc8u;
    // NOP
    // 0x301dcc: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x301DCCu;
    {
        const bool branch_taken_0x301dcc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x301dcc) {
            ctx->pc = 0x301E3Cu;
            return;
        }
    }
    ctx->pc = 0x301DD4u;
    // 0x301dd4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x301dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301dd8: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x301dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x301ddc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301de0: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x301de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x301de4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x301de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x301de8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x301de8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x301dec: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x301decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x301df0: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x301df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x301df4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x301df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x301df8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x301df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x301dfc: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x301DFCu;
    SET_GPR_U32(ctx, 31, 0x301E04u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x301DFCu, 0x301E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301E04u;
label_301e04:
    // 0x301e04: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x301E04u;
    {
        const bool branch_taken_0x301e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x301e04) {
            ctx->pc = 0x301E3Cu;
            return;
        }
    }
    ctx->pc = 0x301E0Cu;
    // 0x301e0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x301e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x301e10: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301e14: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x301e14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x301e18: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x301e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x301e1c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301e20: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x301e20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x301e24: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301e28: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x301e28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x301e2c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301e30: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x301e30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x301e34: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301e38: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x301e38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x301e3cu;
}
