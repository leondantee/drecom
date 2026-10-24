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

// Function: entry_00167614
// Address: 0x167614 - 0x1676fc
void entry_00167614_0x167614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167614_0x167614");
#endif

    switch (ctx->pc) {
        case 0x167654u: goto label_167654;
        case 0x167674u: goto label_167674;
        default: break;
    }

    ctx->pc = 0x167614u;

    // 0x167614: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x167614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x167618: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x167618u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16761c: 0x0  nop
    ctx->pc = 0x16761cu;
    // NOP
    // 0x167620: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x167620u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167624: 0x0  nop
    ctx->pc = 0x167624u;
    // NOP
    // 0x167628: 0x45000034  bc1f        . + 4 + (0x34 << 2)
    ctx->pc = 0x167628u;
    {
        const bool branch_taken_0x167628 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x167628) {
            ctx->pc = 0x1676FCu;
            return;
        }
    }
    ctx->pc = 0x167630u;
    // 0x167630: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x167630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x167634: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x167634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x167638: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x167638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x16763c: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x16763cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x167640: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x167640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x167644: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x167644u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x167648: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x167648u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16764c: 0xc059c4c  jal         func_167130
    ctx->pc = 0x16764Cu;
    SET_GPR_U32(ctx, 31, 0x167654u);
    ctx->pc = 0x167130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167130u, 0x16764Cu, 0x167654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167654u;
label_167654:
    // 0x167654: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x167654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x167658: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x167658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x16765c: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x16765cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x167660: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x167660u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x167664: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x167664u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x167668: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x167668u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16766c: 0xc059c4c  jal         func_167130
    ctx->pc = 0x16766Cu;
    SET_GPR_U32(ctx, 31, 0x167674u);
    ctx->pc = 0x167130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167130u, 0x16766Cu, 0x167674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167674u;
label_167674:
    // 0x167674: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x167674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x167678: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x167678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x16767c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x16767cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167680: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x167680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x167684: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x167684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x167688: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x167688u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x16768c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x16768cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x167690: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x167690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x167694: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x167694u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167698: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x167698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16769c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x16769cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1676a0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1676a0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1676a4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1676a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1676a8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1676a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1676ac: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1676acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1676b0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1676b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1676b4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1676b4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1676b8: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1676b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1676bc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1676bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1676c0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1676c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1676c4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1676c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1676c8: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x1676c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1676cc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1676ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1676d0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1676d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1676d4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1676d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1676d8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1676d8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1676dc: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1676dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1676e0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1676e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1676e4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1676e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1676e8: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x1676e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1676ec: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1676ecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1676f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1676f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1676f4: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1676F4u;
    {
        const bool branch_taken_0x1676f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1676f4) {
            ctx->pc = 0x16785Cu;
            return;
        }
    }
    ctx->pc = 0x1676FCu;
}
