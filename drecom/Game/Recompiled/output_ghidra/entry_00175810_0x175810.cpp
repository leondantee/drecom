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

// Function: entry_00175810
// Address: 0x175810 - 0x175858
void entry_00175810_0x175810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175810_0x175810");
#endif

    ctx->pc = 0x175810u;

    // 0x175810: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x175810u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x175814: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x175814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x175818: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x175818u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17581c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17581cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x175820: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x175820u;
    {
        const bool branch_taken_0x175820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175820) {
            ctx->pc = 0x175784u;
            return;
        }
    }
    ctx->pc = 0x175828u;
    // 0x175828: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x175828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x17582c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17582cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x175830: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x175830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175834: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x175834u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x175838: 0x0  nop
    ctx->pc = 0x175838u;
    // NOP
    // 0x17583c: 0x4500005e  bc1f        . + 4 + (0x5E << 2)
    ctx->pc = 0x17583Cu;
    {
        const bool branch_taken_0x17583c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17583c) {
            ctx->pc = 0x1759B8u;
            return;
        }
    }
    ctx->pc = 0x175844u;
    // 0x175844: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x175844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x175848: 0x2450c7b0  addiu       $s0, $v0, -0x3850
    ctx->pc = 0x175848u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952880));
    // 0x17584c: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x17584cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x175850: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x175850u;
    {
        const bool branch_taken_0x175850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x175850) {
            ctx->pc = 0x175908u;
            return;
        }
    }
    ctx->pc = 0x175858u;
}
