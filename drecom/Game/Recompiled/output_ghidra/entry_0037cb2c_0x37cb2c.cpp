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

// Function: entry_0037cb2c
// Address: 0x37cb2c - 0x37cb8c
void entry_0037cb2c_0x37cb2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037cb2c_0x37cb2c");
#endif

    ctx->pc = 0x37cb2cu;

    // 0x37cb2c: 0x8e110058  lw          $s1, 0x58($s0)
    ctx->pc = 0x37cb2cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x37cb30: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x37cb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x37cb34: 0xae230060  sw          $v1, 0x60($s1)
    ctx->pc = 0x37cb34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
    // 0x37cb38: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x37cb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x37cb3c: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x37cb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
    // 0x37cb40: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x37cb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x37cb44: 0xae230068  sw          $v1, 0x68($s1)
    ctx->pc = 0x37cb44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 3));
    // 0x37cb48: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x37cb48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x37cb4c: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x37cb4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x37cb50: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x37cb50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x37cb54: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x37cb54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x37cb58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37cb58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37cb5c: 0x0  nop
    ctx->pc = 0x37cb5cu;
    // NOP
    // 0x37cb60: 0xe60001a0  swc1        $f0, 0x1A0($s0)
    ctx->pc = 0x37cb60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
    // 0x37cb64: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x37cb64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x37cb68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37cb68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37cb6c: 0x0  nop
    ctx->pc = 0x37cb6cu;
    // NOP
    // 0x37cb70: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x37cb70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
    // 0x37cb74: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x37cb74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x37cb78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37cb78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37cb7c: 0x0  nop
    ctx->pc = 0x37cb7cu;
    // NOP
    // 0x37cb80: 0xe60001a8  swc1        $f0, 0x1A8($s0)
    ctx->pc = 0x37cb80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
    // 0x37cb84: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x37CB84u;
    {
        const bool branch_taken_0x37cb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37cb84) {
            ctx->pc = 0x37CBE4u;
            return;
        }
    }
    ctx->pc = 0x37CB8Cu;
}
