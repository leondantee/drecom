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

// Function: entry_001eb160
// Address: 0x1eb160 - 0x1eb1c8
void entry_001eb160_0x1eb160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eb160_0x1eb160");
#endif

    ctx->pc = 0x1eb160u;

    // 0x1eb160: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1eb160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb164: 0x90621308  lbu         $v0, 0x1308($v1)
    ctx->pc = 0x1eb164u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4872)));
    // 0x1eb168: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1eb168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1eb16c: 0x3055001f  andi        $s5, $v0, 0x1F
    ctx->pc = 0x1eb16cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1eb170: 0x12a00015  beqz        $s5, . + 4 + (0x15 << 2)
    ctx->pc = 0x1EB170u;
    {
        const bool branch_taken_0x1eb170 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb170) {
            ctx->pc = 0x1EB1C8u;
            return;
        }
    }
    ctx->pc = 0x1EB178u;
    // 0x1eb178: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eb178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb17c: 0x90441308  lbu         $a0, 0x1308($v0)
    ctx->pc = 0x1eb17cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4872)));
    // 0x1eb180: 0x309000ff  andi        $s0, $a0, 0xFF
    ctx->pc = 0x1eb180u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1eb184: 0x3202001f  andi        $v0, $s0, 0x1F
    ctx->pc = 0x1eb184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x1eb188: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x1eb188u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1eb18c: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x1EB18Cu;
    {
        const bool branch_taken_0x1eb18c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb18c) {
            ctx->pc = 0x1EB1C8u;
            return;
        }
    }
    ctx->pc = 0x1EB194u;
    // 0x1eb194: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1eb194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb198: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1eb198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1eb19c: 0x34850040  ori         $a1, $a0, 0x40
    ctx->pc = 0x1eb19cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x1eb1a0: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x1eb1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x1eb1a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1eb1a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb1a8: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eb1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb1ac: 0xe48001a0  swc1        $f0, 0x1A0($a0)
    ctx->pc = 0x1eb1acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 416), bits); }
    // 0x1eb1b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1eb1b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb1b4: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x1eb1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb1b8: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x1eb1b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x1eb1bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1eb1bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb1c0: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x1eb1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eb1c4: 0xe48001a8  swc1        $f0, 0x1A8($a0)
    ctx->pc = 0x1eb1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 424), bits); }
    ctx->pc = 0x1eb1c8u;
}
