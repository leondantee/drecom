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

// Function: entry_00138e20
// Address: 0x138e20 - 0x138e58
void entry_00138e20_0x138e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138e20_0x138e20");
#endif

    switch (ctx->pc) {
        case 0x138e54u: goto label_138e54;
        default: break;
    }

    ctx->pc = 0x138e20u;

    // 0x138e20: 0x8663008e  lh          $v1, 0x8E($s3)
    ctx->pc = 0x138e20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 142)));
    // 0x138e24: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x138e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x138e28: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x138e28u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x138e2c: 0x28610015  slti        $at, $v1, 0x15
    ctx->pc = 0x138e2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x138e30: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x138E30u;
    {
        const bool branch_taken_0x138e30 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x138e30) {
            ctx->pc = 0x138E58u;
            return;
        }
    }
    ctx->pc = 0x138E38u;
    // 0x138e38: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x138e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x138e3c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x138e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x138e40: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x138e40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x138e44: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x138e44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x138e48: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x138e48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x138e4c: 0xc06776c  jal         func_19DDB0
    ctx->pc = 0x138E4Cu;
    SET_GPR_U32(ctx, 31, 0x138E54u);
    ctx->pc = 0x19DDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DDB0u, 0x138E4Cu, 0x138E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138E54u;
label_138e54:
    // 0x138e54: 0x0  nop
    ctx->pc = 0x138e54u;
    // NOP
    ctx->pc = 0x138e58u;
}
