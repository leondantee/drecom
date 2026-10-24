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

// Function: entry_00109e80
// Address: 0x109e80 - 0x109eac
void entry_00109e80_0x109e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109e80_0x109e80");
#endif

    switch (ctx->pc) {
        case 0x109e94u: goto label_109e94;
        default: break;
    }

    ctx->pc = 0x109e80u;

    // 0x109e80: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x109E80u;
    {
        const bool branch_taken_0x109e80 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x109E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109E80u;
        // 0x109e84: 0x8e900008  lw          $s0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109e80) {
            ctx->pc = 0x109EACu;
            return;
        }
    }
    ctx->pc = 0x109E88u;
    // 0x109e88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109e8c: 0xc04240a  jal         func_109028
    ctx->pc = 0x109E8Cu;
    SET_GPR_U32(ctx, 31, 0x109E94u);
    ctx->pc = 0x109E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109E8Cu;
    // 0x109e90: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109E8Cu, 0x109E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109E94u;
label_109e94:
    // 0x109e94: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x109e94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x109e98: 0xde830000  ld          $v1, 0x0($s4)
    ctx->pc = 0x109e98u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x109e9c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x109e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x109ea0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x109ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x109ea4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x109ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x109ea8: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x109ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
    ctx->pc = 0x109eacu;
}
