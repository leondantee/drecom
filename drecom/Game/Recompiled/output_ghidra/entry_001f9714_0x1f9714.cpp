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

// Function: entry_001f9714
// Address: 0x1f9714 - 0x1f978c
void entry_001f9714_0x1f9714(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9714_0x1f9714");
#endif

    switch (ctx->pc) {
        case 0x1f9788u: goto label_1f9788;
        default: break;
    }

    ctx->pc = 0x1f9714u;

    // 0x1f9714: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x1f9714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f9718: 0x84a4002a  lh          $a0, 0x2A($a1)
    ctx->pc = 0x1f9718u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 42)));
    // 0x1f971c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1f971cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1f9720: 0xa4a3002a  sh          $v1, 0x2A($a1)
    ctx->pc = 0x1f9720u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f9724: 0x14800019  bnez        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1F9724u;
    {
        const bool branch_taken_0x1f9724 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f9724) {
            ctx->pc = 0x1F978Cu;
            return;
        }
    }
    ctx->pc = 0x1F972Cu;
    // 0x1f972c: 0xa2a00000  sb          $zero, 0x0($s5)
    ctx->pc = 0x1f972cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f9730: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x1f9730u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f9734: 0xa2800000  sb          $zero, 0x0($s4)
    ctx->pc = 0x1f9734u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f9738: 0x8e720034  lw          $s2, 0x34($s3)
    ctx->pc = 0x1f9738u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x1f973c: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1f973cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1f9740: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1f9740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1f9744: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x1f9744u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
    // 0x1f9748: 0x8e920034  lw          $s2, 0x34($s4)
    ctx->pc = 0x1f9748u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x1f974c: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1f974cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1f9750: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1f9750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1f9754: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x1f9754u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
    // 0x1f9758: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1f9758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f975c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x1f975cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f9760: 0xa0640029  sb          $a0, 0x29($v1)
    ctx->pc = 0x1f9760u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f9764: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x1f9764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x1f9768: 0x34704000  ori         $s0, $v1, 0x4000
    ctx->pc = 0x1f9768u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1f976c: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x1f976cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f9770: 0x2404051e  addiu       $a0, $zero, 0x51E
    ctx->pc = 0x1f9770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1310));
    // 0x1f9774: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x1f9774u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1f9778: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x1f9778u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1f977c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f977cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f9780: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F9780u;
    SET_GPR_U32(ctx, 31, 0x1F9788u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F9780u, 0x1F9788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9788u;
label_1f9788:
    // 0x1f9788: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1f9788u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1f978cu;
}
