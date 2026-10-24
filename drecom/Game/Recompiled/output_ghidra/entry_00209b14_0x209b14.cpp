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

// Function: entry_00209b14
// Address: 0x209b14 - 0x209b54
void entry_00209b14_0x209b14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00209b14_0x209b14");
#endif

    ctx->pc = 0x209b14u;

    // 0x209b14: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x209b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x209b18: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x209b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x209b1c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x209b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x209b20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x209b20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209b24: 0x0  nop
    ctx->pc = 0x209b24u;
    // NOP
    // 0x209b28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x209b28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x209b2c: 0x0  nop
    ctx->pc = 0x209b2cu;
    // NOP
    // 0x209b30: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x209B30u;
    {
        const bool branch_taken_0x209b30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x209b30) {
            ctx->pc = 0x209B54u;
            return;
        }
    }
    ctx->pc = 0x209B38u;
    // 0x209b38: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x209b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x209b3c: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x209b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x209b40: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x209b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x209b44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x209b44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209b48: 0x0  nop
    ctx->pc = 0x209b48u;
    // NOP
    // 0x209b4c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x209b4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x209b50: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x209b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    ctx->pc = 0x209b54u;
}
