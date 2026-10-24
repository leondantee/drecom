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

// Function: entry_001728b8
// Address: 0x1728b8 - 0x17295c
void entry_001728b8_0x1728b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001728b8_0x1728b8");
#endif

    switch (ctx->pc) {
        case 0x172918u: goto label_172918;
        default: break;
    }

    ctx->pc = 0x1728b8u;

    // 0x1728b8: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x1728b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1728bc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1728bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1728c0: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x1728c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1728c4: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x1728c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1728c8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1728c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1728cc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1728ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1728d0: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1728d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1728d4: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1728d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1728d8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1728d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1728dc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1728dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1728e0: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1728e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1728e4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1728e4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1728e8: 0x0  nop
    ctx->pc = 0x1728e8u;
    // NOP
    // 0x1728ec: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x1728ECu;
    {
        const bool branch_taken_0x1728ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1728ec) {
            ctx->pc = 0x17295Cu;
            return;
        }
    }
    ctx->pc = 0x1728F4u;
    // 0x1728f4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1728f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1728f8: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1728f8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x1728fc: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1728fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172900: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x172900u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x172904: 0x0  nop
    ctx->pc = 0x172904u;
    // NOP
    // 0x172908: 0x0  nop
    ctx->pc = 0x172908u;
    // NOP
    // 0x17290c: 0x0  nop
    ctx->pc = 0x17290cu;
    // NOP
    // 0x172910: 0xc045330  jal         func_114CC0
    ctx->pc = 0x172910u;
    SET_GPR_U32(ctx, 31, 0x172918u);
    ctx->pc = 0x114CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114CC0u, 0x172910u, 0x172918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172918u;
label_172918:
    // 0x172918: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x172918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x17291c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x17291cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172920: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x172920u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172924: 0x0  nop
    ctx->pc = 0x172924u;
    // NOP
    // 0x172928: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x172928u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17292c: 0x0  nop
    ctx->pc = 0x17292cu;
    // NOP
    // 0x172930: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x172930u;
    {
        const bool branch_taken_0x172930 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x172930) {
            ctx->pc = 0x1729B0u;
            return;
        }
    }
    ctx->pc = 0x172938u;
    // 0x172938: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x172938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17293c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x17293cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x172940: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x172940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x172944: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x172944u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172948: 0x0  nop
    ctx->pc = 0x172948u;
    // NOP
    // 0x17294c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x17294cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x172950: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x172950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x172954: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x172954u;
    {
        const bool branch_taken_0x172954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172954) {
            ctx->pc = 0x1729B0u;
            return;
        }
    }
    ctx->pc = 0x17295Cu;
}
