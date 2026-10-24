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

// Function: entry_00290a90
// Address: 0x290a90 - 0x290b10
void entry_00290a90_0x290a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00290a90_0x290a90");
#endif

    ctx->pc = 0x290a90u;

    // 0x290a90: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x290a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x290a94: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x290a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x290a98: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x290a98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x290a9c: 0x1460ffd5  bnez        $v1, . + 4 + (-0x2B << 2)
    ctx->pc = 0x290A9Cu;
    {
        const bool branch_taken_0x290a9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x290a9c) {
            ctx->pc = 0x2909F4u;
            return;
        }
    }
    ctx->pc = 0x290AA4u;
    // 0x290aa4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x290aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x290aa8: 0xc4212a08  lwc1        $f1, 0x2A08($at)
    ctx->pc = 0x290aa8u;
    { uint32_t bits = FAST_READ32(0x622A08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290aac: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x290aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x290ab0: 0xc4202a04  lwc1        $f0, 0x2A04($at)
    ctx->pc = 0x290ab0u;
    { uint32_t bits = FAST_READ32(0x622A04u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290ab4: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x290ab4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x290ab8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x290ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x290abc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x290abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x290ac0: 0xc42129b0  lwc1        $f1, 0x29B0($at)
    ctx->pc = 0x290ac0u;
    { uint32_t bits = FAST_READ32(0x6229B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290ac4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x290ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290ac8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x290ac8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x290acc: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x290accu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x290ad0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x290ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x290ad4: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x290ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x290ad8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x290ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x290adc: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x290adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290ae0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x290ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x290ae4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x290ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290ae8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x290ae8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x290aec: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x290aecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x290af0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x290af0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x290af4: 0x0  nop
    ctx->pc = 0x290af4u;
    // NOP
    // 0x290af8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x290af8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x290afc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x290afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x290b00: 0xe4202a04  swc1        $f0, 0x2A04($at)
    ctx->pc = 0x290b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622A04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622A04u, _value); } while (0); }
    // 0x290b04: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x290b04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290b08: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x290B08u;
    {
        const bool branch_taken_0x290b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x290b08) {
            ctx->pc = 0x290C98u;
            return;
        }
    }
    ctx->pc = 0x290B10u;
}
