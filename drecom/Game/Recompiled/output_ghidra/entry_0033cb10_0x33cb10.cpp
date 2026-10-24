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

// Function: entry_0033cb10
// Address: 0x33cb10 - 0x33cb58
void entry_0033cb10_0x33cb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033cb10_0x33cb10");
#endif

    ctx->pc = 0x33cb10u;

    // 0x33cb10: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x33cb10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x33cb14: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33cb14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33cb18: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x33cb18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33cb1c: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x33cb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x33cb20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33cb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33cb24: 0xc4420094  lwc1        $f2, 0x94($v0)
    ctx->pc = 0x33cb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33cb28: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x33cb28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x33cb2c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x33cb2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x33cb30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33cb30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33cb34: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x33cb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33cb38: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x33cb38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x33cb3c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x33cb3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33cb40: 0x0  nop
    ctx->pc = 0x33cb40u;
    // NOP
    // 0x33cb44: 0x45010022  bc1t        . + 4 + (0x22 << 2)
    ctx->pc = 0x33CB44u;
    {
        const bool branch_taken_0x33cb44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33cb44) {
            ctx->pc = 0x33CBD0u;
            return;
        }
    }
    ctx->pc = 0x33CB4Cu;
    // 0x33cb4c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x33cb4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33cb50: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x33CB50u;
    {
        const bool branch_taken_0x33cb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33cb50) {
            ctx->pc = 0x33CBD0u;
            return;
        }
    }
    ctx->pc = 0x33CB58u;
}
