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

// Function: entry_002e2224
// Address: 0x2e2224 - 0x2e227c
void entry_002e2224_0x2e2224(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e2224_0x2e2224");
#endif

    ctx->pc = 0x2e2224u;

    // 0x2e2224: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e2224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e2228: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e2228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e222c: 0xc46102b0  lwc1        $f1, 0x2B0($v1)
    ctx->pc = 0x2e222cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2230: 0x3c03bdcc  lui         $v1, 0xBDCC
    ctx->pc = 0x2e2230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48588 << 16));
    // 0x2e2234: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2e2234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2e2238: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e2238u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e223c: 0x0  nop
    ctx->pc = 0x2e223cu;
    // NOP
    // 0x2e2240: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e2240u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e2244: 0x0  nop
    ctx->pc = 0x2e2244u;
    // NOP
    // 0x2e2248: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x2E2248u;
    {
        const bool branch_taken_0x2e2248 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e2248) {
            ctx->pc = 0x2E227Cu;
            return;
        }
    }
    ctx->pc = 0x2E2250u;
    // 0x2e2250: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e2250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e2254: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x2e2254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e2258: 0xc48102b0  lwc1        $f1, 0x2B0($a0)
    ctx->pc = 0x2e2258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e225c: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2e225cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x2e2260: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2e2260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2e2264: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e2264u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2268: 0x0  nop
    ctx->pc = 0x2e2268u;
    // NOP
    // 0x2e226c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e226cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e2270: 0xe48002b0  swc1        $f0, 0x2B0($a0)
    ctx->pc = 0x2e2270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 688), bits); }
    // 0x2e2274: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2274u;
    {
        const bool branch_taken_0x2e2274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2274) {
            ctx->pc = 0x2E228Cu;
            return;
        }
    }
    ctx->pc = 0x2E227Cu;
}
