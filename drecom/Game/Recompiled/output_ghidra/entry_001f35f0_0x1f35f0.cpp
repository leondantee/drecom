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

// Function: entry_001f35f0
// Address: 0x1f35f0 - 0x1f3630
void entry_001f35f0_0x1f35f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f35f0_0x1f35f0");
#endif

    ctx->pc = 0x1f35f0u;

    // 0x1f35f0: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1f35f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f35f4: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x1f35f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x1f35f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f35f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f35fc: 0x0  nop
    ctx->pc = 0x1f35fcu;
    // NOP
    // 0x1f3600: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f3600u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f3604: 0x0  nop
    ctx->pc = 0x1f3604u;
    // NOP
    // 0x1f3608: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1F3608u;
    {
        const bool branch_taken_0x1f3608 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f3608) {
            ctx->pc = 0x1F3630u;
            return;
        }
    }
    ctx->pc = 0x1F3610u;
    // 0x1f3610: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f3610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f3614: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f3614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3618: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1f3618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x1f361c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1f361cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1f3620: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f3620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f3624: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x1f3624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f3628: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f3628u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f362c: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x1f362cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    ctx->pc = 0x1f3630u;
}
