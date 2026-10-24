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

// Function: entry_002a6268
// Address: 0x2a6268 - 0x2a62c4
void entry_002a6268_0x2a6268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a6268_0x2a6268");
#endif

    switch (ctx->pc) {
        case 0x2a62a4u: goto label_2a62a4;
        default: break;
    }

    ctx->pc = 0x2a6268u;

    // 0x2a6268: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a6268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a626c: 0x906509e7  lbu         $a1, 0x9E7($v1)
    ctx->pc = 0x2a626cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2a6270: 0x10a00078  beqz        $a1, . + 4 + (0x78 << 2)
    ctx->pc = 0x2A6270u;
    {
        const bool branch_taken_0x2a6270 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6270) {
            ctx->pc = 0x2A6454u;
            return;
        }
    }
    ctx->pc = 0x2A6278u;
    // 0x2a6278: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2a6278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a627c: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a627cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6280: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2a6280u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a6284: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a6284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6288: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a628c: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x2a628cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x2a6290: 0x24061e1f  addiu       $a2, $zero, 0x1E1F
    ctx->pc = 0x2a6290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7711));
    // 0x2a6294: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a6294u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a6298: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a6298u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a629c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A629Cu;
    SET_GPR_U32(ctx, 31, 0x2A62A4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A629Cu, 0x2A62A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A62A4u;
label_2a62a4:
    // 0x2a62a4: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x2a62a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a62a8: 0x247010b0  addiu       $s0, $v1, 0x10B0
    ctx->pc = 0x2a62a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4272));
    // 0x2a62ac: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x2a62acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x2a62b0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2a62b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2a62b4: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x2a62b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2a62b8: 0xae0500f0  sw          $a1, 0xF0($s0)
    ctx->pc = 0x2a62b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 5));
    // 0x2a62bc: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x2A62BCu;
    {
        const bool branch_taken_0x2a62bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a62bc) {
            ctx->pc = 0x2A6454u;
            return;
        }
    }
    ctx->pc = 0x2A62C4u;
}
