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

// Function: Crystal_work_init
// Address: 0x31e670 - 0x31e6d0
void Crystal_work_init_0x31e670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Crystal_work_init_0x31e670");
#endif

    ctx->pc = 0x31e670u;

    // 0x31e670: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31e670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31e674: 0x8c23af60  lw          $v1, -0x50A0($at)
    ctx->pc = 0x31e674u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x85AF60u));
    // 0x31e678: 0x2c6101f4  sltiu       $at, $v1, 0x1F4
    ctx->pc = 0x31e678u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)500) ? 1 : 0);
    // 0x31e67c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x31E67Cu;
    {
        const bool branch_taken_0x31e67c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e67c) {
            ctx->pc = 0x31E694u;
            goto label_31e694;
        }
    }
    ctx->pc = 0x31E684u;
    // 0x31e684: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31e684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31e688: 0xac20af60  sw          $zero, -0x50A0($at)
    ctx->pc = 0x31e688u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x85AF60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85AF60u, _value); } while (0);
    // 0x31e68c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31E68Cu;
    {
        const bool branch_taken_0x31e68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e68c) {
            ctx->pc = 0x31E6A0u;
            goto label_31e6a0;
        }
    }
    ctx->pc = 0x31E694u;
label_31e694:
    // 0x31e694: 0x240301f4  addiu       $v1, $zero, 0x1F4
    ctx->pc = 0x31e694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x31e698: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31e698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31e69c: 0xac23af60  sw          $v1, -0x50A0($at)
    ctx->pc = 0x31e69cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x85AF60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85AF60u, _value); } while (0);
label_31e6a0:
    // 0x31e6a0: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31e6a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31e6a4: 0xa420af64  sh          $zero, -0x509C($at)
    ctx->pc = 0x31e6a4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x85AF64u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x85AF64u, _value); } while (0);
    // 0x31e6a8: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31e6a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31e6ac: 0xa420af66  sh          $zero, -0x509A($at)
    ctx->pc = 0x31e6acu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x85AF66u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x85AF66u, _value); } while (0);
    // 0x31e6b0: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31e6b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31e6b4: 0xa420af68  sh          $zero, -0x5098($at)
    ctx->pc = 0x31e6b4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x85AF68u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x85AF68u, _value); } while (0);
    // 0x31e6b8: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31e6b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31e6bc: 0xa420af6a  sh          $zero, -0x5096($at)
    ctx->pc = 0x31e6bcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x85AF6Au, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x85AF6Au, _value); } while (0);
    // 0x31e6c0: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31e6c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31e6c4: 0xac20af6c  sw          $zero, -0x5094($at)
    ctx->pc = 0x31e6c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x85AF6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85AF6Cu, _value); } while (0);
    // 0x31e6c8: 0x3e00008  jr          $ra
    ctx->pc = 0x31E6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E6C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E6D0u;
}
