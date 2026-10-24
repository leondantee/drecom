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

// Function: entry_0016eb88
// Address: 0x16eb88 - 0x16ebbc
void entry_0016eb88_0x16eb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016eb88_0x16eb88");
#endif

    ctx->pc = 0x16eb88u;

    // 0x16eb88: 0x97a200dc  lhu         $v0, 0xDC($sp)
    ctx->pc = 0x16eb88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x16eb8c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x16eb8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16eb90: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x16eb90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x16eb94: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x16EB94u;
    {
        const bool branch_taken_0x16eb94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16eb94) {
            ctx->pc = 0x16EB70u;
            return;
        }
    }
    ctx->pc = 0x16EB9Cu;
    // 0x16eb9c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x16eb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x16eba0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x16eba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16eba4: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x16eba4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x16eba8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16eba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16ebac: 0xac20bb40  sw          $zero, -0x44C0($at)
    ctx->pc = 0x16ebacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47BB40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BB40u, _value); } while (0);
    // 0x16ebb0: 0xa7a000dc  sh          $zero, 0xDC($sp)
    ctx->pc = 0x16ebb0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 220), (uint16_t)GPR_U32(ctx, 0));
    // 0x16ebb4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x16EBB4u;
    {
        const bool branch_taken_0x16ebb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ebb4) {
            ctx->pc = 0x16EC08u;
            return;
        }
    }
    ctx->pc = 0x16EBBCu;
}
