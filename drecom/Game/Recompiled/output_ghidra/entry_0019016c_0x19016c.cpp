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

// Function: entry_0019016c
// Address: 0x19016c - 0x190218
void entry_0019016c_0x19016c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019016c_0x19016c");
#endif

    switch (ctx->pc) {
        case 0x190188u: goto label_190188;
        default: break;
    }

    ctx->pc = 0x19016cu;

    // 0x19016c: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x19016cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x190170: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x190170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x190174: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x190174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x190178: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x190178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x19017c: 0x244600b0  addiu       $a2, $v0, 0xB0
    ctx->pc = 0x19017cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x190180: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x190180u;
    SET_GPR_U32(ctx, 31, 0x190188u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x190188u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x190188u) { return; }
    ctx->pc = 0x190188u;
label_190188:
    // 0x190188: 0xc7a10130  lwc1        $f1, 0x130($sp)
    ctx->pc = 0x190188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19018c: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x19018cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190190: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x190190u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x190194: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x190194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x190198: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x190198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x19019c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19019cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1901a0: 0x0  nop
    ctx->pc = 0x1901a0u;
    // NOP
    // 0x1901a4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1901a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1901a8: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1901a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1901ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1901acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1901b0: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x1901b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1901b4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1901b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1901b8: 0xe44000b0  swc1        $f0, 0xB0($v0)
    ctx->pc = 0x1901b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
    // 0x1901bc: 0xc7a10134  lwc1        $f1, 0x134($sp)
    ctx->pc = 0x1901bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1901c0: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x1901c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1901c4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1901c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1901c8: 0x3c023eee  lui         $v0, 0x3EEE
    ctx->pc = 0x1901c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16110 << 16));
    // 0x1901cc: 0x3442eeef  ori         $v0, $v0, 0xEEEF
    ctx->pc = 0x1901ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61167);
    // 0x1901d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1901d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1901d4: 0x0  nop
    ctx->pc = 0x1901d4u;
    // NOP
    // 0x1901d8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1901d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1901dc: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x1901dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1901e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1901e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1901e4: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x1901e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1901e8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1901e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1901ec: 0xe44000b4  swc1        $f0, 0xB4($v0)
    ctx->pc = 0x1901ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
    // 0x1901f0: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x1901f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1901f4: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x1901f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1901f8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1901f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1901fc: 0xe44000b8  swc1        $f0, 0xB8($v0)
    ctx->pc = 0x1901fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 184), bits); }
    // 0x190200: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x190200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x190204: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190208: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x190208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x19020c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x19020cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x190210: 0xe44000bc  swc1        $f0, 0xBC($v0)
    ctx->pc = 0x190210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 188), bits); }
    // 0x190214: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x190214u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x190218u;
}
