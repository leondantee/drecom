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

// Function: entry_00364b9c
// Address: 0x364b9c - 0x364bf8
void entry_00364b9c_0x364b9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00364b9c_0x364b9c");
#endif

    ctx->pc = 0x364b9cu;

    // 0x364b9c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x364b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x364ba0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x364ba0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x364ba4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x364ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x364ba8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x364ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x364bac: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x364BACu;
    {
        const bool branch_taken_0x364bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x364bac) {
            ctx->pc = 0x364BF8u;
            return;
        }
    }
    ctx->pc = 0x364BB4u;
    // 0x364bb4: 0xc6010064  lwc1        $f1, 0x64($s0)
    ctx->pc = 0x364bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x364bb8: 0x3c023c49  lui         $v0, 0x3C49
    ctx->pc = 0x364bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15433 << 16));
    // 0x364bbc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x364bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x364bc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x364bc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x364bc4: 0x0  nop
    ctx->pc = 0x364bc4u;
    // NOP
    // 0x364bc8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x364bc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x364bcc: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x364bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x364bd0: 0xc6010064  lwc1        $f1, 0x64($s0)
    ctx->pc = 0x364bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x364bd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x364bd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x364bd8: 0x0  nop
    ctx->pc = 0x364bd8u;
    // NOP
    // 0x364bdc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x364bdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x364be0: 0x0  nop
    ctx->pc = 0x364be0u;
    // NOP
    // 0x364be4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x364BE4u;
    {
        const bool branch_taken_0x364be4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x364be4) {
            ctx->pc = 0x364BF8u;
            return;
        }
    }
    ctx->pc = 0x364BECu;
    // 0x364bec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x364becu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x364bf0: 0x0  nop
    ctx->pc = 0x364bf0u;
    // NOP
    // 0x364bf4: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x364bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    ctx->pc = 0x364bf8u;
}
