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

// Function: entry_001677e0
// Address: 0x1677e0 - 0x16785c
void entry_001677e0_0x1677e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001677e0_0x1677e0");
#endif

    switch (ctx->pc) {
        case 0x167800u: goto label_167800;
        case 0x167820u: goto label_167820;
        default: break;
    }

    ctx->pc = 0x1677e0u;

    // 0x1677e0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1677e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1677e4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1677e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1677e8: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1677e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1677ec: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x1677ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1677f0: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x1677f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1677f4: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x1677f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1677f8: 0xc059c4c  jal         func_167130
    ctx->pc = 0x1677F8u;
    SET_GPR_U32(ctx, 31, 0x167800u);
    ctx->pc = 0x167130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167130u, 0x1677F8u, 0x167800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167800u;
label_167800:
    // 0x167800: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x167800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x167804: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x167804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x167808: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x167808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x16780c: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x16780cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x167810: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x167810u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x167814: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x167814u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x167818: 0xc059c4c  jal         func_167130
    ctx->pc = 0x167818u;
    SET_GPR_U32(ctx, 31, 0x167820u);
    ctx->pc = 0x167130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167130u, 0x167818u, 0x167820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167820u;
label_167820:
    // 0x167820: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x167820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x167824: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x167824u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167828: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x167828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16782c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x16782cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x167830: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x167830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x167834: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x167834u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167838: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x167838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16783c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x16783cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x167840: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x167840u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x167844: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x167844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x167848: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x167848u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16784c: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x16784cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x167850: 0x24c20020  addiu       $v0, $a2, 0x20
    ctx->pc = 0x167850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x167854: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x167854u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x167858: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x167858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x16785cu;
}
