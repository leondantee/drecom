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

// Function: entry_00155d18
// Address: 0x155d18 - 0x155d50
void entry_00155d18_0x155d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155d18_0x155d18");
#endif

    ctx->pc = 0x155d18u;

    // 0x155d18: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x155d18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x155d1c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x155d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x155d20: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x155d20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x155d24: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x155d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x155d28: 0x2463f920  addiu       $v1, $v1, -0x6E0
    ctx->pc = 0x155d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965536));
    // 0x155d2c: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x155d2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x155d30: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x155d30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x155d34: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x155d34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x155d38: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x155d38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x155d3c: 0xa6000006  sh          $zero, 0x6($s0)
    ctx->pc = 0x155d3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x155d40: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x155d40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x155d44: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x155d44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x155d48: 0xa600000a  sh          $zero, 0xA($s0)
    ctx->pc = 0x155d48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x155d4c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x155d4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x155d50u;
}
