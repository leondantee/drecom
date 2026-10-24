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

// Function: entry_001673dc
// Address: 0x1673dc - 0x1674a0
void entry_001673dc_0x1673dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001673dc_0x1673dc");
#endif

    switch (ctx->pc) {
        case 0x167438u: goto label_167438;
        case 0x167458u: goto label_167458;
        default: break;
    }

    ctx->pc = 0x1673dcu;

    // 0x1673dc: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x1673dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1673e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1673e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1673e4: 0x0  nop
    ctx->pc = 0x1673e4u;
    // NOP
    // 0x1673e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1673e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1673ec: 0x0  nop
    ctx->pc = 0x1673ecu;
    // NOP
    // 0x1673f0: 0x45010088  bc1t        . + 4 + (0x88 << 2)
    ctx->pc = 0x1673F0u;
    {
        const bool branch_taken_0x1673f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1673f0) {
            ctx->pc = 0x167614u;
            return;
        }
    }
    ctx->pc = 0x1673F8u;
    // 0x1673f8: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x1673f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1673fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1673fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x167400: 0x0  nop
    ctx->pc = 0x167400u;
    // NOP
    // 0x167404: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x167404u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167408: 0x0  nop
    ctx->pc = 0x167408u;
    // NOP
    // 0x16740c: 0x45010024  bc1t        . + 4 + (0x24 << 2)
    ctx->pc = 0x16740Cu;
    {
        const bool branch_taken_0x16740c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16740c) {
            ctx->pc = 0x1674A0u;
            return;
        }
    }
    ctx->pc = 0x167414u;
    // 0x167414: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x167414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x167418: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x167418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16741c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x16741cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x167420: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x167420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x167424: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x167424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x167428: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x167428u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16742c: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x16742cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x167430: 0xc059c4c  jal         func_167130
    ctx->pc = 0x167430u;
    SET_GPR_U32(ctx, 31, 0x167438u);
    ctx->pc = 0x167130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167130u, 0x167430u, 0x167438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167438u;
label_167438:
    // 0x167438: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x167438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16743c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x16743cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x167440: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x167440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x167444: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x167444u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x167448: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x167448u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16744c: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x16744cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x167450: 0xc059c4c  jal         func_167130
    ctx->pc = 0x167450u;
    SET_GPR_U32(ctx, 31, 0x167458u);
    ctx->pc = 0x167130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167130u, 0x167450u, 0x167458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167458u;
label_167458:
    // 0x167458: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x167458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x16745c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x16745cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167460: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x167460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x167464: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x167464u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x167468: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x167468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x16746c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x16746cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167470: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x167470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x167474: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x167474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x167478: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x167478u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x16747c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x16747cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x167480: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x167480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x167484: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x167484u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167488: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x167488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16748c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x16748cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x167490: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x167490u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x167494: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x167494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167498: 0x100000f0  b           . + 4 + (0xF0 << 2)
    ctx->pc = 0x167498u;
    {
        const bool branch_taken_0x167498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167498) {
            ctx->pc = 0x16785Cu;
            return;
        }
    }
    ctx->pc = 0x1674A0u;
}
