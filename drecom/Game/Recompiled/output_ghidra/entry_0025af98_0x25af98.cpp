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

// Function: entry_0025af98
// Address: 0x25af98 - 0x25aff4
void entry_0025af98_0x25af98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025af98_0x25af98");
#endif

    ctx->pc = 0x25af98u;

    // 0x25af98: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25af98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25af9c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x25af9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x25afa0: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x25afa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x25afa4: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x25AFA4u;
    {
        const bool branch_taken_0x25afa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25afa4) {
            ctx->pc = 0x25AFF4u;
            return;
        }
    }
    ctx->pc = 0x25AFACu;
    // 0x25afac: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x25afacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25afb0: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25afb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25afb4: 0xc4610180  lwc1        $f1, 0x180($v1)
    ctx->pc = 0x25afb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25afb8: 0xc48001a0  lwc1        $f0, 0x1A0($a0)
    ctx->pc = 0x25afb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25afbc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25afbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25afc0: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x25afc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x25afc4: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x25afc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25afc8: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25afc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25afcc: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x25afccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25afd0: 0xc48001a4  lwc1        $f0, 0x1A4($a0)
    ctx->pc = 0x25afd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25afd4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25afd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25afd8: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x25afd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x25afdc: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x25afdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25afe0: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x25afe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25afe4: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x25afe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25afe8: 0xc48001a8  lwc1        $f0, 0x1A8($a0)
    ctx->pc = 0x25afe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25afec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25afecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25aff0: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x25aff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    ctx->pc = 0x25aff4u;
}
