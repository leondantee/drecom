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

// Function: entry_00349de4
// Address: 0x349de4 - 0x349e30
void entry_00349de4_0x349de4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00349de4_0x349de4");
#endif

    ctx->pc = 0x349de4u;

    // 0x349de4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349de8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x349de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x349dec: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x349decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x349df0: 0x10600054  beqz        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x349DF0u;
    {
        const bool branch_taken_0x349df0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x349df0) {
            ctx->pc = 0x349F44u;
            return;
        }
    }
    ctx->pc = 0x349DF8u;
    // 0x349df8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349dfc: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x349dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x349e00: 0xc4810088  lwc1        $f1, 0x88($a0)
    ctx->pc = 0x349e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x349e04: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x349e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x349e08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x349e08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x349e0c: 0x0  nop
    ctx->pc = 0x349e0cu;
    // NOP
    // 0x349e10: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x349e10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x349e14: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349e18: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x349e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349e1c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x349e1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349e20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x349e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349e24: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x349E24u;
    {
        const bool branch_taken_0x349e24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x349e24) {
            ctx->pc = 0x349E30u;
            return;
        }
    }
    ctx->pc = 0x349E2Cu;
    // 0x349e2c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x349e2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x349e30u;
}
