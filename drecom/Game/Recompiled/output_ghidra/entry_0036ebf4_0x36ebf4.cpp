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

// Function: entry_0036ebf4
// Address: 0x36ebf4 - 0x36ec40
void entry_0036ebf4_0x36ebf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036ebf4_0x36ebf4");
#endif

    switch (ctx->pc) {
        case 0x36ec2cu: goto label_36ec2c;
        case 0x36ec3cu: goto label_36ec3c;
        default: break;
    }

    ctx->pc = 0x36ebf4u;

    // 0x36ebf4: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x36ebf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x36ebf8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x36ebf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36ebfc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x36ebfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x36ec00: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x36ec00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x36ec04: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x36ec04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x36ec08: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x36ec08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x36ec0c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36ec0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ec10: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x36ec10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x36ec14: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x36ec14u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36ec18: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36ec18u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36ec1c: 0x24460370  addiu       $a2, $v0, 0x370
    ctx->pc = 0x36ec1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 880));
    // 0x36ec20: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x36ec20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36ec24: 0xc086488  jal         func_219220
    ctx->pc = 0x36EC24u;
    SET_GPR_U32(ctx, 31, 0x36EC2Cu);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x36EC24u, 0x36EC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EC2Cu;
label_36ec2c:
    // 0x36ec2c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36ec2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36ec30: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36ec30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36ec34: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36EC34u;
    SET_GPR_U32(ctx, 31, 0x36EC3Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36EC34u, 0x36EC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EC3Cu;
label_36ec3c:
    // 0x36ec3c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36ec3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    ctx->pc = 0x36ec40u;
}
