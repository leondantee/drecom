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

// Function: entry_001345c4
// Address: 0x1345c4 - 0x13461c
void entry_001345c4_0x1345c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001345c4_0x1345c4");
#endif

    ctx->pc = 0x1345c4u;

    // 0x1345c4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1345c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1345c8: 0x8c8302d0  lw          $v1, 0x2D0($a0)
    ctx->pc = 0x1345c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x1345cc: 0xc46102b0  lwc1        $f1, 0x2B0($v1)
    ctx->pc = 0x1345ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1345d0: 0x3c03bdcc  lui         $v1, 0xBDCC
    ctx->pc = 0x1345d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48588 << 16));
    // 0x1345d4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1345d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1345d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1345d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1345dc: 0x0  nop
    ctx->pc = 0x1345dcu;
    // NOP
    // 0x1345e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1345e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1345e4: 0x0  nop
    ctx->pc = 0x1345e4u;
    // NOP
    // 0x1345e8: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1345E8u;
    {
        const bool branch_taken_0x1345e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1345e8) {
            ctx->pc = 0x13461Cu;
            return;
        }
    }
    ctx->pc = 0x1345F0u;
    // 0x1345f0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1345f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1345f4: 0x8ca402d0  lw          $a0, 0x2D0($a1)
    ctx->pc = 0x1345f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x1345f8: 0xc48102b0  lwc1        $f1, 0x2B0($a0)
    ctx->pc = 0x1345f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1345fc: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1345fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x134600: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x134600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134604: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134604u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134608: 0x0  nop
    ctx->pc = 0x134608u;
    // NOP
    // 0x13460c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x13460cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x134610: 0xe48002b0  swc1        $f0, 0x2B0($a0)
    ctx->pc = 0x134610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 688), bits); }
    // 0x134614: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x134614u;
    {
        const bool branch_taken_0x134614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134614) {
            ctx->pc = 0x13462Cu;
            return;
        }
    }
    ctx->pc = 0x13461Cu;
}
