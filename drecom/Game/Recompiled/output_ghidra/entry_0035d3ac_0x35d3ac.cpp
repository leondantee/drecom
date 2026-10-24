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

// Function: entry_0035d3ac
// Address: 0x35d3ac - 0x35d3dc
void entry_0035d3ac_0x35d3ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035d3ac_0x35d3ac");
#endif

    ctx->pc = 0x35d3acu;

    // 0x35d3ac: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x35d3acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x35d3b0: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x35d3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x35d3b4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x35d3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x35d3b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35d3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35d3bc: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x35d3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x35d3c0: 0x86420024  lh          $v0, 0x24($s2)
    ctx->pc = 0x35d3c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x35d3c4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x35d3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d3c8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x35d3c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x35d3cc: 0xaec2006c  sw          $v0, 0x6C($s6)
    ctx->pc = 0x35d3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 108), GPR_U32(ctx, 2));
    // 0x35d3d0: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x35d3d0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35d3d4: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x35D3D4u;
    {
        const bool branch_taken_0x35d3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d3d4) {
            ctx->pc = 0x35D4F8u;
            return;
        }
    }
    ctx->pc = 0x35D3DCu;
}
