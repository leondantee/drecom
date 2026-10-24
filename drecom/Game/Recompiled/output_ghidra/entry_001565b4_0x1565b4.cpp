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

// Function: entry_001565b4
// Address: 0x1565b4 - 0x1565f4
void entry_001565b4_0x1565b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001565b4_0x1565b4");
#endif

    ctx->pc = 0x1565b4u;

    // 0x1565b4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1565b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1565b8: 0x8c22f748  lw          $v0, -0x8B8($at)
    ctx->pc = 0x1565b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EF748u));
    // 0x1565bc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1565BCu;
    {
        const bool branch_taken_0x1565bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1565bc) {
            ctx->pc = 0x1565F4u;
            return;
        }
    }
    ctx->pc = 0x1565C4u;
    // 0x1565c4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1565c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1565c8: 0x8c225520  lw          $v0, 0x5520($at)
    ctx->pc = 0x1565c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x385520u));
    // 0x1565cc: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1565ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1565d0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1565d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1565d4: 0xac225520  sw          $v0, 0x5520($at)
    ctx->pc = 0x1565d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x385520u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x385520u, _value); } while (0);
    // 0x1565d8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1565d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1565dc: 0x8c245528  lw          $a0, 0x5528($at)
    ctx->pc = 0x1565dcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x385528u));
    // 0x1565e0: 0x2485fffe  addiu       $a1, $a0, -0x2
    ctx->pc = 0x1565e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x1565e4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1565e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1565e8: 0xac255528  sw          $a1, 0x5528($at)
    ctx->pc = 0x1565e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x385528u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x385528u, _value); } while (0);
    // 0x1565ec: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1565ECu;
    {
        const bool branch_taken_0x1565ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1565ec) {
            ctx->pc = 0x15661Cu;
            return;
        }
    }
    ctx->pc = 0x1565F4u;
}
