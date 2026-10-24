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

// Function: entry_0028bc4c
// Address: 0x28bc4c - 0x28bc94
void entry_0028bc4c_0x28bc4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028bc4c_0x28bc4c");
#endif

    switch (ctx->pc) {
        case 0x28bc68u: goto label_28bc68;
        case 0x28bc90u: goto label_28bc90;
        default: break;
    }

    ctx->pc = 0x28bc4cu;

    // 0x28bc4c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28bc4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28bc50: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x28bc50u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x28bc54: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x28bc54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x28bc58: 0x2445c09c  addiu       $a1, $v0, -0x3F64
    ctx->pc = 0x28bc58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951068));
    // 0x28bc5c: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x28bc5cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x28bc60: 0xc0a4474  jal         func_2911D0
    ctx->pc = 0x28BC60u;
    SET_GPR_U32(ctx, 31, 0x28BC68u);
    ctx->pc = 0x2911D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911D0u, 0x28BC60u, 0x28BC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BC68u;
label_28bc68:
    // 0x28bc68: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x28BC68u;
    {
        const bool branch_taken_0x28bc68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28bc68) {
            ctx->pc = 0x28BCD4u;
            return;
        }
    }
    ctx->pc = 0x28BC70u;
    // 0x28bc70: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28bc70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28bc74: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x28bc74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28bc78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28bc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28bc7c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28BC7Cu;
    {
        const bool branch_taken_0x28bc7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28bc7c) {
            ctx->pc = 0x28BC94u;
            return;
        }
    }
    ctx->pc = 0x28BC84u;
    // 0x28bc84: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x28bc84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28bc88: 0xc062b40  jal         func_18AD00
    ctx->pc = 0x28BC88u;
    SET_GPR_U32(ctx, 31, 0x28BC90u);
    ctx->pc = 0x18AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD00u, 0x28BC88u, 0x28BC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BC90u;
label_28bc90:
    // 0x28bc90: 0xa2006855  sb          $zero, 0x6855($s0)
    ctx->pc = 0x28bc90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26709), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x28bc94u;
}
