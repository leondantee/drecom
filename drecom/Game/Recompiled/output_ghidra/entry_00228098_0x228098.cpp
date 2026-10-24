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

// Function: entry_00228098
// Address: 0x228098 - 0x2280c4
void entry_00228098_0x228098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00228098_0x228098");
#endif

    switch (ctx->pc) {
        case 0x2280c0u: goto label_2280c0;
        default: break;
    }

    ctx->pc = 0x228098u;

    // 0x228098: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x228098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22809c: 0x94830a00  lhu         $v1, 0xA00($a0)
    ctx->pc = 0x22809cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2560)));
    // 0x2280a0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2280a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2280a4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2280A4u;
    {
        const bool branch_taken_0x2280a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2280a4) {
            ctx->pc = 0x2280C4u;
            return;
        }
    }
    ctx->pc = 0x2280ACu;
    // 0x2280ac: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2280acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2280b0: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2280b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2280b4: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x2280b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2280b8: 0xc05cd78  jal         func_1735E0
    ctx->pc = 0x2280B8u;
    SET_GPR_U32(ctx, 31, 0x2280C0u);
    ctx->pc = 0x1735E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1735E0u, 0x2280B8u, 0x2280C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2280C0u;
label_2280c0:
    // 0x2280c0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2280c0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2280c4u;
}
