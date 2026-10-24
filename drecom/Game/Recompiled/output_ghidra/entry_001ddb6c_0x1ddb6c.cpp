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

// Function: entry_001ddb6c
// Address: 0x1ddb6c - 0x1ddb90
void entry_001ddb6c_0x1ddb6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ddb6c_0x1ddb6c");
#endif

    switch (ctx->pc) {
        case 0x1ddb78u: goto label_1ddb78;
        default: break;
    }

    ctx->pc = 0x1ddb6cu;

    // 0x1ddb6c: 0xc7ac00c4  lwc1        $f12, 0xC4($sp)
    ctx->pc = 0x1ddb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ddb70: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x1DDB70u;
    SET_GPR_U32(ctx, 31, 0x1DDB78u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x1DDB70u, 0x1DDB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDB78u;
label_1ddb78:
    // 0x1ddb78: 0x305effff  andi        $fp, $v0, 0xFFFF
    ctx->pc = 0x1ddb78u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1ddb7c: 0x1e1100  sll         $v0, $fp, 4
    ctx->pc = 0x1ddb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x1ddb80: 0x305effff  andi        $fp, $v0, 0xFFFF
    ctx->pc = 0x1ddb80u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1ddb84: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x1ddb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1ddb88: 0x8c640058  lw          $a0, 0x58($v1)
    ctx->pc = 0x1ddb88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1ddb8c: 0x7080be28  paddub      $s7, $a0, $zero
    ctx->pc = 0x1ddb8cu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1ddb90u;
}
