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

// Function: entry_00265de0
// Address: 0x265de0 - 0x265e50
void entry_00265de0_0x265de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00265de0_0x265de0");
#endif

    ctx->pc = 0x265de0u;

    // 0x265de0: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x265de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x265de4: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x265de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x265de8: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x265de8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x265dec: 0x1460fecd  bnez        $v1, . + 4 + (-0x133 << 2)
    ctx->pc = 0x265DECu;
    {
        const bool branch_taken_0x265dec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x265dec) {
            ctx->pc = 0x265924u;
            return;
        }
    }
    ctx->pc = 0x265DF4u;
    // 0x265df4: 0x24031400  addiu       $v1, $zero, 0x1400
    ctx->pc = 0x265df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5120));
    // 0x265df8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x265df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x265dfc: 0xac23e678  sw          $v1, -0x1988($at)
    ctx->pc = 0x265dfcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x61E678u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E678u, _value); } while (0);
    // 0x265e00: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x265e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x265e04: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x265e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x265e08: 0xac23e67c  sw          $v1, -0x1984($at)
    ctx->pc = 0x265e08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x61E67Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E67Cu, _value); } while (0);
    // 0x265e0c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x265e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x265e10: 0xac34e680  sw          $s4, -0x1980($at)
    ctx->pc = 0x265e10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 20)); ps2TraceGuestWrite(rdram, 0x61E680u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E680u, _value); } while (0);
    // 0x265e14: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x265e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x265e18: 0xac34e684  sw          $s4, -0x197C($at)
    ctx->pc = 0x265e18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 20)); ps2TraceGuestWrite(rdram, 0x61E684u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E684u, _value); } while (0);
    // 0x265e1c: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x265e1cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x265e20: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x265e20u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x265e24: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x265e24u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x265e28: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x265e28u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x265e2c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x265e2cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x265e30: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x265e30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x265e34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x265e34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x265e38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x265e38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265e3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x265e3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265e40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x265e40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265e44: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x265e44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x265e48: 0x3e00008  jr          $ra
    ctx->pc = 0x265E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265E50u;
}
