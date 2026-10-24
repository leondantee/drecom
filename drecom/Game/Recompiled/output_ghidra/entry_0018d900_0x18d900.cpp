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

// Function: entry_0018d900
// Address: 0x18d900 - 0x18d9cc
void entry_0018d900_0x18d900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d900_0x18d900");
#endif

    switch (ctx->pc) {
        case 0x18d958u: goto label_18d958;
        case 0x18d97cu: goto label_18d97c;
        case 0x18d9a8u: goto label_18d9a8;
        default: break;
    }

    ctx->pc = 0x18d900u;

    // 0x18d900: 0xae000ab8  sw          $zero, 0xAB8($s0)
    ctx->pc = 0x18d900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2744), GPR_U32(ctx, 0));
    // 0x18d904: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18d904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18d908: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18d908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18d90c: 0x0  nop
    ctx->pc = 0x18d90cu;
    // NOP
    // 0x18d910: 0xe60002e0  swc1        $f0, 0x2E0($s0)
    ctx->pc = 0x18d910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 736), bits); }
    // 0x18d914: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18d914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18d918: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18d918u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18d91c: 0x0  nop
    ctx->pc = 0x18d91cu;
    // NOP
    // 0x18d920: 0xe60002e4  swc1        $f0, 0x2E4($s0)
    ctx->pc = 0x18d920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 740), bits); }
    // 0x18d924: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18d924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18d928: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18d928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18d92c: 0x0  nop
    ctx->pc = 0x18d92cu;
    // NOP
    // 0x18d930: 0xe60002e8  swc1        $f0, 0x2E8($s0)
    ctx->pc = 0x18d930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 744), bits); }
    // 0x18d934: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18d934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18d938: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18d938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18d93c: 0x0  nop
    ctx->pc = 0x18d93cu;
    // NOP
    // 0x18d940: 0xe60002ec  swc1        $f0, 0x2EC($s0)
    ctx->pc = 0x18d940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 748), bits); }
    // 0x18d944: 0x26040270  addiu       $a0, $s0, 0x270
    ctx->pc = 0x18d944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 624));
    // 0x18d948: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x18d948u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18d94c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x18d94cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18d950: 0xc046314  jal         func_118C50
    ctx->pc = 0x18D950u;
    SET_GPR_U32(ctx, 31, 0x18D958u);
    ctx->pc = 0x118C50u;
    {
        ctx->pc = 0x18D958u;
        ps2_stubs::memset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18D958u) { return; }
    ctx->pc = 0x18D958u;
label_18d958:
    // 0x18d958: 0x92020343  lbu         $v0, 0x343($s0)
    ctx->pc = 0x18d958u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 835)));
    // 0x18d95c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d95cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d960: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18d960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x18d964: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x18D964u;
    {
        const bool branch_taken_0x18d964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d964) {
            ctx->pc = 0x18D9CCu;
            return;
        }
    }
    ctx->pc = 0x18D96Cu;
    // 0x18d96c: 0x260403c0  addiu       $a0, $s0, 0x3C0
    ctx->pc = 0x18d96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 960));
    // 0x18d970: 0x8e050324  lw          $a1, 0x324($s0)
    ctx->pc = 0x18d970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x18d974: 0xc040ca2  jal         func_103288
    ctx->pc = 0x18D974u;
    SET_GPR_U32(ctx, 31, 0x18D97Cu);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x18D97Cu;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18D97Cu) { return; }
    ctx->pc = 0x18D97Cu;
label_18d97c:
    // 0x18d97c: 0x92020344  lbu         $v0, 0x344($s0)
    ctx->pc = 0x18d97cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 836)));
    // 0x18d980: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d984: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x18d984u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18d988: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x18d988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x18d98c: 0x92020344  lbu         $v0, 0x344($s0)
    ctx->pc = 0x18d98cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 836)));
    // 0x18d990: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d994: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x18d994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18d998: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x18d998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x18d99c: 0x260503c0  addiu       $a1, $s0, 0x3C0
    ctx->pc = 0x18d99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 960));
    // 0x18d9a0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x18D9A0u;
    SET_GPR_U32(ctx, 31, 0x18D9A8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x18D9A8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18D9A8u) { return; }
    ctx->pc = 0x18D9A8u;
label_18d9a8:
    // 0x18d9a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18d9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18d9ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18d9acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18d9b0: 0x92020344  lbu         $v0, 0x344($s0)
    ctx->pc = 0x18d9b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 836)));
    // 0x18d9b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d9b8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x18d9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18d9bc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x18d9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x18d9c0: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x18d9c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x18d9c4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18D9C4u;
    {
        const bool branch_taken_0x18d9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d9c4) {
            ctx->pc = 0x18D9F0u;
            return;
        }
    }
    ctx->pc = 0x18D9CCu;
}
