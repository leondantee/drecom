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

// Function: entry_002170a4
// Address: 0x2170a4 - 0x2170d4
void entry_002170a4_0x2170a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002170a4_0x2170a4");
#endif

    ctx->pc = 0x2170a4u;

    // 0x2170a4: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x2170a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
    // 0x2170a8: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2170a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2170ac: 0xace5cb80  sw          $a1, -0x3480($a3)
    ctx->pc = 0x2170acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x61CB80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61CB80u, _value); } while (0);
    // 0x2170b0: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x2170b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    // 0x2170b4: 0x2484cac0  addiu       $a0, $a0, -0x3540
    ctx->pc = 0x2170b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953664));
    // 0x2170b8: 0x24e7cb80  addiu       $a3, $a3, -0x3480
    ctx->pc = 0x2170b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953856));
    // 0x2170bc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2170bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2170c0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2170c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2170c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2170c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2170c8: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2170c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2170cc: 0x2609cb00  addiu       $t1, $s0, -0x3500
    ctx->pc = 0x2170ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294953728));
    // 0x2170d0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x2170d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x2170d4u;
}
