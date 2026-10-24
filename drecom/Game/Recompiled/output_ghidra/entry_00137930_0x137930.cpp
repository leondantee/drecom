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

// Function: entry_00137930
// Address: 0x137930 - 0x137978
void entry_00137930_0x137930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137930_0x137930");
#endif

    ctx->pc = 0x137930u;

    // 0x137930: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x137930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x137934: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x137934u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x137938: 0x24a64ed8  addiu       $a2, $a1, 0x4ED8
    ctx->pc = 0x137938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 20184));
    // 0x13793c: 0xd01021  addu        $v0, $a2, $s0
    ctx->pc = 0x13793cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x137940: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x137940u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x137944: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x137944u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x137948: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x137948u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x13794c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x13794cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x137950: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x137950u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x137954: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x137954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x137958: 0x659021  addu        $s2, $v1, $a1
    ctx->pc = 0x137958u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x13795c: 0x8e540034  lw          $s4, 0x34($s2)
    ctx->pc = 0x13795cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x137960: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x137960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x137964: 0x34650002  ori         $a1, $v1, 0x2
    ctx->pc = 0x137964u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x137968: 0xae850024  sw          $a1, 0x24($s4)
    ctx->pc = 0x137968u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 5));
    // 0x13796c: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x13796cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x137970: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x137970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x137974: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x137974u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    ctx->pc = 0x137978u;
}
