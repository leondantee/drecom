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

// Function: entry_001674a0
// Address: 0x1674a0 - 0x167548
void entry_001674a0_0x1674a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001674a0_0x1674a0");
#endif

    switch (ctx->pc) {
        case 0x1674dcu: goto label_1674dc;
        case 0x167500u: goto label_167500;
        default: break;
    }

    ctx->pc = 0x1674a0u;

    // 0x1674a0: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x1674a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1674a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1674a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1674a8: 0x0  nop
    ctx->pc = 0x1674a8u;
    // NOP
    // 0x1674ac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1674acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1674b0: 0x0  nop
    ctx->pc = 0x1674b0u;
    // NOP
    // 0x1674b4: 0x45010024  bc1t        . + 4 + (0x24 << 2)
    ctx->pc = 0x1674B4u;
    {
        const bool branch_taken_0x1674b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1674b4) {
            ctx->pc = 0x167548u;
            return;
        }
    }
    ctx->pc = 0x1674BCu;
    // 0x1674bc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1674bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1674c0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1674c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1674c4: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1674c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1674c8: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x1674c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1674cc: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x1674ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1674d0: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x1674d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1674d4: 0xc059c4c  jal         func_167130
    ctx->pc = 0x1674D4u;
    SET_GPR_U32(ctx, 31, 0x1674DCu);
    ctx->pc = 0x167130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167130u, 0x1674D4u, 0x1674DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1674DCu;
label_1674dc:
    // 0x1674dc: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1674dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1674e0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1674e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1674e4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1674e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1674e8: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x1674e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1674ec: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x1674ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1674f0: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x1674f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1674f4: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x1674f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1674f8: 0xc059c4c  jal         func_167130
    ctx->pc = 0x1674F8u;
    SET_GPR_U32(ctx, 31, 0x167500u);
    ctx->pc = 0x167130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167130u, 0x1674F8u, 0x167500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167500u;
label_167500:
    // 0x167500: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x167500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x167504: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x167504u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167508: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x167508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16750c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x16750cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x167510: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x167510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x167514: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x167514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x167518: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x167518u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16751c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x16751cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x167520: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x167520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x167524: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x167524u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x167528: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x167528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x16752c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x16752cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167530: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x167530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x167534: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x167534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x167538: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x167538u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x16753c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16753cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167540: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x167540u;
    {
        const bool branch_taken_0x167540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167540) {
            ctx->pc = 0x16785Cu;
            return;
        }
    }
    ctx->pc = 0x167548u;
}
