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

// Function: entry_00184190
// Address: 0x184190 - 0x1841f4
void entry_00184190_0x184190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184190_0x184190");
#endif

    switch (ctx->pc) {
        case 0x1841c0u: goto label_1841c0;
        default: break;
    }

    ctx->pc = 0x184190u;

label_184190:
    // 0x184190: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_184194:
    // 0x184194: 0xe420f250  swc1        $f0, -0xDB0($at)
    ctx->pc = 0x184194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294963792), bits); }
label_184198:
    // 0x184198: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x184198u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_18419c:
    // 0x18419c: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x18419cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_1841a0:
    // 0x1841a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1841a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1841a4:
    // 0x1841a4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1841a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1841a8:
    // 0x1841a8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1841a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1841ac:
    // 0x1841ac: 0x244259c8  addiu       $v0, $v0, 0x59C8
    ctx->pc = 0x1841acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22984));
label_1841b0:
    // 0x1841b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1841b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1841b4:
    // 0x1841b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1841b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1841b8:
    // 0x1841b8: 0x40f809  jalr        $v0
label_1841bc:
    if (ctx->pc == 0x1841BCu) {
        ctx->pc = 0x1841C0u;
        goto label_1841c0;
    }
    ctx->pc = 0x1841B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1841C0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1841B8u, 0x1841C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1841C0u;
label_1841c0:
    // 0x1841c0: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x1841c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_1841c4:
    // 0x1841c4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1841c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1841c8:
    // 0x1841c8: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x1841c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_1841cc:
    // 0x1841cc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1841ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1841d0:
    // 0x1841d0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_1841d4:
    if (ctx->pc == 0x1841D4u) {
        ctx->pc = 0x1841D8u;
        goto label_1841d8;
    }
    ctx->pc = 0x1841D0u;
    {
        const bool branch_taken_0x1841d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1841d0) {
            ctx->pc = 0x1841F4u;
            return;
        }
    }
    ctx->pc = 0x1841D8u;
label_1841d8:
    // 0x1841d8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1841d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1841dc:
    // 0x1841dc: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1841dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_1841e0:
    // 0x1841e0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1841e4:
    if (ctx->pc == 0x1841E4u) {
        ctx->pc = 0x1841E8u;
        goto label_1841e8;
    }
    ctx->pc = 0x1841E0u;
    {
        const bool branch_taken_0x1841e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1841e0) {
            ctx->pc = 0x184200u;
            return;
        }
    }
    ctx->pc = 0x1841E8u;
label_1841e8:
    // 0x1841e8: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1841e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_1841ec:
    // 0x1841ec: 0x10000004  b           . + 4 + (0x4 << 2)
label_1841f0:
    if (ctx->pc == 0x1841F0u) {
        ctx->pc = 0x1841F4u;
        goto label_fallthrough_0x1841ec;
    }
    ctx->pc = 0x1841ECu;
    {
        const bool branch_taken_0x1841ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1841ec) {
            ctx->pc = 0x184200u;
            return;
        }
    }
label_fallthrough_0x1841ec:
    ctx->pc = 0x1841F4u;
}
