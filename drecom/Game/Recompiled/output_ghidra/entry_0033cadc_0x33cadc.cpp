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

// Function: entry_0033cadc
// Address: 0x33cadc - 0x33cb10
void entry_0033cadc_0x33cadc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033cadc_0x33cadc");
#endif

    ctx->pc = 0x33cadcu;

    // 0x33cadc: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x33cadcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x33cae0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33cae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33cae4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x33cae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33cae8: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x33cae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x33caec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33caecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33caf0: 0xc4410094  lwc1        $f1, 0x94($v0)
    ctx->pc = 0x33caf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33caf4: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x33caf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33caf8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x33caf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33cafc: 0x0  nop
    ctx->pc = 0x33cafcu;
    // NOP
    // 0x33cb00: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x33CB00u;
    {
        const bool branch_taken_0x33cb00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x33cb00) {
            ctx->pc = 0x33CB10u;
            return;
        }
    }
    ctx->pc = 0x33CB08u;
    // 0x33cb08: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x33cb08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33cb0c: 0x0  nop
    ctx->pc = 0x33cb0cu;
    // NOP
    ctx->pc = 0x33cb10u;
}
