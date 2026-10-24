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

// Function: entry_00191fcc
// Address: 0x191fcc - 0x192030
void entry_00191fcc_0x191fcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191fcc_0x191fcc");
#endif

    ctx->pc = 0x191fccu;

    // 0x191fcc: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x191fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x191fd0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x191fd0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x191fd4: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x191fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x191fd8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x191fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x191fdc: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x191fdcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x191fe0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x191fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x191fe4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x191fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x191fe8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x191fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191fec: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x191fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x191ff0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191ff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191ff4: 0x0  nop
    ctx->pc = 0x191ff4u;
    // NOP
    // 0x191ff8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x191ff8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191ffc: 0x0  nop
    ctx->pc = 0x191ffcu;
    // NOP
    // 0x192000: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x192000u;
    {
        const bool branch_taken_0x192000 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x192000) {
            ctx->pc = 0x192030u;
            return;
        }
    }
    ctx->pc = 0x192008u;
    // 0x192008: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x192008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x19200c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x19200cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x192010: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x192010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192014: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x192014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x192018: 0xc420fd70  lwc1        $f0, -0x290($at)
    ctx->pc = 0x192018u;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19201c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x19201cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192020: 0x0  nop
    ctx->pc = 0x192020u;
    // NOP
    // 0x192024: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x192024u;
    {
        const bool branch_taken_0x192024 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x192024) {
            ctx->pc = 0x192038u;
            return;
        }
    }
    ctx->pc = 0x19202Cu;
    // 0x19202c: 0x0  nop
    ctx->pc = 0x19202cu;
    // NOP
    ctx->pc = 0x192030u;
}
