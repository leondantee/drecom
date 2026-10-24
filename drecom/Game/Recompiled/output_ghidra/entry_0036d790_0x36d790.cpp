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

// Function: entry_0036d790
// Address: 0x36d790 - 0x36d7ec
void entry_0036d790_0x36d790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036d790_0x36d790");
#endif

    ctx->pc = 0x36d790u;

    // 0x36d790: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x36d790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x36d794: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x36d794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x36d798: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x36d798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x36d79c: 0x441002a  bgez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x36D79Cu;
    {
        const bool branch_taken_0x36d79c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x36d79c) {
            ctx->pc = 0x36D848u;
            return;
        }
    }
    ctx->pc = 0x36D7A4u;
    // 0x36d7a4: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x36d7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x36d7a8: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x36d7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x36d7ac: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x36d7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36d7b0: 0x3c02bf49  lui         $v0, 0xBF49
    ctx->pc = 0x36d7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48969 << 16));
    // 0x36d7b4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x36d7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x36d7b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36d7b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d7bc: 0x0  nop
    ctx->pc = 0x36d7bcu;
    // NOP
    // 0x36d7c0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x36d7c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36d7c4: 0x0  nop
    ctx->pc = 0x36d7c4u;
    // NOP
    // 0x36d7c8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x36D7C8u;
    {
        const bool branch_taken_0x36d7c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x36d7c8) {
            ctx->pc = 0x36D7ECu;
            return;
        }
    }
    ctx->pc = 0x36D7D0u;
    // 0x36d7d0: 0x3c02c016  lui         $v0, 0xC016
    ctx->pc = 0x36d7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49174 << 16));
    // 0x36d7d4: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x36d7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
    // 0x36d7d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36d7d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d7dc: 0x0  nop
    ctx->pc = 0x36d7dcu;
    // NOP
    // 0x36d7e0: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x36d7e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x36d7e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x36D7E4u;
    {
        const bool branch_taken_0x36d7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d7e4) {
            ctx->pc = 0x36D800u;
            return;
        }
    }
    ctx->pc = 0x36D7ECu;
}
