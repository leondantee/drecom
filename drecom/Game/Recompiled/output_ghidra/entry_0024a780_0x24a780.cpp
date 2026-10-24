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

// Function: entry_0024a780
// Address: 0x24a780 - 0x24a7d0
void entry_0024a780_0x24a780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024a780_0x24a780");
#endif

    switch (ctx->pc) {
        case 0x24a7c8u: goto label_24a7c8;
        default: break;
    }

    ctx->pc = 0x24a780u;

    // 0x24a780: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24a780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a784: 0x84650030  lh          $a1, 0x30($v1)
    ctx->pc = 0x24a784u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x24a788: 0x24a4ffff  addiu       $a0, $a1, -0x1
    ctx->pc = 0x24a788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x24a78c: 0xa4640030  sh          $a0, 0x30($v1)
    ctx->pc = 0x24a78cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 48), (uint16_t)GPR_U32(ctx, 4));
    // 0x24a790: 0x14a000f5  bnez        $a1, . + 4 + (0xF5 << 2)
    ctx->pc = 0x24A790u;
    {
        const bool branch_taken_0x24a790 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a790) {
            ctx->pc = 0x24AB68u;
            return;
        }
    }
    ctx->pc = 0x24A798u;
    // 0x24a798: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x24a798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x24a79c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24a79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a7a0: 0xa4450030  sh          $a1, 0x30($v0)
    ctx->pc = 0x24a7a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 48), (uint16_t)GPR_U32(ctx, 5));
    // 0x24a7a4: 0x8fa501c8  lw          $a1, 0x1C8($sp)
    ctx->pc = 0x24a7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x24a7a8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x24a7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x24a7ac: 0x34464000  ori         $a2, $v0, 0x4000
    ctx->pc = 0x24a7acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x24a7b0: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x24a7b0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24a7b4: 0x24040507  addiu       $a0, $zero, 0x507
    ctx->pc = 0x24a7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1287));
    // 0x24a7b8: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x24a7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x24a7bc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x24a7bcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24a7c0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x24A7C0u;
    SET_GPR_U32(ctx, 31, 0x24A7C8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x24A7C0u, 0x24A7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A7C8u;
label_24a7c8:
    // 0x24a7c8: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x24A7C8u;
    {
        const bool branch_taken_0x24a7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a7c8) {
            ctx->pc = 0x24AB68u;
            return;
        }
    }
    ctx->pc = 0x24A7D0u;
}
