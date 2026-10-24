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

// Function: entry_001676fc
// Address: 0x1676fc - 0x1677e0
void entry_001676fc_0x1676fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001676fc_0x1676fc");
#endif

    switch (ctx->pc) {
        case 0x167738u: goto label_167738;
        case 0x16775cu: goto label_16775c;
        default: break;
    }

    ctx->pc = 0x1676fcu;

    // 0x1676fc: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x1676fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x167700: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x167700u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x167704: 0x0  nop
    ctx->pc = 0x167704u;
    // NOP
    // 0x167708: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x167708u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16770c: 0x0  nop
    ctx->pc = 0x16770cu;
    // NOP
    // 0x167710: 0x45000033  bc1f        . + 4 + (0x33 << 2)
    ctx->pc = 0x167710u;
    {
        const bool branch_taken_0x167710 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x167710) {
            ctx->pc = 0x1677E0u;
            return;
        }
    }
    ctx->pc = 0x167718u;
    // 0x167718: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x167718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16771c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x16771cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x167720: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x167720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x167724: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x167724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x167728: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x167728u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16772c: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x16772cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x167730: 0xc059c4c  jal         func_167130
    ctx->pc = 0x167730u;
    SET_GPR_U32(ctx, 31, 0x167738u);
    ctx->pc = 0x167130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167130u, 0x167730u, 0x167738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167738u;
label_167738:
    // 0x167738: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x167738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16773c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x16773cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x167740: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x167740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x167744: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x167744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x167748: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x167748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x16774c: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x16774cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x167750: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x167750u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x167754: 0xc059c4c  jal         func_167130
    ctx->pc = 0x167754u;
    SET_GPR_U32(ctx, 31, 0x16775Cu);
    ctx->pc = 0x167130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167130u, 0x167754u, 0x16775Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16775Cu;
label_16775c:
    // 0x16775c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x16775cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x167760: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x167760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x167764: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x167764u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167768: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x167768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16776c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x16776cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x167770: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x167770u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x167774: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x167774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x167778: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x167778u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16777c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x16777cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x167780: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x167780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x167784: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x167784u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x167788: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x167788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16778c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x16778cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167790: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x167790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x167794: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x167794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x167798: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x167798u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x16779c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x16779cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1677a0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1677a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1677a4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1677a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1677a8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1677a8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1677ac: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x1677acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1677b0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1677b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1677b4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1677b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1677b8: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1677b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1677bc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1677bcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1677c0: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x1677c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1677c4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1677c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1677c8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1677c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1677cc: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x1677ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1677d0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1677d0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1677d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1677d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1677d8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1677D8u;
    {
        const bool branch_taken_0x1677d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1677d8) {
            ctx->pc = 0x16785Cu;
            return;
        }
    }
    ctx->pc = 0x1677E0u;
}
