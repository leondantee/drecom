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

// Function: entry_0020247c
// Address: 0x20247c - 0x2024d0
void entry_0020247c_0x20247c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020247c_0x20247c");
#endif

    ctx->pc = 0x20247cu;

    // 0x20247c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x20247cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202480: 0x8c834848  lw          $v1, 0x4848($a0)
    ctx->pc = 0x202480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18504)));
    // 0x202484: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x202484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x202488: 0xac834848  sw          $v1, 0x4848($a0)
    ctx->pc = 0x202488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 18504), GPR_U32(ctx, 3));
    // 0x20248c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20248cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202490: 0xc461482c  lwc1        $f1, 0x482C($v1)
    ctx->pc = 0x202490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 18476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x202494: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x202494u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202498: 0x0  nop
    ctx->pc = 0x202498u;
    // NOP
    // 0x20249c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x20249cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2024a0: 0x0  nop
    ctx->pc = 0x2024a0u;
    // NOP
    // 0x2024a4: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
    ctx->pc = 0x2024A4u;
    {
        const bool branch_taken_0x2024a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2024a4) {
            ctx->pc = 0x202524u;
            return;
        }
    }
    ctx->pc = 0x2024ACu;
    // 0x2024ac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2024acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2024b0: 0x8c634848  lw          $v1, 0x4848($v1)
    ctx->pc = 0x2024b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18504)));
    // 0x2024b4: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2024B4u;
    {
        const bool branch_taken_0x2024b4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2024b4) {
            ctx->pc = 0x2024D0u;
            return;
        }
    }
    ctx->pc = 0x2024BCu;
    // 0x2024bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2024bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2024c0: 0x0  nop
    ctx->pc = 0x2024c0u;
    // NOP
    // 0x2024c4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2024c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2024c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2024C8u;
    {
        const bool branch_taken_0x2024c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2024c8) {
            ctx->pc = 0x2024ECu;
            return;
        }
    }
    ctx->pc = 0x2024D0u;
}
