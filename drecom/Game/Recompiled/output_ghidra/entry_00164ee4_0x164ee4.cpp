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

// Function: entry_00164ee4
// Address: 0x164ee4 - 0x164f38
void entry_00164ee4_0x164ee4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164ee4_0x164ee4");
#endif

    ctx->pc = 0x164ee4u;

    // 0x164ee4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x164ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x164ee8: 0x8c240ae8  lw          $a0, 0xAE8($at)
    ctx->pc = 0x164ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x164eec: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x164eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
    // 0x164ef0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x164ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x164ef4: 0x8c235488  lw          $v1, 0x5488($at)
    ctx->pc = 0x164ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F5488u));
    // 0x164ef8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x164ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x164efc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x164efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x164f00: 0xac225488  sw          $v0, 0x5488($at)
    ctx->pc = 0x164f00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F5488u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5488u, _value); } while (0);
    // 0x164f04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x164f04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x164f08: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x164f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x164f0c: 0x24425490  addiu       $v0, $v0, 0x5490
    ctx->pc = 0x164f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21648));
    // 0x164f10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x164f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x164f14: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x164f14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x164f18: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x164f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x164f1c: 0x2c410004  sltiu       $at, $v0, 0x4
    ctx->pc = 0x164f1cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x164f20: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x164F20u;
    {
        const bool branch_taken_0x164f20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x164f20) {
            ctx->pc = 0x164F38u;
            return;
        }
    }
    ctx->pc = 0x164F28u;
    // 0x164f28: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x164f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x164f2c: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x164f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x164f30: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x164F30u;
    {
        const bool branch_taken_0x164f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164f30) {
            ctx->pc = 0x164F44u;
            return;
        }
    }
    ctx->pc = 0x164F38u;
}
