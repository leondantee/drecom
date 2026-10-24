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

// Function: entry_002949cc
// Address: 0x2949cc - 0x294a54
void entry_002949cc_0x2949cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002949cc_0x2949cc");
#endif

    ctx->pc = 0x2949ccu;

    // 0x2949cc: 0x26160090  addiu       $s6, $s0, 0x90
    ctx->pc = 0x2949ccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x2949d0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2949d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2949d4: 0x8c245b88  lw          $a0, 0x5B88($at)
    ctx->pc = 0x2949d4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x625B88u));
    // 0x2949d8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2949d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2949dc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2949dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2949e0: 0xac235b88  sw          $v1, 0x5B88($at)
    ctx->pc = 0x2949e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x625B88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x625B88u, _value); } while (0);
    // 0x2949e4: 0x28810065  slti        $at, $a0, 0x65
    ctx->pc = 0x2949e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x2949e8: 0x1420008b  bnez        $at, . + 4 + (0x8B << 2)
    ctx->pc = 0x2949E8u;
    {
        const bool branch_taken_0x2949e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2949e8) {
            ctx->pc = 0x294C18u;
            return;
        }
    }
    ctx->pc = 0x2949F0u;
    // 0x2949f0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2949f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2949f4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2949f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2949f8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2949f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2949fc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2949fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x294a00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x294a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x294a04: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x294a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x294a08: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x294a08u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x294a0c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x294a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x294a10: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x294a10u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x294a14: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x294a14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x294a18: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x294a18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x294a1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x294a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x294a20: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x294a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x294a24: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x294a24u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x294a28: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x294a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x294a2c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x294a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x294a30: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x294a30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x294a34: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x294a34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x294a38: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x294a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x294a3c: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x294a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x294a40: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x294A40u;
    {
        const bool branch_taken_0x294a40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x294a40) {
            ctx->pc = 0x294A54u;
            return;
        }
    }
    ctx->pc = 0x294A48u;
    // 0x294a48: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x294a48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294a4c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x294A4Cu;
    {
        const bool branch_taken_0x294a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x294a4c) {
            ctx->pc = 0x294A58u;
            return;
        }
    }
    ctx->pc = 0x294A54u;
}
