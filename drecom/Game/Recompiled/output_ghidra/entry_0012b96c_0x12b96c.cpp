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

// Function: entry_0012b96c
// Address: 0x12b96c - 0x12b9d8
void entry_0012b96c_0x12b96c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b96c_0x12b96c");
#endif

    switch (ctx->pc) {
        case 0x12b990u: goto label_12b990;
        case 0x12b9a8u: goto label_12b9a8;
        default: break;
    }

    ctx->pc = 0x12b96cu;

    // 0x12b96c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x12b96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b970: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12b970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b974: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x12b974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x12b978: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x12b978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x12b97c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x12b97cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x12b980: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x12b980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12b984: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x12b984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x12b988: 0xc058f50  jal         func_163D40
    ctx->pc = 0x12B988u;
    SET_GPR_U32(ctx, 31, 0x12B990u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x12B988u, 0x12B990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B990u;
label_12b990:
    // 0x12b990: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12b990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b994: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x12b994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x12b998: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x12b998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b99c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12b99cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12b9a0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x12B9A0u;
    SET_GPR_U32(ctx, 31, 0x12B9A8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12B9A0u, 0x12B9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B9A8u;
label_12b9a8:
    // 0x12b9a8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12b9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b9ac: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x12b9acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x12b9b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12b9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12b9b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x12b9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x12b9b8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12B9B8u;
    {
        const bool branch_taken_0x12b9b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b9b8) {
            ctx->pc = 0x12B9D8u;
            return;
        }
    }
    ctx->pc = 0x12B9C0u;
    // 0x12b9c0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12b9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b9c4: 0xc4411298  lwc1        $f1, 0x1298($v0)
    ctx->pc = 0x12b9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12b9c8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12b9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b9cc: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x12b9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b9d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12b9d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12b9d4: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x12b9d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    ctx->pc = 0x12b9d8u;
}
