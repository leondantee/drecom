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

// Function: entry_00299150
// Address: 0x299150 - 0x2991a0
void entry_00299150_0x299150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00299150_0x299150");
#endif

    ctx->pc = 0x299150u;

    // 0x299150: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x299150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x299154: 0x946801a8  lhu         $t0, 0x1A8($v1)
    ctx->pc = 0x299154u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 424)));
    // 0x299158: 0x3103ffff  andi        $v1, $t0, 0xFFFF
    ctx->pc = 0x299158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x29915c: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x29915cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x299160: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x299160u;
    {
        const bool branch_taken_0x299160 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x299160) {
            ctx->pc = 0x2991B4u;
            return;
        }
    }
    ctx->pc = 0x299168u;
    // 0x299168: 0x3c074220  lui         $a3, 0x4220
    ctx->pc = 0x299168u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16928 << 16));
    // 0x29916c: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x29916cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x299170: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x299170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299174: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x299174u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299178: 0x0  nop
    ctx->pc = 0x299178u;
    // NOP
    // 0x29917c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x29917Cu;
    {
        const bool branch_taken_0x29917c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29917c) {
            ctx->pc = 0x2991A0u;
            return;
        }
    }
    ctx->pc = 0x299184u;
    // 0x299184: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x299184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x299188: 0xc421fd70  lwc1        $f1, -0x290($at)
    ctx->pc = 0x299188u;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29918c: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x29918cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299190: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x299190u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299194: 0x0  nop
    ctx->pc = 0x299194u;
    // NOP
    // 0x299198: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x299198u;
    {
        const bool branch_taken_0x299198 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x299198) {
            ctx->pc = 0x2991B4u;
            return;
        }
    }
    ctx->pc = 0x2991A0u;
}
