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

// Function: entry_001ff204
// Address: 0x1ff204 - 0x1ff22c
void entry_001ff204_0x1ff204(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff204_0x1ff204");
#endif

    switch (ctx->pc) {
        case 0x1ff228u: goto label_1ff228;
        default: break;
    }

    ctx->pc = 0x1ff204u;

    // 0x1ff204: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff208: 0x906302a9  lbu         $v1, 0x2A9($v1)
    ctx->pc = 0x1ff208u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 681)));
    // 0x1ff20c: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x1ff20cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ff210: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x1ff210u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1ff214: 0x2e32821  addu        $a1, $s7, $v1
    ctx->pc = 0x1ff214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1ff218: 0x8fa700d8  lw          $a3, 0xD8($sp)
    ctx->pc = 0x1ff218u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff21c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x1ff21cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1ff220: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1FF220u;
    SET_GPR_U32(ctx, 31, 0x1FF228u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1FF228u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FF228u) { return; }
    ctx->pc = 0x1FF228u;
label_1ff228:
    // 0x1ff228: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ff228u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1ff22cu;
}
