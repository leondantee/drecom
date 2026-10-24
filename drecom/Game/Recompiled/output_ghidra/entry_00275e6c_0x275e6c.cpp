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

// Function: entry_00275e6c
// Address: 0x275e6c - 0x275f00
void entry_00275e6c_0x275e6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00275e6c_0x275e6c");
#endif

    ctx->pc = 0x275e6cu;

    // 0x275e6c: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x275e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x275e70: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x275e70u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275e74: 0x0  nop
    ctx->pc = 0x275e74u;
    // NOP
    // 0x275e78: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x275e78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x275e7c: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x275e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275e80: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x275e80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x275e84: 0x111240  sll         $v0, $s1, 9
    ctx->pc = 0x275e84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
    // 0x275e88: 0x2423021  addu        $a2, $s2, $v0
    ctx->pc = 0x275e88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x275e8c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x275e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x275e90: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x275e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x275e94: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x275e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x275e98: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x275e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x275e9c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x275e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x275ea0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x275ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x275ea4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x275ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x275ea8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x275ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x275eac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x275eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x275eb0: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x275eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x275eb4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x275eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x275eb8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x275eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x275ebc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x275ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x275ec0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x275ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x275ec4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x275ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x275ec8: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x275ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x275ecc: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x275eccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x275ed0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x275ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x275ed4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x275ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x275ed8: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x275ed8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x275edc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x275edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x275ee0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x275ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x275ee4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x275EE4u;
    {
        const bool branch_taken_0x275ee4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x275ee4) {
            ctx->pc = 0x275F00u;
            return;
        }
    }
    ctx->pc = 0x275EECu;
    // 0x275eec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x275eecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275ef0: 0x0  nop
    ctx->pc = 0x275ef0u;
    // NOP
    // 0x275ef4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x275ef4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x275ef8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x275EF8u;
    {
        const bool branch_taken_0x275ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275ef8) {
            ctx->pc = 0x275F1Cu;
            return;
        }
    }
    ctx->pc = 0x275F00u;
}
