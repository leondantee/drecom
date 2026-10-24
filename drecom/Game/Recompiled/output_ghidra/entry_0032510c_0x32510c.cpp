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

// Function: entry_0032510c
// Address: 0x32510c - 0x325158
void entry_0032510c_0x32510c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032510c_0x32510c");
#endif

    switch (ctx->pc) {
        case 0x325154u: goto label_325154;
        default: break;
    }

    ctx->pc = 0x32510cu;

    // 0x32510c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x32510cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x325110: 0x2442a198  addiu       $v0, $v0, -0x5E68
    ctx->pc = 0x325110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943128));
    // 0x325114: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x325114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x325118: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x325118u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32511c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x32511cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x325120: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x325120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x325124: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x325124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x325128: 0x24461e20  addiu       $a2, $v0, 0x1E20
    ctx->pc = 0x325128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 7712));
    // 0x32512c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x32512cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x325130: 0x24471e20  addiu       $a3, $v0, 0x1E20
    ctx->pc = 0x325130u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 7712));
    // 0x325134: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x325134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x325138: 0xc7ad0038  lwc1        $f13, 0x38($sp)
    ctx->pc = 0x325138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x32513c: 0xc7ae0040  lwc1        $f14, 0x40($sp)
    ctx->pc = 0x32513cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x325140: 0xc7af0048  lwc1        $f15, 0x48($sp)
    ctx->pc = 0x325140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x325144: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x325144u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325148: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x325148u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32514c: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x32514Cu;
    SET_GPR_U32(ctx, 31, 0x325154u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x32514Cu, 0x325154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325154u;
label_325154:
    // 0x325154: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x325154u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x325158u;
}
