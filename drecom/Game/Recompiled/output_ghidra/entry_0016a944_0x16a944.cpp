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

// Function: entry_0016a944
// Address: 0x16a944 - 0x16a9cc
void entry_0016a944_0x16a944(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a944_0x16a944");
#endif

    ctx->pc = 0x16a944u;

    // 0x16a944: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x16a944u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x16a948: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x16a948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x16a94c: 0xc46200c0  lwc1        $f2, 0xC0($v1)
    ctx->pc = 0x16a94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16a950: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16a950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16a954: 0xc421ab08  lwc1        $f1, -0x54F8($at)
    ctx->pc = 0x16a954u;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a958: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16a958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16a95c: 0xc420ab08  lwc1        $f0, -0x54F8($at)
    ctx->pc = 0x16a95cu;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a960: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16a960u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16a964: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x16a964u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a968: 0x0  nop
    ctx->pc = 0x16a968u;
    // NOP
    // 0x16a96c: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x16A96Cu;
    {
        const bool branch_taken_0x16a96c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a96c) {
            ctx->pc = 0x16A9D4u;
            return;
        }
    }
    ctx->pc = 0x16A974u;
    // 0x16a974: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x16a974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x16a978: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x16a978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x16a97c: 0xc46100c0  lwc1        $f1, 0xC0($v1)
    ctx->pc = 0x16a97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a980: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16a980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16a984: 0xc420ab00  lwc1        $f0, -0x5500($at)
    ctx->pc = 0x16a984u;
    { uint32_t bits = FAST_READ32(0x47AB00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a988: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16a988u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a98c: 0x0  nop
    ctx->pc = 0x16a98cu;
    // NOP
    // 0x16a990: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x16A990u;
    {
        const bool branch_taken_0x16a990 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a990) {
            ctx->pc = 0x16A9D4u;
            return;
        }
    }
    ctx->pc = 0x16A998u;
    // 0x16a998: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x16a998u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x16a99c: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x16a99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x16a9a0: 0xc46000c0  lwc1        $f0, 0xC0($v1)
    ctx->pc = 0x16a9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a9a4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16a9a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16a9a8: 0xe420ab00  swc1        $f0, -0x5500($at)
    ctx->pc = 0x16a9a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AB00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB00u, _value); } while (0); }
    // 0x16a9ac: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x16a9acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x16a9b0: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x16a9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x16a9b4: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x16a9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x16a9b8: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x16a9b8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16a9bc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x16a9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x16a9c0: 0x2463aaf0  addiu       $v1, $v1, -0x5510
    ctx->pc = 0x16a9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945520));
    // 0x16a9c4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x16a9c4u;
    do { __m128i _value = (GPR_VEC(ctx, 4)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x47AAF0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x47AAF0u, _value); } while (0);
    // 0x16a9c8: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x16a9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    ctx->pc = 0x16a9ccu;
}
