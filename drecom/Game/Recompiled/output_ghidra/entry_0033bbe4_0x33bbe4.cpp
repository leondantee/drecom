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

// Function: entry_0033bbe4
// Address: 0x33bbe4 - 0x33bc58
void entry_0033bbe4_0x33bbe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033bbe4_0x33bbe4");
#endif

    ctx->pc = 0x33bbe4u;

    // 0x33bbe4: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x33bbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x33bbe8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x33bbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x33bbec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33bbecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33bbf0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x33bbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33bbf4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x33bbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x33bbf8: 0x24639a40  addiu       $v1, $v1, -0x65C0
    ctx->pc = 0x33bbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941248));
    // 0x33bbfc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33bbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33bc00: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x33bc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33bc04: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x33bc04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x33bc08: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x33bc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x33bc0c: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x33bc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x33bc10: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x33bc10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x33bc14: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x33bc14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33bc18: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x33bc18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x33bc1c: 0x24629a40  addiu       $v0, $v1, -0x65C0
    ctx->pc = 0x33bc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941248));
    // 0x33bc20: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x33bc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x33bc24: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x33bc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33bc28: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x33bc28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x33bc2c: 0x8e02013c  lw          $v0, 0x13C($s0)
    ctx->pc = 0x33bc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x33bc30: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x33bc30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x33bc34: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x33bc34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x33bc38: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x33bc38u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x33bc3c: 0x24022710  addiu       $v0, $zero, 0x2710
    ctx->pc = 0x33bc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x33bc40: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33BC40u;
    {
        const bool branch_taken_0x33bc40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33bc40) {
            ctx->pc = 0x33BC58u;
            return;
        }
    }
    ctx->pc = 0x33BC48u;
    // 0x33bc48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33bc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33bc4c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x33bc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x33bc50: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x33BC50u;
    {
        const bool branch_taken_0x33bc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bc50) {
            ctx->pc = 0x33BC8Cu;
            return;
        }
    }
    ctx->pc = 0x33BC58u;
}
