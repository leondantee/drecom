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

// Function: entry_0026a96c
// Address: 0x26a96c - 0x26a9d0
void entry_0026a96c_0x26a96c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026a96c_0x26a96c");
#endif

    ctx->pc = 0x26a96cu;

    // 0x26a96c: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x26a96cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x26a970: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x26a970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x26a974: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x26a974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x26a978: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x26A978u;
    {
        const bool branch_taken_0x26a978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a978) {
            ctx->pc = 0x26A9D0u;
            return;
        }
    }
    ctx->pc = 0x26A980u;
    // 0x26a980: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x26a980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x26a984: 0xa6021278  sh          $v0, 0x1278($s0)
    ctx->pc = 0x26a984u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x26a988: 0xc6010188  lwc1        $f1, 0x188($s0)
    ctx->pc = 0x26a988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a98c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x26a98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x26a990: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a990u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a994: 0x0  nop
    ctx->pc = 0x26a994u;
    // NOP
    // 0x26a998: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26a998u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26a99c: 0xe6000188  swc1        $f0, 0x188($s0)
    ctx->pc = 0x26a99cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 392), bits); }
    // 0x26a9a0: 0xc6010188  lwc1        $f1, 0x188($s0)
    ctx->pc = 0x26a9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a9a4: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x26a9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x26a9a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a9a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a9ac: 0x0  nop
    ctx->pc = 0x26a9acu;
    // NOP
    // 0x26a9b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26a9b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a9b4: 0x0  nop
    ctx->pc = 0x26a9b4u;
    // NOP
    // 0x26a9b8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x26A9B8u;
    {
        const bool branch_taken_0x26a9b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26a9b8) {
            ctx->pc = 0x26A9D0u;
            return;
        }
    }
    ctx->pc = 0x26A9C0u;
    // 0x26a9c0: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x26a9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x26a9c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a9c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a9c8: 0x0  nop
    ctx->pc = 0x26a9c8u;
    // NOP
    // 0x26a9cc: 0xe6000188  swc1        $f0, 0x188($s0)
    ctx->pc = 0x26a9ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 392), bits); }
    ctx->pc = 0x26a9d0u;
}
