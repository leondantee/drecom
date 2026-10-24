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

// Function: entry_00227ec4
// Address: 0x227ec4 - 0x227ef0
void entry_00227ec4_0x227ec4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00227ec4_0x227ec4");
#endif

    switch (ctx->pc) {
        case 0x227eecu: goto label_227eec;
        default: break;
    }

    ctx->pc = 0x227ec4u;

    // 0x227ec4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x227ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227ec8: 0x94630a00  lhu         $v1, 0xA00($v1)
    ctx->pc = 0x227ec8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2560)));
    // 0x227ecc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x227eccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x227ed0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x227ED0u;
    {
        const bool branch_taken_0x227ed0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x227ed0) {
            ctx->pc = 0x227EF0u;
            return;
        }
    }
    ctx->pc = 0x227ED8u;
    // 0x227ed8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x227ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227edc: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x227edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227ee0: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x227ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x227ee4: 0xc05cd78  jal         func_1735E0
    ctx->pc = 0x227EE4u;
    SET_GPR_U32(ctx, 31, 0x227EECu);
    ctx->pc = 0x1735E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1735E0u, 0x227EE4u, 0x227EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227EECu;
label_227eec:
    // 0x227eec: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x227eecu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x227ef0u;
}
