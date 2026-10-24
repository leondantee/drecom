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

// Function: entry_00228acc
// Address: 0x228acc - 0x228b24
void entry_00228acc_0x228acc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00228acc_0x228acc");
#endif

    ctx->pc = 0x228accu;

    // 0x228acc: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x228accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x228ad0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x228ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x228ad4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228ad4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228ad8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228adc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x228adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x228ae0: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x228ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x228ae4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228ae8: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x228ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228aec: 0x3c0444bb  lui         $a0, 0x44BB
    ctx->pc = 0x228aecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17595 << 16));
    // 0x228af0: 0x34828000  ori         $v0, $a0, 0x8000
    ctx->pc = 0x228af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x228af4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x228af4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228af8: 0x0  nop
    ctx->pc = 0x228af8u;
    // NOP
    // 0x228afc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x228afcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228b00: 0x0  nop
    ctx->pc = 0x228b00u;
    // NOP
    // 0x228b04: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x228B04u;
    {
        const bool branch_taken_0x228b04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x228b04) {
            ctx->pc = 0x228B24u;
            return;
        }
    }
    ctx->pc = 0x228B0Cu;
    // 0x228b0c: 0x3c053cc9  lui         $a1, 0x3CC9
    ctx->pc = 0x228b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15561 << 16));
    // 0x228b10: 0x34a30fdb  ori         $v1, $a1, 0xFDB
    ctx->pc = 0x228b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x228b14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x228b14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228b18: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x228b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228b1c: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x228b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x228b20: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x228b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    ctx->pc = 0x228b24u;
}
