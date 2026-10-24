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

// Function: entry_002e2128
// Address: 0x2e2128 - 0x2e2180
void entry_002e2128_0x2e2128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e2128_0x2e2128");
#endif

    ctx->pc = 0x2e2128u;

    // 0x2e2128: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e2128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e212c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e212cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e2130: 0xc46102ac  lwc1        $f1, 0x2AC($v1)
    ctx->pc = 0x2e2130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2134: 0x3c03bdcc  lui         $v1, 0xBDCC
    ctx->pc = 0x2e2134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48588 << 16));
    // 0x2e2138: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2e2138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2e213c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e213cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2140: 0x0  nop
    ctx->pc = 0x2e2140u;
    // NOP
    // 0x2e2144: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e2144u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e2148: 0x0  nop
    ctx->pc = 0x2e2148u;
    // NOP
    // 0x2e214c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x2E214Cu;
    {
        const bool branch_taken_0x2e214c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e214c) {
            ctx->pc = 0x2E2180u;
            return;
        }
    }
    ctx->pc = 0x2E2154u;
    // 0x2e2154: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e2154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e2158: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x2e2158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e215c: 0xc48102ac  lwc1        $f1, 0x2AC($a0)
    ctx->pc = 0x2e215cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2160: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2e2160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x2e2164: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2e2164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2e2168: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e2168u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e216c: 0x0  nop
    ctx->pc = 0x2e216cu;
    // NOP
    // 0x2e2170: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e2170u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e2174: 0xe48002ac  swc1        $f0, 0x2AC($a0)
    ctx->pc = 0x2e2174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 684), bits); }
    // 0x2e2178: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2178u;
    {
        const bool branch_taken_0x2e2178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2178) {
            ctx->pc = 0x2E2190u;
            return;
        }
    }
    ctx->pc = 0x2E2180u;
}
