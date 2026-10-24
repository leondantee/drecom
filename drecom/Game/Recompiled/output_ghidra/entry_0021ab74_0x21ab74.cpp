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

// Function: entry_0021ab74
// Address: 0x21ab74 - 0x21ac18
void entry_0021ab74_0x21ab74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021ab74_0x21ab74");
#endif

    ctx->pc = 0x21ab74u;

    // 0x21ab74: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x21ab74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x21ab78: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x21ab78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x21ab7c: 0x12030026  beq         $s0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x21AB7Cu;
    {
        const bool branch_taken_0x21ab7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x21ab7c) {
            ctx->pc = 0x21AC18u;
            return;
        }
    }
    ctx->pc = 0x21AB84u;
    // 0x21ab84: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x21ab84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ab88: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x21ab88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x21ab8c: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x21ab8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ab90: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x21ab90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x21ab94: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x21ab94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ab98: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x21ab98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x21ab9c: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x21ab9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21aba0: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x21aba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x21aba4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x21aba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x21aba8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21aba8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21abac: 0x0  nop
    ctx->pc = 0x21abacu;
    // NOP
    // 0x21abb0: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x21abb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x21abb4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x21abb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x21abb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21abb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21abbc: 0x0  nop
    ctx->pc = 0x21abbcu;
    // NOP
    // 0x21abc0: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x21abc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x21abc4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x21abc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x21abc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21abc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21abcc: 0x0  nop
    ctx->pc = 0x21abccu;
    // NOP
    // 0x21abd0: 0xe60000a8  swc1        $f0, 0xA8($s0)
    ctx->pc = 0x21abd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x21abd4: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x21abd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x21abd8: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x21abd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x21abdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21abdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21abe0: 0x0  nop
    ctx->pc = 0x21abe0u;
    // NOP
    // 0x21abe4: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x21abe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x21abe8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x21abe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x21abec: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x21abecu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21abf0: 0x26030050  addiu       $v1, $s0, 0x50
    ctx->pc = 0x21abf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x21abf4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x21abf4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x21abf8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x21abf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x21abfc: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x21abfcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21ac00: 0x26030070  addiu       $v1, $s0, 0x70
    ctx->pc = 0x21ac00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x21ac04: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x21ac04u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x21ac08: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x21ac08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ac0c: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x21ac0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x21ac10: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x21ac10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ac14: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x21ac14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    ctx->pc = 0x21ac18u;
}
