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

// Function: entry_0025dc80
// Address: 0x25dc80 - 0x25dcc0
void entry_0025dc80_0x25dc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025dc80_0x25dc80");
#endif

    switch (ctx->pc) {
        case 0x25dcb8u: goto label_25dcb8;
        default: break;
    }

    ctx->pc = 0x25dc80u;

    // 0x25dc80: 0x96230140  lhu         $v1, 0x140($s1)
    ctx->pc = 0x25dc80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x25dc84: 0x34620040  ori         $v0, $v1, 0x40
    ctx->pc = 0x25dc84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x25dc88: 0xa6220140  sh          $v0, 0x140($s1)
    ctx->pc = 0x25dc88u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x25dc8c: 0x96250140  lhu         $a1, 0x140($s1)
    ctx->pc = 0x25dc8cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x25dc90: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x25dc90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x25dc94: 0x30a40004  andi        $a0, $a1, 0x4
    ctx->pc = 0x25dc94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x25dc98: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25DC98u;
    {
        const bool branch_taken_0x25dc98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dc98) {
            ctx->pc = 0x25DCC0u;
            return;
        }
    }
    ctx->pc = 0x25DCA0u;
    // 0x25dca0: 0x141980  sll         $v1, $s4, 6
    ctx->pc = 0x25dca0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x25dca4: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x25dca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x25dca8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x25dca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25dcac: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x25dcacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25dcb0: 0xc040ca2  jal         func_103288
    ctx->pc = 0x25DCB0u;
    SET_GPR_U32(ctx, 31, 0x25DCB8u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x25DCB8u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25DCB8u) { return; }
    ctx->pc = 0x25DCB8u;
label_25dcb8:
    // 0x25dcb8: 0x100001bd  b           . + 4 + (0x1BD << 2)
    ctx->pc = 0x25DCB8u;
    {
        const bool branch_taken_0x25dcb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dcb8) {
            ctx->pc = 0x25E3B0u;
            return;
        }
    }
    ctx->pc = 0x25DCC0u;
}
