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

// Function: entry_0023fbbc
// Address: 0x23fbbc - 0x23fc30
void entry_0023fbbc_0x23fbbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023fbbc_0x23fbbc");
#endif

    ctx->pc = 0x23fbbcu;

    // 0x23fbbc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x23fbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23fbc0: 0xc48100d4  lwc1        $f1, 0xD4($a0)
    ctx->pc = 0x23fbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23fbc4: 0x3c033c0e  lui         $v1, 0x3C0E
    ctx->pc = 0x23fbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15374 << 16));
    // 0x23fbc8: 0x3463fa35  ori         $v1, $v1, 0xFA35
    ctx->pc = 0x23fbc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x23fbcc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23fbccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23fbd0: 0x0  nop
    ctx->pc = 0x23fbd0u;
    // NOP
    // 0x23fbd4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23fbd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23fbd8: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x23fbd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    // 0x23fbdc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23fbdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23fbe0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23fbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23fbe4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23fbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23fbe8: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x23fbe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x23fbec: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x23fbecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x23fbf0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23fbf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23fbf4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23fbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23fbf8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23fbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23fbfc: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x23fbfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x23fc00: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x23fc00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x23fc04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23fc04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23fc08: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23fc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23fc0c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23fc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23fc10: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x23fc10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x23fc14: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x23fc14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x23fc18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23fc18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23fc1c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23fc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23fc20: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23fc20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23fc24: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x23fc24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x23fc28: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x23FC28u;
    {
        const bool branch_taken_0x23fc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fc28) {
            ctx->pc = 0x23FCFCu;
            return;
        }
    }
    ctx->pc = 0x23FC30u;
}
