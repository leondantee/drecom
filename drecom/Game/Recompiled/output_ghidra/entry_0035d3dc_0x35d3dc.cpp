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

// Function: entry_0035d3dc
// Address: 0x35d3dc - 0x35d448
void entry_0035d3dc_0x35d3dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035d3dc_0x35d3dc");
#endif

    switch (ctx->pc) {
        case 0x35d41cu: goto label_35d41c;
        default: break;
    }

    ctx->pc = 0x35d3dcu;

    // 0x35d3dc: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x35d3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x35d3e0: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x35d3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x35d3e4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x35d3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x35d3e8: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x35d3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x35d3ec: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x35d3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x35d3f0: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x35d3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x35d3f4: 0x86420008  lh          $v0, 0x8($s2)
    ctx->pc = 0x35d3f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x35d3f8: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x35d3f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d3fc: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x35d3fcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x35d400: 0x8642000a  lh          $v0, 0xA($s2)
    ctx->pc = 0x35d400u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x35d404: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x35d404u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35d408: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x35d408u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x35d40c: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x35d40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x35d410: 0x8e450020  lw          $a1, 0x20($s2)
    ctx->pc = 0x35d410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x35d414: 0xc0d779c  jal         func_35DE70
    ctx->pc = 0x35D414u;
    SET_GPR_U32(ctx, 31, 0x35D41Cu);
    ctx->pc = 0x35DE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35DE70u, 0x35D414u, 0x35D41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D41Cu;
label_35d41c:
    // 0x35d41c: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x35d41cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x35d420: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x35d420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x35d424: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x35d424u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x35d428: 0x151900  sll         $v1, $s5, 4
    ctx->pc = 0x35d428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x35d42c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x35d42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x35d430: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35d430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35d434: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x35d434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
    // 0x35d438: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x35d438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x35d43c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x35d43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x35d440: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x35d440u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x35d444: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x35d444u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x35d448u;
}
