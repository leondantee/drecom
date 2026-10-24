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

// Function: entry_001f76ac
// Address: 0x1f76ac - 0x1f770c
void entry_001f76ac_0x1f76ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f76ac_0x1f76ac");
#endif

    ctx->pc = 0x1f76acu;

    // 0x1f76ac: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f76acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f76b0: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x1f76b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f76b4: 0xc4a10028  lwc1        $f1, 0x28($a1)
    ctx->pc = 0x1f76b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f76b8: 0x3c033e75  lui         $v1, 0x3E75
    ctx->pc = 0x1f76b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15989 << 16));
    // 0x1f76bc: 0x3464c28f  ori         $a0, $v1, 0xC28F
    ctx->pc = 0x1f76bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x1f76c0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1f76c0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f76c4: 0x0  nop
    ctx->pc = 0x1f76c4u;
    // NOP
    // 0x1f76c8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f76c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f76cc: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x1f76ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x1f76d0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f76d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f76d4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f76d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f76d8: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x1f76d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f76dc: 0x3c05c1a0  lui         $a1, 0xC1A0
    ctx->pc = 0x1f76dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49568 << 16));
    // 0x1f76e0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1f76e0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f76e4: 0x0  nop
    ctx->pc = 0x1f76e4u;
    // NOP
    // 0x1f76e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f76e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f76ec: 0x0  nop
    ctx->pc = 0x1f76ecu;
    // NOP
    // 0x1f76f0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1F76F0u;
    {
        const bool branch_taken_0x1f76f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f76f0) {
            ctx->pc = 0x1F770Cu;
            return;
        }
    }
    ctx->pc = 0x1F76F8u;
    // 0x1f76f8: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f76f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f76fc: 0x8486127e  lh          $a2, 0x127E($a0)
    ctx->pc = 0x1f76fcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4734)));
    // 0x1f7700: 0x2407fffe  addiu       $a3, $zero, -0x2
    ctx->pc = 0x1f7700u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1f7704: 0xc71824  and         $v1, $a2, $a3
    ctx->pc = 0x1f7704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x1f7708: 0xa483127e  sh          $v1, 0x127E($a0)
    ctx->pc = 0x1f7708u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4734), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1f770cu;
}
