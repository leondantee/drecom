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

// Function: entry_00138330
// Address: 0x138330 - 0x138378
void entry_00138330_0x138330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138330_0x138330");
#endif

    ctx->pc = 0x138330u;

    // 0x138330: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x138330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x138334: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x138334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x138338: 0x24634ed8  addiu       $v1, $v1, 0x4ED8
    ctx->pc = 0x138338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20184));
    // 0x13833c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x13833cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x138340: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x138340u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x138344: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x138344u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x138348: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x138348u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x13834c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13834cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x138350: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x138350u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x138354: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x138354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x138358: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x138358u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13835c: 0x8e540034  lw          $s4, 0x34($s2)
    ctx->pc = 0x13835cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x138360: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x138360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x138364: 0x34640002  ori         $a0, $v1, 0x2
    ctx->pc = 0x138364u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x138368: 0xae840024  sw          $a0, 0x24($s4)
    ctx->pc = 0x138368u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 4));
    // 0x13836c: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x13836cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x138370: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x138370u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x138374: 0x0  nop
    ctx->pc = 0x138374u;
    // NOP
    ctx->pc = 0x138378u;
}
