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

// Function: entry_00229060
// Address: 0x229060 - 0x2290ac
void entry_00229060_0x229060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00229060_0x229060");
#endif

    ctx->pc = 0x229060u;

    // 0x229060: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x229060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229064: 0x3c02be32  lui         $v0, 0xBE32
    ctx->pc = 0x229064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48690 << 16));
    // 0x229068: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x229068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x22906c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22906cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229070: 0x0  nop
    ctx->pc = 0x229070u;
    // NOP
    // 0x229074: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x229074u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229078: 0x0  nop
    ctx->pc = 0x229078u;
    // NOP
    // 0x22907c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x22907Cu;
    {
        const bool branch_taken_0x22907c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22907c) {
            ctx->pc = 0x2290ACu;
            return;
        }
    }
    ctx->pc = 0x229084u;
    // 0x229084: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x229084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229088: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x229088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22908c: 0xc461006c  lwc1        $f1, 0x6C($v1)
    ctx->pc = 0x22908cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229090: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x229090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x229094: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229094u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229098: 0x0  nop
    ctx->pc = 0x229098u;
    // NOP
    // 0x22909c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22909cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2290a0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2290a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2290a4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2290a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2290a8: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x2290a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    ctx->pc = 0x2290acu;
}
