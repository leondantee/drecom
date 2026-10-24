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

// Function: entry_0031cbec
// Address: 0x31cbec - 0x31cc58
void entry_0031cbec_0x31cbec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031cbec_0x31cbec");
#endif

    ctx->pc = 0x31cbecu;

    // 0x31cbec: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31cbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cbf0: 0x8c4712b8  lw          $a3, 0x12B8($v0)
    ctx->pc = 0x31cbf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4792)));
    // 0x31cbf4: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x31cbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x31cbf8: 0xac4412b8  sw          $a0, 0x12B8($v0)
    ctx->pc = 0x31cbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4792), GPR_U32(ctx, 4));
    // 0x31cbfc: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x31cbfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cc00: 0xc4c112e0  lwc1        $f1, 0x12E0($a2)
    ctx->pc = 0x31cc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31cc04: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x31cc04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x31cc08: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x31cc08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x31cc0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31cc0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31cc10: 0x0  nop
    ctx->pc = 0x31cc10u;
    // NOP
    // 0x31cc14: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x31cc14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31cc18: 0xe4c012e0  swc1        $f0, 0x12E0($a2)
    ctx->pc = 0x31cc18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4832), bits); }
    // 0x31cc1c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31cc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cc20: 0xc44112e0  lwc1        $f1, 0x12E0($v0)
    ctx->pc = 0x31cc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31cc24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31cc24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31cc28: 0x0  nop
    ctx->pc = 0x31cc28u;
    // NOP
    // 0x31cc2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31cc2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31cc30: 0x0  nop
    ctx->pc = 0x31cc30u;
    // NOP
    // 0x31cc34: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x31CC34u;
    {
        const bool branch_taken_0x31cc34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31cc34) {
            ctx->pc = 0x31CC58u;
            return;
        }
    }
    ctx->pc = 0x31CC3Cu;
    // 0x31cc3c: 0x8fa700c8  lw          $a3, 0xC8($sp)
    ctx->pc = 0x31cc3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cc40: 0xace012b4  sw          $zero, 0x12B4($a3)
    ctx->pc = 0x31cc40u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4788), GPR_U32(ctx, 0));
    // 0x31cc44: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31cc44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cc48: 0xac8012b8  sw          $zero, 0x12B8($a0)
    ctx->pc = 0x31cc48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4792), GPR_U32(ctx, 0));
    // 0x31cc4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31cc4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31cc50: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x31cc50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cc54: 0xe4c012e0  swc1        $f0, 0x12E0($a2)
    ctx->pc = 0x31cc54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4832), bits); }
    ctx->pc = 0x31cc58u;
}
