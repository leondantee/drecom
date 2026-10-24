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

// Function: entry_00108e88
// Address: 0x108e88 - 0x108ef8
void entry_00108e88_0x108e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108e88_0x108e88");
#endif

    switch (ctx->pc) {
        case 0x108ef0u: goto label_108ef0;
        default: break;
    }

    ctx->pc = 0x108e88u;

label_108e88:
    // 0x108e88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x108e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x108e8c: 0x0  nop
    ctx->pc = 0x108e8cu;
    // NOP
    // 0x108e90: 0x0  nop
    ctx->pc = 0x108e90u;
    // NOP
    // 0x108e94: 0x0  nop
    ctx->pc = 0x108e94u;
    // NOP
    // 0x108e98: 0x0  nop
    ctx->pc = 0x108e98u;
    // NOP
    // 0x108e9c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x108E9Cu;
    {
        const bool branch_taken_0x108e9c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x108e9c) {
            ctx->pc = 0x108E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108e88;
        }
    }
    ctx->pc = 0x108EA4u;
    // 0x108ea4: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x108ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x108ea8: 0x3c040fff  lui         $a0, 0xFFF
    ctx->pc = 0x108ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4095 << 16));
    // 0x108eac: 0x2252818  mult        $a1, $s1, $a1
    ctx->pc = 0x108eacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x108eb0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x108eb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x108eb4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x108eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x108eb8: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x108eb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x108ebc: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x108ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x108ec0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x108ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x108ec4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x108ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x108ec8: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x108ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46112);
    // 0x108ecc: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x108eccu;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 5));
    // 0x108ed0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x108ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x108ed4: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x108ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x108ed8: 0x24030101  addiu       $v1, $zero, 0x101
    ctx->pc = 0x108ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x108edc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x108edcu;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 3));
    // 0x108ee0: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x108EE0u;
    {
        const bool branch_taken_0x108ee0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x108EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108EE0u;
        // 0x108ee4: 0x8e6400d8  lw          $a0, 0xD8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108ee0) {
            ctx->pc = 0x108EF8u;
            return;
        }
    }
    ctx->pc = 0x108EE8u;
    // 0x108ee8: 0xc0422a4  jal         func_108A90
    ctx->pc = 0x108EE8u;
    SET_GPR_U32(ctx, 31, 0x108EF0u);
    ctx->pc = 0x108EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108EE8u;
    // 0x108eec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A90u, 0x108EE8u, 0x108EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108EF0u;
label_108ef0:
    // 0x108ef0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x108EF0u;
    {
        const bool branch_taken_0x108ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108EF0u;
        // 0x108ef4: 0x8e843bf4  lw          $a0, 0x3BF4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 15348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108ef0) {
            ctx->pc = 0x108F04u;
            return;
        }
    }
    ctx->pc = 0x108EF8u;
}
