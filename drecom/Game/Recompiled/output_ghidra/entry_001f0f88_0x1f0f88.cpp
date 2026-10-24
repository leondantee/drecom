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

// Function: entry_001f0f88
// Address: 0x1f0f88 - 0x1f1000
void entry_001f0f88_0x1f0f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0f88_0x1f0f88");
#endif

    switch (ctx->pc) {
        case 0x1f0f90u: goto label_1f0f90;
        case 0x1f0fecu: goto label_1f0fec;
        default: break;
    }

    ctx->pc = 0x1f0f88u;

    // 0x1f0f88: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F0F88u;
    SET_GPR_U32(ctx, 31, 0x1F0F90u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F0F88u, 0x1F0F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0F90u;
label_1f0f90:
    // 0x1f0f90: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1f0f90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f0f94: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1f0f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1f0f98: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x1f0f98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1f0f9c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1f0f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f0fa0: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1f0fa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f0fa4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1f0fa4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1f0fa8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f0fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f0fac: 0xa464127c  sh          $a0, 0x127C($v1)
    ctx->pc = 0x1f0facu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f0fb0: 0x3c033c8e  lui         $v1, 0x3C8E
    ctx->pc = 0x1f0fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15502 << 16));
    // 0x1f0fb4: 0x3463fa35  ori         $v1, $v1, 0xFA35
    ctx->pc = 0x1f0fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x1f0fb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f0fb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0fbc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f0fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f0fc0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f0fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f0fc4: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x1f0fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x1f0fc8: 0x3c033b3e  lui         $v1, 0x3B3E
    ctx->pc = 0x1f0fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15166 << 16));
    // 0x1f0fcc: 0x3462a2f1  ori         $v0, $v1, 0xA2F1
    ctx->pc = 0x1f0fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41713);
    // 0x1f0fd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f0fd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0fd4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f0fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f0fd8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f0fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f0fdc: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x1f0fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x1f0fe0: 0x24100020  addiu       $s0, $zero, 0x20
    ctx->pc = 0x1f0fe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1f0fe4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F0FE4u;
    SET_GPR_U32(ctx, 31, 0x1F0FECu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F0FE4u, 0x1F0FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0FECu;
label_1f0fec:
    // 0x1f0fec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f0fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f0ff0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f0ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1f0ff4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F0FF4u;
    {
        const bool branch_taken_0x1f0ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0ff4) {
            ctx->pc = 0x1F1000u;
            return;
        }
    }
    ctx->pc = 0x1F0FFCu;
    // 0x1f0ffc: 0x24100021  addiu       $s0, $zero, 0x21
    ctx->pc = 0x1f0ffcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->pc = 0x1f1000u;
}
