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

// Function: caseD_6
// Address: 0x20c174 - 0x20c1cc
void caseD_6_0x20c174(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x20c174");
#endif

    ctx->pc = 0x20c174u;

    // 0x20c174: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x20c174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20c178: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x20c178u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x20c17c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20c17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20c180: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x20c180u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x20c184: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x20c184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x20c188: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20c188u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x20c18c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x20c18cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x20c190: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20c190u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x20c194: 0x286100b5  slti        $at, $v1, 0xB5
    ctx->pc = 0x20c194u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)181) ? 1 : 0);
    // 0x20c198: 0x14200018  bnez        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x20C198u;
    {
        const bool branch_taken_0x20c198 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c198) {
            ctx->pc = 0x20C1FCu;
            return;
        }
    }
    ctx->pc = 0x20C1A0u;
    // 0x20c1a0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x20c1a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x20c1a4: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x20c1a4u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20c1a8: 0x3c0344bb  lui         $v1, 0x44BB
    ctx->pc = 0x20c1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17595 << 16));
    // 0x20c1ac: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x20c1acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x20c1b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20c1b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20c1b4: 0x0  nop
    ctx->pc = 0x20c1b4u;
    // NOP
    // 0x20c1b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20c1b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20c1bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20c1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c1c0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x20C1C0u;
    {
        const bool branch_taken_0x20c1c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20c1c0) {
            ctx->pc = 0x20C1CCu;
            return;
        }
    }
    ctx->pc = 0x20C1C8u;
    // 0x20c1c8: 0x70001e28  paddub      $v1, $zero, $zero
    ctx->pc = 0x20c1c8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x20c1ccu;
}
