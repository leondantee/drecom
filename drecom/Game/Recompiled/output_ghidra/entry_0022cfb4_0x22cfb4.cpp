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

// Function: entry_0022cfb4
// Address: 0x22cfb4 - 0x22cff4
void entry_0022cfb4_0x22cfb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022cfb4_0x22cfb4");
#endif

    ctx->pc = 0x22cfb4u;

    // 0x22cfb4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22cfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cfb8: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x22cfb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x22cfbc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22cfbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22cfc0: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x22cfc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x22cfc4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x22CFC4u;
    {
        const bool branch_taken_0x22cfc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cfc4) {
            ctx->pc = 0x22CFF4u;
            return;
        }
    }
    ctx->pc = 0x22CFCCu;
    // 0x22cfcc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22cfccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cfd0: 0x3c023f6b  lui         $v0, 0x3F6B
    ctx->pc = 0x22cfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16235 << 16));
    // 0x22cfd4: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x22cfd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x22cfd8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22cfd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22cfdc: 0xc46000d0  lwc1        $f0, 0xD0($v1)
    ctx->pc = 0x22cfdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22cfe0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22cfe0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22cfe4: 0xe46000d0  swc1        $f0, 0xD0($v1)
    ctx->pc = 0x22cfe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 208), bits); }
    // 0x22cfe8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22cfe8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22cfec: 0x0  nop
    ctx->pc = 0x22cfecu;
    // NOP
    // 0x22cff0: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x22cff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    ctx->pc = 0x22cff4u;
}
