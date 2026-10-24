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

// Function: entry_002e2320
// Address: 0x2e2320 - 0x2e2378
void entry_002e2320_0x2e2320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e2320_0x2e2320");
#endif

    ctx->pc = 0x2e2320u;

    // 0x2e2320: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e2320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e2324: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e2324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e2328: 0xc46102b4  lwc1        $f1, 0x2B4($v1)
    ctx->pc = 0x2e2328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e232c: 0x3c03bdcc  lui         $v1, 0xBDCC
    ctx->pc = 0x2e232cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48588 << 16));
    // 0x2e2330: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2e2330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2e2334: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e2334u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2338: 0x0  nop
    ctx->pc = 0x2e2338u;
    // NOP
    // 0x2e233c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e233cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e2340: 0x0  nop
    ctx->pc = 0x2e2340u;
    // NOP
    // 0x2e2344: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x2E2344u;
    {
        const bool branch_taken_0x2e2344 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e2344) {
            ctx->pc = 0x2E2378u;
            return;
        }
    }
    ctx->pc = 0x2E234Cu;
    // 0x2e234c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e234cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e2350: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x2e2350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e2354: 0xc48102b4  lwc1        $f1, 0x2B4($a0)
    ctx->pc = 0x2e2354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2358: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2e2358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x2e235c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2e235cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2e2360: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e2360u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2364: 0x0  nop
    ctx->pc = 0x2e2364u;
    // NOP
    // 0x2e2368: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e2368u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e236c: 0xe48002b4  swc1        $f0, 0x2B4($a0)
    ctx->pc = 0x2e236cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 692), bits); }
    // 0x2e2370: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2370u;
    {
        const bool branch_taken_0x2e2370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2370) {
            ctx->pc = 0x2E2388u;
            return;
        }
    }
    ctx->pc = 0x2E2378u;
}
