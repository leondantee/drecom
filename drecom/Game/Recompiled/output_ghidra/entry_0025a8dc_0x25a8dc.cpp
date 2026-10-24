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

// Function: entry_0025a8dc
// Address: 0x25a8dc - 0x25a968
void entry_0025a8dc_0x25a8dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025a8dc_0x25a8dc");
#endif

    ctx->pc = 0x25a8dcu;

    // 0x25a8dc: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a8e0: 0x8c43036c  lw          $v1, 0x36C($v0)
    ctx->pc = 0x25a8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x25a8e4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x25a8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25a8e8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x25a8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x25a8ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25a8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25a8f0: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x25a8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25a8f4: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x25a8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x25a8f8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x25a8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25a8fc: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a900: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25a900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25a904: 0xac440370  sw          $a0, 0x370($v0)
    ctx->pc = 0x25a904u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 880), GPR_U32(ctx, 4));
    // 0x25a908: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x25a908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x25a90c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x25a90cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x25a910: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25a910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25a914: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x25a914u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x25a918: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a91c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25a91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25a920: 0xa440060c  sh          $zero, 0x60C($v0)
    ctx->pc = 0x25a920u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1548), (uint16_t)GPR_U32(ctx, 0));
    // 0x25a924: 0x3004ffff  andi        $a0, $zero, 0xFFFF
    ctx->pc = 0x25a924u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)65535);
    // 0x25a928: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x25a928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x25a92c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x25a92cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x25a930: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25a930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25a934: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x25a934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x25a938: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a93c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25a93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25a940: 0xa444060a  sh          $a0, 0x60A($v0)
    ctx->pc = 0x25a940u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1546), (uint16_t)GPR_U32(ctx, 4));
    // 0x25a944: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x25a944u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x25a948: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x25a948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x25a94c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x25a94cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x25a950: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25a950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25a954: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x25a954u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x25a958: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a95c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25a95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25a960: 0xa4440608  sh          $a0, 0x608($v0)
    ctx->pc = 0x25a960u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1544), (uint16_t)GPR_U32(ctx, 4));
    // 0x25a964: 0x0  nop
    ctx->pc = 0x25a964u;
    // NOP
    ctx->pc = 0x25a968u;
}
