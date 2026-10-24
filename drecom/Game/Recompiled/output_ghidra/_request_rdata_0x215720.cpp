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

// Function: _request_rdata
// Address: 0x215720 - 0x215780
void _request_rdata_0x215720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_request_rdata_0x215720");
#endif

    switch (ctx->pc) {
        case 0x215738u: goto label_215738;
        default: break;
    }

    ctx->pc = 0x215720u;

    // 0x215720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x215720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x215724: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x215724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x215728: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x215728u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21572c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21572cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x215730: 0xc08557e  jal         func_2155F8
    ctx->pc = 0x215730u;
    SET_GPR_U32(ctx, 31, 0x215738u);
    ctx->pc = 0x215734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215730u;
    // 0x215734: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2155F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2155F8u, 0x215730u, 0x215738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215738u;
label_215738:
    // 0x215738: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x215738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x21573c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x21573cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x215740: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x215740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x215744: 0x3463000c  ori         $v1, $v1, 0xC
    ctx->pc = 0x215744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12);
    // 0x215748: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x215748u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
    // 0x21574c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x21574cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x215750: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x215750u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
    // 0x215754: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x215754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215758: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x215758u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x21575c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x21575cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x215760: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x215760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215764: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x215764u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x215768: 0x8e090028  lw          $t1, 0x28($s0)
    ctx->pc = 0x215768u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x21576c: 0x8e070020  lw          $a3, 0x20($s0)
    ctx->pc = 0x21576cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x215770: 0x8e080024  lw          $t0, 0x24($s0)
    ctx->pc = 0x215770u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x215774: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x215774u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215778: 0x808544e  j           func_215138
    ctx->pc = 0x215778u;
    ctx->pc = 0x21577Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215778u;
    // 0x21577c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215138u;
    isceSifSendCmd_0x215138(rdram, ctx, runtime); return;
    ctx->pc = 0x215780u;
}
