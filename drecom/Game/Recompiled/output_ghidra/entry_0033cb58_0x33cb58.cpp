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

// Function: entry_0033cb58
// Address: 0x33cb58 - 0x33cb88
void entry_0033cb58_0x33cb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033cb58_0x33cb58");
#endif

    ctx->pc = 0x33cb58u;

    // 0x33cb58: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x33cb58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x33cb5c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33cb5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33cb60: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x33cb60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33cb64: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x33cb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x33cb68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33cb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33cb6c: 0xc4410094  lwc1        $f1, 0x94($v0)
    ctx->pc = 0x33cb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33cb70: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x33cb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33cb74: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x33cb74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33cb78: 0x0  nop
    ctx->pc = 0x33cb78u;
    // NOP
    // 0x33cb7c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x33CB7Cu;
    {
        const bool branch_taken_0x33cb7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33cb7c) {
            ctx->pc = 0x33CB88u;
            return;
        }
    }
    ctx->pc = 0x33CB84u;
    // 0x33cb84: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x33cb84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x33cb88u;
}
