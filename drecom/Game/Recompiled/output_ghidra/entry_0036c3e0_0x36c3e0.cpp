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

// Function: entry_0036c3e0
// Address: 0x36c3e0 - 0x36c458
void entry_0036c3e0_0x36c3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036c3e0_0x36c3e0");
#endif

    ctx->pc = 0x36c3e0u;

    // 0x36c3e0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x36c3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x36c3e4: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x36c3e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x36c3e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36c3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36c3ec: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x36c3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x36c3f0: 0x10400083  beqz        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x36C3F0u;
    {
        const bool branch_taken_0x36c3f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c3f0) {
            ctx->pc = 0x36C600u;
            return;
        }
    }
    ctx->pc = 0x36C3F8u;
    // 0x36c3f8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x36c3f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x36c3fc: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x36c3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x36c400: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x36c400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x36c404: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x36c404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36c408: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36c408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36c40c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36c40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36c410: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x36c410u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x36c414: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x36c414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x36c418: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x36c418u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x36c41c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x36c41cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x36c420: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x36c420u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36c424: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36c424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36c428: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x36c428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x36c42c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x36c42cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x36c430: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x36c430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x36c434: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x36c434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x36c438: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x36c438u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x36c43c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36c43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36c440: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x36c440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x36c444: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36C444u;
    {
        const bool branch_taken_0x36c444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c444) {
            ctx->pc = 0x36C458u;
            return;
        }
    }
    ctx->pc = 0x36C44Cu;
    // 0x36c44c: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x36c44cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36c450: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x36C450u;
    {
        const bool branch_taken_0x36c450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c450) {
            ctx->pc = 0x36C45Cu;
            return;
        }
    }
    ctx->pc = 0x36C458u;
}
