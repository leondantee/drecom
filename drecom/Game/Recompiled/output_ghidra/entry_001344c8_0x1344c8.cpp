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

// Function: entry_001344c8
// Address: 0x1344c8 - 0x134520
void entry_001344c8_0x1344c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001344c8_0x1344c8");
#endif

    ctx->pc = 0x1344c8u;

    // 0x1344c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1344c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1344cc: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x1344ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x1344d0: 0xc46102ac  lwc1        $f1, 0x2AC($v1)
    ctx->pc = 0x1344d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1344d4: 0x3c03bdcc  lui         $v1, 0xBDCC
    ctx->pc = 0x1344d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48588 << 16));
    // 0x1344d8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1344d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1344dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1344dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1344e0: 0x0  nop
    ctx->pc = 0x1344e0u;
    // NOP
    // 0x1344e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1344e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1344e8: 0x0  nop
    ctx->pc = 0x1344e8u;
    // NOP
    // 0x1344ec: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1344ECu;
    {
        const bool branch_taken_0x1344ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1344ec) {
            ctx->pc = 0x134520u;
            return;
        }
    }
    ctx->pc = 0x1344F4u;
    // 0x1344f4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1344f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1344f8: 0x8ca402d0  lw          $a0, 0x2D0($a1)
    ctx->pc = 0x1344f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x1344fc: 0xc48102ac  lwc1        $f1, 0x2AC($a0)
    ctx->pc = 0x1344fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134500: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x134500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x134504: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x134504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134508: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134508u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13450c: 0x0  nop
    ctx->pc = 0x13450cu;
    // NOP
    // 0x134510: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x134510u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x134514: 0xe48002ac  swc1        $f0, 0x2AC($a0)
    ctx->pc = 0x134514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 684), bits); }
    // 0x134518: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x134518u;
    {
        const bool branch_taken_0x134518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134518) {
            ctx->pc = 0x134530u;
            return;
        }
    }
    ctx->pc = 0x134520u;
}
