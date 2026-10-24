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

// Function: entry_0017b800
// Address: 0x17b800 - 0x17b888
void entry_0017b800_0x17b800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b800_0x17b800");
#endif

    switch (ctx->pc) {
        case 0x17b838u: goto label_17b838;
        default: break;
    }

    ctx->pc = 0x17b800u;

    // 0x17b800: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x17b800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x17b804: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x17b804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x17b808: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17b808u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17b80c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x17b80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b810: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x17b810u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17b814: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x17b814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x17b818: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17b818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b81c: 0x0  nop
    ctx->pc = 0x17b81cu;
    // NOP
    // 0x17b820: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x17b820u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x17b824: 0x0  nop
    ctx->pc = 0x17b824u;
    // NOP
    // 0x17b828: 0x0  nop
    ctx->pc = 0x17b828u;
    // NOP
    // 0x17b82c: 0x0  nop
    ctx->pc = 0x17b82cu;
    // NOP
    // 0x17b830: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x17B830u;
    SET_GPR_U32(ctx, 31, 0x17B838u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x17B830u, 0x17B838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B838u;
label_17b838:
    // 0x17b838: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17b838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17b83c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17b83cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17b840: 0x0  nop
    ctx->pc = 0x17b840u;
    // NOP
    // 0x17b844: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x17b844u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17b848: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x17b848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b84c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x17b84cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x17b850: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x17b850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x17b854: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x17b854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x17b858: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17b858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17b85c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x17b85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b860: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x17b860u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17b864: 0x0  nop
    ctx->pc = 0x17b864u;
    // NOP
    // 0x17b868: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x17B868u;
    {
        const bool branch_taken_0x17b868 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17b868) {
            ctx->pc = 0x17B888u;
            return;
        }
    }
    ctx->pc = 0x17B870u;
    // 0x17b870: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17b870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17b874: 0xc421ef10  lwc1        $f1, -0x10F0($at)
    ctx->pc = 0x17b874u;
    { uint32_t bits = FAST_READ32(0x47EF10u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17b878: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x17b878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b87c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17b87cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17b880: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17b880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17b884: 0xe420ef10  swc1        $f0, -0x10F0($at)
    ctx->pc = 0x17b884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47EF10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47EF10u, _value); } while (0); }
    ctx->pc = 0x17b888u;
}
