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

// Function: entry_0024c7c4
// Address: 0x24c7c4 - 0x24c818
void entry_0024c7c4_0x24c7c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024c7c4_0x24c7c4");
#endif

    switch (ctx->pc) {
        case 0x24c7f0u: goto label_24c7f0;
        case 0x24c7fcu: goto label_24c7fc;
        default: break;
    }

    ctx->pc = 0x24c7c4u;

    // 0x24c7c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x24c7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x24c7c8: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x24c7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x24c7cc: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x24c7ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x24c7d0: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x24C7D0u;
    {
        const bool branch_taken_0x24c7d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c7d0) {
            ctx->pc = 0x24C818u;
            return;
        }
    }
    ctx->pc = 0x24C7D8u;
    // 0x24c7d8: 0x24041d02  addiu       $a0, $zero, 0x1D02
    ctx->pc = 0x24c7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7426));
    // 0x24c7dc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x24c7dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24c7e0: 0x260600b0  addiu       $a2, $s0, 0xB0
    ctx->pc = 0x24c7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x24c7e4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x24c7e4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24c7e8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24C7E8u;
    SET_GPR_U32(ctx, 31, 0x24C7F0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24C7E8u, 0x24C7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C7F0u;
label_24c7f0:
    // 0x24c7f0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24c7f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24c7f4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24C7F4u;
    SET_GPR_U32(ctx, 31, 0x24C7FCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24C7F4u, 0x24C7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C7FCu;
label_24c7fc:
    // 0x24c7fc: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x24c7fcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24c800: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x24c800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x24c804: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x24c804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x24c808: 0x12230003  beq         $s1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24C808u;
    {
        const bool branch_taken_0x24c808 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x24c808) {
            ctx->pc = 0x24C818u;
            return;
        }
    }
    ctx->pc = 0x24C810u;
    // 0x24c810: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x24c810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24c814: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x24c814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    ctx->pc = 0x24c818u;
}
