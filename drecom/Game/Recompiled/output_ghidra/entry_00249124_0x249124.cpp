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

// Function: entry_00249124
// Address: 0x249124 - 0x249168
void entry_00249124_0x249124(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00249124_0x249124");
#endif

    ctx->pc = 0x249124u;

    // 0x249124: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x249124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x249128: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x249128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24912c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x24912cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x249130: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x249130u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x249134: 0x3c03457a  lui         $v1, 0x457A
    ctx->pc = 0x249134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17786 << 16));
    // 0x249138: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x249138u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24913c: 0x0  nop
    ctx->pc = 0x24913cu;
    // NOP
    // 0x249140: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x249140u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x249144: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x249144u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x249148: 0x0  nop
    ctx->pc = 0x249148u;
    // NOP
    // 0x24914c: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x24914Cu;
    {
        const bool branch_taken_0x24914c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24914c) {
            ctx->pc = 0x24918Cu;
            return;
        }
    }
    ctx->pc = 0x249154u;
    // 0x249154: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x249154u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x249158: 0x8fb10078  lw          $s1, 0x78($sp)
    ctx->pc = 0x249158u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x24915c: 0xa2300002  sb          $s0, 0x2($s1)
    ctx->pc = 0x24915cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 16));
    // 0x249160: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x249160u;
    {
        const bool branch_taken_0x249160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249160) {
            ctx->pc = 0x24918Cu;
            return;
        }
    }
    ctx->pc = 0x249168u;
}
