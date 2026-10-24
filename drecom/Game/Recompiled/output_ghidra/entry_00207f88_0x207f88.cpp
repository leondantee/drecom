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

// Function: entry_00207f88
// Address: 0x207f88 - 0x207ff8
void entry_00207f88_0x207f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207f88_0x207f88");
#endif

    switch (ctx->pc) {
        case 0x207f98u: goto label_207f98;
        case 0x207fa4u: goto label_207fa4;
        default: break;
    }

    ctx->pc = 0x207f88u;

    // 0x207f88: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x207f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207f8c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x207f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x207f90: 0xc080f60  jal         func_203D80
    ctx->pc = 0x207F90u;
    SET_GPR_U32(ctx, 31, 0x207F98u);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x207F90u, 0x207F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207F98u;
label_207f98:
    // 0x207f98: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x207f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207f9c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x207F9Cu;
    SET_GPR_U32(ctx, 31, 0x207FA4u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x207F9Cu, 0x207FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207FA4u;
label_207fa4:
    // 0x207fa4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x207fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207fa8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x207fa8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x207fac: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x207FACu;
    {
        const bool branch_taken_0x207fac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x207fac) {
            ctx->pc = 0x207FF8u;
            return;
        }
    }
    ctx->pc = 0x207FB4u;
    // 0x207fb4: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x207fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207fb8: 0x8ca41340  lw          $a0, 0x1340($a1)
    ctx->pc = 0x207fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4928)));
    // 0x207fbc: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x207fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x207fc0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x207fc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x207fc4: 0xaca31340  sw          $v1, 0x1340($a1)
    ctx->pc = 0x207fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4928), GPR_U32(ctx, 3));
    // 0x207fc8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x207fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207fcc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x207fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207fd0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x207fd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x207fd4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x207fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x207fd8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x207fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207fdc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x207fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x207fe0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x207fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207fe4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x207fe4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x207fe8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x207fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207fec: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x207fecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x207ff0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x207ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207ff4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x207ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x207ff8u;
}
