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

// Function: entry_00217a58
// Address: 0x217a58 - 0x217a9c
void entry_00217a58_0x217a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00217a58_0x217a58");
#endif

    switch (ctx->pc) {
        case 0x217a84u: goto label_217a84;
        default: break;
    }

    ctx->pc = 0x217a58u;

    // 0x217a58: 0x24e7ccc0  addiu       $a3, $a3, -0x3340
    ctx->pc = 0x217a58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954176));
    // 0x217a5c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x217a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x217a60: 0x2484cec0  addiu       $a0, $a0, -0x3140
    ctx->pc = 0x217a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954688));
    // 0x217a64: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x217a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x217a68: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x217a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x217a6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x217a6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217a70: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x217a70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x217a74: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x217a74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217a78: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x217a78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x217a7c: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x217A7Cu;
    SET_GPR_U32(ctx, 31, 0x217A84u);
    ctx->pc = 0x217A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217A7Cu;
    // 0x217a80: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x217A84u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x217A84u) { return; }
    ctx->pc = 0x217A84u;
label_217a84:
    // 0x217a84: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x217a84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
    // 0x217a88: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x217a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x217a8c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x217a8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x217a90: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x217a90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x217a94: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x217a94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217a98: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x217a98u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    ctx->pc = 0x217a9cu;
}
