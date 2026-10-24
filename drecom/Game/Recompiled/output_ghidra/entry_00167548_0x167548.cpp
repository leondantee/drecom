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

// Function: entry_00167548
// Address: 0x167548 - 0x167614
void entry_00167548_0x167548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167548_0x167548");
#endif

    switch (ctx->pc) {
        case 0x167568u: goto label_167568;
        case 0x167588u: goto label_167588;
        default: break;
    }

    ctx->pc = 0x167548u;

    // 0x167548: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x167548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16754c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x16754cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x167550: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x167550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x167554: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x167554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x167558: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x167558u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16755c: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x16755cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x167560: 0xc059c4c  jal         func_167130
    ctx->pc = 0x167560u;
    SET_GPR_U32(ctx, 31, 0x167568u);
    ctx->pc = 0x167130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167130u, 0x167560u, 0x167568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167568u;
label_167568:
    // 0x167568: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x167568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16756c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x16756cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x167570: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x167570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x167574: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x167574u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x167578: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x167578u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x16757c: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x16757cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x167580: 0xc059c4c  jal         func_167130
    ctx->pc = 0x167580u;
    SET_GPR_U32(ctx, 31, 0x167588u);
    ctx->pc = 0x167130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167130u, 0x167580u, 0x167588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167588u;
label_167588:
    // 0x167588: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x167588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x16758c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x16758cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167590: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x167590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x167594: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x167594u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x167598: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x167598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16759c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x16759cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1675a0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1675a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1675a4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1675a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1675a8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1675a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1675ac: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1675acu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1675b0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1675b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1675b4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1675b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1675b8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1675b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1675bc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1675bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1675c0: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1675c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1675c4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1675c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1675c8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1675c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1675cc: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1675ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1675d0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1675d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1675d4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1675d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1675d8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1675d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1675dc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1675dcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1675e0: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1675e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1675e4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1675e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1675e8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1675e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1675ec: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1675ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1675f0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1675f0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1675f4: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x1675f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1675f8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1675f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1675fc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1675fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x167600: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x167600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x167604: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x167604u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x167608: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x167608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16760c: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x16760Cu;
    {
        const bool branch_taken_0x16760c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16760c) {
            ctx->pc = 0x16785Cu;
            return;
        }
    }
    ctx->pc = 0x167614u;
}
