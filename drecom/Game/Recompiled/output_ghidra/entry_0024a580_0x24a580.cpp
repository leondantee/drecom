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

// Function: entry_0024a580
// Address: 0x24a580 - 0x24a5dc
void entry_0024a580_0x24a580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024a580_0x24a580");
#endif

    switch (ctx->pc) {
        case 0x24a5d0u: goto label_24a5d0;
        default: break;
    }

    ctx->pc = 0x24a580u;

    // 0x24a580: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x24a580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a584: 0x84c50030  lh          $a1, 0x30($a2)
    ctx->pc = 0x24a584u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x24a588: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x24a588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x24a58c: 0xa4c30030  sh          $v1, 0x30($a2)
    ctx->pc = 0x24a58cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 48), (uint16_t)GPR_U32(ctx, 3));
    // 0x24a590: 0x14a00175  bnez        $a1, . + 4 + (0x175 << 2)
    ctx->pc = 0x24A590u;
    {
        const bool branch_taken_0x24a590 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a590) {
            ctx->pc = 0x24AB68u;
            return;
        }
    }
    ctx->pc = 0x24A598u;
    // 0x24a598: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x24a598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x24a59c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24a59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a5a0: 0xa4640030  sh          $a0, 0x30($v1)
    ctx->pc = 0x24a5a0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 48), (uint16_t)GPR_U32(ctx, 4));
    // 0x24a5a4: 0x8fa301c8  lw          $v1, 0x1C8($sp)
    ctx->pc = 0x24a5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x24a5a8: 0x3c05469c  lui         $a1, 0x469C
    ctx->pc = 0x24a5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18076 << 16));
    // 0x24a5ac: 0x34a44000  ori         $a0, $a1, 0x4000
    ctx->pc = 0x24a5acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x24a5b0: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x24a5b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24a5b4: 0x24020507  addiu       $v0, $zero, 0x507
    ctx->pc = 0x24a5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1287));
    // 0x24a5b8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24a5b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24a5bc: 0x24620120  addiu       $v0, $v1, 0x120
    ctx->pc = 0x24a5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x24a5c0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x24a5c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24a5c4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x24a5c4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24a5c8: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x24A5C8u;
    SET_GPR_U32(ctx, 31, 0x24A5D0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x24A5C8u, 0x24A5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A5D0u;
label_24a5d0:
    // 0x24a5d0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24a5d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24a5d4: 0x10000164  b           . + 4 + (0x164 << 2)
    ctx->pc = 0x24A5D4u;
    {
        const bool branch_taken_0x24a5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a5d4) {
            ctx->pc = 0x24AB68u;
            return;
        }
    }
    ctx->pc = 0x24A5DCu;
}
