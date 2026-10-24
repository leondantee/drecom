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

// Function: entry_0022d4ac
// Address: 0x22d4ac - 0x22d50c
void entry_0022d4ac_0x22d4ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022d4ac_0x22d4ac");
#endif

    ctx->pc = 0x22d4acu;

    // 0x22d4ac: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x22d4acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d4b0: 0x84a4127e  lh          $a0, 0x127E($a1)
    ctx->pc = 0x22d4b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4734)));
    // 0x22d4b4: 0x14800025  bnez        $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x22D4B4u;
    {
        const bool branch_taken_0x22d4b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x22d4b4) {
            ctx->pc = 0x22D54Cu;
            return;
        }
    }
    ctx->pc = 0x22D4BCu;
    // 0x22d4bc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22d4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d4c0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22d4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22d4c4: 0xc461009c  lwc1        $f1, 0x9C($v1)
    ctx->pc = 0x22d4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d4c8: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x22d4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x22d4cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22d4ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d4d0: 0x0  nop
    ctx->pc = 0x22d4d0u;
    // NOP
    // 0x22d4d4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x22d4d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22d4d8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22d4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d4dc: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x22d4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d4e0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x22d4e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22d4e4: 0x0  nop
    ctx->pc = 0x22d4e4u;
    // NOP
    // 0x22d4e8: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x22D4E8u;
    {
        const bool branch_taken_0x22d4e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22d4e8) {
            ctx->pc = 0x22D50Cu;
            return;
        }
    }
    ctx->pc = 0x22D4F0u;
    // 0x22d4f0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22d4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d4f4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22d4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22d4f8: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x22d4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d4fc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22d4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d500: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x22d500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d504: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22d504u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22d508: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x22d508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    ctx->pc = 0x22d50cu;
}
