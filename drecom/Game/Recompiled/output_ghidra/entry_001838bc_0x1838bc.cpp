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

// Function: entry_001838bc
// Address: 0x1838bc - 0x183928
void entry_001838bc_0x1838bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001838bc_0x1838bc");
#endif

    switch (ctx->pc) {
        case 0x1838c8u: goto label_1838c8;
        case 0x183908u: goto label_183908;
        default: break;
    }

    ctx->pc = 0x1838bcu;

    // 0x1838bc: 0x8fa401f8  lw          $a0, 0x1F8($sp)
    ctx->pc = 0x1838bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x1838c0: 0xc05fc1c  jal         func_17F070
    ctx->pc = 0x1838C0u;
    SET_GPR_U32(ctx, 31, 0x1838C8u);
    ctx->pc = 0x17F070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F070u, 0x1838C0u, 0x1838C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1838C8u;
label_1838c8:
    // 0x1838c8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1838c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1838cc: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x1838ccu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x1838d0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1838d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1838d4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1838d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1838d8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1838d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1838dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1838dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1838e0: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1838e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1838e4: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x1838e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x1838e8: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x1838e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x1838ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1838ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1838f0: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x1838f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1838f4: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x1838f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x1838f8: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x1838f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x1838fc: 0x8fa401f8  lw          $a0, 0x1F8($sp)
    ctx->pc = 0x1838fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x183900: 0xc060e4c  jal         func_183930
    ctx->pc = 0x183900u;
    SET_GPR_U32(ctx, 31, 0x183908u);
    ctx->pc = 0x183930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183930u, 0x183900u, 0x183908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183908u;
label_183908:
    // 0x183908: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x183908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x18390c: 0x8fa301f8  lw          $v1, 0x1F8($sp)
    ctx->pc = 0x18390cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x183910: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x183910u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x183914: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x183914u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183918: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x183918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18391c: 0x27bd0200  addiu       $sp, $sp, 0x200
    ctx->pc = 0x18391cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x183920: 0x3e00008  jr          $ra
    ctx->pc = 0x183920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183928u;
}
