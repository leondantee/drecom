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

// Function: entry_0019a980
// Address: 0x19a980 - 0x19aa1c
void entry_0019a980_0x19a980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a980_0x19a980");
#endif

    switch (ctx->pc) {
        case 0x19a9acu: goto label_19a9ac;
        case 0x19a9ccu: goto label_19a9cc;
        default: break;
    }

    ctx->pc = 0x19a980u;

    // 0x19a980: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x19a980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19a984: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19a984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19a988: 0xe420d378  swc1        $f0, -0x2C88($at)
    ctx->pc = 0x19a988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5CD378u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD378u, _value); } while (0); }
    // 0x19a98c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19a98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19a990: 0x2444d370  addiu       $a0, $v0, -0x2C90
    ctx->pc = 0x19a990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955888));
    // 0x19a994: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19a994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19a998: 0x2445d300  addiu       $a1, $v0, -0x2D00
    ctx->pc = 0x19a998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955776));
    // 0x19a99c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19a99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19a9a0: 0x2446d370  addiu       $a2, $v0, -0x2C90
    ctx->pc = 0x19a9a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955888));
    // 0x19a9a4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x19A9A4u;
    SET_GPR_U32(ctx, 31, 0x19A9ACu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x19A9ACu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19A9ACu) { return; }
    ctx->pc = 0x19A9ACu;
label_19a9ac:
    // 0x19a9ac: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19a9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19a9b0: 0x2444d2f0  addiu       $a0, $v0, -0x2D10
    ctx->pc = 0x19a9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955760));
    // 0x19a9b4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19a9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19a9b8: 0x2445d2f0  addiu       $a1, $v0, -0x2D10
    ctx->pc = 0x19a9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955760));
    // 0x19a9bc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19a9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19a9c0: 0x2446d370  addiu       $a2, $v0, -0x2C90
    ctx->pc = 0x19a9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955888));
    // 0x19a9c4: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x19A9C4u;
    SET_GPR_U32(ctx, 31, 0x19A9CCu);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x19A9CCu;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19A9CCu) { return; }
    ctx->pc = 0x19A9CCu;
label_19a9cc:
    // 0x19a9cc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19a9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a9d0: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x19a9d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x19a9d4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x19A9D4u;
    {
        const bool branch_taken_0x19a9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a9d4) {
            ctx->pc = 0x19AA50u;
            return;
        }
    }
    ctx->pc = 0x19A9DCu;
    // 0x19a9dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19a9dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19a9e0: 0xc421d380  lwc1        $f1, -0x2C80($at)
    ctx->pc = 0x19a9e0u;
    { uint32_t bits = FAST_READ32(0x5CD380u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19a9e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19a9e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a9e8: 0x0  nop
    ctx->pc = 0x19a9e8u;
    // NOP
    // 0x19a9ec: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x19a9ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19a9f0: 0x0  nop
    ctx->pc = 0x19a9f0u;
    // NOP
    // 0x19a9f4: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x19A9F4u;
    {
        const bool branch_taken_0x19a9f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19a9f4) {
            ctx->pc = 0x19AA1Cu;
            return;
        }
    }
    ctx->pc = 0x19A9FCu;
    // 0x19a9fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19a9fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19aa00: 0xc421d380  lwc1        $f1, -0x2C80($at)
    ctx->pc = 0x19aa00u;
    { uint32_t bits = FAST_READ32(0x5CD380u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19aa04: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x19aa04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x19aa08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19aa08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19aa0c: 0x0  nop
    ctx->pc = 0x19aa0cu;
    // NOP
    // 0x19aa10: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x19aa10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x19aa14: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19aa14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19aa18: 0xe420d380  swc1        $f0, -0x2C80($at)
    ctx->pc = 0x19aa18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5CD380u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD380u, _value); } while (0); }
    ctx->pc = 0x19aa1cu;
}
