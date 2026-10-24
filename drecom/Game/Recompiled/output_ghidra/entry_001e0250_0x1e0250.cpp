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

// Function: entry_001e0250
// Address: 0x1e0250 - 0x1e02d0
void entry_001e0250_0x1e0250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0250_0x1e0250");
#endif

    switch (ctx->pc) {
        case 0x1e0290u: goto label_1e0290;
        case 0x1e02a4u: goto label_1e02a4;
        default: break;
    }

    ctx->pc = 0x1e0250u;

    // 0x1e0250: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1e0250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1e0254: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1e0254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e0258: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1e0258u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e025c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1e025cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e0260: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e0260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e0264: 0xac440070  sw          $a0, 0x70($v0)
    ctx->pc = 0x1e0264u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 4));
    // 0x1e0268: 0x8fb200c8  lw          $s2, 0xC8($sp)
    ctx->pc = 0x1e0268u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1e026c: 0xafb200b4  sw          $s2, 0xB4($sp)
    ctx->pc = 0x1e026cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 18));
    // 0x1e0270: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x1e0270u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1e0274: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1e0274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e0278: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x1e0278u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1e027c: 0xdc450008  ld          $a1, 0x8($v0)
    ctx->pc = 0x1e027cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e0280: 0xdfa600d0  ld          $a2, 0xD0($sp)
    ctx->pc = 0x1e0280u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1e0284: 0xdfa700d8  ld          $a3, 0xD8($sp)
    ctx->pc = 0x1e0284u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1e0288: 0xc077f08  jal         func_1DFC20
    ctx->pc = 0x1E0288u;
    SET_GPR_U32(ctx, 31, 0x1E0290u);
    ctx->pc = 0x1DFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFC20u, 0x1E0288u, 0x1E0290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0290u;
label_1e0290:
    // 0x1e0290: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1e0290u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e0294: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x1e0294u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1e0298: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x1e0298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e029c: 0xc077f3c  jal         func_1DFCF0
    ctx->pc = 0x1E029Cu;
    SET_GPR_U32(ctx, 31, 0x1E02A4u);
    ctx->pc = 0x1DFCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFCF0u, 0x1E029Cu, 0x1E02A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E02A4u;
label_1e02a4:
    // 0x1e02a4: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1e02a4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e02a8: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x1e02a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1e02ac: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x1e02acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e02b0: 0x2457fff0  addiu       $s7, $v0, -0x10
    ctx->pc = 0x1e02b0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x1e02b4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1e02b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e02b8: 0x8c540048  lw          $s4, 0x48($v0)
    ctx->pc = 0x1e02b8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1e02bc: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x1e02bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x1e02c0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1e02c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e02c4: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x1e02c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1e02c8: 0x245efffe  addiu       $fp, $v0, -0x2
    ctx->pc = 0x1e02c8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x1e02cc: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x1e02ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x1e02d0u;
}
