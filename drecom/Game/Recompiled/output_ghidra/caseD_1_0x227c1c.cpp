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

// Function: caseD_1
// Address: 0x227c1c - 0x227ca4
void caseD_1_0x227c1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x227c1c");
#endif

    switch (ctx->pc) {
        case 0x227c2cu: goto label_227c2c;
        case 0x227c54u: goto label_227c54;
        case 0x227c74u: goto label_227c74;
        case 0x227ca0u: goto label_227ca0;
        default: break;
    }

    ctx->pc = 0x227c1cu;

    // 0x227c1c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x227c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227c20: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x227c20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x227c24: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x227C24u;
    SET_GPR_U32(ctx, 31, 0x227C2Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x227C24u, 0x227C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227C2Cu;
label_227c2c:
    // 0x227c2c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x227c2cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x227c30: 0x3c033e49  lui         $v1, 0x3E49
    ctx->pc = 0x227c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15945 << 16));
    // 0x227c34: 0x34650fdb  ori         $a1, $v1, 0xFDB
    ctx->pc = 0x227c34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x227c38: 0x44857000  mtc1        $a1, $f14
    ctx->pc = 0x227c38u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x227c3c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x227c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227c40: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x227c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227c44: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x227c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x227c48: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x227c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x227c4c: 0xc058f50  jal         func_163D40
    ctx->pc = 0x227C4Cu;
    SET_GPR_U32(ctx, 31, 0x227C54u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x227C4Cu, 0x227C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227C54u;
label_227c54:
    // 0x227c54: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x227c54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227c58: 0xe4a000d4  swc1        $f0, 0xD4($a1)
    ctx->pc = 0x227c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 212), bits); }
    // 0x227c5c: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x227c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x227c60: 0x3464999a  ori         $a0, $v1, 0x999A
    ctx->pc = 0x227c60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x227c64: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x227c64u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x227c68: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x227c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227c6c: 0xc05ce88  jal         func_173A20
    ctx->pc = 0x227C6Cu;
    SET_GPR_U32(ctx, 31, 0x227C74u);
    ctx->pc = 0x173A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A20u, 0x227C6Cu, 0x227C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227C74u;
label_227c74:
    // 0x227c74: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x227c74u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x227c78: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x227c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227c7c: 0x94630a00  lhu         $v1, 0xA00($v1)
    ctx->pc = 0x227c7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2560)));
    // 0x227c80: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x227c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x227c84: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x227C84u;
    {
        const bool branch_taken_0x227c84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x227c84) {
            ctx->pc = 0x227CA4u;
            return;
        }
    }
    ctx->pc = 0x227C8Cu;
    // 0x227c8c: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x227c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227c90: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x227c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227c94: 0xc4ac1290  lwc1        $f12, 0x1290($a1)
    ctx->pc = 0x227c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x227c98: 0xc05cd58  jal         func_173560
    ctx->pc = 0x227C98u;
    SET_GPR_U32(ctx, 31, 0x227CA0u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x227C98u, 0x227CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227CA0u;
label_227ca0:
    // 0x227ca0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x227ca0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x227ca4u;
}
