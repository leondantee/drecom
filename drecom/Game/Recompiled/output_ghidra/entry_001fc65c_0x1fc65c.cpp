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

// Function: entry_001fc65c
// Address: 0x1fc65c - 0x1fc6e0
void entry_001fc65c_0x1fc65c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc65c_0x1fc65c");
#endif

    switch (ctx->pc) {
        case 0x1fc68cu: goto label_1fc68c;
        case 0x1fc6bcu: goto label_1fc6bc;
        default: break;
    }

    ctx->pc = 0x1fc65cu;

    // 0x1fc65c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc660: 0x94420340  lhu         $v0, 0x340($v0)
    ctx->pc = 0x1fc660u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 832)));
    // 0x1fc664: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1fc664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1fc668: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1fc668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1fc66c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1FC66Cu;
    {
        const bool branch_taken_0x1fc66c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc66c) {
            ctx->pc = 0x1FC6E0u;
            return;
        }
    }
    ctx->pc = 0x1FC674u;
    // 0x1fc674: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1fc674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc678: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc67c: 0x246403c0  addiu       $a0, $v1, 0x3C0
    ctx->pc = 0x1fc67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 960));
    // 0x1fc680: 0x8c450324  lw          $a1, 0x324($v0)
    ctx->pc = 0x1fc680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 804)));
    // 0x1fc684: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1FC684u;
    SET_GPR_U32(ctx, 31, 0x1FC68Cu);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1FC68Cu;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FC68Cu) { return; }
    ctx->pc = 0x1FC68Cu;
label_1fc68c:
    // 0x1fc68c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc690: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fc690u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fc694: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fc694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fc698: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fc698u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fc69c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc6a0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fc6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc6a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1fc6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc6a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc6ac: 0x246503c0  addiu       $a1, $v1, 0x3C0
    ctx->pc = 0x1fc6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 960));
    // 0x1fc6b0: 0x244602c0  addiu       $a2, $v0, 0x2C0
    ctx->pc = 0x1fc6b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
    // 0x1fc6b4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1FC6B4u;
    SET_GPR_U32(ctx, 31, 0x1FC6BCu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1FC6BCu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FC6BCu) { return; }
    ctx->pc = 0x1FC6BCu;
label_1fc6bc:
    // 0x1fc6bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fc6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1fc6c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fc6c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fc6c4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc6c8: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fc6c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fc6cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fc6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fc6d0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fc6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fc6d4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc6d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc6dc: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1fc6dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->pc = 0x1fc6e0u;
}
