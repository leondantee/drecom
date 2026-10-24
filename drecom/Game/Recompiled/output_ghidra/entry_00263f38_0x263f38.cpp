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

// Function: entry_00263f38
// Address: 0x263f38 - 0x263f90
void entry_00263f38_0x263f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00263f38_0x263f38");
#endif

    switch (ctx->pc) {
        case 0x263f88u: goto label_263f88;
        default: break;
    }

    ctx->pc = 0x263f38u;

    // 0x263f38: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x263f38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x263f3c: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x263f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x263f40: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x263f40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x263f44: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x263f44u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x263f48: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x263f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x263f4c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x263f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x263f50: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x263F50u;
    {
        const bool branch_taken_0x263f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x263f50) {
            ctx->pc = 0x263F90u;
            return;
        }
    }
    ctx->pc = 0x263F58u;
    // 0x263f58: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x263f58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x263f5c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x263f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x263f60: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x263f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x263f64: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x263F64u;
    {
        const bool branch_taken_0x263f64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x263f64) {
            ctx->pc = 0x263FE8u;
            return;
        }
    }
    ctx->pc = 0x263F6Cu;
    // 0x263f6c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x263f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x263f70: 0x171980  sll         $v1, $s7, 6
    ctx->pc = 0x263f70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 6));
    // 0x263f74: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x263f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x263f78: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x263f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x263f7c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x263f7cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x263f80: 0xc040ca2  jal         func_103288
    ctx->pc = 0x263F80u;
    SET_GPR_U32(ctx, 31, 0x263F88u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x263F88u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x263F88u) { return; }
    ctx->pc = 0x263F88u;
label_263f88:
    // 0x263f88: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x263F88u;
    {
        const bool branch_taken_0x263f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263f88) {
            ctx->pc = 0x263FE8u;
            return;
        }
    }
    ctx->pc = 0x263F90u;
}
