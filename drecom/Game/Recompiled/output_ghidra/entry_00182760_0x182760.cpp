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

// Function: entry_00182760
// Address: 0x182760 - 0x182818
void entry_00182760_0x182760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182760_0x182760");
#endif

    switch (ctx->pc) {
        case 0x182804u: goto label_182804;
        default: break;
    }

    ctx->pc = 0x182760u;

    // 0x182760: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182764: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x182764u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x182768: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x182768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18276c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x18276cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x182770: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x182770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x182774: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182778: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x182778u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x18277c: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x18277cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x182780: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x182780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x182784: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182788: 0x90420154  lbu         $v0, 0x154($v0)
    ctx->pc = 0x182788u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x18278c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18278cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x182790: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x182790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x182794: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x182794u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x182798: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18279c: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x18279cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x1827a0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1827a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1827a4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1827a4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1827a8: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x1827a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1827ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1827acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1827b0: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1827b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1827b4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1827b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1827b8: 0x24420380  addiu       $v0, $v0, 0x380
    ctx->pc = 0x1827b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x1827bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1827bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1827c0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1827c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1827c4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1827c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1827c8: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x1827c8u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x1827cc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1827ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1827d0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1827d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1827d4: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1827d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1827d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1827d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1827dc: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1827dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1827e0: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x1827e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x1827e4: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x1827e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x1827e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1827e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1827ec: 0x90420154  lbu         $v0, 0x154($v0)
    ctx->pc = 0x1827ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x1827f0: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1827f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1827f4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1827f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1827f8: 0xc7ac0058  lwc1        $f12, 0x58($sp)
    ctx->pc = 0x1827f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1827fc: 0xc05f19c  jal         func_17C670
    ctx->pc = 0x1827FCu;
    SET_GPR_U32(ctx, 31, 0x182804u);
    ctx->pc = 0x17C670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C670u, 0x1827FCu, 0x182804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182804u;
label_182804:
    // 0x182804: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x182804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182808: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18280c: 0xe420f238  swc1        $f0, -0xDC8($at)
    ctx->pc = 0x18280cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F238u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F238u, _value); } while (0); }
    // 0x182810: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x182810u;
    {
        const bool branch_taken_0x182810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182810) {
            ctx->pc = 0x182824u;
            return;
        }
    }
    ctx->pc = 0x182818u;
}
