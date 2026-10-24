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

// Function: entry_00111f84
// Address: 0x111f84 - 0x112000
void entry_00111f84_0x111f84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111f84_0x111f84");
#endif

    ctx->pc = 0x111f84u;

    // 0x111f84: 0x44023800  mfc1        $v0, $f7
    ctx->pc = 0x111f84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x111f88: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x111f88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111f8c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x111f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x111f90: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x111f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x111f94: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x111f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x111f98: 0x44834000  mtc1        $v1, $f8
    ctx->pc = 0x111f98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x111f9c: 0x46084002  mul.s       $f0, $f8, $f8
    ctx->pc = 0x111f9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x111fa0: 0x3c0133a2  lui         $at, 0x33A2
    ctx->pc = 0x111fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13218 << 16));
    // 0x111fa4: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x111fa4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x111fa8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x111fa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x111fac: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x111facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x111fb0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x111fb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x111fb4: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x111fb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x111fb8: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x111fb8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x111fbc: 0x46083900  add.s       $f4, $f7, $f8
    ctx->pc = 0x111fbcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[7], ctx->f[8]);
    // 0x111fc0: 0x0  nop
    ctx->pc = 0x111fc0u;
    // NOP
    // 0x111fc4: 0x0  nop
    ctx->pc = 0x111fc4u;
    // NOP
    // 0x111fc8: 0x4616a943  div.s       $f5, $f21, $f22
    ctx->pc = 0x111fc8u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[21], ctx->f[22]); }
    // 0x111fcc: 0x46073840  add.s       $f1, $f7, $f7
    ctx->pc = 0x111fccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[7]);
    // 0x111fd0: 0x0  nop
    ctx->pc = 0x111fd0u;
    // NOP
    // 0x111fd4: 0x0  nop
    ctx->pc = 0x111fd4u;
    // NOP
    // 0x111fd8: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x111fd8u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
    // 0x111fdc: 0x46084080  add.s       $f2, $f8, $f8
    ctx->pc = 0x111fdcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[8], ctx->f[8]);
    // 0x111fe0: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x111fe0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x111fe4: 0x46023581  sub.s       $f22, $f6, $f2
    ctx->pc = 0x111fe4u;
    ctx->f[22] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x111fe8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x111fe8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x111fec: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x111fecu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x111ff0: 0x46030d41  sub.s       $f21, $f1, $f3
    ctx->pc = 0x111ff0u;
    ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x111ff4: 0x4616a801  sub.s       $f0, $f21, $f22
    ctx->pc = 0x111ff4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[22]);
    // 0x111ff8: 0x46003501  sub.s       $f20, $f6, $f0
    ctx->pc = 0x111ff8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x111ffc: 0x0  nop
    ctx->pc = 0x111ffcu;
    // NOP
    ctx->pc = 0x112000u;
}
