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

// Function: entry_0033fbcc
// Address: 0x33fbcc - 0x33fc7c
void entry_0033fbcc_0x33fbcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033fbcc_0x33fbcc");
#endif

    ctx->pc = 0x33fbccu;

    // 0x33fbcc: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x33fbccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x33fbd0: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x33fbd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x33fbd4: 0x12030029  beq         $s0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x33FBD4u;
    {
        const bool branch_taken_0x33fbd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x33fbd4) {
            ctx->pc = 0x33FC7Cu;
            return;
        }
    }
    ctx->pc = 0x33FBDCu;
    // 0x33fbdc: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x33fbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x33fbe0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33fbe0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33fbe4: 0x0  nop
    ctx->pc = 0x33fbe4u;
    // NOP
    // 0x33fbe8: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x33fbe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x33fbec: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x33fbecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x33fbf0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33fbf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33fbf4: 0x0  nop
    ctx->pc = 0x33fbf4u;
    // NOP
    // 0x33fbf8: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x33fbf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x33fbfc: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x33fbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x33fc00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33fc00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33fc04: 0x0  nop
    ctx->pc = 0x33fc04u;
    // NOP
    // 0x33fc08: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x33fc08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x33fc0c: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x33fc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x33fc10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33fc10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33fc14: 0x0  nop
    ctx->pc = 0x33fc14u;
    // NOP
    // 0x33fc18: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x33fc18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x33fc1c: 0x3c033f7a  lui         $v1, 0x3F7A
    ctx->pc = 0x33fc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16250 << 16));
    // 0x33fc20: 0x3463e148  ori         $v1, $v1, 0xE148
    ctx->pc = 0x33fc20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57672);
    // 0x33fc24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33fc24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33fc28: 0x0  nop
    ctx->pc = 0x33fc28u;
    // NOP
    // 0x33fc2c: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x33fc2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x33fc30: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x33fc30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x33fc34: 0x24632960  addiu       $v1, $v1, 0x2960
    ctx->pc = 0x33fc34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10592));
    // 0x33fc38: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x33fc38u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3B2960u));
    // 0x33fc3c: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x33fc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x33fc40: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x33fc40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x33fc44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33fc44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33fc48: 0x0  nop
    ctx->pc = 0x33fc48u;
    // NOP
    // 0x33fc4c: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x33fc4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x33fc50: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x33fc50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x33fc54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33fc54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33fc58: 0x0  nop
    ctx->pc = 0x33fc58u;
    // NOP
    // 0x33fc5c: 0xe60000f0  swc1        $f0, 0xF0($s0)
    ctx->pc = 0x33fc5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
    // 0x33fc60: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x33fc60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x33fc64: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x33fc64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x33fc68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33fc68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33fc6c: 0x0  nop
    ctx->pc = 0x33fc6cu;
    // NOP
    // 0x33fc70: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x33fc70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x33fc74: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x33fc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x33fc78: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x33fc78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
    ctx->pc = 0x33fc7cu;
}
